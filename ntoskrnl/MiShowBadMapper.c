/*
 * XREFs of MiShowBadMapper @ 0x14062EC9C
 * Callers:
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiInsertPhysicalPteMapping @ 0x14029F690 (MiInsertPhysicalPteMapping.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MmLockLoadedModuleListExclusive @ 0x1402B29E0 (MmLockLoadedModuleListExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiLogBadMapper @ 0x14062E9E8 (MiLogBadMapper.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiShowBadMapper(__int64 BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  char v3; // r15
  unsigned int v4; // esi
  ULONG_PTR v5; // r14
  unsigned __int16 MaximumLength; // bx
  BOOL v7; // edi
  _QWORD *v8; // rsi
  unsigned __int16 Length; // r13
  unsigned int v10; // r15d
  unsigned __int64 *v11; // r12
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  int v14; // eax
  int v15; // ecx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21[4]; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-95h]
  UNICODE_STRING Destination; // [rsp+38h] [rbp-91h] BYREF
  ULONG BackTraceHash; // [rsp+48h] [rbp-81h] BYREF
  int v25; // [rsp+4Ch] [rbp-7Dh]
  __int64 v26; // [rsp+50h] [rbp-79h]
  PVOID BackTrace[16]; // [rsp+60h] [rbp-69h] BYREF

  v3 = a3;
  v25 = a3;
  v4 = BugCheckParameter3;
  v22 = BugCheckParameter3;
  v5 = BugCheckParameter2;
  v26 = BugCheckParameter2;
  MaximumLength = 128;
  BackTraceHash = 0;
  v21[0] = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  Destination = 0LL;
  v7 = dword_140D1D22C != 0;
  if ( (v3 & 1) == 0 || KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
  {
    if ( !v7 )
    {
      RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, &BackTraceHash);
      Destination.MaximumLength = 128;
      Destination.Buffer = (wchar_t *)MiAllocatePool(64, 0x80uLL, 0x20206D4Du);
      if ( !Destination.Buffer )
      {
        MaximumLength = 0;
        Destination.MaximumLength = 0;
      }
      v8 = 0LL;
      MmLockLoadedModuleListExclusive(v21);
      Length = Destination.Length;
      v10 = 0;
      v11 = (unsigned __int64 *)BackTrace;
      while ( *v11 > 0x7FFFFFFEFFFFLL )
      {
        v12 = MiLookupDataTableEntry(*v11, 0);
        v13 = v12;
        if ( v12 )
        {
          if ( (v25 & 2) != 0 && (v12[13] & 0x2000000) != 0 && (VfRuleClasses & 0x400000) == 0 )
          {
            v7 = 1;
            break;
          }
          if ( Destination.Buffer && (!v8 || v8 != v12) )
          {
            v14 = *((unsigned __int16 *)v12 + 44);
            v15 = v14 + 2;
            if ( !v8 )
              v15 = v14;
            if ( (unsigned int)Length + v15 <= MaximumLength )
            {
              if ( v8 )
                RtlAppendUnicodeToString(&Destination, L" ");
              RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v13 + 11));
              MaximumLength = Destination.MaximumLength;
              v8 = v13;
              Length = Destination.Length;
            }
            else
            {
              MaximumLength = Length;
              Destination.MaximumLength = Length;
            }
          }
        }
        ++v10;
        ++v11;
        if ( v10 >= 0x10 )
          break;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v21[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (v21[0] + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v21[0]);
      v5 = v26;
      v4 = v22;
      if ( !v7 )
      {
        if ( *(_QWORD *)&qword_140C69568 )
        {
          _InterlockedIncrement(&dword_140C67C34);
          MiLogBadMapper(v26, v22, (EVENT_DESCRIPTOR *)&Destination);
        }
        else
        {
          _InterlockedIncrement(&dword_140C67C30);
        }
      }
    }
  }
  else
  {
    v7 = 1;
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v7 )
    KeBugCheckEx(0x1Au, 0x1233uLL, v5, v4, 0LL);
}
