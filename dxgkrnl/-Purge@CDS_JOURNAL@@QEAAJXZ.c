/*
 * XREFs of ?Purge@CDS_JOURNAL@@QEAAJXZ @ 0x1C03BAA74
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C01C0D10 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_BTL@@MEAA@XZ @ 0x1C03B7E9C (--1CCD_BTL@@MEAA@XZ.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C03BA164 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
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
