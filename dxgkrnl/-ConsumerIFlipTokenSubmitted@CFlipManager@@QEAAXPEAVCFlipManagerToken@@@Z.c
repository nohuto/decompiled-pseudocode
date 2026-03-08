/*
 * XREFs of ?ConsumerIFlipTokenSubmitted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@@Z @ 0x1C0082BBC
 * Callers:
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z @ 0x1C007659C (-CompleteFlipManagerToken@CTokenManager@@IEAAXPEAUFlipManagerTokenObject@@PEA_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ @ 0x1C008332C (-GetNextEntry@PresentHistory@CFlipManager@@QEAAAEAUEntry@12@XZ.c)
 */

void __fastcall CFlipManager::ConsumerIFlipTokenSubmitted(CFlipManager *this, struct CFlipManagerToken *a2)
{
  int v4; // esi
  struct DXGGLOBAL *Global; // rax
  CFlipManager::PresentHistory *v6; // rcx
  struct CFlipManager::PresentHistory::Entry *NextEntry; // rax

  if ( !*((_BYTE *)this + 32) )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 8) + 96LL) + 44LL);
    Global = DXGGLOBAL::GetGlobal();
    (*(void (__fastcall **)(_QWORD, _QWORD, bool))(*((_QWORD *)Global + 38069) + 176LL))(
      *((unsigned int *)this + 83),
      *((_QWORD *)a2 + 10),
      v4 != 0);
    v6 = (CFlipManager::PresentHistory *)*((_QWORD *)this + 3);
    if ( v6 )
    {
      NextEntry = CFlipManager::PresentHistory::GetNextEntry(v6);
      *((_QWORD *)NextEntry + 3) = *((_QWORD *)a2 + 12);
      *((_QWORD *)NextEntry + 2) = *((_QWORD *)a2 + 10);
      if ( v4 )
        *((_DWORD *)NextEntry + 10) = 4;
      else
        *((_DWORD *)NextEntry + 10) = 3;
    }
  }
}
