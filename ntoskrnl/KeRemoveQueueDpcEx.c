char __fastcall KeRemoveQueueDpcEx(__int64 a1, char a2)
{
  __int16 v4; // si
  char v5; // r15
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 v7; // r12
  bool v8; // si
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v10; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned __int16 v14; // ax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 *v18; // rdx
  _QWORD *v19; // rcx
  __int64 *i; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  struct _KPRCB *v26; // rax
  __int64 Group; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  int v31; // [rsp+20h] [rbp-2C8h] BYREF
  unsigned __int16 *v32[2]; // [rsp+28h] [rbp-2C0h] BYREF
  __int16 v33; // [rsp+38h] [rbp-2B0h]
  int v34; // [rsp+3Ah] [rbp-2AEh]
  __int16 v35; // [rsp+3Eh] [rbp-2AAh]
  __int128 v36; // [rsp+40h] [rbp-2A8h]
  __int128 v37; // [rsp+50h] [rbp-298h]
  __int128 v38; // [rsp+60h] [rbp-288h]
  __int64 v39; // [rsp+70h] [rbp-278h]
  int v40; // [rsp+78h] [rbp-270h]
  _QWORD v41[34]; // [rsp+80h] [rbp-268h] BYREF
  _DWORD v42[68]; // [rsp+190h] [rbp-158h] BYREF
  int v43; // [rsp+2E0h] [rbp-8h]

  v39 = 0LL;
  v40 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  memset(&v42[2], 0, 0x100uLL);
  v34 = 0;
  v35 = 0;
  v31 = 0;
  memset(&v41[1], 0, 0x100uLL);
  v4 = v43;
  v5 = 0;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = (v4 & 0x200) != 0;
  if ( v7 )
  {
    LODWORD(v36) = *(_DWORD *)a1;
    v14 = WORD1(v36) - 2048;
    if ( WORD1(v36) < 0x800u )
      v14 = WORD1(v36);
    v15 = KiProcessorBlock[v14];
    if ( (_BYTE)v36 != 26 || (v16 = 13168LL, !*(_BYTE *)(v15 + 13240)) )
      v16 = 13120LL;
    v17 = v15 + v16;
    KxAcquireSpinLock((PKSPIN_LOCK)(v15 + v16 + 16));
    if ( v7 == *(_QWORD *)(a1 + 56) && (_DWORD)v36 == *(_DWORD *)a1 )
    {
      v18 = (__int64 *)(a1 + 8);
      v19 = (_QWORD *)v17;
      --*(_DWORD *)(v17 + 24);
      for ( i = *(__int64 **)v17; i != v18; i = (__int64 *)*i )
        v19 = i;
      v21 = *v18;
      *v19 = *v18;
      if ( !v21 )
        *(_QWORD *)(v17 + 8) = v19;
      *(_QWORD *)(a1 + 56) = 0LL;
      v5 = 1;
      v22 = *(_QWORD *)(v15 + 35000);
      if ( v22 && v17 == v15 + 13120 )
        _InterlockedDecrement((volatile signed __int32 *)(v22 + 28));
    }
    KxReleaseSpinLock((volatile signed __int64 *)(v17 + 16));
  }
  if ( v8 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      _m_prefetchw(v10);
      v12 = *v10;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(v10, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  if ( a2 && *(_QWORD *)(a1 + 16) )
  {
    v42[0] = 2097153;
    memset(&v42[1], 0, 0x104uLL);
    LODWORD(v41[0]) = 2097153;
    memset((char *)v41 + 4, 0, 0x104uLL);
    KiGetDeepIdleProcessors(v42, v41);
    v23 = 0;
    if ( LOWORD(v41[0]) )
    {
      v24 = *(_QWORD *)(a1 + 16);
      do
      {
        v25 = v23++;
        v41[v25 + 1] &= v24;
      }
      while ( v23 < LOWORD(v41[0]) );
    }
    v26 = KeGetCurrentPrcb();
    Group = v26->Group;
    if ( LOWORD(v41[0]) > (unsigned __int16)Group )
      v41[Group + 1] &= ~v26->GroupSetMember;
    v32[1] = (unsigned __int16 *)v41[1];
    v32[0] = (unsigned __int16 *)v41;
    v33 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v31, v32) )
    {
      v28 = KiProcessorBlock[v31];
      if ( *(_BYTE *)a1 != 26 || (v29 = 13168LL, !*(_BYTE *)(v28 + 13240)) )
        v29 = 13120LL;
      v30 = v28 + v29;
      if ( !v7 )
        KiAcquireReleaseDpcData(v28 + v29);
      if ( *(_QWORD *)(v30 + 32) != a1 && (unsigned int)LOWORD(v41[0]) > *(unsigned __int8 *)(v28 + 208) )
        v41[*(unsigned __int8 *)(v28 + 208) + 1] &= ~*(_QWORD *)(v28 + 200);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v41) )
      KeGenericProcessorCallback(v41, xHalTimerWatchdogStop, 0LL, 2LL);
  }
  return v5;
}
