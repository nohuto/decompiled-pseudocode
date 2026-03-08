/*
 * XREFs of ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00687AC
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0013A94 (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AB064 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0067874 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DMMVIDPNTARGETMODE>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rcx

  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 == a1 + 24 )
    return 0LL;
  v4 = v3 - 8;
  while ( v4 )
  {
    if ( !DMMVIDPNTARGETMODE::operator!=(v4, a2) )
      break;
    v6 = *(_QWORD *)(v4 + 8);
    v4 = v6 - 8;
    if ( v6 == v2 )
      v4 = v5;
  }
  return v4;
}
