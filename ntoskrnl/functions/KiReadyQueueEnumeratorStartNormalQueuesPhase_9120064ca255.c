__int64 __fastcall KiReadyQueueEnumeratorStartNormalQueuesPhase(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  char v9; // cl
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v13; // r10
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  int v16; // r9d
  unsigned __int8 v17; // cl
  __int64 *v18; // rdx
  __int64 v19; // r11
  __int64 v20; // r10
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // edi
  char v24; // r11

  v2 = *(_DWORD *)a1;
  *(_DWORD *)(a1 + 4) = 0;
  v5 = 0;
  if ( v2 )
  {
    v6 = a1 + 92;
    v7 = v2;
    do
    {
      v8 = *(_DWORD *)(v6 - 4) | v5;
      v6 += 48LL;
      *(_DWORD *)(a1 + 4) = v8;
      v5 = *(_DWORD *)(v6 - 48) | v8;
      *(_DWORD *)(a1 + 4) = v5;
      --v7;
    }
    while ( v7 );
  }
  v9 = v5;
  v10 = v5 & 0xFFFFFFFE;
  v11 = v9 & 1;
  if ( a2 )
    v10 = v11;
  *(_DWORD *)(a1 + 4) = v10;
  if ( !v10 )
    return 2147483674LL;
  v13 = *(unsigned __int8 *)(a1 + 9);
  _BitScanReverse(&v14, v10);
  *(_BYTE *)(a1 + 10) = v13;
  *(_BYTE *)(a1 + 8) = v14;
  v15 = (unsigned __int8)v14;
  v16 = 1 << v14;
  if ( ((*(_DWORD *)(a1 + 48 * v13 + 88) | *(_DWORD *)(a1 + 48 * v13 + 92)) & (1 << v14)) == 0 )
  {
    v23 = *(_DWORD *)a1;
    do
    {
      LOBYTE(v13) = v13 + 1;
      v24 = v13;
      *(_BYTE *)(a1 + 10) = v13;
      if ( (unsigned __int8)v13 >= v23 )
      {
        LOBYTE(v13) = 0;
        *(_BYTE *)(a1 + 10) = 0;
        v24 = 0;
      }
    }
    while ( ((*(_DWORD *)(a1 + 48LL * (unsigned __int8)v13 + 88) | *(_DWORD *)(a1 + 48LL * (unsigned __int8)v13 + 92)) & v16) == 0 );
    LOBYTE(v13) = v24;
  }
  v17 = 0;
  v18 = (__int64 *)(a1 + 48 * ((unsigned __int8)v13 + 1LL));
  v19 = *v18;
  v20 = v18[1];
  *(_BYTE *)(a1 + 11) = 0;
  if ( (v16 & (_DWORD)v18[5]) != 0 )
  {
    *(_BYTE *)(a1 + 11) = 1;
    v17 = 1;
  }
  if ( (v16 & *((_DWORD *)v18 + 11)) != 0 )
  {
    v17 |= 2u;
    *(_BYTE *)(a1 + 11) = v17;
  }
  if ( ((unsigned __int8)(v17 - 1) & v17) != 0 )
    LOBYTE(v21) = !_bittest((const signed __int32 *)(v19 + 32476), v15);
  else
    _BitScanForward((unsigned int *)&v21, v17);
  *(_BYTE *)(a1 + 12) = v21;
  if ( !(_BYTE)v21 )
  {
    v22 = v19 + 16 * (*(unsigned __int8 *)(a1 + 8) + 2036LL);
    goto LABEL_18;
  }
  if ( (unsigned __int8)v21 == 1 )
  {
    v22 = v20 + 16 * (*(unsigned __int8 *)(a1 + 8) + 1LL);
LABEL_18:
    *(_QWORD *)(a1 + 32) = v22;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 32);
  return 0LL;
}
