/*
 * XREFs of KiDispatchCallout @ 0x14066AE40
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x1402E3E6C (KeExitRetpoline.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiDispatchCallout(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // r9
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  int v9; // eax
  unsigned int v10; // esi
  char *v11; // r10
  __int64 v12; // rbp
  unsigned int v13; // r14d
  char *v14; // r11
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  __int64 result; // rax
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h] BYREF

  KeExitRetpoline(a1, a2);
  v6 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ retaddr ^ *a4;
  *(_QWORD *)(a1 + 56) = v6 ^ (unsigned __int64)&retaddr;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  retaddr = 0LL;
  v10 = 25;
  v11 = (char *)(*(_QWORD *)(v6 + 64) ^ *(_QWORD *)(v6 + 32) | 0xFFFF800000000000uLL);
  v12 = __ROR8__(v11, (*(_BYTE *)(v6 + 64) ^ *(_BYTE *)(v6 + 32)) & 0x3F);
  v13 = 0;
  v14 = v11 - 8;
  do
  {
    v15 = *((_QWORD *)v14 + 1);
    v14 += 8;
    *(_QWORD *)v14 = &v11[(KiWaitAlways ^ _byteswap_uint64(v12 ^ __ROL8__(KiWaitNever ^ v15, KiWaitNever))) + v13];
    v12 = (unsigned __int64)&v11[__ROL8__(
                                   __ROR8__(v13 ^ (unsigned __int64)(200 - v13), ~(_BYTE)v15 & 0x3F) ^ v12,
                                   (v15 ^ 0xE9) & 0x3F)] ^ 0xBD806A35;
    if ( ++v13 == 25 && *(_QWORD *)v11 != 0x85131481131482ELL )
    {
      *(_QWORD *)v14 ^= *(_QWORD *)v11 ^ 0x85131481131482ELL;
      v10 += *((_DWORD *)v14 + 1);
      *(_QWORD *)v14 ^= *(_QWORD *)v11 ^ 0x85131481131482ELL;
    }
  }
  while ( v13 < v10 );
  v16 = *(_QWORD *)v11 ^ 0x85131481131482ELL;
  *(_DWORD *)v11 = -1390710795;
  *(_DWORD *)v11 ^= 0xBC2A27DB;
  ((void (__fastcall *)(char *, __int64, _QWORD, _QWORD))v11)(v11, v16, 0LL, 0LL);
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
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
