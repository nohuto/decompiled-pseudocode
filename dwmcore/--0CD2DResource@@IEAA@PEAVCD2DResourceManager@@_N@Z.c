CD2DResource *__fastcall CD2DResource::CD2DResource(CD2DResource *this, struct CD2DResourceManager *a2, char a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  CD2DResource *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CD2DResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CD2DResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DResource::`vftable'{for `IDeviceResource'};
  v4 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 72;
  v5 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 88;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 33) = a3;
  *((_BYTE *)this + 34) = 0;
  return result;
}
