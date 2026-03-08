/*
 * XREFs of ?CheckOcclusionState@CHolographicInteropTarget@@UEAAJXZ @ 0x1802A5B3C
 * Callers:
 *     ?CheckOcclusionState@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x18011D5B0 (-CheckOcclusionState@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::CheckOcclusionState(CHolographicInteropTarget *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this - 19);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 40)) != 0 )
    return *(_BYTE *)(v2 + 192) != 0 ? 0x87A0001 : 0;
  else
    return 142213121LL;
}
