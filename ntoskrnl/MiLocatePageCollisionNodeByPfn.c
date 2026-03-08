/*
 * XREFs of MiLocatePageCollisionNodeByPfn @ 0x14064CDD4
 * Callers:
 *     MiStopPageAccessor @ 0x1402FD06C (MiStopPageAccessor.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiLocatePageCollisionNodeByPfn(ULONG_PTR *BugCheckParameter2)
{
  _QWORD *v2; // rax
  _QWORD *i; // rbx
  _QWORD **v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  ExAcquireSpinLockSharedAtDpcLevel(&dword_140C66EF0);
  v2 = (_QWORD *)qword_140C66EF8;
  i = 0LL;
  while ( v2 )
  {
    i = v2;
    v2 = (_QWORD *)*v2;
  }
  while ( 1 )
  {
    if ( !i )
      KeBugCheckEx(0x1Au, 0x9702uLL, (ULONG_PTR)BugCheckParameter2, *BugCheckParameter2, 0LL);
    if ( (ULONG_PTR *)i[3] == BugCheckParameter2 )
      break;
    v4 = (_QWORD **)i[1];
    v5 = i;
    if ( v4 )
    {
      v6 = *v4;
      for ( i = (_QWORD *)i[1]; v6; v6 = (_QWORD *)*v6 )
        i = v6;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v5 )
          break;
        v5 = i;
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C66EF0);
  return i;
}
