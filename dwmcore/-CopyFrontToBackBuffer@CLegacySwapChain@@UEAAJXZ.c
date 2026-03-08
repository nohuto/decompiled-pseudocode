/*
 * XREFs of ?CopyFrontToBackBuffer@CLegacySwapChain@@UEAAJXZ @ 0x180042130
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJXZ @ 0x18011B5F0 (-CopyFrontToBackBuffer@CLegacySwapChain@@$4PPPPPPPM@BLA@EAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x18029C970 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x18029E580 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x1800414FC (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180042574 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800DBF94 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801292C6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySwapChain::CopyFrontToBackBuffer(CLegacySwapChain *this, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned int v5; // r12d
  int v6; // esi
  int v7; // r14d
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int v11; // edi
  __int64 v12; // rax
  FastRegion::Internal::CRgnData *v13; // rcx
  unsigned int RectangleCount; // eax
  _BYTE v16[8]; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp-11h]
  int *v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+88h] [rbp+7h]
  _DWORD v21[6]; // [rsp+98h] [rbp+17h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68));
  if ( **(_DWORD **)(v4 + 16) )
  {
    v5 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Start,
        a3,
        1LL,
        v21);
    FastRegion::Internal::CRgnData::BeginIterator(
      *(FastRegion::Internal::CRgnData **)(v4 + 16),
      (struct FastRegion::CRegion::Iterator *)v16);
    while ( (unsigned __int64)v18 < v17 )
    {
      v6 = *v18;
      v7 = v18[2];
      v21[2] = 0;
      v8 = *((_QWORD *)this + 30);
      v9 = 2 * v20;
      v21[1] = v6;
      v21[4] = v7;
      v21[5] = 1;
      v10 = *(_DWORD *)(v19 + 4 * v9);
      v11 = *(_DWORD *)(v19 + 4 * v9 + 4);
      v12 = *((_QWORD *)this + 10);
      v21[0] = v10;
      v21[3] = v11;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *, _DWORD))(**(_QWORD **)(v12 + 560) + 920LL))(
        *(_QWORD *)(v12 + 560),
        *((_QWORD *)this + 29),
        0LL,
        v10,
        v6,
        0,
        v8,
        0,
        v21,
        0);
      v5 += (v7 - v6) * (v11 - v10);
      FastRegion::Internal::CRgnData::StepIterator(v13, (struct FastRegion::CRegion::Iterator *)v16);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)(v4 + 16));
      McTemplateU0qq_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_COPYFRONTTOBACKBUFFEREVENT_Stop,
        RectangleCount,
        v5);
    }
    **(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL * *((unsigned int *)this + 68)) + 16LL) = 0;
  }
  return 0LL;
}
