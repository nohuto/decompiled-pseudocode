CExternalD3DRenderer *__fastcall CExternalD3DRenderer::CExternalD3DRenderer(CExternalD3DRenderer *this)
{
  CExternalD3DRenderer *v1; // r11
  __int64 v2; // rax
  __int64 v3; // rcx
  CExternalD3DRenderer *result; // rax

  *((_QWORD *)this + 1) = &CExternalD3DRenderer::`vbtable';
  CD3DResource::CD3DResource(this, 0);
  v2 = *((_QWORD *)v1 + 1);
  *(_QWORD *)v1 = &CExternalD3DRenderer::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)v1 + *(int *)(v2 + 4) + 8) = &CExternalD3DRenderer::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)v1 + 1) + 4LL);
  result = v1;
  *(_DWORD *)((char *)v1 + v3 + 4) = v3 - 112;
  *((_QWORD *)v1 + 12) = 0LL;
  return result;
}
