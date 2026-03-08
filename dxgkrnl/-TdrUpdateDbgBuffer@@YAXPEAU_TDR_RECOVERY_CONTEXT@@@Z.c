/*
 * XREFs of ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030A9BC
 * Callers:
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030AA20 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C030AF10 (TdrBugcheckOnTimeout.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 */

void __fastcall TdrUpdateDbgBuffer(struct _TDR_RECOVERY_CONTEXT *a1)
{
  _DWORD *v2; // rcx

  if ( *((_QWORD *)a1 + 356) )
  {
    if ( *((_QWORD *)a1 + 357) )
    {
      v2 = (_DWORD *)*((_QWORD *)a1 + 360);
      if ( v2 )
      {
        if ( *v2 == 1380209782 && v2[681] == 1380209782 )
          memmove(v2, (char *)a1 + 112, 0xAA8uLL);
      }
    }
  }
}
