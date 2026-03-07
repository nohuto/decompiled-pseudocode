__int64 __fastcall VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdi
  unsigned int v6; // ecx
  void *v7; // rcx

  v5 = operator new[](a3, 0x32356956u, 256LL);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 40992);
    if ( v6 == dword_1C007645C )
    {
      *(_DWORD *)(a1 + 40992) = 0;
      v6 = 0;
    }
    v7 = *(void **)(*(_QWORD *)(a1 + 40984) + 24LL * v6 + 16);
    if ( v7 )
      operator delete(v7);
    KeQuerySystemTimePrecise(*(_QWORD *)(a1 + 40984) + 24LL * *(unsigned int *)(a1 + 40992));
    *(_QWORD *)(*(_QWORD *)(a1 + 40984) + 24LL * *(unsigned int *)(a1 + 40992) + 16) = v5;
    *(_DWORD *)(*(_QWORD *)(a1 + 40984) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 40992))++ + 8) = a2;
  }
  return v5;
}
