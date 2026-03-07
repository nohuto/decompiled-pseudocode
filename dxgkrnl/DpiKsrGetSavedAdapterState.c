__int64 __fastcall DpiKsrGetSavedAdapterState(__int64 a1)
{
  _QWORD *v1; // rbx
  _DWORD *v2; // rdx
  _QWORD *v3; // r8
  _QWORD *v4; // r10
  _DWORD *v5; // r11
  __int64 v7; // rax
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax

  v1 = *(_QWORD **)(a1 + 64);
  if ( !DpiKsrIsSoftBoot() )
    return 3221225473LL;
  v7 = qword_1C013B9A0;
  *v3 = 0LL;
  v8 = 0;
  *v2 = 0;
  v9 = *(_DWORD *)(v7 + 4);
  v10 = v7 + 29;
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)v10 - v1[600];
      if ( *(_QWORD *)v10 == v1[600] )
        v11 = *(_QWORD *)(v10 + 8) - v1[601];
      if ( !v11 )
        break;
      ++v8;
      v10 += *(unsigned int *)(v10 + 28) + 32LL;
      if ( v8 >= v9 )
        return 0LL;
    }
    if ( !*(_BYTE *)(v10 + 24) )
    {
      v1[334] = *(_QWORD *)(v10 + 16);
      v12 = *(_DWORD *)(qword_1C013B9A0 + 8);
      if ( v12 >= *(_DWORD *)(qword_1C013B9A0 + 4) )
      {
        WdLogSingleEntry1(2LL, -1073741823LL);
        return 3221225473LL;
      }
      *(_DWORD *)(qword_1C013B9A0 + 8) = v12 + 1;
      *(_BYTE *)(v10 + 24) = 1;
    }
    *v4 = v10 + 32;
    *v5 = *(_DWORD *)(v10 + 28);
  }
  return 0LL;
}
