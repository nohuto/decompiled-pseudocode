/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B530
 * Callers:
 *     ?GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z @ 0x18000DCA0 (-GetFrame@CApplicationFrameService@@UEAAJPEBGKPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x180037DA0 (-RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DAT.c)
 *     ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180038C60 (-CopyTo@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z.c)
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800399C0 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B380 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004981C (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1801DF760 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ??$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_255728157cf8e92998065ff06efe801f_@@@Z @ 0x180487E44 (--$_InitializeHelper@V_lambda_255728157cf8e92998065ff06efe801f_@@@-$NativeString@V-$CoTaskMemPol.c)
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z @ 0x1804DDD4C (-GetIconData@ImmersiveIcons@@YAJPEBGAEBULoadIconParams@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  LPVOID v6; // rax
  _WORD *v8; // rax
  __int64 v9; // r8
  _WORD *v10; // rax

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return 2147942934LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 == -1LL )
  {
    v9 = *(_QWORD *)(a1 + 8);
    v10 = *(_WORD **)a1;
    if ( v9 == -1 )
    {
      if ( v10 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v10[v9] );
      }
      else
      {
        v9 = 0LL;
      }
      *(_QWORD *)(a1 + 8) = v9;
    }
    if ( v10 )
      v4 = v9 + 1;
    else
      v4 = 0LL;
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( !v4 )
  {
    if ( is_mul_ok(v2, 2uLL) )
    {
      v8 = CoTaskMemAlloc(2 * v2);
      if ( v8 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v8;
        *v8 = 0;
        return 0LL;
      }
      return 2147942414LL;
    }
    return 2147942934LL;
  }
  if ( v2 > v4 )
  {
    v5 = 2 * v4;
    if ( is_mul_ok(v4, 2uLL) )
    {
      if ( v4 > 0x800 )
        v5 = v4 + 2048;
      if ( v2 <= v5 )
        v2 = v5;
      v6 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v2);
      if ( v6 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v6;
        return 0LL;
      }
      return 2147942414LL;
    }
    return 2147942934LL;
  }
  return 0LL;
}
