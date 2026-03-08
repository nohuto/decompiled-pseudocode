/*
 * XREFs of McTemplateK0qp_EtwWriteTransfer @ 0x1C0002B44
 * Callers:
 *     DxgkStatusChangeNotify @ 0x1C0172E00 (DxgkStatusChangeNotify.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qp_EtwWriteTransfer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v6[6]; // [rsp+38h] [rbp-40h] BYREF
  int v7; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v6[3] = 4LL;
  v5 = 0LL;
  v6[2] = &v7;
  v6[5] = 8LL;
  v6[4] = &v5;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, &Dxgk_PerfTrack_StatusChangeNotify, a3, 3LL, v6);
}
