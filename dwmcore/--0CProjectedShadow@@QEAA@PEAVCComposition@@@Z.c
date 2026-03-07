CProjectedShadow *__fastcall CProjectedShadow::CProjectedShadow(CProjectedShadow *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CProjectedShadow *result; // rax

  *((_QWORD *)this + 8) = &CProjectedShadow::`vbtable'{for `CContent'};
  *((_QWORD *)this + 54) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 53) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 54) + 4LL) + 432) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)v2 = &CProjectedShadow::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CProjectedShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CProjectedShadow::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 344;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v5 + v2 + 60) = v5 - 360;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_DWORD *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 100) = 1065353216;
  *(_QWORD *)(v2 + 256) = v2 + 280;
  *(_QWORD *)(v2 + 264) = v2 + 280;
  *(_QWORD *)(v2 + 272) = v2 + 328;
  result = (CProjectedShadow *)v2;
  *(_QWORD *)(v2 + 368) = 0LL;
  *(_QWORD *)(v2 + 376) = 0LL;
  *(_QWORD *)(v2 + 384) = 0LL;
  return result;
}
