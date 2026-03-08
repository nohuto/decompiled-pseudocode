/*
 * XREFs of ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@PEA_K@Z @ 0x1C000C4DC
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z @ 0x1C00877EC (-RebindCompositionSurfaceBuffer@CContentResource@@QEAAJPEAVCCompositionSwapchainBuffer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurface::Bind(
        CCompositionSurface *this,
        struct CCompositionBuffer *a2,
        unsigned __int64 *a3)
{
  unsigned int v3; // r10d
  char *v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rdx

  v3 = 0;
  if ( *((_DWORD *)this + 22) )
  {
    v6 = (char *)this + 72;
    if ( *(_BYTE *)(*(_QWORD *)v6 + 16LL) )
      return (unsigned int)-1073740528;
  }
  else
  {
    v6 = (char *)this + 72;
  }
  v7 = *(_QWORD *)v6;
  v8 = (_QWORD *)((char *)a2 + 24);
  if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
    __fastfail(3u);
  *v8 = v7;
  v8[1] = v6;
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)v6 = v8;
  ++*((_DWORD *)this + 22);
  v9 = *((_QWORD *)this + 5) + 1LL;
  *((_QWORD *)this + 5) = v9;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this - 2);
  *((_QWORD *)a2 + 2) = v9;
  *((_BYTE *)a2 + 40) = 1;
  *a3 = *((_QWORD *)this + 5);
  return v3;
}
