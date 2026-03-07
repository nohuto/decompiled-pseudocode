__int64 __fastcall MiMarkKernelPageTablePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v5 = v2;
  if ( (v2 & 1) != 0 && (v2 & 0x80u) == 0LL )
  {
    v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v5);
    PoSetHiberRange(0LL, 0x14000u, (PVOID)((v3 >> 12) & 0xFFFFFFFFFFLL), 1uLL, 0x706B6D4Du);
  }
  return 0LL;
}
