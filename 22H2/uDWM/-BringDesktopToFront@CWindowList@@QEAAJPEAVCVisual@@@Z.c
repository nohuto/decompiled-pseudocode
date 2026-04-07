/*
 * XREFs of ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18000CBAC
 * Callers:
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800349A0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180036360 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ?EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z @ 0x180052770 (-EnableMonitorRenderTargets@CDesktopManager@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MoveNext@VisualCollectionIterator@@QEAA_NXZ @ 0x18000CEF0 (-MoveNext@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180019928 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ @ 0x180019E10 (-MoveTransitionAndTouchVisualToFront@CWindowList@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BringDesktopToFront(CWindowList *this, struct CVisual *a2)
{
  __int64 v2; // rax
  struct CVisual *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  char v10; // [rsp+20h] [rbp-28h]
  unsigned int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-10h]
  __int16 v14; // [rsp+3Ch] [rbp-Ch]

  v2 = *((_QWORD *)this + 10);
  v13 = -1;
  v14 = 0;
  v12 = v2 + 32;
  while ( VisualCollectionIterator::MoveNext((VisualCollectionIterator *)&v12) )
  {
    v5 = *(struct CVisual **)(*(_QWORD *)(v12 + 16) + 8LL * v13);
    if ( v5 != a2 )
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v5 + 104LL))(v5);
  }
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 104LL))(a2);
  v6 = CVisual::MoveToFront(a2, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 1671;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v11);
    return v7;
  }
  v6 = CWindowList::MoveTransitionAndTouchVisualToFront(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 1672;
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10));
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 1673;
    goto LABEL_13;
  }
  LOBYTE(v8) = 1;
  v10 = 0;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, char))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                + 5)
                                                                              + 16LL)
                                                                + 160LL))(
    *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
    v8,
    0LL,
    0LL,
    v10);
  return v7;
}
