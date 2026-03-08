/*
 * XREFs of MiFilterCrashDumpPte @ 0x14062D5F0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPageSecured @ 0x1402A27F0 (MiIsPageSecured.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiFilterCrashDumpPte(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // rdi
  __int64 v7; // r14
  unsigned __int64 LeafVa; // rax
  int SystemRegionType; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(__int64 **)(a1 + 168);
  v7 = *v3;
  if ( a3 == 3 && (*(_DWORD *)a1 & 0x10800) != 0 )
  {
    LeafVa = MiGetLeafVa(a2);
    SystemRegionType = MiGetSystemRegionType(LeafVa);
    if ( *((_DWORD *)v3 + 3) )
    {
      if ( SystemRegionType == 1 )
        return 1LL;
    }
    if ( SystemRegionType == 8 || (*(_DWORD *)(v7 + 40) & 4) != 0 && SystemRegionType == 4 )
      return 1LL;
  }
  v10 = MI_READ_PTE_LOCK_FREE(a2);
  v23 = v10;
  if ( a3 )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL;
      if ( v11 <= qword_140C65820 && ((*(_QWORD *)(48 * v11 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        if ( (v10 & 0x80u) != 0LL )
        {
          MiGetLeafVa(a2);
          v13 = MiGetLeafVa(a2 + 8) - 1;
          v11 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
          if ( v14 >= v11 )
            v11 = v14;
          v15 = 1LL;
          v16 = ((*(_QWORD *)(a1 + 88) << 25) | 0xFFF0000LL) >> 16;
          if ( v13 <= v16 )
            v16 = v13;
          v12 = (v16 - v11 + 1) >> 12;
          goto LABEL_39;
        }
        v12 = 1LL;
LABEL_38:
        v15 = 2LL;
LABEL_39:
        v22 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, unsigned __int64, __int64))v7)(v7, v11, v12, v15);
        if ( v22 < 0 && *((int *)v3 + 2) >= 0 )
          *((_DWORD *)v3 + 2) = v22;
        return 0LL;
      }
      return 1LL;
    }
  }
  else
  {
    if ( (v10 & 1) != 0 )
    {
      v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v23);
    }
    else
    {
      if ( (v10 & 0x400) != 0 || (v10 & 0x800) == 0 )
        return 0LL;
      if ( qword_140C657C0 )
      {
        if ( (v10 & 0x10) != 0 )
          v10 &= ~0x10uLL;
        else
          v10 &= ~qword_140C657C0;
      }
    }
    v18 = (v10 >> 12) & 0xFFFFFFFFFFLL;
    v19 = (__int64)(a2 << 25) >> 16;
    if ( v18 <= qword_140C65820 && ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
    {
      v20 = 48 * v18 - 0x220000000000LL;
      if ( !(unsigned int)MiIsPageSecured(v20) )
      {
        if ( (unsigned int)MiGetSystemRegionType(v19) != 9
          || (v21 = *(_QWORD *)(v20 + 8) | 0x8000000000000000uLL, v21 > 0xFFFFF6BFFFFFFF78uLL)
          || v21 < 0xFFFFF68000000000uLL
          || (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
          && (*(_BYTE *)(v20 + 34) & 7) == 6
          && (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
        {
          v12 = 1LL;
          v11 = v18;
          goto LABEL_38;
        }
      }
    }
  }
  return 0LL;
}
