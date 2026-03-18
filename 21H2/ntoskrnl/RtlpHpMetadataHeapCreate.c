/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x1403DE6A0
 * Callers:
 *     RtlHpHeapManagerStart @ 0x14036EDD4 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x14036F620 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE RunOnce, __int128 *Parameter, PVOID *Context)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *Parameter;
  v4 = RtlpHpHeapCreate(0, (__int64)Parameter, (__int64)Context, &v6);
  result = 0LL;
  if ( v4 )
  {
    RunOnce[-1].Value = v4;
    return 1LL;
  }
  return result;
}
