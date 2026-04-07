/*
 * XREFs of ??R_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@QEBAJPEAUIPropertyValueStatics@Foundation@Windows@@@Z @ 0x18003E9B0
 * Callers:
 *     ??$UsePropertyFactory@V_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@KAJAEBV_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@@Z @ 0x18003E8FC (--$UsePropertyFactory@V_lambda_20cc25e9e6e64aaab66070ee3f3626ad_@@@-$EffectBase@UIGaussianBlurEf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_20cc25e9e6e64aaab66070ee3f3626ad_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  switch ( *(_DWORD *)a1 )
  {
    case 0:
      return (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(*a2 + 112))(a2, a2, *(_QWORD *)(a1 + 16));
    case 1:
      v3 = *a2;
      v4 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 76LL);
      return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v3 + 88))(a2, v4, *(_QWORD *)(a1 + 16));
    case 2:
      v3 = *a2;
      v4 = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 80LL);
      return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v3 + 88))(a2, v4, *(_QWORD *)(a1 + 16));
  }
  return 2147942487LL;
}
