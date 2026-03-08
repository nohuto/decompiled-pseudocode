/*
 * XREFs of SmmUnmapSection @ 0x1C03D2DEC
 * Callers:
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x1C0071130 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall SmmUnmapSection(PVOID a1)
{
  __int64 CurrentProcess; // rax
  NTSTATUS v2; // eax

  if ( a1 > MmHighestUserAddress )
  {
    v2 = MmUnmapViewInSystemSpace(a1);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(a1);
    v2 = MmUnmapViewOfSection(CurrentProcess);
  }
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(1LL, 184LL);
    LOBYTE(v2) = DxgkLogInternalTriageEvent(
                   0LL,
                   262146,
                   -1,
                   (__int64)L"(((NTSTATUS)(Status)) >= 0)",
                   184LL,
                   0LL,
                   0LL,
                   0LL,
                   0LL);
  }
  return v2;
}
