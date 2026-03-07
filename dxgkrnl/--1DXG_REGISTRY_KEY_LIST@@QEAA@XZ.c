void __fastcall DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST(DXG_REGISTRY_KEY_LIST *this)
{
  DXG_REGISTRY_KEY_LIST *v2; // rcx
  __int64 v3; // rax

  while ( 1 )
  {
    v2 = *(DXG_REGISTRY_KEY_LIST **)this;
    if ( *(DXG_REGISTRY_KEY_LIST **)(*(_QWORD *)this + 8LL) != this
      || (v3 = *(_QWORD *)v2, *(DXG_REGISTRY_KEY_LIST **)(*(_QWORD *)v2 + 8LL) != v2) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)this = v3;
    *(_QWORD *)(v3 + 8) = this;
    if ( v2 == this )
      break;
    operator delete(v2);
  }
}
