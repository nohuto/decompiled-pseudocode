__int64 __fastcall MiClearStackOwners(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  int v3; // ebx
  bool v4; // zf
  unsigned int v5; // edx
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rdi
  signed __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v2 = 1;
  v3 = -1;
  if ( (a2 & 1) != 0 )
  {
    v5 = 18;
  }
  else
  {
    v4 = (a2 & 8) == 0;
    v5 = 3;
    if ( v4 )
      v5 = (unsigned __int8)byte_140C6813C;
  }
  v6 = a1 - 8LL * v5;
  v7 = v6 + 8LL * (v5 + 1);
  v8 = v6 + 8;
  while ( v8 < v7 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v13 & 1) != 0 )
    {
      v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v13) >> 12) & 0xFFFFFFFFFFLL);
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 - 0x220000000000LL + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v14);
        while ( *(__int64 *)(v9 - 0x220000000000LL + 24) < 0 );
      }
      v10 = MI_READ_PTE_LOCK_FREE(v8);
      if ( v13 == v10 )
      {
        v11 = MiSearchNumaNodeTable(v9 / 48);
        if ( v3 == -1 )
        {
          v3 = *(_DWORD *)(v11 + 8);
        }
        else if ( v3 != *(_DWORD *)(v11 + 8) )
        {
          v2 = 0;
        }
        *(_QWORD *)(v9 - 0x220000000000LL) &= 0xFFFFF00000000001uLL;
        v8 += 8LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v9 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      v8 += 8LL;
    }
  }
  return v2;
}
