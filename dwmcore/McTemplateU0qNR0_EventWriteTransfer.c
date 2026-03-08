/*
 * XREFs of McTemplateU0qNR0_EventWriteTransfer @ 0x18012D228
 * Callers:
 *     ?CalculatePresentAndGlitchDeadlines@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004ED40 (-CalculatePresentAndGlitchDeadlines@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x1800512B0 (-TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0qNR0_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[3]; // [rsp+38h] [rbp-40h] BYREF
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+60h] [rbp-18h]
  int v12; // [rsp+64h] [rbp-14h]

  v6 = 1;
  v7[2] = &v6;
  v9 = 0;
  v8 = 4;
  v10 = a5;
  v11 = a4;
  v12 = 0;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 3LL, v7);
}
