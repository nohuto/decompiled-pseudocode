/*
 * XREFs of ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1800188EC
 * Callers:
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1800185F4 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CAtlasTexture::IsFreeEntryInRow(CAtlasTexture *this, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 )
    return 1;
  if ( (unsigned int)(a2 - 1) < *((_DWORD *)this + 6) )
    return *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * (unsigned int)(a2 - 1)) == 0LL;
  return v2;
}
