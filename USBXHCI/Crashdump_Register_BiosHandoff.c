__int64 __fastcall Crashdump_Register_BiosHandoff(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  unsigned int i; // r14d
  __int64 v5; // r9
  const CHAR *v6; // r8
  int v7; // eax
  unsigned int v8; // esi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 64LL);
  if ( v2 )
  {
    *(_BYTE *)(v2 + 3) |= 1u;
    _InterlockedOr(v10, 0);
    v3 = 20;
    for ( i = 0; ; i += 100000 )
    {
      if ( (*(_BYTE *)(v2 + 2) & 1) == 0 )
      {
        v5 = i;
        v6 = "XHCIDUMP: HC BIOS Owned Semaphore bit cleared after %dus\n";
        goto LABEL_8;
      }
      if ( !v3 )
        break;
      --v3;
      KeStallExecutionProcessor(0x186A0u);
    }
    v5 = 2000000LL;
    v6 = "XHCIDUMP: HC BIOS Owned Semaphore bit not cleared after %dus. Ignoring for this controller.\n";
LABEL_8:
    DbgPrintEx(0x93u, 3u, v6, v5);
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Legacy support capability not implemented, BIOS handoff will not be attempted.\n");
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL) & 1) != 0 )
  {
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Controller halted after BIOS handoff.\n");
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Controller not halted after BIOS handoff, attempting to stop.\n");
    v7 = Crashdump_Register_StopController(a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Failed to stop controller 0x%X\n", v7);
      return v8;
    }
  }
  if ( v2 )
  {
    *(_DWORD *)(v2 + 4) &= 0x1FFFDFFFu;
    _InterlockedOr(v10, 0);
  }
  return 0;
}
