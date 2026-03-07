__int64 __fastcall RtlpMuiRegValidatePartialLanguage(__int64 a1, int a2)
{
  __int64 v3; // r9
  int v4; // edi
  char v5; // r15
  _WORD *v6; // rbx
  int v7; // esi
  __int16 *v8; // r14
  unsigned __int16 v9; // r12
  unsigned __int8 v10; // dl
  int v11; // r8d
  __int64 v12; // rbp
  __int16 v13; // r8
  __int16 v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * a2);
  v7 = 0;
  v8 = v6 + 6;
  do
  {
    v9 = v6[4];
    v10 = (v9 >> (2 * v5)) & 3;
    if ( v10 )
    {
      v11 = *v8;
      if ( v10 == 2 )
      {
        if ( v11 == a2 )
          v6[4] = v9 & ~(3 << v7);
        else
          ++v4;
      }
      else
      {
        v12 = *(_QWORD *)(v3 + 24);
        v16 = -1;
        if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v12, v10, v11, &v16) < 0 )
        {
          ++v4;
        }
        else
        {
          v13 = v16;
          if ( v16 >= 0 && v16 < (int)*(unsigned __int16 *)(v12 + 6) && v16 != a2 )
          {
            ++v4;
            if ( (*(_BYTE *)(28LL * v16 + *(_QWORD *)(v12 + 16)) & 1) != 0 )
            {
              v6[4] = (2 << v7) | v9 & ~(3 << v7);
              *v8 = v13;
            }
          }
        }
        v3 = a1;
      }
    }
    ++v5;
    ++v8;
    v7 += 2;
  }
  while ( v7 < 8 );
  if ( v4 >= 1 )
    return 0LL;
  *v6 |= 0x1000u;
  return 3221225473LL;
}
