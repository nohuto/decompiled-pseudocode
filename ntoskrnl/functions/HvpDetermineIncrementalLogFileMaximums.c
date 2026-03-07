__int64 __fastcall HvpDetermineIncrementalLogFileMaximums(__int64 a1, int a2, _DWORD *a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // rax
  int v6; // edi
  int v7; // esi
  int v8; // ebp
  unsigned int v11; // ebx
  __int64 result; // rax
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v18 = 0LL;
  v7 = 0;
  v16 = v5;
  v8 = 0;
  v17 = *(_QWORD *)(a1 + 16);
  v15[0] = 512;
  v11 = 0;
  v15[1] = a2;
  while ( 1 )
  {
    result = HvpIncrementalLogFileEnumeratorAdvance(v15, &v18);
    if ( (_DWORD)result == -2147483622 )
      break;
    if ( (int)result < 0 )
      return result;
    ++v6;
    v8 = v15[0];
    v13 = *(_DWORD *)(v18 + 16);
    v7 = *(_DWORD *)(v18 + 12);
    if ( v13 <= v11 )
      v13 = v11;
    v11 = v13;
  }
  if ( !v6 )
    return 2147483682LL;
  v14 = a5;
  *a4 = v11;
  *a3 = v7;
  *v14 = v8;
  return 0LL;
}
