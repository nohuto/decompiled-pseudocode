/*
 * XREFs of ?_HasCapturedContext@_ContextCallback@details@Concurrency@@QEBA_NXZ @ 0x18002DD48
 * Callers:
 *     sub_18002D350 @ 0x18002D350 (sub_18002D350.c)
 *     sub_180037880 @ 0x180037880 (sub_180037880.c)
 *     sub_1800C7C00 @ 0x1800C7C00 (sub_1800C7C00.c)
 *     sub_1800DAF14 @ 0x1800DAF14 (sub_1800DAF14.c)
 * Callees:
 *     <none>
 */

bool __fastcall Concurrency::details::_ContextCallback::_HasCapturedContext(
        Concurrency::details::_ContextCallback *this)
{
  return *(_QWORD *)this != 0LL;
}
