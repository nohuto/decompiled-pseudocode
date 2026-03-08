/*
 * XREFs of ?bRemovePvtData@PFFOBJ@@QEAAHPEAUtagPvtData@@@Z @ 0x1C02D86DC
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1C0116608 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D160 (--1PFFMEMOBJ@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFFOBJ::bRemovePvtData(PFFOBJ *this, struct tagPvtData *a2)
{
  __int64 v4; // rdi
  __int64 i; // rax

  v4 = *(_QWORD *)(*(_QWORD *)this + 144LL);
  if ( !v4 )
    return 0LL;
  if ( (struct tagPvtData *)v4 != a2 )
  {
    for ( i = *(_QWORD *)(v4 + 16); i; i = *(_QWORD *)(i + 16) )
    {
      if ( (struct tagPvtData *)i == a2 )
      {
        if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
          PopThreadGuardedObject((char *)a2 + 24);
        *(_QWORD *)(v4 + 16) = *((_QWORD *)a2 + 2);
        goto LABEL_6;
      }
      v4 = i;
    }
    return 0LL;
  }
  if ( (*((_DWORD *)a2 + 2) & 4) != 0 )
    PopThreadGuardedObject((char *)a2 + 24);
  *(_QWORD *)(*(_QWORD *)this + 144LL) = *((_QWORD *)a2 + 2);
LABEL_6:
  Win32FreePool(a2);
  return 1LL;
}
