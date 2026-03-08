/*
 * XREFs of KiInitializeForegroundBoostThread @ 0x140238B34
 * Callers:
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 * Callees:
 *     KiComputeHeteroThreadQos @ 0x1402569B0 (KiComputeHeteroThreadQos.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetSchedulerAssistPriority @ 0x14040A730 (KiSetSchedulerAssistPriority.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiSetThreadQosLevelUnsafe @ 0x14045A058 (KiSetThreadQosLevelUnsafe.c)
 */

char __fastcall KiInitializeForegroundBoostThread(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  char v4; // cl
  char v5; // si
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  _WORD *v14; // rdx
  __int64 v15; // rdx
  _BYTE v17[336]; // [rsp+20h] [rbp-168h] BYREF

  LOBYTE(v2) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL);
  if ( (_BYTE)v2 == 2 )
  {
    v3 = 0;
    if ( !*(_BYTE *)(a1 + 564) )
    {
      LODWORD(v2) = *(_DWORD *)(a1 + 120);
      if ( (v2 & 8) == 0 )
      {
        v4 = *(_BYTE *)(a1 + 195);
        if ( v4 > 0 )
        {
          LOBYTE(v2) = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
          v5 = v2;
          if ( (char)v2 >= 16 )
            v5 = 15;
          if ( v5 > v4 )
          {
            *(_BYTE *)(a1 + 564) = (v5 - v4) & 0xF;
            memset(v17, 0, sizeof(v17));
            CurrentPrcb = KeGetCurrentPrcb();
            if ( *(_BYTE *)(a1 + 793) )
            {
              v8 = (struct _SINGLE_LIST_ENTRY *)(a1 + 808);
              if ( *(_QWORD *)(a1 + 808) == 1LL )
              {
                p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
                if ( CurrentPrcb != (struct _KPRCB *)-35704LL )
                {
                  v8->Next = p_AbPropagateBoostsList->Next;
                  p_AbPropagateBoostsList->Next = v8;
                  _InterlockedAdd16((volatile signed __int16 *)(a1 + 868), 1u);
                  KiAbQueueAutoBoostDpc(CurrentPrcb);
                }
              }
            }
            *(_BYTE *)(a1 + 195) = v5;
            v9 = KiComputeHeteroThreadQos(a1, 0LL, p_AbPropagateBoostsList);
            if ( v9 != (unsigned __int8)*(_DWORD *)(a1 + 512) )
              KiSetThreadQosLevelUnsafe(a1, v9);
            v11 = *(_DWORD *)(a1 + 120);
            if ( (v11 & 0x400000) != 0 )
            {
              LOBYTE(v10) = 1;
              KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 968), (unsigned int)*(char *)(a1 + 195), v10);
              v11 = *(_DWORD *)(a1 + 120);
            }
            v2 = *(unsigned int *)(a1 + 588);
            v12 = KiProcessorBlock[v2];
            v13 = *(_QWORD *)(v12 + 34880);
            if ( v13 )
            {
              v2 = *(unsigned __int8 *)(v12 + 208);
              v14 = *(_WORD **)(a1 + 576);
              if ( (unsigned __int16)v2 >= *v14 )
                v15 = 0LL;
              else
                v15 = *(_QWORD *)&v14[4 * v2 + 4];
              LOBYTE(v3) = (v13 & v15) == v13;
            }
            if ( v3 != ((v11 >> 13) & 1) )
              _InterlockedXor((volatile signed __int32 *)(a1 + 120), 0x2000u);
          }
        }
      }
    }
  }
  return v2;
}
