unsigned __int64 __fastcall PpmPerfResetHistory(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int *v2; // r9
  unsigned int v4; // r10d
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned __int8 v9; // di
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned __int8 v12; // si
  unsigned __int16 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  _UNKNOWN *retaddr; // [rsp+10h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = *(unsigned int **)(a1 + 32);
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(a1 + 40);
    v5 = *v2;
    v6 = 1;
    if ( (_WORD)v4 )
      v6 = v4;
    v7 = 100 * *(_DWORD *)(a1 + 52) / v6;
    v8 = v4;
    v9 = v7;
    if ( (unsigned __int8)v7 > 0x64u )
      v9 = 100;
    if ( !(_WORD)v4 )
      v8 = 1;
    v10 = 100 * *(_DWORD *)(a1 + 56);
    v2[1] = 0;
    v2[3] = 0;
    v11 = 0;
    v12 = v10 / v8;
    if ( v12 > 0x64u )
      v12 = 100;
    v2[2] = v5 * v4;
    v13 = *(_WORD *)(a1 + 62);
    v2[4] = v5 * v13;
    v2[5] = v5 * v9;
    result = v5 * v12;
    v2[6] = result;
    *(_OWORD *)(v2 + 7) = 0LL;
    if ( v5 )
    {
      do
      {
        v14 = v11++;
        v15 = 3 * v14;
        HIWORD(v2[v15 + 11]) = 0;
        LOWORD(v2[v15 + 12]) = v13;
        result = 0LL;
        LOWORD(v2[v15 + 11]) = v4;
        BYTE2(v2[v15 + 12]) = v9;
        HIBYTE(v2[v15 + 12]) = v12;
        v2[v15 + 13] = 0;
      }
      while ( v11 < *v2 );
    }
  }
  return result;
}
