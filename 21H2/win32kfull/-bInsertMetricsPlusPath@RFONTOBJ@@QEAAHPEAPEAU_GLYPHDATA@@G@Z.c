/*
 * XREFs of ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0141258
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0018FE0 (xInsertMetricsPlusRFONTOBJ.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0018C7C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C001B030 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x1C001B588 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00E8A78 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C014145C (-vInit@EPATHFONTOBJ@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlusPath(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v8; // r8
  struct _GLYPHDATA *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r15d
  EPATHFONTOBJ *v12; // rax
  EPATHFONTOBJ *v13; // r14
  EPATHOBJ *v14; // rcx
  __int64 result; // rax
  unsigned __int16 v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  struct _GLYPHDATA v21; // [rsp+E0h] [rbp-20h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  v5 = a3;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL)
    || (result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2), (_DWORD)result) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
    {
      v16 = v5;
      v17 = 0;
      RFONTOBJ::vXlatGlyphArray(this, &v16, 1, &v17, 0, 0);
      v5 = v17;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v19);
    if ( v20 )
    {
      memset(&v21, 0, sizeof(v21));
      v8 = *(_QWORD *)this;
      v18 = *(_QWORD *)(*(_QWORD *)this + 128LL);
      v9 = &v21;
      if ( !*(_DWORD *)(v8 + 640) )
        v9 = *(struct _GLYPHDATA **)(v3 + 512);
      if ( (unsigned int)PFFOBJ::QueryFontData(
                           (PFFOBJ *)&v18,
                           *(struct DHPDEV__ **)(v8 + 112),
                           (struct _FONTOBJ *)v8,
                           2u,
                           v5,
                           v9,
                           v19,
                           0) != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 640LL) )
        {
          v10 = *(_QWORD *)(v3 + 512);
          *(_OWORD *)v10 = *(_OWORD *)&v21.gdf.pgb;
          *(_QWORD *)(v10 + 16) = *(_QWORD *)&v21.fxA;
        }
        v11 = EPATHOBJ::cjSize((EPATHOBJ *)v19) + 424;
        v12 = (EPATHFONTOBJ *)RFONTOBJ::pgbCheckGlyphCache(this, v11);
        v13 = v12;
        if ( v12 )
        {
          EPATHFONTOBJ::vInit(v12, v11);
          EPATHOBJ::bClone(v14, (struct EPATHOBJ *)v19);
          **(_QWORD **)(v3 + 512) = v13;
        }
        else
        {
          **(_QWORD **)(v3 + 512) = 0LL;
        }
        *a2 = *(struct _GLYPHDATA **)(v3 + 512);
        *(_QWORD *)(v3 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
        if ( v13 )
          *(_QWORD *)(v3 + 584) += v11;
        v4 = 1;
      }
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v19);
    return v4;
  }
  return result;
}
