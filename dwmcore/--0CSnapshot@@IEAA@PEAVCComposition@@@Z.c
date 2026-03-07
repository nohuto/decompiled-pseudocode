CSnapshot *__fastcall CSnapshot::CSnapshot(CSnapshot *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CSnapshot *result; // rax

  *((_QWORD *)this + 8) = &CSnapshot::`vbtable'{for `CContent'};
  *((_QWORD *)this + 16) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 15) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 16) + 4LL) + 128) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)v2 = &CSnapshot::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CSnapshot::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CSnapshot::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 40;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v5 + v2 + 60) = v5 - 56;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = 0LL;
  result = (CSnapshot *)v2;
  *(_WORD *)(v2 + 88) = 0;
  return result;
}
