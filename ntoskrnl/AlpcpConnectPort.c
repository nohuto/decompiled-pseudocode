__int64 __fastcall AlpcpConnectPort(
        HANDLE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        void *a7,
        void *Src,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // si
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  _QWORD *v21; // rdi
  int v22; // ebx
  int v24; // [rsp+20h] [rbp-158h]
  int ClientPort; // [rsp+64h] [rbp-114h]
  PVOID Object[3]; // [rsp+68h] [rbp-110h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v28; // [rsp+88h] [rbp-F0h] BYREF
  void *v29; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+98h] [rbp-E0h]
  __int64 v31; // [rsp+A0h] [rbp-D8h]
  __int64 v32; // [rsp+A8h] [rbp-D0h]
  __int64 v33; // [rsp+B0h] [rbp-C8h]
  __int64 v34; // [rsp+B8h] [rbp-C0h]
  __int64 v35; // [rsp+C0h] [rbp-B8h]
  __int64 v36; // [rsp+C8h] [rbp-B0h]
  HANDLE *v37; // [rsp+D0h] [rbp-A8h]
  _OWORD v38[5]; // [rsp+E0h] [rbp-98h] BYREF

  v30 = a4;
  v31 = a3;
  v32 = a2;
  v37 = a1;
  Object[1] = a7;
  Object[2] = Src;
  v36 = a10;
  v35 = a11;
  v34 = a12;
  v33 = a13;
  Object[0] = 0LL;
  Handle = 0LL;
  memset(v38, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = (__int64)Src;
  v29 = a7;
  if ( !PreviousMode )
  {
    if ( a5 )
    {
      v38[0] = *(_OWORD *)a5;
      v38[1] = *(_OWORD *)(a5 + 16);
      v38[2] = *(_OWORD *)(a5 + 32);
      v38[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v38[4] = *(_QWORD *)(a5 + 64);
    }
    goto LABEL_15;
  }
  v18 = 0x7FFFFFFF0000LL;
  v19 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v19 = (__int64)a1;
  *(_QWORD *)v19 = *(_QWORD *)v19;
  if ( a5 )
  {
    if ( a5 < 0x7FFFFFFF0000LL )
      v18 = a5;
    v38[0] = *(_OWORD *)v18;
    v38[1] = *(_OWORD *)(v18 + 16);
    v38[2] = *(_OWORD *)(v18 + 32);
    v38[3] = *(_OWORD *)(v18 + 48);
    *(_QWORD *)&v38[4] = *(_QWORD *)(v18 + 64);
  }
  if ( !Src || (ClientPort = SeCaptureSid((char *)Src, PreviousMode, v14, v15, v24, 1, (PSID *)&v28), ClientPort >= 0) )
  {
    if ( !a7
      || (LOBYTE(v18) = PreviousMode,
          ClientPort = SeCaptureSecurityDescriptor((_DWORD)a7, v18, 1, 0, (__int64)&v29),
          ClientPort >= 0) )
    {
LABEL_15:
      ClientPort = AlpcpCreateClientPort(
                     (unsigned int)&Handle,
                     (unsigned int)Object,
                     a6 & 0xFFFF0000,
                     v32,
                     v31,
                     v30,
                     (unsigned __int64)v38 & -(__int64)(a5 != 0),
                     (__int64)v29,
                     v28,
                     0LL,
                     0);
      if ( ClientPort >= 0 )
      {
        v21 = Object[0];
        v22 = AlpcpProcessConnectionRequest(Object[0], a6 & 0xFFFF0000, a9, v36, v35, v34, v33, PreviousMode);
        ClientPort = v22;
        if ( v22 == -1073741759 && (v21[52] & 0x100) != 0 )
          *a1 = (HANDLE)v21[7];
        if ( !v22 )
          *a1 = Handle;
        ObfDereferenceObject(v21);
        if ( v22 )
          NtClose(Handle);
      }
    }
  }
  if ( v28 && (void *)v28 != Src )
    SeReleaseSid((void *)v28, PreviousMode, 1);
  if ( v29 && v29 != a7 )
  {
    LOBYTE(v18) = PreviousMode;
    SeReleaseSecurityDescriptor(v29, v18, 0LL, v20);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)ClientPort;
}
