/*
 * XREFs of _DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_42_::ENSURE_DELETE::_ENSURE_DELETE @ 0x1C00D7C78
 * Callers:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023B6F4 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm_::_42_::ENSURE_DELETE::_ENSURE_DELETE(
        struct _SLIST_ENTRY **a1,
        __int64 a2)
{
  struct _SLIST_ENTRY *v2; // rdi
  struct DXGGLOBAL *Global; // rax
  union _SLIST_HEADER *v4; // rbx

  v2 = *a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v4 = (union _SLIST_HEADER *)((char *)Global + 1024);
  ++*((_DWORD *)Global + 263);
  if ( ExQueryDepthSList((PSLIST_HEADER)Global + 64) < *((_WORD *)Global + 520) )
    return ExpInterlockedPushEntrySList(v4, v2);
  ++LODWORD(v4[2].Alignment);
  return (PSLIST_ENTRY)((__int64 (__fastcall *)(struct _SLIST_ENTRY *, union _SLIST_HEADER *))v4[3].Region)(v2, v4);
}
