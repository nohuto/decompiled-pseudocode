void __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandleArray(
        _QWORD *a1,
        int *a2,
        int a3,
        int a4,
        char a5,
        _DWORD *a6)
{
  int *v7; // r11
  unsigned __int64 v9; // rbx

  v7 = a2;
  v9 = (unsigned __int64)&a2[a3];
  if ( (unsigned __int64)a2 < v9 )
  {
    do
      DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(a1, v7, a4, a5, a6);
    while ( (unsigned __int64)v7 < v9 );
  }
}
