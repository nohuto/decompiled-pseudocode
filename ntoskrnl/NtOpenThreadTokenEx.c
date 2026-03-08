/*
 * XREFs of NtOpenThreadTokenEx @ 0x1406D2730
 * Callers:
 *     NtOpenThreadToken @ 0x1406D2710 (NtOpenThreadToken.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PsDisableImpersonation @ 0x1406D2C20 (PsDisableImpersonation.c)
 *     PsRestoreImpersonation @ 0x1406D2D60 (PsRestoreImpersonation.c)
 *     PsSwapImpersonationToken @ 0x1406D2EC4 (PsSwapImpersonationToken.c)
 *     SepCreateImpersonationTokenDacl @ 0x1406D3000 (SepCreateImpersonationTokenDacl.c)
 *     SepSetTokenTrust @ 0x1406D33D8 (SepSetTokenTrust.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  BOOLEAN v5; // r15
  void *v7; // rsi
  char v8; // bl
  int v9; // r13d
  KPROCESSOR_MODE PreviousMode; // di
  int v11; // r14d
  ULONG v12; // r14d
  PHANDLE v13; // r12
  __int64 v14; // rcx
  KPROCESSOR_MODE v15; // r9
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r13
  _DWORD *v18; // rbx
  signed __int64 *v19; // r15
  _DWORD *v20; // rbx
  NTSTATUS inserted; // eax
  PVOID v22; // rbx
  NTSTATUS v23; // r15d
  __int64 v24; // rdi
  ULONG_PTR v25; // rbx
  __int64 v26; // rdx
  bool v27; // [rsp+40h] [rbp-D8h]
  bool v28; // [rsp+41h] [rbp-D7h]
  BOOLEAN v29; // [rsp+42h] [rbp-D6h]
  char v30; // [rsp+44h] [rbp-D4h]
  int v31; // [rsp+44h] [rbp-D4h]
  PVOID Object; // [rsp+48h] [rbp-D0h] BYREF
  PVOID v33; // [rsp+50h] [rbp-C8h] BYREF
  int v34; // [rsp+58h] [rbp-C0h]
  PVOID P; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-B0h]
  HANDLE Handle; // [rsp+70h] [rbp-A8h] BYREF
  _SE_IMPERSONATION_STATE ImpersonationState; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+88h] [rbp-90h] BYREF
  __int128 v40; // [rsp+98h] [rbp-80h]
  _WORD *v41; // [rsp+A8h] [rbp-70h]
  __int64 v42; // [rsp+B0h] [rbp-68h]
  _WORD v43[16]; // [rsp+B8h] [rbp-60h] BYREF
  PVOID v44; // [rsp+D8h] [rbp-40h]

  v5 = OpenAsSelf;
  v7 = 0LL;
  v33 = 0LL;
  v8 = 0;
  v30 = 0;
  v28 = 0;
  v9 = 0;
  v34 = 0;
  ImpersonationState = 0LL;
  v29 = 0;
  Handle = 0LL;
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  LODWORD(v42) = 0;
  P = 0LL;
  v36 = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = 73714;
  if ( PreviousMode )
    v11 = 7666;
  v12 = HandleAttributes & v11;
  if ( PreviousMode )
  {
    v13 = TokenHandle;
    v14 = (__int64)TokenHandle;
    if ( (unsigned __int64)TokenHandle >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
  }
  else
  {
    v13 = TokenHandle;
  }
  v15 = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x800u, (POBJECT_TYPE)PsThreadType, v15, &Object, 0LL);
  if ( result >= 0 )
  {
    if ( (*((_DWORD *)Object + 344) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v18 = Object;
      v19 = (signed __int64 *)((char *)Object + 1360);
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1360, 0LL);
      if ( (v18[344] & 8) != 0 )
      {
        v20 = Object;
        v7 = (void *)(*((_QWORD *)Object + 159) & 0xFFFFFFFFFFFFFFF8uLL);
        v31 = *((_DWORD *)Object + 344);
        ObfReferenceObjectWithTag(v7, 0x74726853u);
        v34 = v20[318] & 3;
        v28 = (v20[318] & 4) != 0;
        v8 = BYTE1(v31) & 1;
        v30 = BYTE1(v31) & 1;
      }
      else
      {
        v8 = 0;
      }
      if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v19);
      KeAbPostRelease((ULONG_PTR)v19);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v9 = v34;
      v5 = OpenAsSelf;
    }
    if ( !v7 )
    {
      ObfDereferenceObject(Object);
      return -1073741700;
    }
    if ( !v9 )
    {
      ObfDereferenceObjectWithTag(v7, 0x74726853u);
      ObfDereferenceObject(Object);
      return -1073741658;
    }
    if ( v5 )
      v29 = PsDisableImpersonation(KeGetCurrentThread(), &ImpersonationState);
    if ( v8 )
    {
      if ( v5 )
      {
        if ( ImpersonationState.Token )
        {
          v36 = *((_QWORD *)ImpersonationState.Token + 138);
          v27 = 1;
        }
      }
      else
      {
        v26 = *((_QWORD *)Object + 193);
        if ( v26 )
          v36 = *(_QWORD *)(v26 + 1104);
        v27 = v26 != 0;
      }
      v24 = *((_QWORD *)Object + 68);
      v25 = PsReferencePrimaryTokenWithTag(v24, 0x746C6644u);
      v23 = SepCreateImpersonationTokenDacl(v7, v25, &P);
      ObFastDereferenceObject((signed __int64 *)(v24 + 1208), v25, 0x746C6644u);
      v22 = P;
      if ( v23 < 0 )
        goto LABEL_24;
      if ( P )
      {
        LOBYTE(v43[0]) = 1;
        if ( v43[1] >= 0 )
        {
          v44 = P;
          v43[1] = v43[1] & 0xFFF3 | 4;
        }
      }
      LODWORD(v39) = 48;
      *((_QWORD *)&v39 + 1) = 0LL;
      DWORD2(v40) = v12;
      *(_QWORD *)&v40 = 0LL;
      v41 = P ? v43 : 0LL;
      v42 = 0LL;
      v23 = SepDuplicateToken((_DWORD)v7, (unsigned int)&v39, v28, 2, v9, 0, 0, (__int64)&v33);
      if ( v23 < 0 )
        goto LABEL_24;
      if ( v27 )
        v23 = SepSetTokenTrust(v33, v36);
      if ( v23 < 0 )
        goto LABEL_24;
      ObfReferenceObject(v33);
      inserted = ObInsertObjectEx(v33, 0LL, 0, 0LL, (__int64)&Handle);
    }
    else
    {
      inserted = ObOpenObjectByPointer(
                   v7,
                   v12,
                   0LL,
                   DesiredAccess,
                   (POBJECT_TYPE)SeTokenObjectType,
                   PreviousMode,
                   &Handle);
      v22 = P;
    }
    v23 = inserted;
LABEL_24:
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    if ( v29 )
      PsRestoreImpersonation(KeGetCurrentThread(), &ImpersonationState);
    if ( v23 >= 0 && v30 )
      PsSwapImpersonationToken(Object, v7, v33);
    ObfDereferenceObjectWithTag(v7, 0x74726853u);
    if ( v33 )
      ObfDereferenceObject(v33);
    ObfDereferenceObject(Object);
    if ( v23 >= 0 )
      *v13 = Handle;
    return v23;
  }
  return result;
}
