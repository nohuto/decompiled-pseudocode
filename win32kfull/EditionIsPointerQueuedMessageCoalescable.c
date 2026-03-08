/*
 * XREFs of EditionIsPointerQueuedMessageCoalescable @ 0x1C0149100
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01E9C6C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 */

__int64 __fastcall EditionIsPointerQueuedMessageCoalescable(
        __int64 a1,
        struct tagQMSG *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  return IsPointerQueuedMessageCoalescable(
           *(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 432LL),
           a2,
           a3,
           a4,
           a5,
           a6);
}
