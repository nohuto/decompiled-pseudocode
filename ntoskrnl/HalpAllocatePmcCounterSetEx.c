/*
 * XREFs of HalpAllocatePmcCounterSetEx @ 0x140504F80
 * Callers:
 *     HalpAllocatePmcCounterSet @ 0x140504F50 (HalpAllocatePmcCounterSet.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSetEx(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        __int64 *a5,
        _DWORD *a6)
{
  __int64 *v6; // r14
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rcx
  void *v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  _DWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned int *v24; // r12
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int *v35; // rsi
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v37; // r8
  int v38; // eax
  bool v39; // zf
  unsigned int v41; // [rsp+30h] [rbp-A8h]
  __int64 v43; // [rsp+38h] [rbp-A0h]
  __int64 v45; // [rsp+40h] [rbp-98h]
  __int64 v46; // [rsp+50h] [rbp-88h]
  __int64 v48; // [rsp+68h] [rbp-70h]
  struct _GROUP_AFFINITY v49; // [rsp+70h] [rbp-68h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp-58h] BYREF

  v6 = a5;
  v8 = a1;
  v49 = 0LL;
  v9 = KiProcessorIndexToNumberMappingTable[a1];
  v49.Group = v9 >> 6;
  v49.Mask = 1LL << (v9 & 0x3F);
  PreviousAffinity = 0LL;
  v48 = v8;
  KeSetSystemGroupAffinityThread(&v49, &PreviousAffinity);
  v11 = (void *)HalpMmAllocCtxAlloc(v10, 40 * a3 + 24);
  v12 = (__int64)v11;
  if ( !v11 )
  {
    v13 = -1073741801;
    goto LABEL_50;
  }
  memset(v11, 0, 40 * a3 + 24);
  *(_DWORD *)(v12 + 20) = a3;
  v13 = 0;
  *(_DWORD *)(v12 + 16) = v8;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v43 = HalpCounterStatus;
  else
    v43 = HalpCounterStatus + 8LL * (unsigned int)(HalpNumberOfCounters * v8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v16) = 0x8000;
    else
      v16 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v16;
  }
  v17 = 0LL;
  v18 = 0LL;
  v41 = 0;
  if ( a3 )
  {
    v19 = a6;
    v20 = a2 - (_QWORD)a6;
    v45 = a2 - (_QWORD)a6;
    while ( 1 )
    {
      v21 = *(unsigned int *)((char *)v19 + v20);
      v22 = 5 * v17;
      v23 = v12 + 8 * v22;
      v46 = v22;
      *(_DWORD *)(v23 + 40) = v21;
      v24 = (unsigned int *)(v12 + 48 + 8 * v22);
      v25 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, unsigned int *))HalpProfileInterface[1])(
              1LL,
              v21,
              v23 + 44,
              v12 + 52 + 8 * v22,
              v24);
      v13 = v25;
      if ( v25 < 0 )
      {
        if ( v25 != -1073741637 )
        {
          if ( (_DWORD)v18 )
          {
            v35 = (unsigned int *)(v12 + 40);
            do
            {
              ((void (__fastcall *)(_QWORD, unsigned int *))HalpProfileInterface[2])(*v35, v35 + 2);
              v35 += 10;
              --v18;
            }
            while ( v18 );
          }
          goto LABEL_40;
        }
        --*(_DWORD *)(v12 + 20);
        v13 = 0;
        goto LABEL_31;
      }
      v26 = *(_DWORD *)(v23 + 44);
      if ( !v26 )
        break;
      v27 = v26 - 1;
      if ( v27 )
      {
        if ( v27 != 1 )
          break;
        v28 = __readmsr(*v24);
        LODWORD(v29) = HIDWORD(v28);
        v28 = (unsigned int)v28;
        v29 = (unsigned int)v29;
      }
      else
      {
        v28 = __readpmc(*v24);
        LODWORD(v29) = HIDWORD(v28);
        v28 = (unsigned int)v28;
        v29 = (unsigned int)v29;
      }
      v30 = (v29 << 32) | v28;
LABEL_23:
      v31 = *v24;
      ++v41;
      *(_QWORD *)(v12 + 8 * v46 + 24) = v30;
      v13 = ((__int64 (__fastcall *)(__int64, __int64))HalpProfileInterface[17])(v31, v12 + 8 * (v46 + 7));
      if ( a6 )
        *v19 = *(_DWORD *)(v12 + 8 * v46 + 52);
      v32 = *(unsigned int *)(v12 + 8 * v46 + 52);
      if ( (_DWORD)v32 != -1 )
      {
        if ( a4 )
          *(_DWORD *)(*(_QWORD *)(v43 + 8 * v32) + 28LL) = *a4;
        else
          *(_DWORD *)(*(_QWORD *)(v43 + 8 * v32) + 28LL) = 1701736270;
      }
LABEL_31:
      v17 = v41;
      v18 = (unsigned int)(v18 + 1);
      v20 = v45;
      ++v19;
      if ( (unsigned int)v18 >= a3 )
      {
        if ( v13 < 0 )
          goto LABEL_40;
        goto LABEL_33;
      }
    }
    v30 = 0LL;
    goto LABEL_23;
  }
LABEL_33:
  v20 = 3 * v48;
  v33 = HalpCounterSetInfo + 24 * v48;
  v34 = *(_QWORD *)v33;
  if ( *(_QWORD *)(*(_QWORD *)v33 + 8LL) != v33 )
    __fastfail(3u);
  *(_QWORD *)v12 = v34;
  *(_QWORD *)(v12 + 8) = v33;
  *(_QWORD *)(v34 + 8) = v12;
  *(_QWORD *)v33 = v12;
LABEL_40:
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)v20 <= 0xFu && CurrentIrql <= 0xFu && (unsigned __int8)v20 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v20 = (unsigned int)CurrentIrql + 1;
      v37 = CurrentPrcb->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v39 = (v38 & v37[5]) == 0;
      v37[5] &= v38;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v13 < 0 )
    HalpMmAllocCtxFree(v20, v12);
  v6 = a5;
LABEL_50:
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( v13 >= 0 )
    *v6 = v12;
  return (unsigned int)v13;
}
