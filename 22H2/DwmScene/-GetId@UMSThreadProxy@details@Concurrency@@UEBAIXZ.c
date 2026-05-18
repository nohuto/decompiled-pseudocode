/*
 * XREFs of ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ @ 0x18008AA84
 * Callers:
 *     sub_180106420 @ 0x180106420 (sub_180106420.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::UMSThreadProxy::GetId(Concurrency::details::UMSThreadProxy *this)
{
  return *((unsigned int *)this + 32);
}
