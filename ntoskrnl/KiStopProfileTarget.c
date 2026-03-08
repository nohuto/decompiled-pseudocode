/*
 * XREFs of KiStopProfileTarget @ 0x140572310
 * Callers:
 *     KeStopProfile @ 0x140571BAC (KeStopProfile.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall KiStopProfileTarget(__int64 *Argument)
{
  __int64 v1; // r15
  char v2; // dl
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r10
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // edx
  bool v13; // zf
  unsigned __int16 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  ULONG_PTR result; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int16 *v23[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+32h] [rbp-36h]
  __int16 v26; // [rsp+36h] [rbp-32h]
  unsigned int v27; // [rsp+70h] [rbp+8h] BYREF

  v1 = *Argument;
  v2 = KiProfileIrql;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)KiProfileIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v2 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == v2 )
      v6 = 1 << v2;
    else
      v6 = (-1LL << (CurrentIrql + 1)) & ((1LL << (v2 + 1)) - 1) & 0xFFFFFFFC;
    SchedulerAssist[5] |= v6;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 && *(_BYTE *)(v1 + 610) )
  {
    v7 = v1 + 8;
    *(_BYTE *)(v1 + 610) = 0;
    v8 = *(_QWORD *)(v1 + 8);
    if ( v8 != v1 + 8 )
    {
      v9 = *(_QWORD **)(v1 + 16);
      if ( *(_QWORD *)(v8 + 8) != v7 || *v9 != v7 )
        goto LABEL_31;
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    v10 = (_QWORD *)KiProfileSourceListHead;
    do
    {
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
    while ( *((_DWORD *)v11 + 4) != *(__int16 *)(v1 + 608) );
    v24 = 0;
    v23[1] = *(unsigned __int16 **)(v1 + 344);
    v23[0] = (unsigned __int16 *)(v1 + 336);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v27, v23) )
    {
      v12 = v27;
      v13 = (*((_DWORD *)v11 + v27 + 72))-- == 1;
      if ( v13 )
        KeAddProcessorAffinityEx((unsigned __int16 *)Argument + 8, v12);
    }
    _InterlockedOr(v22, 0);
    v14 = 0;
    if ( v11 != (_QWORD *)-24LL )
      v14 = *((_WORD *)v11 + 13);
    KiSubtractAffinityEx((unsigned __int16 *)v11 + 12, (char *)Argument + 16, (_BYTE *)v11 + 24, v14);
    if ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)v11 + 12) )
      goto LABEL_27;
    v15 = *v11;
    v16 = (_QWORD *)v11[1];
    if ( *(_QWORD **)(*v11 + 8LL) == v11 && (_QWORD *)*v16 == v11 )
    {
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      Argument[35] = (__int64)v11;
LABEL_27:
      *((_BYTE *)Argument + 288) = 1;
      goto LABEL_28;
    }
LABEL_31:
    __fastfail(3u);
  }
LABEL_28:
  _InterlockedAdd((volatile signed __int32 *)Argument + 3, 0xFFFFFFFF);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)Argument + 8, KeGetCurrentPrcb()->Number) )
    ((void (__fastcall *)(_QWORD, _QWORD))HalpProfileInterface[2])((unsigned int)*(__int16 *)(v1 + 608), 0LL);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = CurrentPrcb->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
