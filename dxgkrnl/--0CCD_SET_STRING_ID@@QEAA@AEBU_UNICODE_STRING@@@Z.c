/*
 * XREFs of ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01BB1EC
 * Callers:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C01BB028 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     _CcdRetrieveSetIdFromRegistry @ 0x1C01BF090 (_CcdRetrieveSetIdFromRegistry.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C01C14E0 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C01C1A1C (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C01BB3F4 (-_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z.c)
 *     ?_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01BB474 (-_ParseMonitorDescriptors@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

CCD_SET_STRING_ID *__fastcall CCD_SET_STRING_ID::CCD_SET_STRING_ID(
        CCD_SET_STRING_ID *this,
        const struct _UNICODE_STRING *a2)
{
  char *v2; // rdi
  int v5; // eax
  int Length; // eax
  unsigned int v7; // r8d
  __int64 v8; // rdx

  v2 = (char *)this + 8;
  *(_DWORD *)this = 0;
  *(_OWORD *)((char *)this + 8) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *(_OWORD *)((char *)this + 40) = 0LL;
  v5 = CCD_SET_STRING_ID::_ReallocString((struct _STRING *)((char *)this + 8), a2->Length >> 1);
  if ( v5 >= 0 )
  {
    Length = a2->Length;
    v7 = 0;
    if ( (Length & 0xFFFFFFFE) != 0 )
    {
      do
      {
        v8 = v7++;
        *(_BYTE *)(v8 + *((_QWORD *)v2 + 1)) = a2->Buffer[v8];
      }
      while ( v7 < a2->Length >> 1 );
      LOWORD(Length) = a2->Length;
    }
    *(_WORD *)v2 = (unsigned __int16)Length >> 1;
    v5 = 0;
  }
  *(_DWORD *)this = v5;
  if ( *(_WORD *)v2 > 0x4000u )
    WdLogSingleEntry0(1LL);
  CCD_SET_STRING_ID::_ParseMonitorDescriptors(this);
  return this;
}
