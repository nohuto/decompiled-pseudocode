/*
 * XREFs of McTemplateK0xqpp_EtwWriteTransfer @ 0x1C0057444
 * Callers:
 *     ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x1C001A2D0 (-SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___ @ 0x1C001B8EC (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_96e157b43079a313af61cac4d916eb85___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___ @ 0x1C00564C8 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_0b554593ef403a86ad1e63867a4eabfc___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___ @ 0x1C00566D0 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_271d47a19eb31cbfc6e558835131ce74___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___ @ 0x1C00568A4 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_58d59253a106932dd6afe50e996ad1eb___.c)
 *     HOSTVMMONITORMAPPING::RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___ @ 0x1C0056A98 (HOSTVMMONITORMAPPING--RemoveMappingInternal__lambda_fa329dc3555829cf0f5b9660d2dc29b7___.c)
 *     _lambda_65e49200310e163fd0a118e331418de0_::operator() @ 0x1C0056C60 (_lambda_65e49200310e163fd0a118e331418de0_--operator().c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0002BBC (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

NTSTATUS McTemplateK0xqpp_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  va_list v11; // [rsp+70h] [rbp+1Fh]
  __int64 v12; // [rsp+78h] [rbp+27h]
  __int64 v13; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v15; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v17; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  v6 = 8LL;
  va_copy(v5, va);
  v8 = 4LL;
  va_copy(v7, va1);
  v10 = 8LL;
  va_copy(v9, va2);
  va_copy(v11, va3);
  v12 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 5u, &v4);
}
