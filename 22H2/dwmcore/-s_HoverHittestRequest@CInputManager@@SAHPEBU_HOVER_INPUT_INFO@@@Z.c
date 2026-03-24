/*
 * XREFs of ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001C338
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@KAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001C2B0 (-ManipulationThreadCallback@CManipulationManager@@KAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z @ 0x18004ECE8 (-HitTestTreeWalk@CHitTestContext@@QEAAJPEAVCVisualTree@@MMW4TreeWalkFlags@@@Z.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x18004EE40 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CInputManager::s_HoverHittestRequest(const struct _HOVER_INPUT_INFO *a1)
{
  int v1; // ebx
  unsigned int v2; // eax
  char *v3; // rsi
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, unsigned __int64, CRenderTargetBitmap **); // rax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  CRenderTargetBitmap *v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+40h] [rbp-10h]
  CRenderTargetBitmap *v15; // [rsp+78h] [rbp+28h]
  unsigned __int64 v16; // [rsp+80h] [rbp+30h]

  v1 = 0;
  if ( CInputManager::s_pInputManager )
  {
    v2 = *((_DWORD *)a1 + 4);
    v3 = (char *)CInputManager::s_pInputManager + 80;
    v4 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
    v15 = 0LL;
    v16 = v2 | 0xFFFFFFFE00000000uLL;
    v5 = *v4;
    v13 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64 *, unsigned __int64, CRenderTargetBitmap **))(v5 + 32);
    v14 = 1;
    v1 = v6(v4, v16, &v13);
    if ( v14 )
    {
      v7 = 0;
      v15 = v13;
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802DCF90, 2u, v1, 0x17Eu, 0LL);
    }
    else
    {
      v8 = CDesktopTree::CleanTreeAndLockForRead(v15);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802DCF90, 2u, v8, 0x181u, 0LL);
      }
      else
      {
        v10 = CHitTestContext::HitTestTreeWalk(v3, v15);
        v1 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802DCF90, 2u, v10, 0x18Bu, 0LL);
        ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v15 + 2) + 520LL));
      }
    }
    if ( v15 )
      CRenderTargetBitmap::Release(v15);
  }
  return v1 >= 0;
}
