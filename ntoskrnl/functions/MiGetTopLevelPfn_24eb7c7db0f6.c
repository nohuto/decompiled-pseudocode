__int64 __fastcall MiGetTopLevelPfn(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v11[2]; // [rsp+38h] [rbp-50h] BYREF

  v1 = 0;
  v2 = BugCheckParameter2;
  memset(v11, 0, sizeof(v11));
  v3 = 0;
  if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) != 0xAAAAAAAAAAAAAAABuLL
                                                                * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
  {
    do
    {
      v5 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL;
      v6 = v3;
      v2 = 48 * v5 - 0x220000000000LL;
      if ( ++v3 > 4 )
        KeBugCheckEx(0x1Au, 0x9696uLL, BugCheckParameter2, 0LL, 0LL);
      *((_QWORD *)v11 + v6) = v2;
      v10 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v10);
        while ( *(__int64 *)(v2 + 24) < 0 );
      }
    }
    while ( (*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL) != v5 );
  }
  v7 = (__int64 *)v11;
  do
  {
    v8 = *v7;
    if ( !*v7 )
      break;
    if ( v8 != v2 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++v1;
    ++v7;
  }
  while ( v1 < 4 );
  return v2;
}
