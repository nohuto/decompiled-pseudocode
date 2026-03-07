__int64 __fastcall VfPutDmaAdapter(ULONG_PTR a1)
{
  char v2; // r15
  int v3; // edi
  __int64 AdapterInformationInternal; // rax
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v13; // eax
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  __int64 RealDmaAdapter; // rax
  __int64 result; // rax

  VF_ASSERT_MAX_IRQL();
  v2 = 0;
  v3 = 0;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v5 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_35;
  v3 = _InterlockedDecrement((volatile signed __int32 *)(AdapterInformationInternal + 76));
  if ( v3 < 0 )
  {
    ViHalPreprocessOptions(
      byte_140C0DD54,
      "Driver has attempted to access an adapter (%p) that has already been released.",
      (const void *)0x18);
    VfReportIssueWithOptions(0xE6u, 0x18uLL, a1, v5, 0LL, byte_140C0DD54);
  }
  ViFlushZeroMapRegisterBaseWcbs(v5);
  if ( *(_DWORD *)(v5 + 212) != *(_DWORD *)(v5 + 216) )
  {
    ViHalPreprocessOptions(
      byte_140C0DD38,
      "Cannot put adapter %p until all adapter channels are freed (%x left).",
      (const void *)8,
      a1);
    VfReportIssueWithOptions(
      0xE6u,
      8uLL,
      a1,
      (unsigned int)(*(_DWORD *)(v5 + 212) - *(_DWORD *)(v5 + 216)),
      v5,
      byte_140C0DD38);
  }
  if ( *(_DWORD *)(v5 + 204) != *(_DWORD *)(v5 + 208) )
  {
    ViHalPreprocessOptions(
      byte_140C0DD3C,
      "Cannot put adapter %p until all common buffers are freed (%x left).",
      (const void *)7,
      a1);
    VfReportIssueWithOptions(
      0xE6u,
      7uLL,
      a1,
      (unsigned int)(*(_DWORD *)(v5 + 204) - *(_DWORD *)(v5 + 208)),
      v5,
      byte_140C0DD3C);
  }
  if ( *(_DWORD *)(v5 + 192) )
  {
    ViHalPreprocessOptions(
      byte_140C0DD30,
      "Cannot put adapter %p until all map registers are freed (%x left).",
      (const void *)9,
      a1);
    VfReportIssueWithOptions(0xE6u, 9uLL, a1, *(int *)(v5 + 192), v5, byte_140C0DD30);
  }
  if ( *(_DWORD *)(v5 + 200) )
  {
    ViHalPreprocessOptions(
      byte_140C0DD34,
      "Cannot put adapter %p until all scatter gather lists are freed (%x left).",
      (const void *)0xA,
      a1);
    VfReportIssueWithOptions(0xE6u, 0xAuLL, a1, *(int *)(v5 + 200), v5, byte_140C0DD34);
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C36590);
  if ( !*(_QWORD *)(v5 + 64) )
  {
    v7 = *(_QWORD *)v5;
    v8 = *(_QWORD **)(v5 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) == v5 && *v8 == v5 )
    {
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      goto LABEL_25;
    }
LABEL_23:
    __fastfail(3u);
  }
  if ( !*(_BYTE *)(v5 + 74) )
  {
    if ( !*(_BYTE *)(v5 + 75) )
    {
      v5 = 0LL;
      goto LABEL_25;
    }
    v2 = 1;
    if ( v3 > 0 )
      goto LABEL_25;
  }
  v9 = *(_QWORD *)v5;
  v10 = *(_QWORD **)(v5 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v10 != v5 )
    goto LABEL_23;
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
LABEL_25:
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C36590);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( v5 && !v2 )
    ViReleaseDmaAdapter(v5);
LABEL_35:
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(RealDmaAdapter + 8) + 8LL))(RealDmaAdapter);
  if ( v5 && v2 && v3 <= 0 )
    return ViReleaseDmaAdapter(v5);
  return result;
}
