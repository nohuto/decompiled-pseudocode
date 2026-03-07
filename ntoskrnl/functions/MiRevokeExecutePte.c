__int64 __fastcall MiRevokeExecutePte(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2 << 25 >> 16;
  if ( v4 <= 0x7FFFFFFEFFFFLL )
  {
    v7 = MI_READ_PTE_LOCK_FREE(a2);
    v5 = v7;
    if ( v7 >= 0 )
    {
      MI_READ_PTE_LOCK_FREE(&v7);
      if ( (MiGetPfnProtection(0xFFFFFFFFFFLL, v4) & 2) == 0 )
      {
        MiWriteValidPteNewProtection(a2, v5 | 0x8000000000000000uLL);
        MiInsertTbFlushEntry(*(_QWORD *)(a1 + 168), v4, 1LL);
      }
    }
  }
  return 0LL;
}
