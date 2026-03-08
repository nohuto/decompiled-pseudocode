/*
 * XREFs of ?HandleLowLevelHooks@Keyboard@InputTraceLogging@@SAXK_K@Z @ 0x1C01E873C
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00E83C0 (EditionKeyEventLLHook.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Keyboard::HandleLowLevelHooks()
{
  __int16 v0; // r9
  int v1; // r10d
  ULONG v2; // r11d
  __int16 v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  ULONG v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  __int16 *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 0x4000LL) )
    {
      v11 = 0;
      v8 = 0;
      v4 = v1;
      v9 = &v3;
      v3 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
         - v0;
      v6 = &v4;
      v10 = 2;
      v7 = v2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C035C080,
        (unsigned __int8 *)dword_1C031D7FF,
        0LL,
        0LL,
        v2,
        &v5);
    }
  }
}
