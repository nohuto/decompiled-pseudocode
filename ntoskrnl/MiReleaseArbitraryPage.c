/*
 * XREFs of MiReleaseArbitraryPage @ 0x14029EF7C
 * Callers:
 *     MiConvertStandbyToProto @ 0x14029ED24 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int8 v3; // al
  unsigned __int64 *v4; // rsi
  int v5; // r14d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r11d
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v1 = *(_QWORD *)(a1 + 48);
  v3 = MiLockPageInline(v1);
  v4 = *(unsigned __int64 **)(a1 + 56);
  v5 = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  v6 = ZeroPte;
  v7 = v3;
  v8 = MiPteInShadowRange(v4);
  LOBYTE(v12) = 1;
  if ( v8 )
  {
    if ( (unsigned int)MiPteHasShadow(v10, v9, v11) )
    {
      v5 = v12;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_2;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_2;
    }
    if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v12) != 0 )
      v6 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_2:
  *v4 = v6;
  if ( v5 )
    MiWritePteShadow(v4, v6);
  *(_QWORD *)(a1 + 56) = 0LL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v12) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + (unsigned __int8)v7));
      v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v16 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
