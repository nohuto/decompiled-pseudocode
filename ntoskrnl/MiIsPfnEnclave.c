/*
 * XREFs of MiIsPfnEnclave @ 0x1402C11E0
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MiFreeSmallPageFromMdl @ 0x140620DF0 (MiFreeSmallPageFromMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnEnclave(__int64 a1)
{
  _QWORD *v1; // rdx
  unsigned int v2; // r8d
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rax

  v1 = (_QWORD *)qword_140C69508;
  v2 = 0;
  if ( !qword_140C69508 )
    return 0LL;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) != 1 )
    return 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  if ( !qword_140C69508 )
    return 0LL;
  do
  {
    v5 = v1[3];
    if ( v4 >= v5 )
    {
      if ( v4 - v5 < v1[4] )
        break;
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      v1 = (_QWORD *)*v1;
    }
  }
  while ( v1 );
  LOBYTE(v2) = v1 != 0LL;
  return v2;
}
