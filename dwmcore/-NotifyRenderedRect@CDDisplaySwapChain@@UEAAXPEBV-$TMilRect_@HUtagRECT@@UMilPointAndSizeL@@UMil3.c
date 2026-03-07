void __fastcall CDDisplaySwapChain::NotifyRenderedRect(__int64 a1, const struct tagRECT *a2)
{
  void (__fastcall ***v4)(_QWORD, int *); // rcx
  _DWORD **v5; // rbx
  int v6; // eax
  const struct FastRegion::Internal::CRgnData ***v7; // rbx
  const struct FastRegion::Internal::CRgnData ***v8; // rdi
  int v9; // eax
  int v10; // r9d
  int v11; // r10d
  _DWORD *v12; // rdx
  _DWORD ***v13; // r8
  _DWORD ***i; // rdx
  int v15; // [rsp+20h] [rbp-78h] BYREF
  int v16; // [rsp+24h] [rbp-74h]
  void *v17[10]; // [rsp+30h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL) + 16LL)
                                            + *(_QWORD *)(a1 + 128)
                                            + 8LL);
  (**v4)(v4, &v15);
  v5 = (_DWORD **)(a1 + 136);
  if ( a2 )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v17, a2);
    v6 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)(a1 + 136),
           (const struct FastRegion::Internal::CRgnData **)v17);
    if ( v6 < 0 )
      ModuleFailFastForHRESULT(v6, retaddr);
    v7 = *(const struct FastRegion::Internal::CRgnData ****)(a1 + 456);
    v8 = *(const struct FastRegion::Internal::CRgnData ****)(a1 + 464);
    while ( v7 != v8 )
    {
      v9 = FastRegion::CRegion::Subtract(*v7, (const struct FastRegion::Internal::CRgnData **)v17);
      if ( v9 < 0 )
        ModuleFailFastForHRESULT(v9, retaddr);
      ++v7;
    }
    FastRegion::CRegion::FreeMemory(v17);
  }
  else
  {
    v10 = v15;
    v11 = v16;
    if ( v15 <= 0 || v16 <= 0 )
    {
      **v5 = 0;
    }
    else
    {
      v12 = *v5;
      v12[1] = 0;
      v12[7] = 0;
      v12[3] = 0;
      v12[8] = v10;
      v12[4] = 16;
      *v12 = 2;
      v12[2] = v10;
      v12[6] = 16;
      v12[5] = v11;
    }
    v13 = *(_DWORD ****)(a1 + 464);
    for ( i = *(_DWORD ****)(a1 + 456); i != v13; ++i )
      ***i = 0;
  }
}
