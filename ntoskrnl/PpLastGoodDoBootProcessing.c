/*
 * XREFs of PpLastGoodDoBootProcessing @ 0x140B6ACC4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     IopFileUtilRename @ 0x140B6AD78 (IopFileUtilRename.c)
 *     PiLastGoodCopyKeyContents @ 0x140B6AE50 (PiLastGoodCopyKeyContents.c)
 *     CmIsLastKnownGoodBoot @ 0x140B6AF2C (CmIsLastKnownGoodBoot.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140B91710 (PiLastGoodRevertLastKnownDirectory.c)
 */

__int64 PpLastGoodDoBootProcessing()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 result; // rax
  UNICODE_STRING v3; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v5; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v6; // [rsp+50h] [rbp-10h] BYREF

  DestinationString = 0LL;
  v6 = 0LL;
  v3 = 0LL;
  v5 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\LastGood");
  RtlInitUnicodeString(&v3, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
  RtlInitUnicodeString(&v6, L"\\SystemRoot\\LastGood.Tmp");
  RtlInitUnicodeString(&v5, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
  result = CmIsLastKnownGoodBoot(v1, v0);
  if ( (_BYTE)result )
  {
    PiLastGoodRevertLastKnownDirectory(&DestinationString, &v3);
    return PiLastGoodRevertLastKnownDirectory(&v6, &v5);
  }
  else if ( !(_DWORD)InitSafeBootMode )
  {
    result = IopFileUtilRename(&DestinationString, &v6, 0LL);
    if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741772 )
      return PiLastGoodCopyKeyContents(&v3, &v5);
  }
  return result;
}
