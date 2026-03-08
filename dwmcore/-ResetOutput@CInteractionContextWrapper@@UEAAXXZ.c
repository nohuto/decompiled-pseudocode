/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180281C50
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x180039CE0 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(CInteractionContextWrapper *this)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v7 = 0;
      v5 = &v3;
      v3 = v2;
      v6 = 8;
      tlgWriteTransfer_EventWriteTransfer(v1, (unsigned __int8 *)dword_18037F346, 0LL, 0LL, 3u, &v4);
    }
  }
}
