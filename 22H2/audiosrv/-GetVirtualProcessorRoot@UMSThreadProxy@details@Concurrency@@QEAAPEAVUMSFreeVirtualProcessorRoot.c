/*
 * XREFs of ?GetVirtualProcessorRoot@UMSThreadProxy@details@Concurrency@@QEAAPEAVUMSFreeVirtualProcessorRoot@23@XZ @ 0x18004CFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Concurrency::details::UMSFreeVirtualProcessorRoot *__fastcall Concurrency::details::UMSThreadProxy::GetVirtualProcessorRoot(
        Concurrency::details::UMSThreadProxy *this)
{
  return (struct Concurrency::details::UMSFreeVirtualProcessorRoot *)*((_QWORD *)this + 8);
}
