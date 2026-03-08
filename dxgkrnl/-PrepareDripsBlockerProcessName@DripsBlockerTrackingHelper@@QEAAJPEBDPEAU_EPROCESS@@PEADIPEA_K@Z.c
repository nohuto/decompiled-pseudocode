/*
 * XREFs of ?PrepareDripsBlockerProcessName@DripsBlockerTrackingHelper@@QEAAJPEBDPEAU_EPROCESS@@PEADIPEA_K@Z @ 0x1C0302814
 * Callers:
 *     ?DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z @ 0x1C02DA1C0 (-DxgkCddPrepareDripsBlockerProcessName@@YAJPEAU_EPROCESS@@PEADI@Z.c)
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI4PEA_N@Z @ 0x1C02FED40 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@IEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYP.c)
 *     ?EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02FF8D4 (-EnableAccountingForProcess@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C0302714 (-NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0302920 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEBDPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TY.c)
 * Callees:
 *     RtlStringLengthWorkerA @ 0x1C00295D6 (RtlStringLengthWorkerA.c)
 *     ?RtlStringCbCatA@@YAJPEAD_KPEBD@Z @ 0x1C004C0F8 (-RtlStringCbCatA@@YAJPEAD_KPEBD@Z.c)
 *     ?RtlStringCbCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z @ 0x1C004C158 (-RtlStringCbCopyExA@@YAJPEAD_KPEBDPEAPEADPEA_KK@Z.c)
 */

__int64 __fastcall DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(
        DripsBlockerTrackingHelper *this,
        const char *a2,
        struct _EPROCESS *a3,
        char *a4,
        size_t cchMax,
        unsigned __int64 *a6)
{
  const char *ProcessImageFileName; // rax
  size_t v9; // rsi
  int v10; // ebx
  unsigned __int64 *v11; // r10
  NTSTATUS v12; // eax
  size_t pcchLength; // [rsp+50h] [rbp+8h] BYREF
  char *v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  pcchLength = 0LL;
  if ( a3 )
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(a3);
  else
    ProcessImageFileName = "ExternalActivation";
  v9 = (unsigned int)cchMax;
  v10 = RtlStringCbCopyExA(a4, (unsigned int)cchMax, ProcessImageFileName, &v15, &pcchLength);
  if ( v10 >= 0 )
  {
    if ( !a2
      || (v10 = RtlStringCbCatA(a4, (unsigned int)v9, "-"), v10 >= 0)
      && (v10 = RtlStringCbCatA(a4, (unsigned int)v9, a2), v10 >= 0) )
    {
      v11 = a6;
      if ( a6 )
      {
        pcchLength = 0LL;
        if ( a4 && v9 <= 0x7FFFFFFF )
        {
          v12 = RtlStringLengthWorkerA(a4, v9, &pcchLength);
          v10 = v12;
          if ( v12 >= 0 )
          {
            *v11 = pcchLength;
            return (unsigned int)v10;
          }
        }
        else
        {
          v10 = -1073741811;
          v12 = -1073741811;
        }
        *v11 = 0LL;
        WdLogSingleEntry1(3LL, v12);
      }
    }
  }
  return (unsigned int)v10;
}
