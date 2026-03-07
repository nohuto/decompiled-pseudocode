__int64 __fastcall MiFillUserPhysicalMdl(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v7; // rbx
  __int64 *v8; // rsi
  __int64 *i; // rdx
  _QWORD *v10; // r14
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  __int64 j; // rbx
  char v16; // al
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  v7 = a2;
  do
  {
    while ( (_QWORD *)*v7 != v7 )
      MiDemotePfnListChain(a2, 2LL);
    ++v3;
    v7 += 3;
  }
  while ( v3 < 2 );
  v8 = a2 + 6;
  for ( i = (__int64 *)*v8; i != v8; i = (__int64 *)*i )
  {
    if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(i + 0x44000000000LL) >> 4) + 16 > a3 )
      return 3221225485LL;
  }
  *(_WORD *)(a1 + 10) |= 2u;
  v10 = (_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v13 = 4;
    if ( CurrentIrql != 2 )
      v13 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v13;
  }
  for ( j = *v8; (__int64 *)j != v8; j = *(_QWORD *)j )
  {
    v22 = 0;
    *v10++ = 0xAAAAAAAAAAAAAAABuLL * ((j + 0x220000000000LL) >> 4);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(j + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22);
      while ( *(__int64 *)(j + 24) < 0 );
    }
    v16 = *(_BYTE *)(j + 34);
    *(_QWORD *)(j + 8) = 0LL;
    *(_BYTE *)(j + 34) = v16 & 0xF8 | 6;
    MiSetPfnIdentity(j, 1);
    *(_QWORD *)(j + 40) = *(_QWORD *)(j + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
