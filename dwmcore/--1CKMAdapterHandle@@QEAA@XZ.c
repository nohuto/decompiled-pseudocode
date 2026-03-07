void __fastcall CKMAdapterHandle::~CKMAdapterHandle(CKMAdapterHandle *this)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)this )
  {
    v1 = *(_DWORD *)this;
    D3DKMTCloseAdapter(&v1);
  }
}
