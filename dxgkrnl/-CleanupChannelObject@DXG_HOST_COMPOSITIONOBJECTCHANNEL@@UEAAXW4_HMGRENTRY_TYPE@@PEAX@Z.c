/*
 * XREFs of ?CleanupChannelObject@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C02DC820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::CleanupChannelObject(__int64 a1, int a2, void *a3)
{
  LONG_PTR result; // rax

  if ( a2 == 17 )
    return ObfDereferenceObject(a3);
  return result;
}
