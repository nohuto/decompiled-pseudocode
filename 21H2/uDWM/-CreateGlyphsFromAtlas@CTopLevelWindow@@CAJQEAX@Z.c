/*
 * XREFs of ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x18004A01C
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800489F8 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180049F3C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 */

__int64 __fastcall CTopLevelWindow::CreateGlyphsFromAtlas(void *const a1)
{
  unsigned int v1; // ebp
  int v2; // edi
  __int64 i; // r14
  unsigned int v5; // r15d
  int *v6; // rbx
  int *v7; // rax
  int v8; // r12d
  __int64 v9; // rsi
  int BitmapsFromAtlasImageStrip; // eax

  v1 = 0;
  v2 = 0;
  for ( i = 0LL; !*(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames); i += 8LL )
  {
LABEL_11:
    if ( (unsigned int)++v2 >= 6 )
      return v1;
  }
  v5 = 0;
  v6 = (int *)&unk_1800CFB14;
  while ( 1 )
  {
    v7 = v6 - 1;
    if ( (unsigned int)(v2 - 4) <= 1 )
      v7 = v6;
    v8 = *v7;
    if ( *v7 )
      break;
LABEL_10:
    ++v5;
    v6 += 3;
    if ( v5 >= 0xA )
      goto LABEL_11;
  }
  v9 = 0LL;
  while ( 1 )
  {
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   a1,
                                   v8 + (int)v9,
                                   4u,
                                   0LL,
                                   (struct CBitmapSource ***)((unsigned int)v6[1]
                                                            + 216LL
                                                            + 320 * v9
                                                            + *(_QWORD *)(i + CTopLevelWindow::s_rgpwfWindowFrames)));
    v1 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip < 0 )
      break;
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= 4 )
      goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x20Du);
  return v1;
}
