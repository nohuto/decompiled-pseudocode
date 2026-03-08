/*
 * XREFs of ?Optimize@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCBspNode@@@@$0EA@$01$09@@QEAAXXZ @ 0x1801F3444
 * Callers:
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1801F31EC (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CWatermarkStack<CGraphWalker<CBspNode>::CFrame,64,2,10>::Optimize(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rsi
  int v4; // edi
  int v5; // eax
  __int64 v6; // rcx
  void *v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 == 10 )
  {
    v3 = 64LL;
    if ( *(_DWORD *)(a1 + 24) > 0x40u )
      v3 = *(unsigned int *)(a1 + 24);
    v4 = 0;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v3) <= *(_DWORD *)(a1 + 4) )
    {
      v7 = 0LL;
      v5 = HrMalloc(0x10uLL, (unsigned int)v3, &v7);
      if ( v5 >= 0 )
      {
        operator delete(*(void **)(a1 + 16));
        *(_QWORD *)(a1 + 16) = v7;
        *(_DWORD *)(a1 + 4) = v3;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x116u, 0LL);
      }
    }
    *(_DWORD *)(a1 + 24) = 0;
  }
  else
  {
    v4 = v1 + 1;
  }
  *(_DWORD *)(a1 + 8) = v4;
}
