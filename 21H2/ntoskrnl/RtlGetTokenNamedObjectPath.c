/*
 * XREFs of RtlGetTokenNamedObjectPath @ 0x1409B91D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 */

__int64 __fastcall RtlGetTokenNamedObjectPath(void *a1)
{
  return RtlpGetTokenNamedObjectPath(a1, 0LL);
}
