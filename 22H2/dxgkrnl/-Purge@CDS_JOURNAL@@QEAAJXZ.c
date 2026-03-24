/*
 * XREFs of ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C016C45C
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C014887C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0150390 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ??1CCD_BTL@@MEAA@XZ @ 0x1C02ED4C8 (--1CCD_BTL@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CDS_JOURNAL::Purge(CDS_JOURNAL *this)
{
  char *v1; // rbx
  char **v2; // rax
  char **v3; // rcx

  v1 = (char *)this + 24;
  while ( 1 )
  {
    v2 = (char **)*((_QWORD *)v1 + 1);
    if ( *v2 != v1 || (v3 = (char **)v2[1], *v3 != (char *)v2) )
      __fastfail(3u);
    *((_QWORD *)v1 + 1) = v3;
    *v3 = v1;
    if ( v2 == (char **)v1 )
      break;
    operator delete(v2);
  }
  return 0LL;
}
