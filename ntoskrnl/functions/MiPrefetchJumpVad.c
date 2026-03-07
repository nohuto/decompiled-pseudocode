__int64 __fastcall MiPrefetchJumpVad(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 result; // rax

  v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  if ( (*(_DWORD *)(a2 + 48) & 0x200000) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 48) & 0x70;
    if ( v7 != 48 && v7 != 16 && !MiIsVadLargePrivate(a2) )
    {
      v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v10 > (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
        v10 = ((((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL) + 4096;
      while ( v9 < v10 )
      {
        v11 = MI_READ_PTE_LOCK_FREE(v9);
        v9 += 8LL;
        if ( v11 )
        {
          if ( (v11 & 1) != 0 )
            goto LABEL_14;
          if ( (v11 & 0x400) != 0 )
            break;
          if ( (v11 & 0x800) != 0 )
          {
LABEL_14:
            MiUpdatePrefetchPriority(a1, a3, a2);
          }
          else if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v11) )
          {
            break;
          }
        }
        a3 += 4096LL;
      }
      v6 = (__int64)(v9 << 25) >> 16;
    }
  }
  else
  {
    result = *(unsigned int *)(a2 + 64);
    if ( (result & 0x1000000) == 0 )
      return result;
  }
  result = MiLeapPrefetch((_QWORD *)a1, v6);
  *(_BYTE *)(a1 + 1) = 1;
  return result;
}
