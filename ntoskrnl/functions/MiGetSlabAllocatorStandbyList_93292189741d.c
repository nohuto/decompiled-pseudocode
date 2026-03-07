__int64 __fastcall MiGetSlabAllocatorStandbyList(__int64 a1, char a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( (a2 & 1) != 0 )
  {
    v7 = a1;
    v4 = *(_QWORD *)(a1 + 40);
    v9 = 0LL;
    v8 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    v5 = *(_QWORD *)(qword_140C67048 + 8 * ((v4 >> 43) & 0x3FF));
    v6 = MiSearchNumaNodeTable(v8);
    MiEnumerateSlabAllocators(
      v5,
      (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiGetSlabStandbyListWorker,
      (__int64)&v7,
      *((_DWORD *)v6 + 2));
    return v9;
  }
  else
  {
    v2 = *(_QWORD *)a1 & 0xFFFFFF0000000000uLL | (*(_QWORD *)(a1 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(a1 + 36) & 0x1FFFFF) << 19);
    if ( (a2 & 2) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 136));
    return *(_QWORD *)(v2 + 40) + 112LL;
  }
}
