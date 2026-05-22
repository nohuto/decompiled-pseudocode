/*
 * XREFs of SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT3_ @ 0x1800C7C00
 * Callers:
 *     SpatialInteractionDevices::ReadPosePosition @ 0x1800CA364 (SpatialInteractionDevices--ReadPosePosition.c)
 * Callees:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C9400 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ?HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_REPORT_TYPE@@GGGGPEAM@Z @ 0x1800CBDC8 (-HIDGetFloat@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@PEAUHID_REPORT@2@W4_HIDP_RE.c)
 */

bool __fastcall SpatialInteractionDevices::ParseFloatData_DirectX::XMFLOAT3_(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  bool result; // al
  unsigned int i; // ebx
  const char *v10; // [rsp+28h] [rbp-20h]
  float *v11; // [rsp+40h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x19A,
    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
    0LL,
    (bool)"Invalid Usages array size.",
    v10);
  result = 1;
  for ( i = 0; i < 3; ++i )
    result = result
          && (int)SpatialInteractionDevices::Internal::HIDGetFloat(
                    this,
                    a2,
                    (struct SpatialInteractionDevices::HID_REPORT *)&unk_1801AED98,
                    (enum _HIDP_REPORT_TYPE)*((unsigned __int16 *)&unk_1801AED98 + 8 * i),
                    *((_WORD *)&unk_1801AED98 + 8 * i + 1),
                    *((_WORD *)&unk_1801AED98 + 8 * i + 2),
                    *((_WORD *)&unk_1801AED98 + 8 * i + 3),
                    (unsigned __int16)a6 + 4 * (unsigned __int16)i,
                    v11) >= 0;
  return result;
}
