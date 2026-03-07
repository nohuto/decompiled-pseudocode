__int64 __fastcall NtSecureConnectPort(
        HANDLE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char *Src,
        unsigned __int64 a6,
        _DWORD *a7,
        volatile void *a8,
        unsigned int *a9)
{
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // dl
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  char *v23; // rdi
  int v24; // r15d
  _DWORD *v25; // r15
  int v26; // edi
  ULONG_PTR v27; // r13
  unsigned int v28; // r12d
  int v29; // eax
  unsigned int v30; // eax
  int v32; // [rsp+20h] [rbp-1A8h]
  char v33; // [rsp+60h] [rbp-168h]
  int v34; // [rsp+64h] [rbp-164h]
  unsigned int v35; // [rsp+68h] [rbp-160h] BYREF
  __int64 v36; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PVOID Object; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-130h]
  ULONG_PTR v42; // [rsp+A0h] [rbp-128h] BYREF
  HANDLE *v43; // [rsp+A8h] [rbp-120h]
  _DWORD *v44; // [rsp+B0h] [rbp-118h]
  __m128i v45; // [rsp+B8h] [rbp-110h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-100h]
  __int128 v47; // [rsp+D8h] [rbp-F0h]
  unsigned int *v48; // [rsp+E8h] [rbp-E0h]
  __int128 v49; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+100h] [rbp-C8h]
  _OWORD v51[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+128h] [rbp-A0h]
  _QWORD v53[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v54; // [rsp+170h] [rbp-58h] BYREF
  int v55; // [rsp+178h] [rbp-50h]

  v41 = a2;
  v43 = a1;
  v44 = a7;
  v48 = a9;
  Address = a8;
  Object = 0LL;
  memset(v53, 0, sizeof(v53));
  Handle = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  v35 = 0;
  v54 = 0LL;
  v55 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v49 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v33 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( a9 )
      v35 = *a9;
    if ( a4 )
    {
      v45 = *(__m128i *)a4;
      v46 = *(_OWORD *)(a4 + 16);
      v47 = *(_OWORD *)(a4 + 32);
    }
    if ( a3 )
    {
      v54 = *(_QWORD *)a3;
      v55 = *(_DWORD *)(a3 + 8);
    }
    v36 = (__int64)Src;
    goto LABEL_38;
  }
  v15 = 0x7FFFFFFF0000LL;
  v16 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v43 < 0x7FFFFFFF0000LL )
    v16 = (__int64)v43;
  *(_QWORD *)v16 = *(_QWORD *)v16;
  if ( a9 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v17 = (__int64)a9;
    v35 = *(_DWORD *)v17;
    ProbeForWrite(Address, v35, 1u);
    PreviousMode = v33;
  }
  if ( a4 )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v18 = a4;
    v45 = *(__m128i *)v18;
    v46 = *(_OWORD *)(v18 + 16);
    v47 = *(_OWORD *)(v18 + 32);
    if ( _mm_cvtsi128_si32(v45) != 48 )
    {
      v34 = -1073741811;
      goto LABEL_60;
    }
    if ( (a4 & 3) != 0 )
      goto LABEL_36;
    v19 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v19 = a4;
    *(_BYTE *)v19 = *(_BYTE *)v19;
    *(_BYTE *)(v19 + 47) = *(_BYTE *)(v19 + 47);
  }
  if ( !a6 )
    goto LABEL_24;
  v20 = 0x7FFFFFFF0000LL;
  if ( a6 < 0x7FFFFFFF0000LL )
    v20 = a6;
  if ( *(_DWORD *)v20 != 24 )
  {
    v34 = -1073741811;
    goto LABEL_60;
  }
  if ( (a6 & 3) != 0 )
LABEL_36:
    ExRaiseDatatypeMisalignment();
  v21 = 0x7FFFFFFF0000LL;
  if ( a6 < 0x7FFFFFFF0000LL )
    v21 = a6;
  *(_BYTE *)v21 = *(_BYTE *)v21;
  *(_BYTE *)(v21 + 23) = *(_BYTE *)(v21 + 23);
LABEL_24:
  if ( v44 )
  {
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v44 < 0x7FFFFFFF0000LL )
      v22 = (__int64)v44;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  if ( a3 )
  {
    if ( a3 < 0x7FFFFFFF0000LL )
      v15 = a3;
    v54 = *(_QWORD *)v15;
    v55 = *(_DWORD *)(v15 + 8);
  }
  v36 = (__int64)Src;
  if ( !Src || (v34 = SeCaptureSid(Src, PreviousMode, v11, v12, v32, 1, (PSID *)&v36), v34 >= 0) )
  {
LABEL_38:
    v23 = (char *)v36;
    v24 = AlpcpCreateClientPort(
            (__int64 *)&Handle,
            &Object,
            0,
            v41,
            0LL,
            0LL,
            0LL,
            0LL,
            (void *)v36,
            (unsigned __int64)&v54 & -(__int64)(a3 != 0),
            1);
    v34 = v24;
    if ( v23 != Src )
      SeReleaseSid(v23, v33, 1);
    if ( v24 >= 0 )
    {
      LOWORD(v51[0]) = v35;
      v41 = (unsigned __int64)&v45 & -(__int64)(a4 != 0);
      v25 = Object;
      v26 = AlpcpFormatConnectionRequest(
              &v42,
              0,
              Object,
              (__int64)Address,
              (unsigned __int16 *)v51,
              0LL,
              v41,
              &BugCheckParameter2,
              1,
              v33);
      v34 = v26;
      if ( v26 >= 0 )
      {
        v27 = v42;
        v28 = *(_DWORD *)(v42 + 264);
        if ( AlpcpLogEnabled )
          AlpcpLogConnectRequest(v42);
        v53[0] = v25;
        v53[1] = v27;
        LODWORD(v53[6]) = 0x20000;
        v29 = AlpcpDispatchConnectionRequest((__int64)v53);
        v26 = v29;
        v34 = v29;
        if ( v29 < 0 )
        {
          if ( AlpcpLogEnabled )
            AlpcpLogConnectFail(v28, (unsigned int)v29);
          AlpcpUnlockMessage(v27);
        }
        else
        {
          v30 = AlpcpReceiveLegacyConnectionReply(
                  (unsigned int)v53,
                  (_DWORD)Address,
                  (unsigned int)&v35,
                  BugCheckParameter2,
                  v41,
                  (unsigned __int64)&v49 & -(__int64)(a6 != 0));
          v26 = v30;
          v34 = v30;
          if ( v30 )
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectFail(v28, v30);
          }
          else
          {
            if ( AlpcpLogEnabled )
              AlpcpLogConnectSuccess(v28);
            *v43 = Handle;
            if ( a4 )
            {
              *(__m128i *)a4 = v45;
              *(_OWORD *)(a4 + 16) = v46;
              *(_OWORD *)(a4 + 32) = v47;
            }
            if ( a6 )
            {
              *(_OWORD *)a6 = v49;
              *(_QWORD *)(a6 + 16) = v50;
            }
            if ( v48 )
              *v48 = v35;
            if ( v44 )
              *v44 = v25[68];
          }
        }
      }
      ObfDereferenceObject(v25);
      if ( BugCheckParameter2 )
        AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
      if ( v26 )
        NtClose(Handle);
    }
  }
LABEL_60:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v34;
}
