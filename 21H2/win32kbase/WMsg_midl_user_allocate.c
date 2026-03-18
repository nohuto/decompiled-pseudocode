/*
 * XREFs of WMsg_midl_user_allocate @ 0x1C0059810
 * Callers:
 *     WmsgpPostMessage @ 0x1C02C8008 (WmsgpPostMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WMsg_midl_user_allocate(__int64 a1)
{
  return ExAllocatePool2(258LL, a1);
}
