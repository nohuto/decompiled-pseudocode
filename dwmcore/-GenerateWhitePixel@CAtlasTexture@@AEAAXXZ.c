/*
 * XREFs of ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x180024284
 * Callers:
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1800240C4 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 * Callees:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800B76E4 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x1800B7A04 (--1CAtlasEntry@@QEAA@XZ.c)
 */

void __fastcall CAtlasTexture::GenerateWhitePixel(CAtlasTexture *this)
{
  _QWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v2[2]; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+40h] [rbp-18h]

  v2[1] = 0LL;
  v2[0] = this;
  v3 = 0;
  v1[1] = &unk_1802DC174;
  v1[0] = 4LL;
  CAtlasTexture::UpdateGradientStrip(this, v2, v1);
  v2[0] = 0LL;
  CAtlasEntry::~CAtlasEntry((CAtlasEntry *)v2);
}
