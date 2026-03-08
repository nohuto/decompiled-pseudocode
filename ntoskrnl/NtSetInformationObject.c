/*
 * XREFs of NtSetInformationObject @ 0x1407DA9A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x1402BE684 (MmGetSessionObjectById.c)
 *     PsGetCurrentProcessSessionId @ 0x140343AA0 (PsGetCurrentProcessSessionId.c)
 *     ObpUnlockDirectory @ 0x140699588 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14076F3D0 (ObpLockDirectoryExclusive.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     ObSetHandleAttributes @ 0x1407D8910 (ObSetHandleAttributes.c)
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
  void *SessionObjectById; // rsi
  _QWORD *v14; // rbx
  KPROCESSOR_MODE v15; // bl
  PVOID Object; // [rsp+38h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+40h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-18h]
  __int16 v20; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0;
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
          SessionObjectById = MmGetSessionObjectById(CurrentProcessSessionId, v12);
          v14 = Object;
          if ( !SessionObjectById )
          {
            v5 = -1073740715;
            goto LABEL_17;
          }
          v18 = 0LL;
          v19 = 0LL;
          ObpLockDirectoryExclusive((__int64)&v18, (__int64)Object);
          if ( v14[41] )
          {
            v5 = -1073741790;
            ObfDereferenceObject(SessionObjectById);
          }
          else
          {
            v14[41] = SessionObjectById;
          }
LABEL_16:
          ObpUnlockDirectory((__int64)&v18);
LABEL_17:
          ObfDereferenceObject(v14);
        }
        return (unsigned int)v5;
      }
    }
    else
    {
      v15 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v15) )
      {
        HandleInformation = 0LL;
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(Handle, 0, ObpDirectoryObjectType, v15, &Object, &HandleInformation);
        if ( v5 < 0 )
          return (unsigned int)v5;
        v18 = 0LL;
        v19 = 0LL;
        v14 = Object;
        ObpLockDirectoryExclusive((__int64)&v18, (__int64)Object);
        *((_DWORD *)v14 + 85) = PsGetCurrentProcessSessionId();
        goto LABEL_16;
      }
    }
    return (unsigned int)-1073741727;
  }
  if ( a4 == 2 )
  {
    v7 = KeGetCurrentThread()->PreviousMode;
    if ( v7 && ((unsigned __int64)(a3 + 1) > 0x7FFFFFFF0000LL || a3 + 1 < a3) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v20 = *a3;
    return (unsigned int)ObSetHandleAttributes((__int64)Handle, &v20, v7);
  }
  return 3221225476LL;
}
