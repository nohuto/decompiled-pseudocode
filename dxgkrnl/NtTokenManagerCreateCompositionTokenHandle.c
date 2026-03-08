/*
 * XREFs of NtTokenManagerCreateCompositionTokenHandle @ 0x1C00119D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x1C0007808 (DxgkGetWin32kImportTable.c)
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C00115E0 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 *     Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage @ 0x1C0026DD8 (Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 */

__int64 __fastcall NtTokenManagerCreateCompositionTokenHandle(
        char *Src,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v7; // r13
  int v9; // edi
  void *Pool2; // rsi
  __int64 v11; // r14
  unsigned __int128 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  int LocallyUniqueId; // ebx
  size_t v16; // r8
  __int64 Win32kImportTable; // rax
  __int64 v18; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // eax
  void *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  void *v26; // [rsp+60h] [rbp-A8h]
  __int64 v27; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  _QWORD v32[14]; // [rsp+98h] [rbp-70h] BYREF
  size_t Size; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v34; // [rsp+118h] [rbp+10h]
  unsigned int v35; // [rsp+120h] [rbp+18h]

  v35 = a3;
  v34 = a2;
  v7 = a2;
  Handle = (HANDLE)-1LL;
  v9 = 0;
  Pool2 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v11 = 0LL;
  v27 = 0LL;
  KeEnterCriticalRegion();
  if ( !Src || !(_DWORD)v7 || !a3 || !a4 )
  {
    LocallyUniqueId = -1073741811;
    goto LABEL_37;
  }
  v13 = (unsigned int)v7;
  v12 = v7 * (unsigned __int128)0x18uLL;
  v31 = *((_QWORD *)&v12 + 1);
  Size = 24 * v7;
  v14 = -1LL;
  if ( is_mul_ok(v7, 0x18uLL) )
  {
    LocallyUniqueId = 0;
  }
  else
  {
    Size = -1LL;
    LocallyUniqueId = -1073741675;
  }
  if ( LocallyUniqueId >= 0 )
  {
    v12 = (unsigned int)v7 * (unsigned __int128)0x18uLL;
    if ( !is_mul_ok((unsigned int)v7, 0x18uLL) )
      *(_QWORD *)&v12 = -1LL;
    if ( (_QWORD)v12 )
    {
      if ( (unsigned __int64)v12 > 0x7FFFFFFF )
        goto LABEL_15;
    }
    else
    {
      *(_QWORD *)&v12 = 1LL;
    }
    Pool2 = (void *)ExAllocatePool2(256LL, v12, 1650675028LL);
LABEL_15:
    v26 = Pool2;
    if ( Pool2 )
    {
      v16 = Size;
      if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, Src, v16);
      if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
        a4 = (__int64 *)MmUserProbeAddress;
      v11 = *a4;
      v27 = *a4;
      Win32kImportTable = DxgkGetWin32kImportTable();
      LocallyUniqueId = (*(__int64 (__fastcall **)(__int64, __int64 *))(Win32kImportTable + 456))(0x80000000LL, &v25);
      if ( LocallyUniqueId >= 0 )
      {
        v32[0] = 48LL;
        memset(&v32[1], 0, 24);
        v32[4] = v25;
        v32[5] = 0LL;
        *(_QWORD *)&v29 = Pool2;
        *((_QWORD *)&v29 + 1) = __PAIR64__(v35, v7);
        v30 = v11;
        Size = 0LL;
        LOBYTE(v18) = 1;
        LocallyUniqueId = ObCreateObject(0LL, g_pDxgkCompositionObjectType, v32, v18, 0LL, 120, 0, 0, &Size);
        if ( LocallyUniqueId >= 0 )
        {
          CurrentProcess = PsGetCurrentProcess();
          ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
          *(_DWORD *)(Size + 8) = ProcessSessionId;
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(Size + 24));
          v21 = (void *)Size;
          if ( LocallyUniqueId < 0
            || (LocallyUniqueId = CompositionTokenObject::ObjectInit(
                                    (struct DxgkCompositionObject *)Size,
                                    (const struct CompositionTokenInitInfo *)&v29,
                                    (struct IDxgkCompositionObject **)(Size + 16)),
                v21 = (void *)Size,
                LocallyUniqueId < 0) )
          {
            ObfDereferenceObject(v21);
          }
          else
          {
            LocallyUniqueId = ObInsertObject((PVOID)Size, 0LL, 3u, 0, 0LL, &Handle);
          }
        }
        if ( LocallyUniqueId >= 0 )
        {
          v13 = a5;
          if ( a5 )
          {
            *((_QWORD *)&v12 + 1) = a5 + 8;
            if ( a5 + 8 < a5 || *((_QWORD *)&v12 + 1) > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_QWORD *)v13 = Handle;
          }
          else
          {
            LocallyUniqueId = -1073741811;
          }
        }
      }
    }
    else
    {
      LocallyUniqueId = -1073741801;
    }
  }
LABEL_37:
  LOBYTE(v9) = (unsigned int)Feature_Servicing_DCompBatchedPresentCompositionBuffers__private_IsEnabledDeviceUsage(
                               v13,
                               *((_QWORD *)&v12 + 1),
                               v14) != 0;
  if ( v9 && LocallyUniqueId >= 0 && v11 )
  {
    v22 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(__int64, _QWORD))(v22 + 48))(v11, 0LL);
  }
  if ( v25 )
  {
    v23 = DxgkGetWin32kImportTable();
    (*(void (__fastcall **)(__int64))(v23 + 576))(v25);
  }
  if ( LocallyUniqueId < 0 && Handle != (HANDLE)-1LL )
    NtClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  KeLeaveCriticalRegion();
  return (unsigned int)LocallyUniqueId;
}
