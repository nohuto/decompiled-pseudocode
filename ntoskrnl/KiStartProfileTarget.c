/*
 * XREFs of KiStartProfileTarget @ 0x140571FC0
 * Callers:
 *     KeStartProfile @ 0x140571A6C (KeStartProfile.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140234B10 (KeCheckProcessorAffinityEx.c)
 *     KiSubtractAffinityEx @ 0x1402D4CBC (KiSubtractAffinityEx.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1402DE1C0 (KeInterlockedSetProcessorAffinityEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall KiStartProfileTarget(__int64 *Argument)
{
  __int64 v1; // rsi
  char v2; // dl
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r10
  int v6; // r8d
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v16; // r15
  int v17; // edi
  __int64 Number; // r12
  int v19; // r13d
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf
  ULONG_PTR result; // rax
  signed __int32 v26[26]; // [rsp+0h] [rbp-68h] BYREF
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  struct _KPRCB *v29; // [rsp+80h] [rbp+18h]

  v1 = *Argument;
  v2 = KiProfileIrql;
  v27 = 0;
  v28 = 0LL;
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
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 )
  {
    if ( *(_BYTE *)(v1 + 610) )
    {
      *((_BYTE *)Argument + 304) = 0;
      goto LABEL_12;
    }
    v7 = *(_QWORD *)(v1 + 24);
    v8 = (_QWORD *)(v1 + 8);
    *(_BYTE *)(v1 + 610) = 1;
    if ( v7 )
    {
      v9 = *(_QWORD **)(v7 + 32);
      v10 = v7 + 24;
      if ( *v9 != v10 )
        goto LABEL_28;
      *v8 = v10;
      *(_QWORD *)(v1 + 16) = v9;
      *v9 = v8;
      *(_QWORD *)(v10 + 8) = v8;
    }
    else
    {
      v11 = (_QWORD *)qword_140C42268;
      if ( *(__int64 **)qword_140C42268 != &KiProfileListHead )
        goto LABEL_28;
      *v8 = &KiProfileListHead;
      *(_QWORD *)(v1 + 16) = v11;
      *v11 = v8;
      qword_140C42268 = v1 + 8;
    }
    v12 = KiProfileSourceListHead;
    if ( (__int64 *)KiProfileSourceListHead != &KiProfileSourceListHead )
    {
      while ( *(_DWORD *)(v12 + 16) != *(__int16 *)(v1 + 608) )
      {
        v12 = *(_QWORD *)v12;
        if ( (__int64 *)v12 == &KiProfileSourceListHead )
          goto LABEL_23;
      }
      goto LABEL_25;
    }
LABEL_23:
    v12 = Argument[36];
    Argument[36] = 0LL;
    *(_DWORD *)(v12 + 16) = *(__int16 *)(v1 + 608);
    *(_QWORD *)(v12 + 24) = 2097184LL;
    memset((void *)(v12 + 32), 0, 0x100uLL);
    v13 = KiProfileSourceListHead;
    if ( *(__int64 **)(KiProfileSourceListHead + 8) == &KiProfileSourceListHead )
    {
      *(_QWORD *)v12 = KiProfileSourceListHead;
      *(_QWORD *)(v12 + 8) = &KiProfileSourceListHead;
      *(_QWORD *)(v13 + 8) = v12;
      KiProfileSourceListHead = v12;
LABEL_25:
      Argument[37] = v12;
      v14 = 0;
      if ( Argument != (__int64 *)-24LL )
        v14 = *((_WORD *)Argument + 13);
      KiSubtractAffinityEx((unsigned __int16 *)(v1 + 72), (char *)(v12 + 24), (_BYTE *)Argument + 24, v14);
      _InterlockedOr(v26, 0);
      *(_QWORD *)(v1 + 336) = 2097184LL;
      memset((void *)(v1 + 344), 0, 0x100uLL);
      *((_BYTE *)Argument + 304) = 1;
      goto LABEL_12;
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_12:
  _InterlockedAdd((volatile signed __int32 *)Argument + 3, 0xFFFFFFFF);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  if ( *((_BYTE *)Argument + 304) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = Argument[37];
    v17 = 0;
    v29 = CurrentPrcb;
    Number = CurrentPrcb->Number;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)Argument + 12, CurrentPrcb->Number) )
    {
      v27 = 1718767691;
      v17 = ((__int64 (__fastcall *)(_QWORD, int *, _QWORD, __int64 *))off_140C01E58[0])(
              (unsigned int)*(__int16 *)(v1 + 608),
              &v27,
              0LL,
              &v28);
      if ( v17 < 0 )
      {
LABEL_35:
        if ( v17 == -1073741637 )
          _InterlockedOr((volatile signed __int32 *)Argument + 4, 2u);
        else
          _InterlockedOr((volatile signed __int32 *)Argument + 4, 1u);
        goto LABEL_38;
      }
      v28 = _InterlockedExchange64((volatile __int64 *)(v1 + 600), v28);
    }
    v19 = CurrentPrcb->Number;
    if ( (unsigned int)KeCheckProcessorAffinityEx((unsigned __int16 *)(v1 + 72), v19) )
    {
      KeInterlockedSetProcessorAffinityEx(v1 + 336, v19);
      KeInterlockedSetProcessorAffinityEx(v16 + 24, v29->Number);
      ++*(_DWORD *)(v16 + 4 * Number + 288);
      goto LABEL_38;
    }
    goto LABEL_35;
  }
LABEL_38:
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
