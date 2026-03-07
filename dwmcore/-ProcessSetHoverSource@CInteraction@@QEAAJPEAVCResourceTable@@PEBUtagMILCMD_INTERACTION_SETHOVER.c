__int64 __fastcall CInteraction::ProcessSetHoverSource(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_SETHOVERSOURCE *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 Resource; // rax

  v4 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x52u);
    if ( Resource )
      v4 = Resource - 8;
  }
  if ( v4 != *((_QWORD *)this + 35) )
    Microsoft::WRL::ComPtr<CHoverPointerSource>::operator=((char *)this + 280, v4);
  return 0LL;
}
