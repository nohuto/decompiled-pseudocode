__int64 __fastcall WheapWmiRegisterInfo(__int64 a1, unsigned int a2, _DWORD *a3, int *a4)
{
  int v4; // edi
  __int64 v7; // r8
  int *v8; // rdx
  _DWORD *v9; // rcx
  int v10; // eax
  __int64 result; // rax

  v4 = 222;
  if ( a2 < 0xDE )
  {
    if ( a2 >= 4 )
    {
      *a3 = 222;
      v4 = 4;
    }
    result = 3221225507LL;
  }
  else
  {
    memset(a3, 0, 0xDEuLL);
    v7 = 5LL;
    v8 = &dword_140008DFC;
    a3[4] = 5;
    v9 = a3 + 11;
    do
    {
      *(_OWORD *)(v9 - 5) = *(_OWORD *)*(_QWORD *)(v8 - 3);
      v10 = *v8;
      v8 += 4;
      *(v9 - 1) = v10;
      *v9 = *(v8 - 5);
      v9[1] = 184;
      v9 += 8;
      --v7;
    }
    while ( v7 );
    *((_WORD *)a3 + 92) = 36;
    *(_OWORD *)((char *)a3 + 186) = *(_OWORD *)L"WHEA_WMI_PROVIDER";
    *(_OWORD *)((char *)a3 + 202) = *(_OWORD *)L"_PROVIDER";
    *(_DWORD *)((char *)a3 + 218) = *(_DWORD *)L"R";
    result = 0LL;
    *a3 = 222;
  }
  *a4 = v4;
  return result;
}
