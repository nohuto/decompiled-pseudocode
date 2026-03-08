/*
 * XREFs of _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x1801CFE34
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x1801FA940 (-Render@CSpectreCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_2c23dc335d575e6068a59f43383614b1_::operator()(_QWORD *a1)
{
  __int64 *v1; // rax
  unsigned __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 *v6; // rax

  v1 = (__int64 *)a1[1];
  v2 = 0LL;
  v4 = *v1;
  if ( (v1[1] - *v1) >> 3 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 8 * v2);
      if ( v5 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, 0LL);
      v6 = (__int64 *)a1[1];
      ++v2;
      v4 = *v6;
    }
    while ( v2 < (v6[1] - *v6) >> 3 );
  }
  return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 48LL))(*a1);
}
