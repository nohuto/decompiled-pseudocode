char __fastcall KiComputeEffectivePriority(__int64 a1, char a2, unsigned __int64 a3, char a4)
{
  int v5; // ebp
  unsigned int v6; // eax
  char v7; // bl
  char v8; // si
  unsigned __int8 v9; // dl
  char v10; // al
  unsigned int v11; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v13; // eax
  __int64 v14; // r8
  char v16; // r10
  int v17; // r11d
  int v18; // ecx
  int v19; // r9d
  char v20; // dl
  unsigned __int8 v21; // dl
  char v22; // r8
  char v23; // cl
  char v24; // dl
  struct _SINGLE_LIST_ENTRY *v25; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8

  v5 = a2;
  if ( *(char *)(a1 + 195) < 16 )
  {
    v6 = MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a1 + 436);
    if ( a3 < *(_QWORD *)(a1 + 32) )
    {
      v7 = 0;
      if ( *(char *)(a1 + 563) < 14 && (v6 < 2 || *(_BYTE *)(a1 + 564)) )
        goto LABEL_18;
    }
    else
    {
      v7 = 4;
      if ( v6 < 2 )
        v7 = 5;
    }
    v7 |= 8u;
    v8 = *(_BYTE *)(a1 + 195);
    if ( v8 < 16 )
    {
      if ( (KiVelocityFlags & 0x8000) != 0
        && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2
        && (v21 = *(_BYTE *)(a1 + 564), v22 = v21 & 0xF, (v21 & 0xF) != 0 && (*(_DWORD *)(a1 + 120) & 8) == 0) )
      {
        *(_BYTE *)(a1 + 564) = v22;
        v23 = *(_BYTE *)(a1 + 563) + v22;
        v24 = -1 - (v21 >> 4) + v8;
        if ( v24 >= v23 )
          v23 = v24;
        v8 = v23;
      }
      else
      {
        v9 = *(_BYTE *)(a1 + 564);
        v10 = *(_BYTE *)(a1 + 563);
        if ( (char)(-1 - (v9 >> 4) - (v9 & 0xF) + v8) >= v10 )
          v10 = -1 - (v9 >> 4) - (v9 & 0xF) + v8;
        v8 = v10;
        if ( v9 )
        {
          if ( (v9 & 0xF) != 0 )
            *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
          *(_BYTE *)(a1 + 564) = 0;
        }
      }
    }
    v11 = *(_DWORD *)(a1 + 856);
    if ( v11 )
    {
      _BitScanReverse(&v11, v11);
      if ( v8 < (char)v11 )
        v8 = v11;
    }
    if ( !a4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v8 > *(char *)(a1 + 195) )
      {
        if ( *(_BYTE *)(a1 + 793) )
        {
          v25 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
          if ( *(_QWORD *)(a1 + 808) == 1LL )
          {
            p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
            if ( CurrentPrcb != (struct _KPRCB *)-35704LL )
            {
              v25->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = v25;
              _InterlockedIncrement16((volatile signed __int16 *)(a1 + 868));
              KiAbQueueAutoBoostDpc(CurrentPrcb);
            }
          }
        }
      }
      *(_BYTE *)(a1 + 195) = v8;
      v13 = KiComputeHeteroThreadQos(a1, 0LL);
      if ( v13 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
        KiSetThreadQosLevelUnsafe(a1, v13);
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 )
      {
        LOBYTE(v14) = 1;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v14);
      }
    }
LABEL_18:
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 )
      v7 |= 2u;
    if ( (v7 & 1) == 0 && (*(_DWORD *)(a1 + 120) & 8) == 0 && *(char *)(a1 + 195) > 0 )
    {
      v16 = *(_BYTE *)(a1 + 564);
      if ( !v16 )
      {
        v17 = *(char *)(a1 + 563);
        v18 = v17 + v5;
        v19 = v17 + v5;
        if ( (v7 & 2) == 0 )
        {
LABEL_27:
          if ( v19 >= 16 )
            v19 = 15;
          if ( v19 > *(char *)(a1 + 195) )
          {
            v20 = 0;
            if ( v19 > v18 )
              v20 = v19 - v17 - v5;
            *(_BYTE *)(a1 + 564) = v16 ^ (v20 ^ v16) & 0xF;
            KiUpdateThreadPriority(0, v20, a1, v19, 0);
          }
          return (v7 & 8) != 0;
        }
LABEL_48:
        v19 += (char)PsPrioritySeparation;
        goto LABEL_27;
      }
      if ( (v16 & 0xF0) == 0 && (v7 & 2) != 0 )
      {
        v17 = *(char *)(a1 + 563);
        v18 = v17 + v5;
        v19 = v17 + v5;
        goto LABEL_48;
      }
    }
    if ( (KiVelocityFlags & 0x8000) == 0 && (v7 & 6) == 6 && (*(_DWORD *)(a1 + 120) & 8) == 0 && *(char *)(a1 + 195) > 0 )
      KiScheduleNextForegroundBoost(a1);
    return (v7 & 8) != 0;
  }
  return 1;
}
