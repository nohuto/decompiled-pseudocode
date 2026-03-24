/*
 * XREFs of _CcdRetrieveSetIdFromRegistry @ 0x1C013EB74
 * Callers:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C013ED64 (_CcdLazyRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C013AF50 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C013B174 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     _CcdRetrieveValueFromRegistry @ 0x1C013EC6C (_CcdRetrieveValueFromRegistry.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C014B4A0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CcdRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v6 = CcdRetrieveValueFromRegistry(KeyHandle, &DestinationString);
  v9 = v6;
  if ( v6 < 0 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v11[3] = v9;
    v11[4] = KeyHandle;
    v11[5] = a2;
    v11[6] = a3;
    WdLogEvent5_WdError(v11);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
    v12[3] = MEMORY[4];
    v12[4] = KeyHandle;
    v12[5] = a2;
    v12[6] = a3;
    WdLogEvent5_WdError(v12);
    LODWORD(v9) = -1073741788;
  }
  operator delete[](0LL);
  return (unsigned int)v9;
}
