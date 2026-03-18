/*
 * XREFs of ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800F8F78
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800AB654 (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x180271B08 (--1CThreadContext@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 */

void __fastcall CPtrArrayBase::Clear(CPtrArrayBase *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (v2 & 2) != 0 )
    operator delete((void *)(v2 & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)this = 0LL;
}
