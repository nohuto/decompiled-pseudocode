/*
 * XREFs of NtSetInformationObject @ 0x1406F91D0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x140206324 (MmGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x14025EE20 (PsGetCurrentProcessSessionId.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObpUnlockDirectory @ 0x140347B1C (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14034D1A0 (ObpLockDirectoryExclusive.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObSetHandleAttributes @ 0x1406F9440 (ObSetHandleAttributes.c)
 */

__int64 __fastcall NtSetInformationObject(HANDLE Handle, int a2, __int16 *a3, int a4)
{
  NTSTATUS v5; // edi
  int v6; // edx
  char v7; // cl
  int v9; // edx
  KPROCESSOR_MODE PreviousMode; // bl
  unsigned int CurrentProcessSessionId; // eax
  __int64 v12; // rdx
  struct _DMA_ADAPTER *SessionObjectById; // rsi
  struct _DMA_ADAPTER *v14; // rbx
  __int128 *v15; // rdx
  KPROCESSOR_MODE v16; // bl
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  PVOID v18; // [rsp+40h] [rbp-78h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-70h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v20; // [rsp+50h] [rbp-68h] BYREF
  __int128 v21; // [rsp+60h] [rbp-58h] BYREF
  __int64 v22; // [rsp+70h] [rbp-48h]
  __int64 v23; // [rsp+78h] [rbp-40h]
  int v24; // [rsp+80h] [rbp-38h]
  int v25; // [rsp+84h] [rbp-34h]
  __int128 v26; // [rsp+88h] [rbp-30h] BYREF
  __int64 v27; // [rsp+98h] [rbp-20h]
  __int64 v28; // [rsp+A0h] [rbp-18h]
  int v29; // [rsp+A8h] [rbp-10h]
  int v30; // [rsp+ACh] [rbp-Ch]
  __int16 v31; // [rsp+C8h] [rbp+10h] BYREF

  v31 = 0;
  v5 = -1073741821;
  v6 = a2 - 4;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        return (unsigned int)v5;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, PreviousMode, &Object, &HandleInformation);
        if ( v5 >= 0 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          SessionObjectById = (struct _DMA_ADAPTER *)MmGetSessionObjectById(CurrentProcessSessionId, v12);
          v14 = (struct _DMA_ADAPTER *)Object;
          if ( !SessionObjectById )
          {
            v5 = -1073740715;
            goto LABEL_18;
          }
          v22 = 0LL;
          v23 = 0LL;
          v25 = 0;
          v21 = 0LL;
          v24 = -60876;
          ObpLockDirectoryExclusive((__int64)&v21, Object);
          if ( v14[20].DmaOperations )
          {
            v5 = -1073741790;
            HalPutDmaAdapter(SessionObjectById);
          }
          else
          {
            v14[20].DmaOperations = (_DMA_OPERATIONS *)SessionObjectById;
          }
          v15 = &v21;
LABEL_17:
          ObpUnlockDirectory((__int64)v14, (__int64)v15);
LABEL_18:
          HalPutDmaAdapter(v14);
        }
        return (unsigned int)v5;
      }
    }
    else
    {
      v16 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v16) )
      {
        v20 = 0LL;
        v18 = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v16, &v18, &v20);
        if ( v5 < 0 )
          return (unsigned int)v5;
        v27 = 0LL;
        v28 = 0LL;
        v30 = 0;
        v26 = 0LL;
        v29 = -60876;
        v14 = (struct _DMA_ADAPTER *)v18;
        ObpLockDirectoryExclusive((__int64)&v26, v18);
        *(_DWORD *)(&v14[21].Size + 1) = PsGetCurrentProcessSessionId();
        v15 = &v26;
        goto LABEL_17;
      }
    }
    return (unsigned int)-1073741727;
  }
  if ( a4 == 2 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    if ( v7 && ((unsigned __int64)(a3 + 1) > 0x7FFFFFFF0000LL || a3 + 1 < a3) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v31 = *a3;
    LOBYTE(a3) = v7;
    return (unsigned int)ObSetHandleAttributes(Handle, &v31, a3);
  }
  return 3221225476LL;
}
