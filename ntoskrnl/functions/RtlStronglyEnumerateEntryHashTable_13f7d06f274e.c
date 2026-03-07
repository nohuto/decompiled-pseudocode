_QWORD *__fastcall RtlStronglyEnumerateEntryHashTable(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // r11d
  unsigned int v6; // r8d
  unsigned int i; // r10d
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r9d
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  _QWORD *v13; // rdx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a2 + 32);
  v4 = *(_DWORD *)(a1 + 8);
  v6 = v2;
  if ( v2 >= v4 )
    return 0LL;
  for ( i = v2 + 128; ; ++i )
  {
    if ( v6 == v2 )
    {
      v12 = *(_QWORD **)a2;
      v11 = *(_QWORD **)(a2 + 24);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 32);
      if ( v4 <= 0x80 )
      {
        v10 = v6;
      }
      else
      {
        _BitScanReverse(&v9, i);
        v10 = i ^ (1 << v9);
        v8 = *(_QWORD *)(v8 + 8LL * (v9 - 7));
      }
      v11 = (_QWORD *)(v8 + 16LL * v10);
      v12 = v11;
    }
    v13 = (_QWORD *)*v12;
    if ( v13 != v11 )
      break;
LABEL_8:
    if ( ++v6 >= v4 )
      return 0LL;
  }
  while ( !v13[2] )
  {
    v13 = (_QWORD *)*v13;
    if ( v13 == v11 )
      goto LABEL_8;
  }
  *(_QWORD *)(a2 + 24) = v11;
  result = v13;
  *(_DWORD *)(a2 + 32) = v6;
  *(_QWORD *)a2 = v13;
  return result;
}
