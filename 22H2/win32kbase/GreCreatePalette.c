/*
 * XREFs of GreCreatePalette @ 0x1C0149770
 * Callers:
 *     <none>
 * Callees:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C002B990 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00C95E0 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 */

__int64 __fastcall GreCreatePalette(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r8d
  struct HOBJ__ **v4; // [rsp+50h] [rbp-18h] BYREF
  int v5; // [rsp+58h] [rbp-10h]

  v1 = 0LL;
  if ( *(_WORD *)a1 == 768 )
  {
    v2 = *(unsigned __int16 *)(a1 + 2);
    if ( *(_WORD *)(a1 + 2) )
    {
      v5 = 0;
      v4 = 0LL;
      if ( (unsigned int)PALMEMOBJ::bCreatePalette(
                           (struct _SLIST_ENTRY **)&v4,
                           1,
                           v2,
                           (const unsigned int *)(a1 + 4),
                           0,
                           0,
                           0,
                           0x500u,
                           0) )
      {
        v5 = 1;
        v1 = (__int64)*v4;
      }
      PALMEMOBJ::~PALMEMOBJ(&v4);
    }
  }
  return v1;
}
