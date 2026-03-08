/*
 * XREFs of ?CopySubresourceRegion@CD3DDevice@@QEAAXPEAUID3D11Resource@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@0IIII@Z @ 0x18001891C
 * Callers:
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1800185F4 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18021F57C (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1802211DC (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ @ 0x180285D80 (-CopyFrontToBackBuffer@CDDisplaySwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x18029AAA0 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18029C970 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1802B1464 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxdddddd_EventWriteTransfer @ 0x18028BA18 (McTemplateU0xxdddddd_EventWriteTransfer.c)
 */

__int64 __fastcall CD3DDevice::CopySubresourceRegion(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9)
{
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  __int64 result; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // [rsp+60h] [rbp-21h] BYREF
  int v16; // [rsp+64h] [rbp-1Dh]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  int v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+74h] [rbp-Dh]

  v9 = *a4;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 560);
  v17 = 0;
  v15 = v9;
  v16 = a4[1];
  v18 = a4[2];
  v19 = a4[3];
  v20 = 1;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, int, int *, int))(*(_QWORD *)v11 + 920LL))(
             v11,
             a5,
             a6,
             a7,
             a8,
             0,
             a2,
             a3,
             &v15,
             a9);
  if ( (a9 & 4) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    return McTemplateU0xxdddddd_EventWriteTransfer(v14, v13, a5, v10, v15, v16, v18, v19, a7, a8);
  return result;
}
