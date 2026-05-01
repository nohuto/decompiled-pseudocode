/*
 * XREFs of ?CopyTo@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEBAJPEAPEAG@Z @ 0x180038C60
 * Callers:
 *     ?GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z @ 0x1800374C0 (-GetPackageId@CImmersiveApp@@UEAAJHPEAPEAG@Z.c)
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180037550 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z @ 0x180206950 (-GetEnterpriseId@CApplicationViewBase@@UEAAJPEAPEAG@Z.c)
 *     ?GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x1803B8E80 (-GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z.c)
 *     ?GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z @ 0x1803B9F20 (-GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z.c)
 *     ?GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z @ 0x1804667B8 (-GetAppLayoutItemName@TabletModeTraceLogging@@CAJPEAUIAppLayoutItem@@PEAPEAG@Z.c)
 *     ?GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x180467754 (-GetViewName@ApplicationViewTraceLoggingHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18003B530 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::CopyTo(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  int v7; // eax
  void *v8; // r8
  int v9; // ebp
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  _WORD *v12; // rax
  __int64 v13; // rdi
  __int16 v14; // cx
  LPVOID pv[7]; // [rsp+20h] [rbp-38h] BYREF

  *a2 = 0LL;
  v3 = *a1;
  if ( !*a1 )
    return 2147943568LL;
  v4 = -1LL;
  v5 = a1[1];
  memset(pv, 0, 24);
  if ( v5 == -1LL )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(v3 + 2 * v5) );
  }
  v6 = -1LL;
  do
    ++v6;
  while ( *(_WORD *)(v3 + 2 * v6) );
  if ( v5 == -1LL )
  {
    v5 = v6;
    v4 = v6;
  }
  else if ( v5 < v6 )
  {
    v4 = v5;
  }
  else
  {
    do
      ++v4;
    while ( *(_WORD *)(v3 + 2 * v4) );
  }
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(pv, v5);
  v8 = pv[0];
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = v5 + 1;
    if ( v5 > 0x7FFFFFFE )
    {
      if ( v5 == -1LL )
        goto LABEL_20;
    }
    else if ( v4 <= 0x7FFFFFFE )
    {
      v11 = v4 - v10;
      v12 = pv[0];
      v13 = v3 - (unsigned __int64)pv[0];
      while ( v11 + v10 )
      {
        v14 = *(_WORD *)((char *)v12 + v13);
        if ( !v14 )
          break;
        *v12++ = v14;
        if ( !--v10 )
          goto LABEL_17;
      }
      if ( !v10 )
LABEL_17:
        --v12;
      *v12 = 0;
      goto LABEL_20;
    }
    *(_WORD *)pv[0] = 0;
  }
LABEL_20:
  if ( v9 < 0 )
  {
    if ( v8 )
      CoTaskMemFree(v8);
  }
  else
  {
    *a2 = v8;
  }
  return (unsigned int)v9;
}
