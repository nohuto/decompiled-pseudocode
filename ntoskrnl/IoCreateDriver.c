int __fastcall IoCreateDriver(_OWORD *a1, __int64 (__fastcall *a2)(void **, _QWORD))
{
  int result; // eax
  _QWORD *v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v6; // rcx
  void **v7; // rbx
  unsigned __int64 v8; // rdx
  _WORD *Pool2; // rax
  _WORD *v10; // r14
  unsigned __int64 v11; // rdi
  __int128 v12; // xmm0
  NTSTATUS inserted; // edi
  NTSTATUS v14; // eax
  __int64 v15; // rax
  PVOID *NewObject; // [rsp+20h] [rbp-E0h]
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v19; // [rsp+68h] [rbp-98h] BYREF
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+78h] [rbp-88h]
  _DWORD v22[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  void **v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A4h] [rbp-5Ch]
  __int128 v27; // [rsp+A8h] [rbp-58h]
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v22[1] = 0;
  v26 = 0;
  Object = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  *(_OWORD *)Src = 0LL;
  v21 = 0LL;
  if ( a1 )
  {
    *(_OWORD *)Src = *a1;
    goto LABEL_3;
  }
  RtlStringCchPrintfW(
    pszDest,
    0x3CuLL,
    L"\\Driver\\%08u",
    (unsigned int)_InterlockedIncrement(&IopUniqueDriverObjectNumber));
  result = RtlStringCchLengthW(pszDest, 0x3CuLL, (size_t *)&v19);
  if ( result >= 0 )
  {
    if ( (unsigned __int64)v19 > 0xFFFF )
      return -2147483643;
    LOWORD(Src[0]) = 2 * (_WORD)v19;
    WORD1(Src[0]) = 2 * (_WORD)v19 + 2;
    Src[1] = pszDest;
LABEL_3:
    v24 = Src;
    v22[0] = 48;
    v23 = 0LL;
    v25 = 592;
    v27 = 0LL;
    result = ObCreateObjectEx(0, IoDriverObjectType, (__int64)v22, 0, (__int64)NewObject, 416, 0, 0, &Object, 0LL);
    if ( result < 0 )
      return result;
    v4 = Object;
    memset(Object, 0, 0x1A0uLL);
    v4[6] = v4 + 42;
    v4[42] = v4;
    *(_DWORD *)v4 = 22020100;
    *((_DWORD *)v4 + 4) = 4;
    memset64(v4 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    v4[11] = a2;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    v6 = (PVOID *)PsLoadedModuleList;
    v7 = (void **)Object;
    while ( v6 != &PsLoadedModuleList )
    {
      v8 = (unsigned __int64)v6[6];
      if ( (unsigned __int64)a2 >= v8 && (unsigned __int64)a2 < v8 + *((unsigned int *)v6 + 16) )
      {
        *((_QWORD *)Object + 3) = v8;
        break;
      }
      v6 = (PVOID *)*v6;
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
    KeLeaveCriticalRegion();
    Pool2 = (_WORD *)ExAllocatePool2(256LL, LOWORD(Src[0]) + 2LL, 860778313LL);
    *((_QWORD *)&v21 + 1) = Pool2;
    v10 = Pool2;
    if ( Pool2 )
    {
      LOWORD(v21) = Src[0];
      v11 = LOWORD(Src[0]);
      WORD1(v21) = LOWORD(Src[0]) + 2;
      memmove(Pool2, Src[1], LOWORD(Src[0]));
      v12 = v21;
      v10[v11 >> 1] = 0;
      *(_OWORD *)(v4[6] + 24LL) = v12;
      inserted = ObInsertObject(v7, 0LL, 1u, 0, 0LL, &Handle);
      if ( inserted < 0 )
        return inserted;
      v19 = 0LL;
      v14 = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v19, 0LL);
      v7 = (void **)v19;
      inserted = v14;
      if ( v14 < 0 )
      {
        ZwMakeTemporaryObject(Handle);
        ZwClose(Handle);
        return inserted;
      }
      ZwClose(Handle);
      v15 = ExAllocatePool2(64LL, WORD1(Src[0]), 860778313LL);
      v7[8] = (void *)v15;
      if ( v15 )
      {
        *((_DWORD *)v7 + 14) = Src[0];
        memmove(v7[8], Src[1], WORD1(Src[0]));
      }
      inserted = a2(v7, 0LL);
      if ( inserted >= 0 )
      {
        EtwTiLogDriverObjectLoad((unsigned __int16 *)Src);
        return inserted;
      }
    }
    else
    {
      inserted = -1073741670;
    }
    ObMakeTemporaryObject(v7);
    ObfDereferenceObject(v7);
    return inserted;
  }
  return result;
}
