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
