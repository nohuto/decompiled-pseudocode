/*
 * XREFs of KiSetSystemTimeDpc @ 0x140396560
 * Callers:
 *     <none>
 * Callees:
 *     KiSelectActiveTimerTable @ 0x1402521A0 (KiSelectActiveTimerTable.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAdjustTimerDueTimes @ 0x1403966F4 (KiAdjustTimerDueTimes.c)
 *     KiUpdateSystemTime @ 0x1403BB568 (KiUpdateSystemTime.c)
 *     KeAdjustInterruptTime @ 0x140569D74 (KeAdjustInterruptTime.c)
 */

char __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 active; // r14
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  _QWORD *v14; // rcx
  __int64 v15; // r9
  signed __int32 v16; // eax
  unsigned int v17; // edi
  signed __int32 v18; // eax
  unsigned int v19; // edi
  __int64 v21; // rax
  _DWORD v22[4]; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+88h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v23 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v23);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  active = KiSelectActiveTimerTable((__int64)CurrentPrcb, 1);
  if ( CurrentPrcb->ClockOwner )
  {
    v11 = MEMORY[0xFFFFF78000000014];
    **(_QWORD **)(a2 + 16) = MEMORY[0xFFFFF78000000014];
    v12 = *(_DWORD *)(a2 + 4);
    v13 = **(_QWORD **)(a2 + 8);
    v14 = *(_QWORD **)(a2 + 16);
    *(_QWORD *)(a2 + 24) = v13;
    v15 = v13 - *v14;
    *(_QWORD *)(a2 + 24) = v15;
    if ( (v12 & 1) != 0 )
    {
      LOBYTE(v11) = (v12 & 2) != 0;
      if ( (unsigned __int8)KeAdjustInterruptTime(v15, v11) )
      {
        v21 = -*(_QWORD *)(a2 + 24);
        *(_BYTE *)a2 = 1;
        *(_QWORD *)(a2 + 24) = v21;
      }
    }
    else
    {
      KiUpdateSystemTime(v15, 0LL, v12);
    }
  }
  v16 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v17 = ~v16 & 0x80000000;
  if ( (v16 & 0x7FFFFFFF) != 0 )
  {
    v24 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v17 )
      KeYieldProcessorEx(&v24);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v17;
  }
  if ( *(_QWORD *)(a2 + 24) )
  {
    if ( active )
      KiAdjustTimerDueTimes(CurrentPrcb, active, a2);
    v18 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v19 = ~v18 & 0x80000000;
    if ( (v18 & 0x7FFFFFFF) != 0 )
    {
      v22[0] = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v19 )
        KeYieldProcessorEx(v22);
    }
    else
    {
      *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v19;
    }
  }
  _InterlockedDecrement(a3);
  return KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, 2u);
}
