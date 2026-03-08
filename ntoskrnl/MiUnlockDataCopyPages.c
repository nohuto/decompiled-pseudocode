/*
 * XREFs of MiUnlockDataCopyPages @ 0x1402E2D6C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14029ECE8 (MiUnlockNestedProtoPoolPage.c)
 */

__int64 __fastcall MiUnlockDataCopyPages(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = a1[3];
  if ( v1 )
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v3 = a1[4];
  if ( v3 )
    MiUnlockNestedProtoPoolPage(v3);
  result = *a1;
  if ( *a1 )
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v5 = a1[1];
  if ( v5 )
    return MiUnlockProtoPoolPage(v5, 2u);
  return result;
}
