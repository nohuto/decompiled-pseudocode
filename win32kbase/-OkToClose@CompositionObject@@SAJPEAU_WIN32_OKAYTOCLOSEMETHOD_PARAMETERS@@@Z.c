/*
 * XREFs of ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C00AFD30
 * Callers:
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionObject::OkToClose(struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a1)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)a1 + 1);
  if ( *((_BYTE *)a1 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a1) == -1 )
    return 3221225506LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *))(**(_QWORD **)(v2 + 8) + 32LL))(
             *(_QWORD *)(v2 + 8),
             a1);
}
