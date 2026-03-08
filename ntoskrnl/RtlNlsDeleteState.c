/*
 * XREFs of RtlNlsDeleteState @ 0x1409B69D8
 * Callers:
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 */

void __fastcall RtlNlsDeleteState(__int64 a1)
{
  ULONG_PTR v2; // rcx
  ULONG_PTR v3; // rcx
  ULONG_PTR v4; // rcx

  *(_WORD *)(a1 + 1064) = -535;
  *(_WORD *)(a1 + 1128) = -535;
  v2 = *(_QWORD *)(a1 + 1192);
  if ( v2 )
  {
    MiRemoveFromSystemSpace(v2, 1);
    *(_QWORD *)(a1 + 1192) = 0LL;
  }
  v3 = *(_QWORD *)(a1 + 1200);
  if ( v3 )
  {
    MiRemoveFromSystemSpace(v3, 1);
    *(_QWORD *)(a1 + 1200) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 1224);
  if ( v4 )
  {
    MiRemoveFromSystemSpace(v4, 1);
    *(_QWORD *)(a1 + 1224) = 0LL;
  }
}
