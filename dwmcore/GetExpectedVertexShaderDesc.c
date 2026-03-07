__int64 __fastcall GetExpectedVertexShaderDesc(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, char a5)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v10; // [rsp+40h] [rbp+18h]

  if ( a5 || (HIDWORD(v10) = 2, a4 > 2) )
    HIDWORD(v10) = 4;
  if ( *(_DWORD *)(a3 + 128) != -1 || (unsigned __int8)((__int64 (*)(void))HasLighting)() )
    goto LABEL_12;
  v7 = (_QWORD *)a2[1];
  v8 = &v7[*a2];
  while ( v7 != v8 )
  {
    if ( (unsigned __int8)HasLighting(*v7) )
      goto LABEL_12;
    ++v7;
  }
  LOBYTE(v10) = 0;
  if ( a5 )
LABEL_12:
    LOBYTE(v10) = 1;
  *(_WORD *)((char *)&v10 + 1) = *(_WORD *)(a3 + 153);
  BYTE3(v10) = *(_BYTE *)(a3 + 160);
  return v10;
}
