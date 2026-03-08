/*
 * XREFs of KeFlushSingleCurrentTb @ 0x140387AD4
 * Callers:
 *     MiDbgReleaseAddress @ 0x140387814 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403878D8 (MiDbgWriteCheck.c)
 *     MiStackTheftIsr @ 0x14062B050 (MiStackTheftIsr.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140641B08 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140641E70 (MiDbgUnTranslatePhysicalAddress.c)
 *     MmReadProcessPageTables @ 0x14064325C (MmReadProcessPageTables.c)
 *     MmInvalidateDumpAddresses @ 0x140AA9E60 (MmInvalidateDumpAddresses.c)
 * Callees:
 *     KiIsSecureProcessFlush @ 0x140211FFC (KiIsSecureProcessFlush.c)
 *     HvlFlushRangeListTb @ 0x1403C689C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1403C8E3C (KiPrepareFlushParameters.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140417710 (KiSetUserTbFlushPending.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VmFlushTb @ 0x14045DE9C (VmFlushTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiPrepareFlushCurrentAffinity @ 0x14056FB44 (KiPrepareFlushCurrentAffinity.c)
 *     ExFlushTb @ 0x14060AC48 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushSingleCurrentTb(unsigned __int64 a1, unsigned int a2)
{
  bool IsSecureProcessFlush; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // r12
  char v8; // di
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  char v22[8]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  _BYTE v27[272]; // [rsp+70h] [rbp-90h] BYREF

  v24 = 0LL;
  memset(v27, 0, 0x108uLL);
  v22[0] = 0;
  IsSecureProcessFlush = KiIsSecureProcessFlush(a1, a2);
  v7 = IsSecureProcessFlush;
  v8 = (HvlEnlightenments & 0x800000) != 0 && (HvlEnlightenments & 2) != 0;
  if ( IsSecureProcessFlush || v8 )
  {
    KiPrepareFlushParameters(a2, &v24, v22);
    KiPrepareFlushCurrentAffinity(v27);
    LOBYTE(v11) = v22[0];
    v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
    LOBYTE(v12) = v7;
    v25 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = HvlFlushRangeListTb(v24, (unsigned int)v27, v11, v12, v8, 1, (__int64)&v25);
    if ( (_BYTE)result )
      goto LABEL_8;
  }
  else
  {
    v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
  }
  result = (unsigned int)(1 << a2);
  if ( (result & 0xA) != 0 )
  {
    if ( KiFlushPcid )
    {
      result = (__int64)KeGetCurrentThread();
      v13 = *(_QWORD *)(result + 184);
      if ( !*(_BYTE *)(v13 + 912) )
      {
        if ( (KiFlushPcid & 2) != 0 )
        {
          *(_QWORD *)&v26 = 1LL;
          *((_QWORD *)&v26 + 1) = a1;
          result = 0LL;
          __asm { invpcid eax, [rsp+1B0h+var_150] }
        }
        else
        {
          result = KiSetUserTbFlushPending(v13, v5, v6);
        }
      }
    }
  }
  __invlpg((void *)a1);
LABEL_8:
  if ( VmTbFlushEnabled )
  {
    v9 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v23 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = VmFlushTb(1LL, &v23, a2);
  }
  if ( ExTbFlushActive )
  {
    v23 = v9;
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
    ExFlushTb(1LL, &v23, a2);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
