/*
 * XREFs of ?HKFindChildHotkeyForQueue@@YA_NPEAUtagQ@@PEBUtagHOTKEY@@PEAPEAUtagCHILDHOTKEY@@@Z @ 0x1C01C1254
 * Callers:
 *     ?xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C000E95C (-xxxReportHotKey@@YAXPEBUtagHOTKEY@@_NPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HKFindChildHotkeyForQueue(struct tagQ *a1, const struct tagHOTKEY *a2, struct tagCHILDHOTKEY **a3)
{
  char *v3; // r9
  _QWORD *i; // rdx

  *a3 = 0LL;
  v3 = (char *)a2 + 56;
  for ( i = (_QWORD *)*((_QWORD *)a2 + 7); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)v3 )
      return 0;
    if ( *(struct tagQ **)(*(i - 4) + 432LL) == a1 )
      break;
  }
  *a3 = (struct tagCHILDHOTKEY *)(i - 4);
  return 1;
}
