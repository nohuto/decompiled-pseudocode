__int64 __fastcall HalpDmaLinkContiguousTranslations(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rax
  _QWORD *v5; // r10
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  v4 = HalpDmaIndexToTranslationEntry(a1, a2, &v14);
  v5 = (_QWORD *)v14;
  v6 = v4;
  v7 = 0LL;
  v8 = *(_QWORD *)(v14 + 16);
  v9 = *(_DWORD *)(v14 + 8);
  v10 = (v4 - v8) / 72;
  v11 = v8 + 72LL * (unsigned int)v10;
  if ( a3 )
  {
    v12 = a3;
    do
    {
      if ( (unsigned int)v10 >= v9 )
      {
        LODWORD(v10) = 0;
        v5 = (_QWORD *)*v5;
        v11 = v5[2];
      }
      if ( v7 )
        *(_QWORD *)(v7 + 8) = v11;
      v7 = v11;
      LODWORD(v10) = v10 + 1;
      v11 += 72LL;
      --v12;
    }
    while ( v12 );
  }
  return v6;
}
