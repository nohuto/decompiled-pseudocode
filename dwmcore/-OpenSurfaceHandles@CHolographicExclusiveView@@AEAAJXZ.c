/*
 * XREFs of ?OpenSurfaceHandles@CHolographicExclusiveView@@AEAAJXZ @ 0x1802A51CC
 * Callers:
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x1802A4CCC (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@Z @ 0x1802A5328 (-ProcessExclusiveSurfaceUpdate@CHolographicExclusiveView@@AEAA_NIPEAUEXCLUSIVE_SURFACE_UPDATE@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicExclusiveView::OpenSurfaceHandles(CHolographicExclusiveView *this)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int *v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  _BYTE v13[1248]; // [rsp+30h] [rbp-508h] BYREF

  v1 = *((_QWORD *)this + 12);
  v2 = 0;
  v4 = 0;
  if ( v1 )
  {
    v5 = *(_QWORD *)(v1 + 104);
    if ( v5 )
    {
      if ( *((_QWORD *)this + 18) )
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
        v7 = *((_QWORD *)this + 18);
        v8 = (unsigned int *)((char *)this + 152);
        *((_QWORD *)this + 17) = v6;
        *((_DWORD *)this + 38) = 31;
        v9 = NtOpenCompositionSurfaceRealizationInfo(v7, (char *)this + 136, (char *)this + 152, v13);
        if ( v9 >= 0 )
        {
          if ( *v8 )
          {
            do
            {
              v11 = v2++;
              *((_QWORD *)this + v11 + 20) = *(_QWORD *)&v13[40 * v11 + 8];
            }
            while ( v2 < *v8 );
          }
          *((_BYTE *)this + 81) = 1;
        }
        else
        {
          v4 = v9 | 0x10000000;
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9 | 0x10000000, 0x232u, 0LL);
        }
      }
    }
  }
  return v4;
}
