__int64 __fastcall DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
        DirectComposition::CApplicationChannel *a1,
        struct DirectComposition::CResourceMarshaler **a2,
        __int64 a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        _BYTE *a9)
{
  unsigned int v9; // edi
  __int64 i; // rax
  int v14; // ecx
  int v15; // eax

  v9 = 0;
  if ( a3 )
  {
    for ( i = *(unsigned int *)(a3 + 36); (unsigned int)i < 0xCE; LODWORD(i) = dword_1C02934F0[i] )
    {
      if ( (_DWORD)i == a5 )
        goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
LABEL_5:
  if ( (struct DirectComposition::CResourceMarshaler *)a3 != *a2 )
  {
    if ( a3 )
    {
      if ( (*(_QWORD *)(a3 + 24))++ == -1LL )
        KeBugCheck(0xC01E0103);
    }
    DirectComposition::CApplicationChannel::ReleaseResource(a1, *a2);
    *a2 = (struct DirectComposition::CResourceMarshaler *)a3;
    v14 = *a6;
    if ( a8 == 1 )
      v15 = v14 & ~a7;
    else
      v15 = a7 | v14;
    *a6 = v15;
    *a9 = 1;
  }
  return v9;
}
