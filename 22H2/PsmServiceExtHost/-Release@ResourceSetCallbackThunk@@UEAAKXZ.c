/*
 * XREFs of ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x1800374D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18004437C (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall ResourceSetCallbackThunk::Release(ResourceSetCallbackThunk *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
