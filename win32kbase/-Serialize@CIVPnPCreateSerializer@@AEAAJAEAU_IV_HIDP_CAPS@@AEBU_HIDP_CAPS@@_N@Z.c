/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HIDP_CAPS@@AEBU_HIDP_CAPS@@_N@Z @ 0x1C02335C0
 * Callers:
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0233F84 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HIDP_CAPS *a2,
        const struct _HIDP_CAPS *a3)
{
  _WORD *v3; // rcx
  __int64 v4; // r9

  v3 = (_WORD *)((char *)a2 + 20);
  *(_WORD *)a2 = a3->Usage;
  *((_WORD *)a2 + 2) = a3->UsagePage;
  v4 = 17LL;
  *((_WORD *)a2 + 4) = a3->InputReportByteLength;
  *((_WORD *)a2 + 6) = a3->OutputReportByteLength;
  *((_WORD *)a2 + 8) = a3->FeatureReportByteLength;
  do
  {
    *v3 = *(_WORD *)((char *)v3 + (char *)a3 - (char *)a2 - 10);
    ++v3;
    --v4;
  }
  while ( v4 );
  *((_WORD *)a2 + 28) = a3->NumberLinkCollectionNodes;
  *((_WORD *)a2 + 30) = a3->NumberInputButtonCaps;
  *((_WORD *)a2 + 32) = a3->NumberInputValueCaps;
  *((_WORD *)a2 + 34) = a3->NumberInputDataIndices;
  *((_WORD *)a2 + 36) = a3->NumberOutputButtonCaps;
  *((_WORD *)a2 + 38) = a3->NumberOutputValueCaps;
  *((_WORD *)a2 + 40) = a3->NumberOutputDataIndices;
  *((_WORD *)a2 + 42) = a3->NumberFeatureButtonCaps;
  *((_WORD *)a2 + 44) = a3->NumberFeatureValueCaps;
  *((_WORD *)a2 + 46) = a3->NumberFeatureDataIndices;
  return 0LL;
}
