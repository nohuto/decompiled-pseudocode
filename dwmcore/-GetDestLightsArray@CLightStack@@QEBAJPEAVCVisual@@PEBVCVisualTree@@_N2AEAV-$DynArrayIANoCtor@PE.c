/*
 * XREFs of ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCCompositionLight@@$02$0A@@@PEA_N@Z @ 0x1800120F8
 * Callers:
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18003127C (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x18012A01C (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::GetDestLightsArray(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  _BYTE *v7; // rdi
  __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // r8
  char v14; // r11
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int i; // ecx
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  int v25; // ebx
  unsigned int v26; // ecx
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF

  v7 = a7;
  if ( a7 )
    *a7 = 1;
  v11 = a6;
  v12 = 0;
  if ( !*((_DWORD *)a1 + 6) )
  {
LABEL_16:
    if ( *(_DWORD *)(v11 + 24) && v7 )
      *v7 = 1;
    return 0;
  }
  while ( 1 )
  {
    v13 = *a1;
    v14 = 1;
    v15 = 2LL * v12;
    if ( *(_DWORD *)(*a1 + 16LL * v12 + 8) == 1 )
    {
      ++v12;
      goto LABEL_15;
    }
    v16 = 0LL;
    if ( *(_DWORD *)(v11 + 24) )
    {
      while ( *(_QWORD *)(*(_QWORD *)v11 + 8 * v16) != *(_QWORD *)(v13 + 16LL * v12) )
      {
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= *(_DWORD *)(v11 + 24) )
          goto LABEL_8;
      }
      v14 = 0;
    }
LABEL_8:
    for ( i = ++v12; i < *((_DWORD *)a1 + 6); ++i )
    {
      if ( *(_DWORD *)(v13 + 16LL * i + 8) == 1 && *(_QWORD *)(v13 + 8 * v15) == *(_QWORD *)(v13 + 16LL * i) )
        goto LABEL_15;
    }
    if ( !v14 )
      goto LABEL_15;
    v18 = *(_QWORD *)(v13 + 8 * v15);
    v27 = v18;
    if ( !a5 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 32LL) )
        goto LABEL_13;
      v18 = v27;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 256LL))(v18)
      || !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v27 + 248LL))(v27, a3, a2) )
    {
LABEL_13:
      if ( v7 )
        *v7 = 0;
      goto LABEL_15;
    }
    v22 = *(_DWORD *)(v11 + 24);
    v23 = v22 + 1;
    if ( v22 + 1 < v22 )
      break;
    if ( v23 > *(_DWORD *)(v11 + 20) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet(v11, 8LL, 1LL, &v27);
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v25, 0xC0u, 0LL);
        goto LABEL_36;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v11 + 8LL * v22) = v27;
      *(_DWORD *)(v11 + 24) = v23;
    }
LABEL_15:
    if ( v12 >= *((_DWORD *)a1 + 6) )
      goto LABEL_16;
  }
  v25 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_36:
  v19 = v25;
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x11Au, 0LL);
  return v19;
}
