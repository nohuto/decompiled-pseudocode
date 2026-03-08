/*
 * XREFs of ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x1802A8AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1802A8A94 (--1CHolographicInteropTaskQueue@@EEAA@XZ.c)
 */

union _SLIST_HEADER *__fastcall CHolographicInteropTaskQueue::`scalar deleting destructor'(
        union _SLIST_HEADER *this,
        char a2)
{
  CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
