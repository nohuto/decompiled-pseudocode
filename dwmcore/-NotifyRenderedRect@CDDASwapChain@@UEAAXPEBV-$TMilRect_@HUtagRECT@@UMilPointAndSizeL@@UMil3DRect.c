void __fastcall CDDASwapChain::NotifyRenderedRect(__int64 a1, const struct tagRECT *a2)
{
  void (__fastcall ***v4)(_QWORD, int *); // rcx
  int v5; // eax
  int v6; // r9d
  int v7; // r10d
  _DWORD *v8; // rdx
  int v9; // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+24h] [rbp-74h]
  void *v11[10]; // [rsp+30h] [rbp-68h] BYREF
  const void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 16LL)
                                            + *(_QWORD *)(a1 + 32)
                                            + 8LL);
  (**v4)(v4, &v9);
  if ( a2 )
  {
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v11, a2);
    v5 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)(a1 + 80),
           (const struct FastRegion::Internal::CRgnData **)v11);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT(v5, retaddr);
    FastRegion::CRegion::FreeMemory(v11);
  }
  else
  {
    v6 = v9;
    v7 = v10;
    if ( v9 <= 0 || v10 <= 0 )
    {
      **(_DWORD **)(a1 + 80) = 0;
    }
    else
    {
      v8 = *(_DWORD **)(a1 + 80);
      v8[1] = 0;
      v8[7] = 0;
      v8[3] = 0;
      v8[8] = v6;
      v8[4] = 16;
      *v8 = 2;
      v8[2] = v6;
      v8[6] = 16;
      v8[5] = v7;
    }
  }
}
