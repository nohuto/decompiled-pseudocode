__int64 __fastcall CKMAdapterHandle::Initialize(CKMAdapterHandle *this, struct _LUID a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  struct _LUID v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v7 = a2;
  v3 = 0;
  v8 = 0;
  v4 = D3DKMTOpenAdapterFromLuid(&v7);
  if ( v4 < 0 )
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0x33u, 0LL);
  }
  else
  {
    *(_DWORD *)this = v8;
  }
  return v3;
}
