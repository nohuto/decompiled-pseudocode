__int64 __fastcall Normalization__GetSecondAndThirdDecomposedCharPlane0(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // edx
  __int64 v6; // rax
  unsigned __int16 v9; // r11
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int16 i; // r11
  unsigned __int16 v13; // cx
  unsigned int v14; // edx
  __int64 v15; // r8
  unsigned __int16 v16; // r11

  v5 = a2 % *(_DWORD *)(a1 + 56);
  v6 = *(_QWORD *)(a1 + 64);
  *a4 = 0;
  *a3 = 0;
  v9 = *(_WORD *)(v6 + 2LL * v5);
  result = 57344LL;
  if ( (v9 & 0xE000) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 72);
    for ( i = 2 * v9; ; i += 2 )
    {
      v13 = *(_WORD *)(v11 + 2LL * i);
      if ( !v13 || v13 == a2 )
        break;
    }
    result = i;
    v9 = *(_WORD *)(v11 + 2LL * i + 2);
  }
  v14 = v9 >> 13;
  if ( v14 > 1 )
  {
    v15 = *(_QWORD *)(a1 + 80);
    v16 = (v9 & 0x1FFF) + 1;
    result = v16;
    *a3 = *(unsigned __int16 *)(v15 + 2LL * v16);
    if ( v14 != 2 )
    {
      result = (unsigned __int16)(v16 + 1);
      *a4 = *(unsigned __int16 *)(v15 + 2 * result);
    }
  }
  return result;
}
