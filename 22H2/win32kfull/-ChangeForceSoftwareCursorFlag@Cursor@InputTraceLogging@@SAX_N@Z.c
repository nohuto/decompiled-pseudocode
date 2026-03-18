/*
 * XREFs of ?ChangeForceSoftwareCursorFlag@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1C01C0E40
 * Callers:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C005D248 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C01C0EE0 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Cursor::ChangeForceSoftwareCursorFlag()
{
  int v0; // r9d
  int v1; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+38h] [rbp-40h] BYREF
  int *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1C0359080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0359080, 32LL) )
    {
      v5 = 0;
      v3 = &v1;
      v1 = v0;
      v4 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0359080,
        (unsigned __int8 *)dword_1C031B752,
        0LL,
        0LL,
        3u,
        &v2);
    }
  }
}
