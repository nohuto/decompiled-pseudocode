void __fastcall CExternalD3DRenderer::ReleaseD3DResources(CExternalD3DRenderer *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
