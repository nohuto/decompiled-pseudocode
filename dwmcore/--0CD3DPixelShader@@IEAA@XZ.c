CD3DPixelShader *__fastcall CD3DPixelShader::CD3DPixelShader(CD3DPixelShader *this)
{
  CD3DPixelShader *v1; // r11
  __int64 v2; // rax
  __int64 v3; // rcx
  CD3DPixelShader *result; // rax

  *((_QWORD *)this + 1) = &CD3DPixelShader::`vbtable';
  CD3DResource::CD3DResource(this, 0);
  v2 = *((_QWORD *)v1 + 1);
  *(_QWORD *)v1 = &CD3DPixelShader::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)v1 + *(int *)(v2 + 4) + 8) = &CD3DConstantBuffer::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)v1 + 1) + 4LL);
  result = v1;
  *(_DWORD *)((char *)v1 + v3 + 4) = v3 - 112;
  *((_QWORD *)v1 + 12) = 0LL;
  return result;
}
