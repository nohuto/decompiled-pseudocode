/*
 * XREFs of ?InRapidHPDPeriod@RAPID_HPD_MANAGER@@AEAAXW4RAPID_HPD_PERIOD_UPDATE@1@AEA_N1@Z @ 0x1C001C8C0
 * Callers:
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C001A510 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x1C0022908 (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 *     ?ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z @ 0x1C00561C4 (-ExtendExistingHPDPeriod@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_EXTENSION@@U_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RAPID_HPD_MANAGER::InRapidHPDPeriod(__int64 a1, int a2, bool *a3, bool *a4)
{
  __int64 result; // rax
  bool v6; // r10
  bool v7; // r8
  int v8; // ecx

  result = MEMORY[0xFFFFF78000000014];
  v6 = MEMORY[0xFFFFF78000000014] < (__int64)(*(_QWORD *)(a1 + 56) + (unsigned int)(10000 * *(_DWORD *)(a1 + 24)));
  *a3 = v6;
  v7 = result < *(_QWORD *)(a1 + 72) + (unsigned int)(10000 * *(_DWORD *)(a1 + 28));
  *a4 = v7;
  if ( a2 == 1 || a2 == 2 && v6 && v7 )
    *(_QWORD *)(a1 + 56) = result;
  v8 = *(_DWORD *)(a1 + 88);
  if ( v8 == 1 )
  {
    *a3 = 1;
  }
  else
  {
    result = *a3;
    if ( v8 == 2 )
      result = 0LL;
    *a3 = result;
  }
  return result;
}
