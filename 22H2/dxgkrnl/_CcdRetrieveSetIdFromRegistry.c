/*
 * XREFs of _CcdRetrieveSetIdFromRegistry @ 0x1C01811C0
 * Callers:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C0181464 (_CcdLazyRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C017D83C (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C017D8F4 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     _CcdRetrieveValueFromRegistry @ 0x1C0181378 (_CcdRetrieveValueFromRegistry.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01824E0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CcdRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v6 = CcdRetrieveValueFromRegistry(KeyHandle, &DestinationString);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry4(2LL, v6, KeyHandle, a2, a3);
  }
  else
  {
    WdLogSingleEntry4(2LL, MEMORY[4], KeyHandle, a2, a3);
    v7 = -1073741788;
  }
  operator delete(0LL);
  return v7;
}
