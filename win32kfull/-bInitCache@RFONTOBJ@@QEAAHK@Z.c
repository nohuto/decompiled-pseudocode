/*
 * XREFs of ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0123010
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0121768 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall RFONTOBJ::bInitCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  int v5; // edx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  struct DHPDEV__ *v10; // rdx
  bool v11; // zf
  unsigned int v12; // ebx
  unsigned __int16 v14; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-70h] BYREF
  __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  struct _GLYPHDATA v17; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(_QWORD *)this;
  *(_QWORD *)(v2 + 536) = 0LL;
  *(_QWORD *)(v2 + 544) = 0LL;
  *(_QWORD *)(v2 + 556) = 0LL;
  *(_DWORD *)(v2 + 552) = 0;
  *(_QWORD *)(v2 + 576) = 0LL;
  *(_QWORD *)(v2 + 568) = 0LL;
  *(_QWORD *)(v2 + 592) = 0LL;
  *(_QWORD *)(v2 + 584) = 0LL;
  *(_DWORD *)(v2 + 564) = 0;
  *(_DWORD *)(v2 + 600) = 0;
  *(_QWORD *)(v2 + 616) = 0LL;
  *(_QWORD *)(v2 + 624) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
        *(_QWORD *)(v2 + 632) = 0x8000LL;
      else
        *(_QWORD *)(v2 + 632) = 0LL;
    }
    else if ( *(_DWORD *)(v2 + 632) > 0x8000u )
    {
      a2 |= 1u;
    }
  }
  v7 = *(_QWORD *)this;
  v15 = 0;
  *(_DWORD *)(v7 + 84) = a2;
  v14 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 118LL);
  RFONTOBJ::vXlatGlyphArray(this, &v14, 1, &v15, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  v8 = *(_QWORD *)this;
  v9 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  memset_0(&v17, 0, sizeof(v17));
  v10 = *(struct DHPDEV__ **)(v8 + 112);
  v11 = v9 == 2;
  v12 = v15;
  v16 = *(_QWORD *)(v8 + 128);
  if ( (unsigned int)PFFOBJ::QueryFontData(
                       (PFFOBJ *)&v16,
                       v10,
                       (struct _FONTOBJ *)v8,
                       (unsigned int)v11 + 1,
                       v15,
                       &v17,
                       0LL,
                       0) == -1 )
    return 0LL;
  *(_DWORD *)(*(_QWORD *)this + 468LL) = v17.fxD;
  *(_DWORD *)(*(_QWORD *)this + 464LL) = v12;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 12LL) & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 848LL) = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 848LL) = GreCreateSemaphore();
    if ( !*(_QWORD *)(*(_QWORD *)this + 848LL) )
      return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 504LL) = GreCreateSemaphore();
  if ( *(_QWORD *)(*(_QWORD *)this + 504LL) )
    return 1LL;
  if ( *(_QWORD *)(*(_QWORD *)this + 848LL) )
  {
    GreDeleteSemaphore();
    *(_QWORD *)(*(_QWORD *)this + 848LL) = 0LL;
  }
  return 0LL;
}
