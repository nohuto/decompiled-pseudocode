/*
 * XREFs of ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C001918C
 * Callers:
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0017990 (NtGdiDdDDICreateDCFromMemory.c)
 *     DxgkEngBltViaGDI @ 0x1C0276750 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019BA8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall DxEngSetPaletteState(HPALETTE a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = a3;
  v3 = 0;
  EPALOBJ::EPALOBJ((EPALOBJ *)&v7, a1);
  v5 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 24) |= 0x8000u;
    v3 = 1;
    DEC_SHARE_REF_CNT(v5, v4);
  }
  return v3;
}
