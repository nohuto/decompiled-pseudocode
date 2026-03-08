/*
 * XREFs of WheapReportLiveDump @ 0x140A0663C
 * Callers:
 *     WheapReportDeferredLiveDumps @ 0x140A06534 (WheapReportDeferredLiveDumps.c)
 *     WheapCreateLiveDumpFromPreviousSession @ 0x140AA8884 (WheapCreateLiveDumpFromPreviousSession.c)
 * Callees:
 *     LkmdTelInsertTriageDataBlock @ 0x14067A064 (LkmdTelInsertTriageDataBlock.c)
 *     LkmdTelCreateReport @ 0x140A73E94 (LkmdTelCreateReport.c)
 *     LkmdTelSubmitReport @ 0x140A740C0 (LkmdTelSubmitReport.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheapReportLiveDump(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  int v3; // r11d
  __int64 v4; // r10
  int v5; // r8d
  unsigned int *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 *Report; // rax
  __int64 *v9; // rbx
  int inserted; // edi

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0LL;
  v5 = 0;
  v6 = (unsigned int *)(v1 + 128);
  if ( *(_WORD *)(v1 + 10) )
  {
    while ( 1 )
    {
      a1 = *((_QWORD *)v6 + 2) - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
      if ( !a1 )
        a1 = *((_QWORD *)v6 + 3) - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
      if ( !a1 )
        break;
      v6 += 18;
      if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(v1 + 10) )
        goto LABEL_8;
    }
    v7 = *(_QWORD *)(*v6 + v1 + 40);
    v4 = (unsigned int)v7;
    v2 = HIDWORD(v7);
  }
LABEL_8:
  Report = (__int64 *)LkmdTelCreateReport(a1, v2, v3, v1, v2, v4);
  v9 = Report;
  if ( Report )
  {
    inserted = LkmdTelInsertTriageDataBlock(Report, (const void *)v1, *(_DWORD *)(v1 + 20));
    if ( inserted >= 0 )
      inserted = LkmdTelSubmitReport(v9);
    if ( *((_DWORD *)v9 + 2) )
    {
      if ( *v9 )
        ExFreePoolWithTag((PVOID)*v9, 0x74614454u);
      *((_DWORD *)v9 + 2) = 0;
    }
    ExFreePoolWithTag(v9, 0x74614454u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)inserted;
}
