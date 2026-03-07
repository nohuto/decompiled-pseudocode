__int64 __fastcall MinAsn1ParseCertificate(int a1, int a2, __int64 a3)
{
  int Values; // ecx
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 20;
  Values = MinAsn1ExtractValues(a1, a2, (unsigned int)&v8, (unsigned int)&qword_14000B560, 15, a3);
  if ( Values > 0 )
  {
    v5 = *(_DWORD *)(a3 + 192);
    Values = *(_DWORD *)(a3 + 16);
    if ( v5 )
    {
      ++*(_QWORD *)(a3 + 200);
      *(_DWORD *)(a3 + 192) = v5 - 1;
    }
    v6 = *(_DWORD *)(a3 + 208);
    if ( v6 )
    {
      ++*(_QWORD *)(a3 + 216);
      *(_DWORD *)(a3 + 208) = v6 - 1;
    }
  }
  return (unsigned int)Values;
}
