/*
 * XREFs of _lambda_609c7463f0af8f0b222c22162fb8f533_::operator() @ 0x1C0118824
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C011859C (UmfdLoadFontFileView.c)
 * Callees:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C01150C4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_609c7463f0af8f0b222c22162fb8f533_::operator()(__int64 a1, char a2, int a3)
{
  if ( !a2
    || MapFontFiles(
         **(_DWORD **)(a1 + 16),
         **(struct _FONTFILEVIEW ****)(a1 + 24),
         **(void ****)(a1 + 32),
         **(unsigned int ***)(a1 + 40)) )
  {
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, int))(**(_QWORD **)a1 + 3024LL))(
             **(unsigned int **)(a1 + 16),
             **(_QWORD **)(a1 + 24),
             **(_QWORD **)(a1 + 32),
             **(_QWORD **)(a1 + 40),
             **(_QWORD **)(a1 + 8),
             *(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 152LL),
             a3);
  }
  else
  {
    return 0LL;
  }
}
