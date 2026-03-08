/*
 * XREFs of ?PurgeSkippedTokens@CFlipManager@@AEAAX_K_N@Z @ 0x1C0084228
 * Callers:
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C00828B8 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z @ 0x1C0081564 (-Create@CFlipManagerSignal@@SAJ_K_NPEAPEAV1@@Z.c)
 *     _lambda_88f3ed85026e62755ea077db9998d4dd_::operator() @ 0x1C0081868 (_lambda_88f3ed85026e62755ea077db9998d4dd_--operator().c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008332C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z @ 0x1C00833BC (-GetUpdateForPresentId@CFlipManager@@AEAAPEAVCFlipPresentUpdate@@_K@Z.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008392C (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C0083C08 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084098 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 *     ?Remove@CFlipQueuedObject@@QEAAXXZ @ 0x1C0084500 (-Remove@CFlipQueuedObject@@QEAAXXZ.c)
 *     ?UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z @ 0x1C0084760 (-UpdateNextConsumerPresentIdForUpdate@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@I@Z.c)
 *     ?PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z @ 0x1C0085808 (-PrepareBufferSignals@CEndpointResourceStateManager@@QEAAJPEAVCFlipManagerSignal@@@Z.c)
 */

void __fastcall CFlipManager::PurgeSkippedTokens(CFlipManager *this, unsigned __int64 a2, unsigned __int8 a3)
{
  char *v3; // rax
  char *v7; // rcx
  int v8; // r13d
  unsigned __int64 i; // rdi
  struct CFlipPresentUpdate *UpdateForPresentId; // rax
  struct CFlipPresentUpdate *v11; // rsi
  CFlipManager::PresentHistory *v12; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax
  int v14; // eax
  CFlipManager::PresentHistory **v15; // rsi
  char v16; // r15
  int v17; // eax
  struct DXGGLOBAL *Global; // rax
  struct CFlipPresentUpdate *v19[2]; // [rsp+20h] [rbp-20h] BYREF
  char v20; // [rsp+30h] [rbp-10h]
  struct CFlipManagerSignal *v21; // [rsp+70h] [rbp+30h] BYREF

  v3 = (char *)this + 152;
  v7 = (char *)*((_QWORD *)this + 19);
  if ( v7 != v3 )
  {
    v8 = 2 * a3 + 1;
    for ( i = *(_QWORD *)(((unsigned __int64)(v7 - 24) & -(__int64)(v7 != 0LL)) + 0x40); ; ++i )
    {
      if ( i >= a2 )
        return;
      UpdateForPresentId = CFlipManager::GetUpdateForPresentId(this, i);
      v11 = UpdateForPresentId;
      if ( !UpdateForPresentId )
      {
        CFlipManager::MarkAsLost((__int64)this, -1073741823, 17, i);
        return;
      }
      v19[0] = this;
      v19[1] = UpdateForPresentId;
      CFlipQueuedObject::Remove((struct CFlipPresentUpdate *)((char *)UpdateForPresentId + 16));
      *((_DWORD *)v11 + 22) = v8;
      v12 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
      if ( v12 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v12);
        *((_QWORD *)NextEntry + 3) = *((_QWORD *)v11 + 10);
        *((_QWORD *)NextEntry + 2) = i;
        *((_DWORD *)NextEntry + 10) = 9;
      }
      CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, v11, 3u);
      v20 = 0;
      lambda_88f3ed85026e62755ea077db9998d4dd_::operator()(v19);
      v21 = 0LL;
      v14 = CFlipManagerSignal::Create(i, a3 ^ 1u, &v21);
      if ( v14 < 0 )
        break;
      v15 = (CFlipManager::PresentHistory **)v21;
      v16 = 1;
      v17 = CEndpointResourceStateManager::PrepareBufferSignals((CFlipManager *)((char *)this + 104), v21);
      if ( v17 < 0
        || (CFlipManager::ProcessSignal((CFlipManager::PresentHistory **)this, v15, -1LL),
            v16 = 0,
            v17 = CFlipManager::PostFlipManagerPresentStatusStatistics((__int64)this, i, 0LL, v8),
            v17 < 0) )
      {
        CFlipManager::MarkAsLost((__int64)this, v17, 19, 0LL);
        if ( v16 && v15 )
          (*(void (__fastcall **)(CFlipManager::PresentHistory **, __int64))*v15)(v15, 1LL);
        goto LABEL_18;
      }
      Global = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(*((_QWORD *)Global + 38069) + 192LL))(
        *((unsigned int *)this + 83),
        i);
      if ( v20 )
      {
        v20 = 0;
        lambda_88f3ed85026e62755ea077db9998d4dd_::operator()(v19);
      }
    }
    CFlipManager::MarkAsLost((__int64)this, v14, 19, 0LL);
LABEL_18:
    if ( v20 )
    {
      v20 = 0;
      lambda_88f3ed85026e62755ea077db9998d4dd_::operator()(v19);
    }
  }
}
