/*
 * XREFs of ?XLATEOBJ_ulIndexToPalSurf@@YAEPEAU_XLATEOBJ@@PEBEK@Z @ 0x1C02BE520
 * Callers:
 *     XLATEOBJ_iXlate @ 0x1C00D5950 (XLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_ulIndexToPalSurf(struct _XLATEOBJ *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v5; // eax
  FLONG flXlate; // r9d
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int8 v9; // cl
  __int64 v10; // rax
  ULONG *pulXlate; // [rsp+30h] [rbp+8h] BYREF

  pulXlate = a1[1].pulXlate;
  v5 = XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&pulXlate, a3);
  flXlate = a1[3].flXlate;
  v7 = a2[((unsigned __int64)BYTE2(v5) >> 3) | (4 * ((32 * (v5 & 0xF8)) | (v5 >> 8) & 0xF8))];
  if ( (flXlate & 0x800) != 0 )
  {
    v8 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v8 == ppalDefault )
    {
      v9 = v7 - 20;
      if ( (unsigned __int8)v7 < 0xAu )
        v9 = a2[((unsigned __int64)BYTE2(v5) >> 3) | (4 * ((32 * (v5 & 0xF8)) | (v5 >> 8) & 0xF8))];
      LOBYTE(v7) = v9;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v10 = *(_QWORD *)(v8 + 80);
      else
        v10 = *(_QWORD *)(v8 + 72);
      LOBYTE(v7) = *(_BYTE *)(v10 + v7 + 4);
    }
  }
  return v7;
}
