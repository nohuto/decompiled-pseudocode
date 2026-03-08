/*
 * XREFs of NextOwnedWindow @ 0x1C002B764
 * Callers:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0021340 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NextOwnedWindow(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  bool i; // zf
  _QWORD *v7; // rax

  if ( a1 )
    goto LABEL_8;
  a1 = *(_QWORD **)(a3 + 112);
  if ( !a1 )
    return 0LL;
  do
  {
    v5 = (_QWORD *)a1[15];
    v7 = a1;
    for ( i = a1 == v5; !i; i = v5 == (_QWORD *)a1[13] )
    {
      v7 = v5;
      if ( !v5 )
        break;
      v5 = (_QWORD *)v5[13];
    }
    if ( a2 == v7 )
      break;
LABEL_8:
    a1 = (_QWORD *)a1[11];
  }
  while ( a1 );
  return a1;
}
