/*
 * XREFs of ?GetUsageParams@EdidMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x1C01FC930
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z @ 0x1C001DA2C (-EDID_V1_GetDisplayPrimaryUse@@YAJKPEBEPEAW4DISPLAY_USE_CASE@@@Z.c)
 *     ?EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z @ 0x1C0071C3C (-EDID_V1_GetDisplayIsForDesktopUsage@@YAJKPEBEPEA_N@Z.c)
 *     ?EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z @ 0x1C0071CF0 (-EDID_V1_GetDisplayIsMsftOnlyPrimaryUse@@YAJKPEBEPEA_N@Z.c)
 *     ?GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1C01CFB00 (-GetRawDescriptor@EdidMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU-$default_delet.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::GetUsageParams(
        DxgMonitor::EdidMonitorDescriptor *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  enum DISPLAY_USE_CASE *v7; // r8
  unsigned __int8 *v8; // rbx
  int DisplayPrimaryUse; // eax
  __int64 v10; // rdi
  int IsMsftOnlyPrimaryUse; // eax
  int v13; // eax
  unsigned int v14; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 *v15; // [rsp+28h] [rbp-10h] BYREF

  v14 = 0;
  DxgMonitor::EdidMonitorDescriptor::GetRawDescriptor(this, &v15, &v14);
  v7 = a2;
  v8 = v15;
  DisplayPrimaryUse = EDID_V1_GetDisplayPrimaryUse(v14, v15, v7);
  v10 = DisplayPrimaryUse;
  if ( DisplayPrimaryUse < 0
    || (IsMsftOnlyPrimaryUse = EDID_V1_GetDisplayIsMsftOnlyPrimaryUse(v14, v8, a3),
        v10 = IsMsftOnlyPrimaryUse,
        IsMsftOnlyPrimaryUse < 0)
    || (v13 = EDID_V1_GetDisplayIsForDesktopUsage(v14, v8, a4), v10 = v13, v13 < 0) )
  {
    WdLogSingleEntry1(2LL, v10);
  }
  else
  {
    LODWORD(v10) = 0;
  }
  if ( v8 )
    operator delete(v8);
  return (unsigned int)v10;
}
