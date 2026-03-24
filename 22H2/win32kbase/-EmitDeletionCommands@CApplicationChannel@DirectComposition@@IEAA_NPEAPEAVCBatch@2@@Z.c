/*
 * XREFs of ?EmitDeletionCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005F2AC
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C005EE20 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitDeletionCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  _QWORD *i; // rbx
  char result; // al
  __int64 v6; // rax

  for ( i = (_QWORD *)*((_QWORD *)this + 53); ; i = (_QWORD *)*((_QWORD *)this + 53) )
  {
    if ( !i )
      return 1;
    *((_QWORD *)this + 53) = i[1];
    v6 = *i;
    i[1] = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v6 + 48))(i, a2) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*i + 32LL))(i) )
      ++*((_DWORD *)*a2 + 28);
    (*(void (__fastcall **)(_QWORD *, __int64))(*i + 80LL))(i, 1LL);
  }
  i[1] = *((_QWORD *)this + 53);
  result = 0;
  *((_QWORD *)this + 53) = i;
  return result;
}
