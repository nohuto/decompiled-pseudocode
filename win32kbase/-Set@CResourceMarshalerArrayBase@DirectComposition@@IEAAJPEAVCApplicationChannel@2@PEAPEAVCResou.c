__int64 __fastcall DirectComposition::CResourceMarshalerArrayBase::Set(
        DirectComposition::CResourceMarshalerArrayBase *a1,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned int v6; // ebx
  struct DirectComposition::CApplicationChannel *v8; // r10
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx

  v6 = 0;
  v8 = a2;
  v10 = 0LL;
  if ( a4 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a3 + 8 * v10);
      if ( !v11 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*(_DWORD *)(v11 + 36), a5) )
        return (unsigned int)-1073741811;
      v10 = v12 + 1;
      if ( v10 >= a4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    DirectComposition::CResourceMarshalerArrayBase::Clear(a1, v8);
    DirectComposition::CMarshaledArrayBase::Clear(a1);
    *((_QWORD *)a1 + 1) = a3;
    v13 = 0LL;
    for ( *((_QWORD *)a1 + 2) = a4; v13 < *((_QWORD *)a1 + 2); ++v13 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 1) + 8 * v13);
      if ( (*(_QWORD *)(v14 + 24))++ == -1LL )
        KeBugCheck(0xC01E0103);
    }
  }
  return v6;
}
