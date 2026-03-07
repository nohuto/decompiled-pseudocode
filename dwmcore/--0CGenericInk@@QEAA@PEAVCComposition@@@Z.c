CGenericInk *__fastcall CGenericInk::CGenericInk(CGenericInk *this, struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rax

  *((_QWORD *)this + 8) = &CGenericInk::`vbtable'{for `CContent'};
  *((_QWORD *)this + 55) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 54) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 55) + 4LL) + 440) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CSuperWetSource::CSuperWetSource(this, a2);
  *(_QWORD *)(v2 + 144) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)v2 = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CGenericInk::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CGenericInk::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 352;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v5 + v2 + 60) = v5 - 368;
  *(_QWORD *)(v2 + 152) = &CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vftable';
  *(_QWORD *)(v2 + 160) = v2;
  *(_QWORD *)(v2 + 168) = v2 + 192;
  *(_QWORD *)(v2 + 176) = v2 + 192;
  *(_QWORD *)(v2 + 184) = v2 + 208;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_QWORD *)(v2 + 248) = 0LL;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_DWORD *)(v2 + 264) = 0;
  *(_QWORD *)(v2 + 288) = v2 + 296;
  *(_DWORD *)(v2 + 296) = 0;
  v6 = *(_DWORD **)(v2 + 288);
  *(_BYTE *)(v2 + 360) = 0;
  *v6 = 0;
  return (CGenericInk *)v2;
}
