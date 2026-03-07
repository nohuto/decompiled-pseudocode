void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi

  *((_BYTE *)this + 576) = 1;
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  for ( i = (_QWORD *)*((_QWORD *)this + 1); i != v2; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 224LL))(*i);
  CRenderTargetManager::EndTargetEnumeration(this);
}
