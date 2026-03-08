/*
 * XREFs of McTemplateU0qn_EventWriteTransfer @ 0x1801CEB94
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004DCA8 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0qn_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+40h] [rbp-38h]
  int v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+4Ch] [rbp-2Ch]
  __int64 v10; // [rsp+50h] [rbp-28h]
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  int v13; // [rsp+90h] [rbp+18h] BYREF

  v13 = a3;
  v7 = &v13;
  v9 = 0;
  v8 = 4;
  v10 = a5;
  v12 = 0;
  v11 = 28;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Compositor_Context,
           &WaitForVerticalBlank_Start,
           a3,
           3u,
           &v6);
}
