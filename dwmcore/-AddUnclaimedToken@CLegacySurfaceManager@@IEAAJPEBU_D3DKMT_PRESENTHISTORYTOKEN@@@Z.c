__int64 __fastcall CLegacySurfaceManager::AddUnclaimedToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ecx
  void *v7; // rsi
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // edi
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  void *lpMem; // [rsp+58h] [rbp+10h] BYREF

  lpMem = 0LL;
  v3 = *((unsigned int *)a2 + 1);
  v17 = 0LL;
  v5 = HrAlloc(v3, &lpMem);
  v7 = lpMem;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3Bu, 0LL);
  }
  else
  {
    memcpy_0(lpMem, a2, *((unsigned int *)a2 + 1));
    v10 = *((_DWORD *)this + 32);
    *((_QWORD *)&v17 + 1) = v7;
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v8 = -2147024362;
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      v12 = 0;
      if ( v11 <= *((_DWORD *)this + 31) )
      {
        *(_OWORD *)(*((_QWORD *)this + 13) + 16LL * v10) = v17;
        *((_DWORD *)this + 32) = v11;
        return v12;
      }
      v14 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 104, 16LL, 1LL, &v17);
      v12 = v14;
      v8 = v14;
      if ( v14 >= 0 )
        return v12;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC0u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v12, 0x40u, 0LL);
  }
  if ( v7 )
    operator delete(v7);
  return v8;
}
