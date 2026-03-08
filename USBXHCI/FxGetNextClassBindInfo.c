/*
 * XREFs of FxGetNextClassBindInfo @ 0x1C001CFDC
 * Callers:
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C001CF34 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C00529C4 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall FxGetNextClassBindInfo(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax
  __int64 v4; // r9

  v2 = a1;
  v3 = a1 + 1;
  v4 = 0LL;
  while ( (unsigned __int64)v3 <= a2 && !*v2 )
    v3 = ++v2 + 1;
  if ( (unsigned __int64)v2 >= a2 )
    return (_QWORD *)a2;
  if ( (unsigned __int64)(v2 + 10) > a2 )
    return 0LL;
  if ( *(_DWORD *)v2 == 80 )
    return v2;
  return (_QWORD *)v4;
}
