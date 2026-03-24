/*
 * XREFs of ?AllocatePresentParams@DXGGLOBAL@@QEAAPEAUDXGK_PRESENT_PARAMS@@XZ @ 0x1C0040C50
 * Callers:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023B6F4 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

struct DXGK_PRESENT_PARAMS *__fastcall DXGGLOBAL::AllocatePresentParams(DXGGLOBAL *this)
{
  char *v1; // rbx
  struct DXGK_PRESENT_PARAMS *result; // rax

  v1 = (char *)this + 1024;
  ++*((_DWORD *)this + 261);
  result = (struct DXGK_PRESENT_PARAMS *)ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 64);
  if ( !result )
  {
    ++*((_DWORD *)v1 + 6);
    return (struct DXGK_PRESENT_PARAMS *)(*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))v1 + 6))(
                                           *((unsigned int *)v1 + 9),
                                           *((unsigned int *)v1 + 11),
                                           *((unsigned int *)v1 + 10),
                                           v1);
  }
  return result;
}
