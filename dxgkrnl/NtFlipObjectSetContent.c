__int64 __fastcall NtFlipObjectSetContent(
        void *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        char *Src)
{
  int v7; // ebx
  struct CFlipPropertySet *v8; // rdi
  struct FlipManagerObject *v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // r8
  CFlipPropertySet *v14; // [rsp+20h] [rbp-48h] BYREF
  struct FlipManagerObject *v15; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-38h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v7 = 0;
  if ( a1 && a2 )
  {
    v8 = 0LL;
    v14 = 0LL;
    v9 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v10 = 0LL;
    v17 = 0LL;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v11 = *a2;
    v16 = *a2;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (unsigned __int64 *)MmUserProbeAddress;
      v10 = *a3;
      v17 = *a3;
    }
    KeEnterCriticalRegion();
    if ( a4 )
    {
      v7 = CreateFlipPropertySetWorker<CFlipPropertySet>(a4, Src, v12, &v14);
      v8 = v14;
    }
    if ( v7 >= 0 )
    {
      v7 = FlipManagerObject::ResolveHandle(a1, 2u, v12, &v15);
      v9 = v15;
      if ( v7 >= 0 )
        v7 = FlipManagerObject::SetContent(v15, v11, v10, v8);
    }
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( v8 )
      CFlipPropertySetBase::Release(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
