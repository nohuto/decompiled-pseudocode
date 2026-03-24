/*
 * XREFs of ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x180027028
 * Callers:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x180026FC8 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x180156040 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 */

void __fastcall CScheduleFrameInfoVolatileData::ResetTokens(CScheduleFrameInfoVolatileData *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 42); i = (unsigned int)(i + 1) )
    operator delete(*(void **)(*((_QWORD *)this + 18) + 8 * i));
  *((_DWORD *)this + 42) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 144, 8LL);
}
