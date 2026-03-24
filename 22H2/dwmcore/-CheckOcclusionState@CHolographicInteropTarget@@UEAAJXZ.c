/*
 * XREFs of ?CheckOcclusionState@CHolographicInteropTarget@@UEAAJXZ @ 0x1802577CC
 * Callers:
 *     ?CheckOcclusionState@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F7D00 (-CheckOcclusionState@CHolographicInteropTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTarget::CheckOcclusionState(CHolographicInteropTarget *this)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *((_QWORD *)this - 14);
  if ( v1 && (v2 = *(_QWORD *)(v1 + 40)) != 0 && !*(_BYTE *)(v2 + 192) )
    return 0LL;
  else
    return 142213121LL;
}
