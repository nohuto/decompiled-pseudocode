/*
 * XREFs of McTemplateU0f_EventWriteTransfer @ 0x18025C3FC
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x18025AC5C (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B284C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0f_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // xmm2_4
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+80h] [rbp+18h] BYREF

  v9 = v3;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EventWriteTransfer(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_HOLOGRAPHICINTEROPTARGET_TIMEINQUEUE,
           a3,
           2u,
           &v5);
}
