/*
 * XREFs of ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x1800464BC
 * Callers:
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180046384 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x1800986C4 (-OnInteropDeviceRecreated@CWindowList@@QEAAXXZ.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800BBF74 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001A264 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180046530 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081124 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct CGlobalLightSet *__fastcall CWindowList::GetGlobalLightSetForDesktop(CWindowList *this, unsigned __int64 a2)
{
  _QWORD *Element; // rbx
  int v4; // eax
  CBaseObject *v5; // rax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v9; // [rsp+30h] [rbp+8h] BYREF

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  if ( !Element[7] )
  {
    v9 = 0LL;
    v4 = CGlobalLightSet::Create(a2, &v9);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1A35,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v4,
        v7);
    }
    else
    {
      v5 = v9;
      Element[7] = v9;
      if ( !v5 )
        return (struct CGlobalLightSet *)Element[7];
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    }
    if ( v9 )
      CBaseObject::Release(v9);
  }
  return (struct CGlobalLightSet *)Element[7];
}
