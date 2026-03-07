__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpDummyPageRecordAllocate(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = SmHpChunkAlloc(a1 + 192);
  v3 = 0;
  *(_QWORD *)(a1 + 760) = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(a1 + 768) = (*(_DWORD *)((*(_QWORD *)(a1 + 760) & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456))
                          + ((unsigned int)*(_QWORD *)(a1 + 760)
                           - *(_DWORD *)(a1 + 472)
                           - (*(_QWORD *)(a1 + 760) & 0xFFFFF000))
                          / *(_DWORD *)(a1 + 464);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
