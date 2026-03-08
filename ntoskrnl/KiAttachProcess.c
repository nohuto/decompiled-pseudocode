/*
 * XREFs of KiAttachProcess @ 0x14030E080
 * Callers:
 *     KeAttachProcess @ 0x1402F8D80 (KeAttachProcess.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 * Callees:
 *     KiInSwapSingleProcess @ 0x1402C0868 (KiInSwapSingleProcess.c)
 *     KiSetAddressPolicy @ 0x14030E890 (KiSetAddressPolicy.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140547490 (HvlSwitchVirtualAddressSpace.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall KiAttachProcess(ULONG_PTR a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // rsi
  _QWORD *v6; // r10
  __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rax
  int v14; // edi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v16; // r13
  unsigned __int64 GroupIndex; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r9
  __int64 *v24; // rax
  __int64 **v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int8 v27; // cl
  struct _KPRCB *v28; // r10
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // [rsp+70h] [rbp+18h]
  int v33; // [rsp+78h] [rbp+20h] BYREF

  v32 = a3;
  v5 = a5;
  v6 = (_QWORD *)(a1 + 152);
  v10 = (unsigned __int8)a3;
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a1 + 184);
  *(_BYTE *)(v5 + 40) = *(_BYTE *)(a1 + 192);
  *(_BYTE *)(v5 + 41) = *(_BYTE *)(a1 + 193);
  *(_BYTE *)(v5 + 42) = *(_BYTE *)(a1 + 194);
  v11 = *(_QWORD **)(a1 + 152);
  if ( v11 == v6 )
  {
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    *(_BYTE *)(v5 + 41) = 0;
  }
  else
  {
    v24 = (__int64 *)v6[1];
    *(_QWORD *)v5 = v11;
    *(_QWORD *)(v5 + 8) = v24;
    v11[1] = v5;
    *v24 = v5;
  }
  v12 = v6[2];
  v13 = (__int64 *)(v5 + 16);
  if ( (_QWORD *)v12 == v6 + 2 )
  {
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *v13 = (__int64)v13;
    *(_BYTE *)(v5 + 42) = 0;
  }
  else
  {
    v25 = (__int64 **)v6[3];
    *v13 = v12;
    *(_QWORD *)(v5 + 24) = v25;
    *(_QWORD *)(v12 + 8) = v13;
    *v25 = v13;
  }
  v6[1] = v6;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *v6 = v6;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 840), 8u) & 7) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    KiInSwapSingleProcess(a1, a2, a3);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        v12 = 4LL;
      else
        v12 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)v12 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v33);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v10 = v32;
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  v14 = a4 & 2;
  if ( !v14 )
    *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = *(_QWORD *)(v5 + 32);
  GroupIndex = CurrentPrcb->GroupIndex;
  v18 = 8LL * CurrentPrcb->Group + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v18 + a2), GroupIndex);
  v19 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v20 = *(_QWORD *)(a2 + 40);
    if ( (v19 & 2) != 0 )
      v20 = v19 | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v20);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 912), v12, a3, v10);
    v10 = v32;
  }
  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
  {
    result = HvlSwitchVirtualAddressSpace(v19, v12, a3, v10);
    LOBYTE(v10) = v32;
  }
  else
  {
    __writecr3(v19);
  }
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v26 = __readcr4();
    if ( (v26 & 0x20080) != 0 )
    {
      result = v26 ^ 0x80;
      __writecr4(v26 ^ 0x80);
      __writecr4(v26);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v18 + v16), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  if ( !v14 )
  {
    if ( KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v31 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v31 )
        {
          KiRemoveSystemWorkPriorityKick(v28);
          LOBYTE(v10) = v32;
        }
      }
    }
    result = (unsigned __int8)v10;
    __writecr8((unsigned __int8)v10);
  }
  return result;
}
