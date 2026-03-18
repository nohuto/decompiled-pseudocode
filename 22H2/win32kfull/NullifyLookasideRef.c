/*
 * XREFs of NullifyLookasideRef @ 0x1C01FEFF0
 * Callers:
 *     ??$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C908 (--$ClearStackReferences@UtagPOPUPMENU@@@@YAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x1C013C924 (--$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstr.c)
 *     MNFlushDestroyedPopups @ 0x1C01FF380 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01FF9F0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C020009C (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NullifyLookasideRef(__int64 a1)
{
  bool v1; // zf
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  v1 = *(_DWORD *)(a1 + 8) == 0;
  *(_BYTE *)(a1 + 12) = 1;
  if ( v1 )
    return Win32FreeToPagedLookasideList(gpStackRefLookAside, a1);
  return result;
}
