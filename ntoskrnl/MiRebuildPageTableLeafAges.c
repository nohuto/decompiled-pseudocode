/*
 * XREFs of MiRebuildPageTableLeafAges @ 0x14032AD30
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiTerminateWsle @ 0x14032AAF0 (MiTerminateWsle.c)
 *     MiFreeWsleList @ 0x14032B2B0 (MiFreeWsleList.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 * Callees:
 *     MiCountWslesInPageTable @ 0x1402B4D30 (MiCountWslesInPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall MiRebuildPageTableLeafAges(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // rax
  char v7; // dl
  int v8; // ecx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v14[2]; // [rsp+28h] [rbp-30h] BYREF

  v3 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v4 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + ((v3 >> 3) & 0x1FF));
      v11 = v4 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v4;
      v4 = v11;
      if ( (v10 & 0x42) != 0 )
        v4 = v11 | 0x42;
    }
  }
  v13 = v4;
  v5 = (unsigned __int64 *)(48
                          * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13) >> 12) & 0xFFFFFFFFFFLL)
                          - 0x220000000000LL);
  v6 = (unsigned __int64)*(unsigned int *)v5 >> 4;
  if ( (v6 & 0x3FF) == 0 )
  {
    MiCountWslesInPageTable(0xFFFFFFFFFFLL, a2, v14);
    LOBYTE(v6) = 8;
    while ( 1 )
    {
      LOBYTE(v6) = v6 - 1;
      v7 = v6;
      v8 = *((_DWORD *)v14 + (unsigned __int8)v6);
      if ( v8 )
        break;
      if ( !(_BYTE)v6 )
        return v6;
    }
    v6 = *v5 & 0xFFFFFFFFFFFE000FuLL;
    *v5 = v6 | (16 * (((unsigned __int64)(v7 & 7) << 10) | v8 & 0x3FF));
  }
  return v6;
}
