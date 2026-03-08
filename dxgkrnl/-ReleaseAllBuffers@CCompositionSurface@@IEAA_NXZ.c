/*
 * XREFs of ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C00143AC
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C000DAA0 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?Delete@CCompositionSurface@@MEAAJPEAX@Z @ 0x1C0014380 (-Delete@CCompositionSurface@@MEAAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::ReleaseAllBuffers(CCompositionSurface *this)
{
  char v1; // si
  CCompositionSurface **v3; // rbx
  CCompositionSurface **v4; // rax
  CCompositionSurface *v5; // rcx
  CCompositionSurface *v6; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 22) )
  {
    v3 = (CCompositionSurface **)((char *)this + 72);
    v4 = (CCompositionSurface **)*((_QWORD *)this + 9);
    if ( v4[1] != (CCompositionSurface *)((char *)this + 72) )
      goto LABEL_13;
    v5 = *v4;
    if ( *((CCompositionSurface ***)*v4 + 1) != v4 )
      goto LABEL_13;
    *v3 = v5;
    *((_QWORD *)v5 + 1) = v3;
    if ( v4 != v3 )
    {
      v1 = 1;
      while ( 1 )
      {
        if ( v4 != (CCompositionSurface **)24 )
          (*(void (__fastcall **)(CCompositionSurface **, __int64))*(v4 - 3))(v4 - 3, 1LL);
        v4 = (CCompositionSurface **)*v3;
        if ( *((CCompositionSurface ***)*v3 + 1) != v3 )
          break;
        v6 = *v4;
        if ( *((CCompositionSurface ***)*v4 + 1) != v4 )
          break;
        *v3 = v6;
        *((_QWORD *)v6 + 1) = v3;
        if ( v4 == v3 )
          goto LABEL_11;
      }
LABEL_13:
      __fastfail(3u);
    }
LABEL_11:
    *((_DWORD *)this + 22) = 0;
  }
  return v1;
}
