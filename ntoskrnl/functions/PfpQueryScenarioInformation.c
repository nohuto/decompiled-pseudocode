__int64 __fastcall PfpQueryScenarioInformation(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int128 *v8; // rax
  unsigned __int64 v9; // rcx
  _OWORD *v10; // rax
  __int128 v12; // [rsp+20h] [rbp-28h]
  __int128 v13; // [rsp+30h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 24) == 32 )
  {
    v6 = 0;
    if ( a2 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( (v7 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v8 = *(__int128 **)(a1 + 16);
    v12 = *v8;
    v13 = v8[1];
    if ( (unsigned int)*v8 == 4 )
    {
      PfpScenCtxQueryScenarioInformation((ULONG_PTR)&qword_140C64C30);
      if ( a2 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( (v9 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v9 >= 0x7FFFFFFF0000LL )
          v9 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v9 = *(_BYTE *)v9;
        *(_BYTE *)(v9 + 31) = *(_BYTE *)(v9 + 31);
      }
      v10 = *(_OWORD **)(a1 + 16);
      *v10 = v12;
      v10[1] = v13;
      *a3 = 32;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v6;
}
