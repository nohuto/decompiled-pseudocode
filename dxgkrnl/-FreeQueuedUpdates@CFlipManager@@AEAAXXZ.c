/*
 * XREFs of ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C008322C
 * Callers:
 *     ?Delete@CFlipManager@@MEAAJPEAX@Z @ 0x1C0082E80 (-Delete@CFlipManager@@MEAAJPEAX@Z.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0083F1C (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C0082FA4 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084480 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::FreeQueuedUpdates(CFlipManager *this)
{
  _QWORD *v2; // rdi
  struct CFlipPresentUpdate *v3; // rsi
  void (__fastcall *v4)(_QWORD, _QWORD); // rax
  CFlipManager *v5; // rcx
  struct CFlipPresentUpdate *v6; // rdi
  CFlipManager *v7; // rcx
  _QWORD *v8; // rbx
  void (__fastcall ***v9)(_QWORD, __int64); // rcx

  v2 = (_QWORD *)((char *)this + 152);
  while ( (_QWORD *)*v2 != v2 )
  {
    v3 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(v2);
    v4 = *(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)DXGGLOBAL::GetGlobal() + 38069) + 160LL);
    v4(*((unsigned int *)this + 83), --*((_QWORD *)this + 21));
    CFlipManager::ReleaseKernelPresentUpdateReferences(v5, v3);
    if ( v3 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
  }
  while ( *((CFlipManager **)this + 22) != (CFlipManager *)((char *)this + 176) )
  {
    v6 = (struct CFlipPresentUpdate *)CFlipObjectQueue<CFlipPresentUpdate>::Dequeue((_QWORD *)this + 22);
    CFlipManager::ReleaseKernelPresentUpdateReferences(v7, v6);
    if ( v6 )
      (*(void (__fastcall **)(struct CFlipPresentUpdate *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  }
  v8 = (_QWORD *)((char *)this + 208);
  while ( (_QWORD *)*v8 != v8 )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))((*v8 - 8LL) & -(__int64)(*v8 != 0LL));
    if ( v9 )
      (**v9)(v9, 1LL);
  }
}
