__int64 __fastcall ExpLimitInsertDpc(__int64 a1, unsigned int *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  unsigned int i; // edi
  __int64 result; // rax
  unsigned int v11; // edi
  int v12; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v13[9]; // [rsp+24h] [rbp-24h] BYREF
  int j; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v12 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v12);
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
    v11 = ~(_DWORD)result & 0x80000000;
    if ( (result & 0x7FFFFFFF) == 0 )
    {
LABEL_5:
      *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v11;
      goto LABEL_16;
    }
    v13[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v11 )
        break;
      KeYieldProcessorEx(v13);
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
    for ( i = 0; i < *a2; ++i )
      ExpLimitDpcInsertEntry((signed __int64 *)&a2[14 * i + 2]);
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
    v11 = ~(_DWORD)result & 0x80000000;
    if ( (result & 0x7FFFFFFF) == 0 )
      goto LABEL_5;
    for ( j = 0; ; KeYieldProcessorEx(&j) )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v11 )
        break;
    }
  }
LABEL_16:
  _InterlockedDecrement(a3);
  return result;
}
