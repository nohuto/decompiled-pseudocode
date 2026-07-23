/*
 * XREFs of RtlLookupExceptionHandler @ 0x14025046C
 * Callers:
 *     RtlDispatchException @ 0x140263510 (RtlDispatchException.c)
 *     KiLockServiceTable @ 0x14039F2E4 (KiLockServiceTable.c)
 *     KiFatalExceptionFilter @ 0x140A7321C (KiFatalExceptionFilter.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlLookupExceptionHandler(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _BYTE *v6; // r9
  int v7; // eax
  __int64 v8; // r8

  v6 = (_BYTE *)(a2 + *(unsigned int *)(a1 + 8));
  if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v6 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((*v6 >> 3) & a3) != 0 )
  {
    v7 = (unsigned __int8)v6[2];
    v8 = (unsigned int)(v7 + 1);
    if ( (v7 & 1) == 0 )
      v8 = (unsigned __int8)v6[2];
    if ( a6 )
      *a6 = &v6[2 * (unsigned int)(v8 + 2) + 4];
    if ( a5 )
      *a5 = a2 + *(unsigned int *)&v6[2 * v8 + 4];
  }
  return 0LL;
}
