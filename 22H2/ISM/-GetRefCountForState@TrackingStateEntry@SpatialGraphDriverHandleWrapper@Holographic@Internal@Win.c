/*
 * XREFs of ?GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAAEAIW4SPATIAL_TRACKING_STATE@@@Z @ 0x18015E6B0
 * Callers:
 *     ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180164D08 (-StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NO.c)
 *     ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180166134 (-StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NOD.c)
 *     std::_Func_impl_no_alloc__lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_::_Do_call @ 0x1801672C0 (std--_Func_impl_no_alloc__lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_--_Do_call.c)
 * Callees:
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800C6198 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry::GetRefCountForState(
        __int64 a1,
        int a2)
{
  int v2; // edx
  const char *v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2 - 1;
  if ( !v2 )
    return a1;
  if ( v2 != 1 )
  {
    wil::details::in1diag3::FailFast_UnexpectedMsg(
      retaddr,
      122LL,
      (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\SpatialGraphDriverClient.h",
      "Invalid state passed to GetCountForState",
      v4);
    __debugbreak();
  }
  return a1 + 4;
}
