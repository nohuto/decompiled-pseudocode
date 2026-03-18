/*
 * XREFs of ?bSavePath@@YAHAEAVXDCOBJ@@J@Z @ 0x1C00A60E8
 * Callers:
 *     GreSaveDCInternal @ 0x1C0092580 (GreSaveDCInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSavePath(struct XDCOBJ *a1)
{
  if ( *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
    *(_DWORD *)(*(_QWORD *)a1 + 248LL) |= 2u;
  return 1LL;
}
