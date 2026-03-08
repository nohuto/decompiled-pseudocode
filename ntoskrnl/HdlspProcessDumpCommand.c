/*
 * XREFs of HdlspProcessDumpCommand @ 0x140AE7CAC
 * Callers:
 *     HdlspBugCheckProcessing @ 0x140AE6D84 (HdlspBugCheckProcessing.c)
 *     HdlspDispatch @ 0x140AE6EB0 (HdlspDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlTimeToTimeFields @ 0x1402D14B0 (RtlTimeToTimeFields.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     HdlspPutMore @ 0x140AE80B8 (HdlspPutMore.c)
 *     HdlspPutString @ 0x140AE8194 (HdlspPutString.c)
 */

__int64 __fastcall HdlspProcessDumpCommand(char a1)
{
  int v1; // eax
  KIRQL v2; // bl
  PKSPIN_LOCK v3; // rcx
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned __int8 v6; // al
  unsigned int v7; // r13d
  unsigned int v8; // r12d
  __int64 v9; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  const char *v20; // rcx
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  TIME_FIELDS TimeFields; // [rsp+40h] [rbp-30h] BYREF
  STRING v27; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF
  char v30; // [rsp+A8h] [rbp+38h] BYREF

  *(_DWORD *)(&v27.MaximumLength + 1) = 0;
  v30 = 0;
  TimeFields = 0LL;
  v1 = *((_DWORD *)HeadlessGlobals + 12);
  DestinationString = 0LL;
  if ( (v1 & 2) != 0 )
    v2 = -1;
  else
    v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
  v3 = HeadlessGlobals;
  result = 0xFFFFLL;
  v5 = *((unsigned __int16 *)HeadlessGlobals + 49);
  if ( (_WORD)v5 != 0xFFFF )
  {
    *((_DWORD *)HeadlessGlobals + 12) &= ~4u;
    v7 = v5;
    v27.Buffer = (char *)v3[3];
    v8 = 0;
    *(_DWORD *)&v27.Length = 5242880;
    while ( 1 )
    {
      v9 = v3[2] + 56LL * v7;
      if ( v2 != 0xFF )
      {
        KxReleaseSpinLock((volatile signed __int64 *)v3);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v2 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)(-1LL << (v2 + 1));
            v21 = (v13 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v13;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(v2);
      }
      RtlTimeToTimeFields((PLARGE_INTEGER)(v9 + 8), &TimeFields);
      sprintf_s(
        (char *)HeadlessGlobals[3],
        0x50uLL,
        "%02d:%02d:%02d.%03d : ",
        TimeFields.Hour,
        TimeFields.Minute,
        TimeFields.Second,
        TimeFields.Milliseconds);
      HdlspPutString(HeadlessGlobals[3]);
      v14 = *(_QWORD *)(v9 + 48);
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)(v14 + 2 * v15) );
      if ( v15 >= 0x4F )
        *(_WORD *)(v14 + 158) = 0;
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v9 + 48));
      RtlUnicodeStringToAnsiString(&v27, &DestinationString, 0);
      v2 = (HeadlessGlobals[6] & 2) != 0 ? -1 : KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
      if ( (HeadlessGlobals[6] & 4) != 0 )
        break;
      HdlspPutString(HeadlessGlobals[3]);
      HdlspPutString("\r\n");
      v3 = HeadlessGlobals;
      ++v8;
      result = *((unsigned __int16 *)HeadlessGlobals + 48);
      if ( v7 == (_DWORD)result )
      {
        if ( v2 == 0xFF )
          return result;
        goto LABEL_57;
      }
      if ( a1 && v8 > 0x14 )
      {
        if ( v2 != 0xFF )
        {
          KxReleaseSpinLock((volatile signed __int64 *)HeadlessGlobals);
          if ( KiIrqlFlags )
          {
            v16 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && v2 <= 0xFu && v16 >= 2u )
            {
              v17 = KeGetCurrentPrcb();
              v18 = v17->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << (v2 + 1));
              v21 = (v19 & v18[5]) == 0;
              v18[5] &= v19;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick((__int64)v17);
            }
          }
          __writecr8(v2);
        }
        HdlspPutMore(&v30);
        if ( (HeadlessGlobals[6] & 2) != 0 )
          v2 = -1;
        else
          v2 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
        if ( v30 )
        {
          v20 = "\r\n";
          goto LABEL_50;
        }
        v3 = HeadlessGlobals;
        if ( (HeadlessGlobals[6] & 4) != 0 )
        {
          v20 = "New log entries have been added while waiting, command aborted.\r\n";
LABEL_50:
          result = HdlspPutString(v20);
          v21 = v2 == 0xFFu;
          goto LABEL_55;
        }
        v8 = 0;
      }
      v7 = (unsigned __int8)(v7 + 1);
    }
    result = HdlspPutString("New log entries have been added during dump, command aborted.\r\n");
    v21 = v2 == 0xFF;
LABEL_55:
    if ( v21 )
      return result;
    v3 = HeadlessGlobals;
LABEL_57:
    KxReleaseSpinLock((volatile signed __int64 *)v3);
    if ( !KiIrqlFlags )
      goto LABEL_64;
    v22 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) == 0 || v22 > 0xFu || v2 > 0xFu || v22 < 2u )
      goto LABEL_64;
    goto LABEL_62;
  }
  if ( v2 == 0xFF )
    return result;
  KxReleaseSpinLock((volatile signed __int64 *)HeadlessGlobals);
  if ( KiIrqlFlags )
  {
    v6 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && v2 <= 0xFu && v6 >= 2u )
    {
LABEL_62:
      v23 = KeGetCurrentPrcb();
      v24 = v23->SchedulerAssist;
      v25 = ~(unsigned __int16)(-1LL << (v2 + 1));
      v21 = (v25 & v24[5]) == 0;
      v24[5] &= v25;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
LABEL_64:
  result = v2;
  __writecr8(v2);
  return result;
}
