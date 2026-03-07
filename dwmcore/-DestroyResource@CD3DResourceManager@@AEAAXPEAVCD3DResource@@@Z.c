void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource *a2)
{
  char *v4; // rcx
  struct CD3DResource **v5; // rdx
  struct CD3DResource **v6; // rcx
  char *v7; // rcx

  v4 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (**(int (__fastcall ***)(struct CD3DResource *))a2)(a2) >= 0 )
    CD3DResource::Invalidate(a2);
  if ( *((_BYTE *)a2 + 68) )
  {
    if ( *((_BYTE *)a2 + 69) )
      CD2DContext::RemoveHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
    --*((_DWORD *)this + 18);
  }
  (*(void (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_QWORD *)a2 + 3) = 0LL;
  v5 = (struct CD3DResource **)*((_QWORD *)a2 + 4);
  if ( v5[1] != (struct CD3DResource *)((char *)a2 + 32)
    || (v6 = (struct CD3DResource **)*((_QWORD *)a2 + 5), *v6 != (struct CD3DResource *)((char *)a2 + 32)) )
  {
    __fastfail(3u);
  }
  *v6 = (struct CD3DResource *)v5;
  v5[1] = (struct CD3DResource *)v6;
  *((_DWORD *)this + 12) -= *((_DWORD *)a2 + 16);
  v7 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
}
