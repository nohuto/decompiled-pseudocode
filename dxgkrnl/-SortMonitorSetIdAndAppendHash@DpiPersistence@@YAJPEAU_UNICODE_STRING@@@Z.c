/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C01C14E0
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C01C21D4 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C000ABF0 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C000AE80 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C01BB13C (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C01BB1EC (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C01BECDC (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::SortMonitorSetIdAndAppendHash(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2)
{
  CCD_SET_STRING_ID *v3; // rax
  CCD_SET_STRING_ID *v4; // rbx
  const struct _STRING *ConnectedSetStr; // rax
  int v6; // eax
  __int64 v7; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF

  DestinationString = 0LL;
  v3 = (CCD_SET_STRING_ID *)operator new[](0x38uLL, 0x63644356u, 256LL);
  if ( v3 )
    v4 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v3, this);
  else
    v4 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v4);
  v6 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&DestinationString, ConnectedSetStr);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"_CcdCreateKeyFromSetIdStr failed: (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &DestinationString);
    operator delete(DestinationString.Buffer);
    DestinationString = 0LL;
    if ( v4 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v4);
  }
  return (unsigned int)v7;
}
