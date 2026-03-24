/*
 * XREFs of ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C00191A8
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0276D30 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall DxEngSelectPaletteToSurface(struct _SURFOBJ *a1, HPALETTE a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  HDEV v5; // rbx
  HDEV hdev; // rdi
  HDEV v7; // rcx
  HDEV v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v9, a2);
  v5 = v9;
  if ( a1 )
  {
    if ( !v9 )
      return v3;
    hdev = a1[1].hdev;
    v7 = v9;
    a1[1].hdev = v9;
    INC_SHARE_REF_CNT(v7);
    if ( hdev )
    {
      v3 = *(_QWORD *)hdev;
      v9 = hdev;
      XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v9);
    }
  }
  if ( v5 )
    DEC_SHARE_REF_CNT(v5, v4);
  return v3;
}
