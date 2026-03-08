/*
 * XREFs of FsFilterFreeCompletionStack @ 0x140456CDA
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x140212510 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140212E3C (FsRtlAcquireFileForModWriteEx.c)
 *     FsFilterCtrlFree @ 0x140343F88 (FsFilterCtrlFree.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall FsFilterFreeCompletionStack(__int64 a1)
{
  __int16 *v1; // r9
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x676D5346u);
    return;
  }
  v3 = *(unsigned __int8 *)(a1 + 4) - 250;
  if ( !v3 )
    goto LABEL_10;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_9;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_10:
    v1 = &ReleaseOpsEvent;
    goto LABEL_11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_9:
    v1 = &AcquireOpsEvent;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_10;
  if ( v7 == 1 )
    goto LABEL_9;
LABEL_11:
  *(_QWORD *)(*(_QWORD *)(a1 + 80) - 8LL) = 0LL;
  KeSetEvent((PRKEVENT)v1, 0, 0);
}
