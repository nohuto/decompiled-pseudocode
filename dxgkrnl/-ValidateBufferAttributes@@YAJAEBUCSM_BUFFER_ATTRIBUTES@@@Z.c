/*
 * XREFs of ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000C758
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x1C000C544 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C007C980 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     ?ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z @ 0x1C000C7A0 (-ValidateDXGIAlphaMode@@YAJW4DXGI_ALPHA_MODE@@@Z.c)
 */

__int64 __fastcall ValidateBufferAttributes(const struct CSM_BUFFER_ATTRIBUTES *a1, __int64 a2, __int64 a3)
{
  int v3; // r8d
  _DWORD *v4; // r9

  v3 = ValidateDXGIAlphaMode(*(unsigned int *)a1, a2, a3, a1);
  if ( v3 >= 0 )
  {
    if ( v4[4] > 2u )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v3 = 0;
      if ( (v4[34] & 0x10) != 0 )
      {
        v3 = -1073741811;
        if ( (unsigned int)(v4[17] - 1) <= 3 )
          return 0;
      }
    }
  }
  return (unsigned int)v3;
}
