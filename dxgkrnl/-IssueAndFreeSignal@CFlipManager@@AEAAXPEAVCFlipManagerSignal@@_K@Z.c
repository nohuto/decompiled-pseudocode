/*
 * XREFs of ?IssueAndFreeSignal@CFlipManager@@AEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C008382C
 * Callers:
 *     ?ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z @ 0x1C0084098 (-ProcessSignal@CFlipManager@@QEAAXPEAVCFlipManagerSignal@@_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008332C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008392C (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C034E2AC (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipManager::IssueAndFreeSignal(CFlipManager *this, struct CFlipManagerSignal *a2, __int64 a3)
{
  __int64 *v3; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // eax
  struct DXGGLOBAL *Global; // rax
  CFlipManager::PresentHistory *v11; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  v3 = (__int64 *)((char *)a2 + 48);
  if ( *((_BYTE *)a2 + 56) )
  {
    v7 = *v3;
    if ( (unsigned __int64)*v3 > 1 )
    {
      v8 = v7 - 1;
      v9 = DxgkImmediateSignalSynchronizationObjectByReference(*((_QWORD *)this + 38), v7 - 1);
      if ( v9 < 0 )
        CFlipManager::MarkAsLost(this, (unsigned int)v9, 18LL, v8);
      Global = DXGGLOBAL::GetGlobal();
      (*(void (__fastcall **)(_QWORD, __int64, bool))(*((_QWORD *)Global + 38069) + 208LL))(
        *((unsigned int *)this + 83),
        v8,
        *((_BYTE *)a2 + 56) == 0);
    }
    *((_QWORD *)this + 32) = *v3;
  }
  ++*((_QWORD *)this + 33);
  v11 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
  if ( v11 )
  {
    NextEntry = CFlipManager::PresentHistory::GetNextEntry(v11);
    *(_QWORD *)NextEntry = a3;
    *((_QWORD *)NextEntry + 2) = *v3;
    *((_DWORD *)NextEntry + 10) = (*((_BYTE *)a2 + 56) != 0) + 13;
  }
  (**(void (__fastcall ***)(struct CFlipManagerSignal *, __int64))a2)(a2, 1LL);
}
