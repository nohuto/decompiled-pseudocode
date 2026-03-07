CLinkedShader *__fastcall CLinkedShader::CLinkedShader(CLinkedShader *this, struct ID3D10Blob *a2, int a3)
{
  _QWORD *v4; // rcx

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CLinkedShader::`vftable';
  v4 = (_QWORD *)((char *)this + 16);
  *v4 = a2;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v4);
  *((_DWORD *)this + 6) = a3;
  *((_QWORD *)this + 4) = &CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::`vftable';
  *((_QWORD *)this + 5) = this;
  *((_QWORD *)this + 6) = (char *)this + 72;
  *((_QWORD *)this + 7) = (char *)this + 72;
  *((_QWORD *)this + 8) = (char *)this + 88;
  return this;
}
