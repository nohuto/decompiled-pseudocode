/*
 * XREFs of EtwpUpdateLoggerGroupMasks @ 0x14080D834
 * Callers:
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     EtwpGetFlagExtension @ 0x14074856C (EtwpGetFlagExtension.c)
 *     EtwpUpdateGroupMasks @ 0x14080D8D8 (EtwpUpdateGroupMasks.c)
 */

__int64 __fastcall EtwpUpdateLoggerGroupMasks(__int64 a1, __int64 a2)
{
  unsigned __int16 *FlagExtension; // rax
  __int64 v4; // r10
  unsigned __int16 v5; // cx
  int v7; // eax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( !a2 )
    return EtwpUpdateGroupMasks(a1, v8);
  FlagExtension = EtwpGetFlagExtension(a2, 1);
  if ( !FlagExtension )
  {
    v7 = v8[0];
    if ( *(int *)(v4 + 72) >= 0 )
      v7 = *(_DWORD *)(v4 + 72);
    LODWORD(v8[0]) = v7;
    return EtwpUpdateGroupMasks(a1, v8);
  }
  v5 = 4 * *FlagExtension - 4;
  if ( v5 <= 0x20u )
  {
    memmove(v8, FlagExtension + 2, v5);
    return EtwpUpdateGroupMasks(a1, v8);
  }
  return 3221225485LL;
}
