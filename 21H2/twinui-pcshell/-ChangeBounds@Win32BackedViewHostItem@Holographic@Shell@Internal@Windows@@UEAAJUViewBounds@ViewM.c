/*
 * XREFs of ?ChangeBounds@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJUViewBounds@ViewManagerInterop@345@@Z @ 0x1802BDAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundation@5@@Z @ 0x1802C4E94 (-_SetLogicalSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJUSize@Foundati.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::ChangeBounds(__int64 a1, int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_SetLogicalSize(
         a1,
         _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*a2), (__m128)COERCE_UNSIGNED_INT((float)a2[1])).m128_u64[0]);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1A4,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
