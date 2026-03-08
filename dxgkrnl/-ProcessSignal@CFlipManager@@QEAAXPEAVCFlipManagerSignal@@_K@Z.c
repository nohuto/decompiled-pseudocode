/*
 * XREFs of ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084098
 * Callers:
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C0017710 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1C0017A54 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Confirm@CCompositionFrame@@UEAAXXZ @ 0x1C0017AB0 (-Confirm@CCompositionFrame@@UEAAXXZ.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084228 (-PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x1C0081628 (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008332C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C008382C (-IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 */

void __fastcall CFlipManager::ProcessSignal(
        CFlipManager::PresentHistory **this,
        CFlipManager::PresentHistory **a2,
        __int64 a3)
{
  _QWORD *v3; // r14
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct DXGGLOBAL *Global; // rax
  CFlipManager::PresentHistory *v11; // rdx
  _QWORD **v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *i; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax
  CFlipManager::PresentHistory *v18; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v3 = a2 + 1;
  v7 = (_QWORD *)((unsigned __int64)(a2 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  v8 = *v7;
  if ( *(_QWORD **)(*v7 + 8LL) != v7 )
    goto LABEL_20;
  v9 = (_QWORD *)v7[1];
  if ( (_QWORD *)*v9 != v7 )
    goto LABEL_20;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v7[1] = v7;
  *v7 = v7;
  CFlipManagerSignal::ServiceBufferSignals((CFlipManagerSignal *)a2);
  if ( this[38] )
  {
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, CFlipManager::PresentHistory *))(*((_QWORD *)Global + 38069) + 200LL))(
      *((unsigned int *)this + 83),
      a2[6]);
    v11 = a2[6];
    v12 = (_QWORD **)(this + 26);
    if ( v11 == this[33] )
    {
      CFlipManager::IssueAndFreeSignal((CFlipManager *)this, (struct CFlipManagerSignal *)a2, a3);
      v13 = *v12;
      if ( *v12 != v12 )
      {
        do
        {
          v14 = (_QWORD *)*v13;
          if ( *(CFlipManager::PresentHistory **)(((unsigned __int64)(v13 - 1) & -(__int64)(v13 != 0LL)) + 0x30) != this[33] )
            break;
          CFlipManager::IssueAndFreeSignal(
            (CFlipManager *)this,
            (struct CFlipManagerSignal *)((unsigned __int64)(v13 - 1) & -(__int64)(v13 != 0LL)),
            a3);
          v13 = v14;
        }
        while ( v14 != v12 );
      }
      return;
    }
    for ( i = *v12; i != v12; i = (_QWORD *)*i )
    {
      v16 = (__int64)(i + 5);
      if ( !i )
        v16 = 48LL;
      if ( (unsigned __int64)v11 < *(_QWORD *)v16 )
        break;
    }
    v17 = (_QWORD *)i[1];
    if ( (_QWORD *)*v17 == i )
    {
      *v3 = i;
      v3[1] = v17;
      *v17 = v3;
      i[1] = v3;
      v18 = this[3];
      if ( v18 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v18);
        *(_QWORD *)NextEntry = a3;
        *((_QWORD *)NextEntry + 2) = a2[6];
        *((_DWORD *)NextEntry + 10) = 15;
      }
      return;
    }
LABEL_20:
    __fastfail(3u);
  }
  if ( a2 )
    (*(void (__fastcall **)(CFlipManager::PresentHistory **, __int64))*a2)(a2, 1LL);
}
