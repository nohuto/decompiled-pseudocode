/*
 * XREFs of ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1802A8B1C
 * Callers:
 *     ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1802A8A94 (--1CHolographicInteropTaskQueue@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x1802A8B70 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 */

void __fastcall CHolographicInteropTaskQueue::ClearList(CHolographicInteropTaskQueue *this, union _SLIST_HEADER *a2)
{
  CHolographicInteropTaskQueue *v2; // rcx
  PSLIST_ENTRY v3; // rdi
  struct MESSAGE *v4; // rbx

  v3 = InterlockedFlushSList(a2);
  while ( v3 )
  {
    v4 = (struct MESSAGE *)v3;
    v3 = v3->Next;
    CHolographicInteropTaskQueue::ClearMessage(v2, v4);
    operator delete(v4);
  }
}
