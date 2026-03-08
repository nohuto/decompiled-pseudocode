/*
 * XREFs of MiGetPhysicalAddress @ 0x14030C890
 * Callers:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     RtlMarkHiberPhase @ 0x1405B232C (RtlMarkHiberPhase.c)
 * Callees:
 *     MiQueuePinDriverAddressLog @ 0x14030C9F8 (MiQueuePinDriverAddressLog.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiFillPteHierarchy @ 0x140333AE0 (MiFillPteHierarchy.c)
 *     MiVaToPfnEx @ 0x140384AD0 (MiVaToPfnEx.c)
 *     MiSetNonPagedPoolNoSteal @ 0x14063F4B8 (MiSetNonPagedPoolNoSteal.c)
 */

__int64 __fastcall MiGetPhysicalAddress(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  int SystemRegionType; // edi
  unsigned __int64 v17; // rdi
  bool v18; // zf
  unsigned __int64 v19; // rdi
  unsigned int v20; // esi
  __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rax
  __int64 v23; // rax
  char v24; // r9
  __int64 v25; // rax
  __int64 v26; // [rsp+18h] [rbp-40h]
  _OWORD v27[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  memset(v27, 0, 32);
  MiFillPteHierarchy(a1, v27);
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  v10 = v6;
  if ( v6 )
  {
    v17 = MiVaToPfnEx(a1, v7, v8, v9);
    v18 = (MI_READ_PTE_LOCK_FREE(*((_QWORD *)v27 + v10)) & 0x800) == 0;
  }
  else
  {
    v11 = 4LL;
    do
    {
      v12 = *(&v26 + v11--);
      v13 = *(_QWORD *)v12;
      if ( v12 >= 0xFFFFF6FB7DBED000uLL
        && v12 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v13 & 1) == 0 )
          return 0LL;
        if ( (v13 & 0x20) == 0 || (v13 & 0x42) == 0 )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v23 = *((_QWORD *)&Flink->Flink + ((v12 >> 3) & 0x1FF));
            v24 = v13 | 0x20;
            if ( (v23 & 0x20) == 0 )
              v24 = v13;
            LOBYTE(v13) = v24;
            if ( (v23 & 0x42) != 0 )
              LOBYTE(v13) = v24 | 0x42;
          }
        }
      }
      if ( (v13 & 1) == 0 )
        return 0LL;
    }
    while ( v11 != 1 );
    v28 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)&v27[0]);
    v14 = v28;
    SystemRegionType = MiGetSystemRegionType(a1);
    if ( SystemRegionType == 12 )
      MiQueuePinDriverAddressLog(a1, v14, 0LL);
    if ( (v14 & 1) == 0 )
      return 0LL;
    if ( SystemRegionType == 5 )
    {
      MiSetNonPagedPoolNoSteal(*(_QWORD *)&v27[0], v15);
      v25 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)&v27[0]);
      LOWORD(v14) = v25;
      v28 = v25;
    }
    v17 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFFLL;
    v18 = (v14 & 0x800) == 0;
  }
  if ( !v18 )
    *a3 = 1;
  v19 = v17 << 12;
  v20 = v19 + (a1 & 0xFFF);
  v28 = __PAIR64__(HIDWORD(v19), v20);
  result = 1LL;
  *a2 = __PAIR64__(HIDWORD(v19), v20);
  return result;
}
