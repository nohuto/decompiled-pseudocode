/*
 * XREFs of ulCharsetToCodePage @ 0x1C015F42A
 * Callers:
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C00A7B6C (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C015ABC0 (-vEmergency@MAPPER@@QEAAXXZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C029AFF8 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulCharsetToCodePage(Gre::Base *a1)
{
  __int64 v1; // rax
  _DWORD *i; // rdx

  if ( (_DWORD)a1 == 255 )
    return 1LL;
  v1 = 0LL;
  for ( i = &charsets; *i != (_DWORD)a1; ++i )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x11 )
      return *((_DWORD *)Gre::Base::Globals(a1) + 39) != 0 ? 0x4E4 : 0;
  }
  return (unsigned int)codepages[v1];
}
