/*
 * XREFs of MiDemotePfnListChain @ 0x140665964
 * Callers:
 *     MiPopLargePfnList @ 0x140349C1C (MiPopLargePfnList.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140386D90 (MiInitializeLargeMdlLeafPfns.c)
 *     MiMakeLargePageTable @ 0x140634BEC (MiMakeLargePageTable.c)
 *     MiFillUserPhysicalMdl @ 0x140647538 (MiFillUserPhysicalMdl.c)
 *     MiMapUserLargePages @ 0x1406667E0 (MiMapUserLargePages.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x14034D79C (MiUpdateLargePageBitMap.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDemotePfnListChain(__int64 a1, int a2)
{
  int v2; // r14d
  unsigned int i; // eax
  unsigned int j; // ebx
  __int64 result; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // r8
  char v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // r12
  volatile signed __int32 *v16; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v19; // rdx
  unsigned int v20; // ebp
  __int64 v21; // r15
  volatile signed __int32 **v22; // r14
  volatile signed __int32 *v23; // rax
  unsigned __int8 v24; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v26; // r9
  int v27; // eax
  bool v28; // zf
  unsigned __int64 v29; // [rsp+30h] [rbp-88h]
  unsigned __int64 v30; // [rsp+38h] [rbp-80h]
  int v31; // [rsp+C0h] [rbp+8h] BYREF
  int v32; // [rsp+C8h] [rbp+10h]
  unsigned int v33; // [rsp+D0h] [rbp+18h]
  unsigned int v34; // [rsp+D8h] [rbp+20h]

  v32 = a2;
  v2 = a2;
  for ( i = a2 - 1; ; i = v2 - 1 )
  {
    for ( j = i; ; --j )
    {
      result = 3LL * j;
      v7 = a1 + 24LL * j;
      v8 = *(volatile signed __int32 **)v7;
      if ( *(_QWORD *)v7 != v7 )
        break;
      if ( !j )
        return result;
    }
    --*(_QWORD *)(v7 + 16);
    v9 = *(_QWORD *)v8;
    if ( *((_QWORD *)v8 + 1) != v7 || *(volatile signed __int32 **)(v9 + 8) != v8 )
LABEL_40:
      __fastfail(3u);
    v10 = MiLargePageSizes[j];
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( j == 1 )
      MiUpdateLargePageBitMap(
        *(_QWORD *)(qword_140C67048 + 8 * ((*((_QWORD *)v8 + 5) >> 43) & 0x3FFLL)),
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(v8 + 0x88000000000LL) >> 4),
        v10,
        0,
        1);
    v11 = j + 1;
    v12 = MiLargePageSizes[v11];
    v34 = j + 1;
    v13 = 2 - j;
    v30 = v10 / v12;
    v33 = 2 - j;
    v14 = v10 / v12;
    v15 = (unsigned int)v11;
    v16 = &v8[12 * v10];
    v29 = v12;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v19) = 4;
      else
        v19 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v19;
    }
    v20 = 0;
    if ( v14 )
    {
      v21 = 48 * v12;
      v22 = (volatile signed __int32 **)(a1 + 24 * v15);
      do
      {
        v31 = 0;
        v16 = (volatile signed __int32 *)((char *)v16 - v21);
        if ( _interlockedbittestandset64(v16 + 6, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v31);
            while ( *((__int64 *)v16 + 3) < 0 );
          }
          while ( _interlockedbittestandset64(v16 + 6, 0x3FuLL) );
          v12 = v29;
          v14 = v30;
          v13 = v33;
        }
        if ( v12 == 1 )
          *((_QWORD *)v16 + 5) &= ~0x10000000000uLL;
        else
          *((_BYTE *)v16 + 36) ^= (*((_BYTE *)v16 + 36) ^ v13) & 3;
        if ( v16 != v8 )
        {
          *((_BYTE *)v16 + 34) = *((_BYTE *)v16 + 34) & 0xF8 | 5;
          *((_QWORD *)v16 + 2) = *((_QWORD *)v8 + 2);
        }
        _InterlockedAnd64((volatile signed __int64 *)v16 + 3, 0x7FFFFFFFFFFFFFFFuLL);
        v23 = *v22;
        if ( *((volatile signed __int32 ***)*v22 + 1) != v22 )
          goto LABEL_40;
        *(_QWORD *)v16 = v23;
        ++v20;
        *((_QWORD *)v16 + 1) = v22;
        *((_QWORD *)v23 + 1) = v16;
        *v22 = v16;
      }
      while ( v20 < v14 );
      v2 = v32;
      LODWORD(v11) = v34;
    }
    if ( KiIrqlFlags )
    {
      v24 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v26 = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v28 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v28 )
        {
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          v14 = v30;
        }
      }
    }
    __writecr8(CurrentIrql);
    result = 3 * v15;
    *(_QWORD *)(a1 + 24 * v15 + 16) += v14;
    if ( (_DWORD)v11 == v2 )
      break;
  }
  return result;
}
