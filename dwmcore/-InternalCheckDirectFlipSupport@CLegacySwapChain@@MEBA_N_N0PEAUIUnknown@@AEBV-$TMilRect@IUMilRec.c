bool __fastcall CLegacySwapChain::InternalCheckDirectFlipSupport(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int *a5,
        __int128 *a6,
        unsigned int a7,
        int a8)
{
  CCheckMPOCache *v8; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  CD3DDevice *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  bool v19; // si
  __int64 v20; // r14
  CCheckMPOCache *v21; // rax
  bool v23; // [rsp+30h] [rbp-B9h] BYREF
  int v24; // [rsp+34h] [rbp-B5h] BYREF
  int v25; // [rsp+38h] [rbp-B1h] BYREF
  void *v26[2]; // [rsp+40h] [rbp-A9h] BYREF
  _BYTE v27[8]; // [rsp+50h] [rbp-99h] BYREF
  __int64 v28; // [rsp+58h] [rbp-91h]
  int v29; // [rsp+60h] [rbp-89h]
  int v30; // [rsp+6Ch] [rbp-7Dh]
  int v31; // [rsp+70h] [rbp-79h]
  int v32; // [rsp+74h] [rbp-75h]
  int v33; // [rsp+78h] [rbp-71h]
  int v34; // [rsp+7Ch] [rbp-6Dh]
  int v35; // [rsp+80h] [rbp-69h]
  __int128 v36; // [rsp+84h] [rbp-65h]
  __int128 v37; // [rsp+94h] [rbp-55h]
  __int64 v38; // [rsp+A4h] [rbp-45h]
  int v39; // [rsp+ACh] [rbp-3Dh]
  __int64 v40; // [rsp+B0h] [rbp-39h]
  int v41; // [rsp+B8h] [rbp-31h]
  unsigned int v42; // [rsp+BCh] [rbp-2Dh]
  int v43; // [rsp+C0h] [rbp-29h]
  int v44; // [rsp+D0h] [rbp-19h]
  int v45; // [rsp+D8h] [rbp-11h]

  v8 = 0LL;
  v23 = 0;
  if ( a2 || a3 )
  {
    if ( *(int *)(a1 + 208) >= 1 )
    {
      memset_0(v27, 0, 0x90uLL);
      v29 = *(_DWORD *)(a1 + 112);
      v32 = *a5;
      v33 = a5[1];
      v34 = a5[2];
      v35 = a5[3];
      v36 = *a6;
      v42 = a7;
      v45 = a8;
      v14 = v31;
      if ( a3 )
        v14 = 4;
      v28 = a4;
      v15 = *(CD3DDevice **)(a1 + 80);
      v31 = v14;
      v30 = 0;
      v37 = v36;
      v38 = 1LL;
      v39 = 0;
      v40 = 0LL;
      v41 = 0;
      v43 = 0;
      v44 = 2;
      if ( !CD3DDevice::CheckMPOCache(v15, (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)v27, 1u, &v23) )
      {
        v16 = *(_QWORD *)(a1 + 224);
        v24 = 0;
        v25 = 0;
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, int *, int *))(*(_QWORD *)v16 + 176LL))(
                v16,
                1LL,
                v27,
                &v24,
                &v25);
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x31Bu, 0LL);
        }
        else
        {
          v19 = v23;
          v20 = *(_QWORD *)(a1 + 80);
          if ( v24 )
            v19 = 1;
          v23 = v19;
          v21 = (CCheckMPOCache *)operator new(0x3F0uLL);
          if ( v21 )
            v8 = CCheckMPOCache::CCheckMPOCache(v21, (const struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *)v27);
          v26[0] = v8;
          std::vector<std::unique_ptr<ICheckMPOCache>>::emplace_back<std::unique_ptr<CCheckMPOCache>>(
            (char **)(v20 + 1448),
            (__int64 *)v26);
          std::unique_ptr<CCheckMPOCache>::~unique_ptr<CCheckMPOCache>(v26);
        }
      }
    }
  }
  else if ( a7 <= 1 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(**(_QWORD **)(a1 + 224) + 144LL))(
            *(_QWORD *)(a1 + 224),
            0LL,
            a4,
            &v24);
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x333u, 0LL);
    else
      return v24 != 0;
  }
  return v23;
}
