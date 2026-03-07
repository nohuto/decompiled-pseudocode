CD2DInk *__fastcall CD2DInk::CD2DInk(CD2DInk *this, struct CD2DResourceManager *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CD2DInk *result; // rax

  *((_QWORD *)this + 2) = &CD2DInk::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 16) = &CInk::`vbtable'{for `IContent'};
  CD2DResource::CD2DResource(this, a2, 0);
  *(_QWORD *)this = &CD2DInk::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DInk::`vftable'{for `IDeviceResource'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 88;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 104;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  return result;
}
