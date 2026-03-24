/*
 * XREFs of ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02668B8
 * Callers:
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0266910 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0266E00 (TdrBugcheckOnTimeout.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 */

void __fastcall TdrUpdateDbgBuffer(struct _TDR_RECOVERY_CONTEXT *a1)
{
  _DWORD *v2; // rcx

  if ( *((_QWORD *)a1 + 355) )
  {
    if ( *((_QWORD *)a1 + 356) )
    {
      v2 = (_DWORD *)*((_QWORD *)a1 + 359);
      if ( v2 )
      {
        if ( *v2 == 1380209782 && v2[681] == 1380209782 )
          memmove(v2, (char *)a1 + 104, 0xAA8uLL);
      }
    }
  }
}
