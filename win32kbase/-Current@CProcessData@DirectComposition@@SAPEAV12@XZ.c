/*
 * XREFs of ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C005CBD8
 * Callers:
 *     ?GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z @ 0x1C0008188 (-GetCompositorClockInfo@CConnection@DirectComposition@@QEAAJPEAPEAVCCompClockInfo@2@@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005CAC0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C0090F08 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0098528 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C009AE28 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00CA030 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     NtDCompositionBoostCompositorClock @ 0x1C0247E90 (NtDCompositionBoostCompositorClock.c)
 *     NtDCompositionEnableMMCSS @ 0x1C0248710 (NtDCompositionEnableMMCSS.c)
 * Callees:
 *     <none>
 */

struct DirectComposition::CProcessData *__fastcall DirectComposition::CProcessData::Current(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *CurrentProcessWin32Process; // rax

  v1 = 0LL;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
    return (struct DirectComposition::CProcessData *)CurrentProcessWin32Process[32];
  return (struct DirectComposition::CProcessData *)v1;
}
