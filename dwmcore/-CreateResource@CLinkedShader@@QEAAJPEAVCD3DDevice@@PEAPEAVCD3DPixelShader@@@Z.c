__int64 __fastcall CLinkedShader::CreateResource(
        CLinkedShader *this,
        struct CD3DDevice *a2,
        struct CD3DPixelShader **a3)
{
  unsigned __int64 v6; // rbx
  const void *v7; // rax

  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  v7 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
  return CD3DPixelShader::Create(a2, v7, v6, a3);
}
