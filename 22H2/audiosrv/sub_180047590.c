/*
 * XREFs of sub_180047590 @ 0x180047590
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006C138 @ 0x18006C138 (sub_18006C138.c)
 */

__int64 __fastcall sub_180047590(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned __int8)sub_18006C138() )
    AudioPolicyManagerExtension_OnDeviceFormatChanged(a2, a3);
  return 0LL;
}
