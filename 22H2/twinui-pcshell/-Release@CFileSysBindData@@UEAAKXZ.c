/*
 * XREFs of ?Release@CFileSysBindData@@UEAAKXZ @ 0x18015AE80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CFileSysBindData::Release(CFileSysBindData *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    operator delete(this);
  return v1;
}
