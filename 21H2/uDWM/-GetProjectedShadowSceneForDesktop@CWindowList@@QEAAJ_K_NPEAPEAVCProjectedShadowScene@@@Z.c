/*
 * XREFs of ?GetProjectedShadowSceneForDesktop@CWindowList@@QEAAJ_K_NPEAPEAVCProjectedShadowScene@@@Z @ 0x180098054
 * Callers:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x1800178D8 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001AB00 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z @ 0x1800966A0 (-AddProjectedShadowCaster@CWindowList@@QEAAJPEAUHWND__@@PEAX1@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006300 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18001AAA4 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800BC1E4 (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CWindowList::GetProjectedShadowSceneForDesktop(
        CWindowList *this,
        unsigned __int64 a2,
        char a3,
        struct CProjectedShadowScene **a4)
{
  struct CProjectedShadowScene **Element; // rax
  struct CProjectedShadowScene **v8; // rsi
  struct CProjectedShadowScene *v10; // rax
  __int64 v11; // rax
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // eax
  struct CProjectedShadowScene *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CBaseObject *v19; // [rsp+30h] [rbp+8h] BYREF

  Element = (struct CProjectedShadowScene **)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                                               (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
                                               a2);
  v8 = Element;
  if ( !Element )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB5D,
      (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)0x8002802BLL);
    return 2147647531LL;
  }
  v10 = Element[6];
  if ( !v10 && a3 )
  {
    v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            72LL);
    v12 = (volatile signed __int32 *)v11;
    if ( v11 )
    {
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 48) = 0LL;
      *(_QWORD *)(v11 + 16) = 0LL;
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 56) = 0LL;
      *(_DWORD *)(v11 + 8) = 1;
      *(_QWORD *)v11 = &CProjectedShadowScene::`vftable';
      *(_BYTE *)(v11 + 64) = 0;
    }
    else
    {
      v12 = 0LL;
    }
    v19 = (CBaseObject *)v12;
    if ( !v12 )
    {
      v13 = -2147024882;
      v14 = 2914LL;
      v15 = 2147942414LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)v15);
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
      return v13;
    }
    v16 = CProjectedShadowScene::Initialize((CProjectedShadowScene *)v12, a2);
    v13 = v16;
    if ( v16 < 0 )
    {
      v15 = (unsigned int)v16;
      v14 = 2915LL;
      goto LABEL_12;
    }
    v8[6] = (struct CProjectedShadowScene *)v12;
    _InterlockedIncrement(v12 + 2);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
    v10 = v8[6];
  }
  *a4 = v10;
  v17 = v8[6];
  if ( v17 )
    _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
  return 0LL;
}
