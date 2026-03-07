void __fastcall DirectComposition::CApplicationChannel::CMilCommandBatchParser::TranslateMilCommandBatchHandle(
        _QWORD *a1,
        int *a2,
        int a3,
        char a4,
        _DWORD *a5)
{
  int v5; // r9d
  _QWORD *v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r9
  _DWORD *v10; // r10

  if ( !a4 || *a2 )
  {
    v5 = *a2;
    v6 = (_QWORD *)*a1;
    v7 = (unsigned int)(*a2 - 1);
    if ( v5
      && v7 < v6[10]
      && (_mm_lfence(), (v8 = *(_QWORD *)(v6[11] * v7 + v6[7])) != 0)
      && DirectComposition::CResourceMarshaler::IsDerivedResourceType(*(_DWORD *)(v8 + 36), a3) )
    {
      *v10 = *(_DWORD *)(v9 + 32);
    }
    else
    {
      *a5 = -1073741811;
    }
  }
}
