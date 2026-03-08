/*
 * XREFs of ?IsSupportedForCpuClipping@CProxyGeometry@@UEBA_NPEA_N@Z @ 0x180019BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CProxyGeometry::IsSupportedForCpuClipping(CProxyGeometry *this, bool *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 18);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, bool *))(*(_QWORD *)v2 + 208LL))(v2, a2);
  if ( a2 )
    *a2 = 0;
  return 1;
}
