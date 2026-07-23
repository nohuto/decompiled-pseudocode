/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140784838
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407791D8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14077A194 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140782314 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140782D48 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140783204 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783ACC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407840C0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x140924238 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096EC68 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ED00 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096ED5C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1403F9AA0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenMutant @ 0x1403FBEC0 (ZwOpenMutant.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  HANDLE v1; // rcx
  NTSTATUS result; // eax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE MutantHandle; // [rsp+68h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+20h] BYREF

  if ( a1 )
    return 0;
  MutantHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v1 = BcdMutantHandle;
  if ( !BcdMutantHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenMutant(&MutantHandle, 0x100000u, &ObjectAttributes);
    if ( result == -1073741772 )
    {
      _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, -1LL, 0LL);
    }
    else
    {
      if ( result < 0 )
        return result;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&BcdMutantHandle, (signed __int64)MutantHandle, 0LL) )
        ZwClose(MutantHandle);
    }
    v1 = BcdMutantHandle;
  }
  if ( v1 == (HANDLE)-1LL )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(v1, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
