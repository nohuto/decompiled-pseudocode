/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0125EFC
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C004B794 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00486FC (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016D990 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1)
{
  void *v2; // rcx
  int v3; // edi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  struct tagCURSOR *v7; // rax

  v2 = (void *)*((_QWORD *)a1 + 12);
  if ( v2 )
  {
    v3 = 0;
    if ( *((int *)a1 + 22) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)a1 + 12);
        v6 = *(_QWORD *)(v4 + v5);
        if ( v6 && (*(_DWORD *)(v6 + 80) & 0x40) == 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 88LL);
          v5 = *((_QWORD *)a1 + 12);
        }
        v7 = (struct tagCURSOR *)HMAssignmentUnlock(v5 + 8LL * v3);
        if ( v7 )
          _DestroyCursor(v7, 0);
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)a1 + 22) );
      v2 = (void *)*((_QWORD *)a1 + 12);
    }
    Win32FreePool(v2);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  return 1LL;
}
