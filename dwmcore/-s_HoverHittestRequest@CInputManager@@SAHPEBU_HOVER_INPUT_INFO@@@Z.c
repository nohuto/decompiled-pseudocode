/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18019F884
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1801291A0 (-ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x1800321D0 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x1800322EC (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1)
{
  int v2; // ebx
  unsigned int v3; // eax
  char *v4; // rsi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  CResource *v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  CResource *v15; // [rsp+78h] [rbp+28h]
  unsigned __int64 v16; // [rsp+80h] [rbp+30h]

  v2 = 0;
  if ( CInputManager::s_pInputManager )
  {
    v3 = *((_DWORD *)a1 + 4);
    v4 = (char *)CInputManager::s_pInputManager + 80;
    v5 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
    v15 = 0LL;
    v16 = v3 | 0xFFFFFFFE00000000uLL;
    v6 = *v5;
    v13 = 0LL;
    v14 = 1;
    v2 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, CResource **))(v6 + 56))(v5, v16, &v13);
    if ( v14 )
    {
      v7 = 0LL;
      v15 = v13;
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180382DB8, 2u, v2, 0x187u, 0LL);
    }
    else
    {
      v8 = CDesktopTree::CleanTreeAndLockForRead(v15);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180382DB8, 2u, v8, 0x18Au, 0LL);
      }
      else
      {
        v10 = CHitTestContext::HitTestTreeWalk(
                (__int64)v4,
                (__int64)v15,
                (float)*((int *)a1 + 1),
                (float)*((int *)a1 + 2),
                2);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180382DB8, 2u, v10, 0x194u, 0LL);
        ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v15 + 2) + 672LL));
      }
    }
    if ( v15 )
      CResource::InternalRelease(v15);
  }
  return v2 >= 0;
}
