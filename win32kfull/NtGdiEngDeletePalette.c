/*
 * XREFs of NtGdiEngDeletePalette @ 0x1C02CBDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C (--1EPALOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiEngDeletePalette(HPALETTE a1)
{
  unsigned int v1; // ebx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v3, a1);
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 24) & 0x2000000) != 0 )
    {
      v1 = EngDeletePaletteInternal((struct EPALOBJ *)&v3);
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v3);
      return v1;
    }
    if ( v3 )
      DEC_SHARE_REF_CNT(v3);
  }
  return 0LL;
}
