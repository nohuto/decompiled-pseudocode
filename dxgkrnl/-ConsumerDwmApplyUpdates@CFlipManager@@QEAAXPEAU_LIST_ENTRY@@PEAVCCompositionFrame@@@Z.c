/*
 * XREFs of ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1C008243C
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000F010 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0082018 (-ConsumerDwmApplyUpdate@CFlipManager@@AEAAXPEAUFlipManagerTokenObject@@PEAVCCompositionFrame@@PE.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008332C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008392C (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x1C0083C08 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 */

void __fastcall CFlipManager::ConsumerDwmApplyUpdates(
        CFlipManager::PresentHistory **this,
        struct _LIST_ENTRY *a2,
        struct CCompositionFrame *a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  __int64 v4; // r12
  char *v8; // rdx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  int v11; // edi
  struct CFlipPresentUpdate *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // r8
  _QWORD *v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // r12
  __int64 v20; // r13
  void (__fastcall *v21)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64); // rax
  void (__fastcall *v22)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64); // rax
  void (__fastcall *v23)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64); // rax
  void (__fastcall *v24)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64); // rax
  CFlipManager::PresentHistory *v25; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // [rsp+40h] [rbp-20h]
  _QWORD *v30; // [rsp+48h] [rbp-18h] BYREF
  _QWORD **v31; // [rsp+50h] [rbp-10h]
  struct CFlipPresentUpdate *v32; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+58h]

  Flink = a2->Flink;
  v4 = -1LL;
  v31 = &v30;
  v29 = -1LL;
  v30 = &v30;
  while ( Flink != a2 )
  {
    v8 = (char *)&Flink[-3];
    Flink = Flink->Flink;
    v32 = 0LL;
    CFlipManager::ConsumerDwmApplyUpdate((CFlipManager *)this, v8, a3, &v32);
    if ( v32 )
    {
      if ( !*((_DWORD *)v32 + 22) )
      {
        v4 = *((_QWORD *)v32 + 8);
        v29 = v4;
      }
      v9 = (_QWORD *)(((unsigned __int64)v32 + 24) & -(__int64)(v32 != 0LL));
      v10 = v31;
      if ( *v31 != &v30 )
        __fastfail(3u);
      *(_QWORD *)((((unsigned __int64)v32 + 24) & -(__int64)(v32 != 0LL)) + 8) = v31;
      *v9 = &v30;
      *v10 = v9;
      v31 = (_QWORD **)v9;
    }
  }
  v11 = 0;
  v12 = (struct CFlipPresentUpdate *)(*(__int64 (__fastcall **)(struct CCompositionFrame *))(*(_QWORD *)a3 + 72LL))(a3);
  v14 = *((_QWORD *)a3 + 7);
  v32 = v12;
  v33 = *((_QWORD *)a3 + 5);
  v15 = v33 + (v14 >> 1);
LABEL_9:
  v16 = 1LL;
  while ( v30 != &v30 )
  {
    v17 = (_QWORD *)((unsigned __int64)(v30 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v30 >> 64));
    if ( v11 >= 0 )
    {
      v18 = *(_DWORD *)(((unsigned __int64)(v30 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v30 >> 64))
                      + 0x58);
      if ( !v18 )
        v18 = *(_QWORD *)(((unsigned __int64)(v30 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v30 >> 64))
                        + 0x40) != v4;
      v19 = *(_QWORD *)(((unsigned __int64)(v30 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v30 >> 64))
                      + 0x40);
      v20 = *(_QWORD *)(((unsigned __int64)(v30 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v30 >> 64))
                      + 0x50);
      if ( v18 )
      {
        switch ( v18 )
        {
          case 1u:
            v23 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 144LL);
            v23(*((unsigned int *)this + 83), v19, v32, v33, v15, v20);
            break;
          case 2u:
            v22 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 128LL);
            v22(*((unsigned int *)this + 83), v19, v32, v33, v15, v20);
            break;
          case 3u:
            v21 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 136LL);
            v21(*((unsigned int *)this + 83), v19, v32, v33, v15, v20);
            break;
        }
      }
      else
      {
        v24 = *(void (__fastcall **)(_QWORD, __int64, struct CFlipPresentUpdate *, __int64, __int64, __int64))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 120LL);
        v24(*((unsigned int *)this + 83), v19, v32, v33, v15, v20);
      }
      v25 = this[3];
      if ( v25 )
      {
        NextEntry = CFlipManager::PresentHistory::GetNextEntry(v25);
        v13 = v18;
        *(_QWORD *)NextEntry = v32;
        *((_QWORD *)NextEntry + 1) = v15;
        *((_QWORD *)NextEntry + 2) = v19;
        *((_QWORD *)NextEntry + 3) = v20;
        if ( v18 )
        {
          v13 = v18 - 2;
          if ( v18 == 2 )
          {
            *((_DWORD *)NextEntry + 10) = 10;
          }
          else if ( v18 == 3 )
          {
            *((_DWORD *)NextEntry + 10) = 12;
          }
        }
        else
        {
          *((_DWORD *)NextEntry + 10) = 7;
        }
      }
      v27 = (*(__int64 (__fastcall **)(struct CCompositionFrame *, __int64, __int64))(*(_QWORD *)a3 + 72LL))(
              a3,
              v13,
              v16);
      v28 = CFlipManager::PostFlipManagerPresentStatusStatistics(this, v17[8], v27, v18);
      v11 = v28;
      if ( v28 < 0 )
        CFlipManager::MarkAsLost(this, (unsigned int)v28, 19LL, 0LL);
      v16 = 1LL;
    }
    v4 = v29;
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64))(*v17 + 24LL))(v17, 1LL);
      goto LABEL_9;
    }
  }
}
