/*
 * XREFs of SpatialInteractionDevices::StoreCapsIfMatches_3_ @ 0x1800C8138
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800C9BD0 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MatchValueCaps@Internal@SpatialInteractionDevices@@YA_NGGGGPEAU_HIDP_VALUE_CAPS@@@Z @ 0x1800C9918 (-MatchValueCaps@Internal@SpatialInteractionDevices@@YA_NGGGGPEAU_HIDP_VALUE_CAPS@@@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::StoreCapsIfMatches_3_(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int16 *i; // rbx
  __int64 v9; // r11
  struct _HIDP_VALUE_CAPS *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == 3 )
  {
    *a4 = 0;
    for ( i = *(unsigned __int16 **)a1;
          !SpatialInteractionDevices::Internal::MatchValueCaps(
             (SpatialInteractionDevices::Internal *)*i,
             i[1],
             i[2],
             i[3],
             a2,
             v10);
          i += 8 )
    {
      if ( (unsigned __int64)(v9 + 1) >= 3 )
        return 0LL;
    }
    *(_QWORD *)(a3 + 8 * v9) = a2;
    *a4 = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x413,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
