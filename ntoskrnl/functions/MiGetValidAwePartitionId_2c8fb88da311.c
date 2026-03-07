__int64 __fastcall MiGetValidAwePartitionId(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  v1 = a1;
  if ( (a1 & 1) != 0 )
  {
    v1 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v5);
  }
  else if ( qword_140C657C0 && (a1 & 0x10) == 0 )
  {
    v1 = a1 & ~qword_140C657C0;
  }
  v2 = (v1 >> 12) & 0xFFFFFFFFFFLL;
  if ( v2 <= qword_140C65820 && ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    return (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF;
  else
    return 0;
}
