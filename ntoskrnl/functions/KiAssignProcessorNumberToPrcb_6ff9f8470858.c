__int64 __fastcall KiAssignProcessorNumberToPrcb(__int64 a1, char *a2, int a3)
{
  __int64 v6; // rsi
  char v7; // dl
  int v8; // r8d
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int i; // r8d
  unsigned int v14; // r10d
  unsigned int j; // r9d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  bool v19; // cc
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0LL;
  KiFindSubNodeForProcessorNumber(a2, 0LL, 0LL, &v20);
  v6 = v20;
  *(_QWORD *)(a1 + 192) = v20;
  v7 = *a2;
  *(_BYTE *)(a1 + 208) = *a2;
  *(_BYTE *)(a1 + 209) = a2[2];
  v9 = KeForceGroupAwareness == (char)v8;
  *(_QWORD *)(a1 + 200) = (unsigned __int64)(unsigned int)(v8 + 1) << a2[2];
  if ( v9 )
  {
    if ( v7 )
      *(_BYTE *)(a1 + 4) = (unsigned __int8)a2[2] % KeQueryActiveProcessorCountEx(0);
    else
      *(_BYTE *)(a1 + 4) = a2[2];
  }
  else
  {
    v19 = *(_DWORD *)(a1 + 36) <= 0xFFu;
    *(_BYTE *)(a1 + 4) = *(_BYTE *)(a1 + 36);
    if ( !v19 )
      *(_BYTE *)(a1 + 4) = -1;
  }
  result = *(unsigned __int8 *)(a1 + 209);
  v11 = *(unsigned int *)(a1 + 36);
  v12 = (unsigned int)result + (*(unsigned __int8 *)(a1 + 208) << 6);
  KiProcessorIndexToNumberMappingTable[v11] = v12;
  KiProcessorNumberToIndexMappingTable[v12] = v11;
  for ( i = 0; i < 0xE; ++i )
  {
    v14 = KiHgsPlusConfiguration;
    for ( j = 0; j < v14; *(_QWORD *)(v16 + 8 * v18 + 16) |= result )
    {
      v16 = *(_QWORD *)(v6 + 192);
      v17 = j + i * *(unsigned __int8 *)(v6 + 185);
      v18 = 3 * v17;
      if ( !a3 )
      {
        *(_QWORD *)(v16 + 24 * v17) |= *(_QWORD *)(a1 + 200);
        *(_QWORD *)(v16 + 24 * v17 + 8) |= *(_QWORD *)(a1 + 200);
      }
      result = *(_QWORD *)(a1 + 200);
      ++j;
    }
  }
  return result;
}
