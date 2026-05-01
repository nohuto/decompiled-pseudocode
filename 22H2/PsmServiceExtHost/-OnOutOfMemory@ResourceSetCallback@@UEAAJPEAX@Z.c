/*
 * XREFs of ?OnOutOfMemory@ResourceSetCallback@@UEAAJPEAX@Z @ 0x180064090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetCallback::OnOutOfMemory(ResourceSetCallback *this, void *a2)
{
  return ResourceSetCallback::SendData(this, a2, 3LL, 0LL);
}
