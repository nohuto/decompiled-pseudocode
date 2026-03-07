__int64 __fastcall NtQueryCompositionSurfaceBinding(void *a1, unsigned __int64 a2, struct CCompositionSurface *a3)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  int Binding; // ebx
  PVOID v9; // r14
  struct CCompositionSurface *v11; // [rsp+38h] [rbp-570h] BYREF
  PVOID Object; // [rsp+40h] [rbp-568h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-560h]
  HANDLE Src[164]; // [rsp+60h] [rbp-548h] BYREF

  v4 = (unsigned __int64 *)a2;
  Object = a1;
  v11 = a3;
  v6 = 0LL;
  v13 = 0LL;
  memset(Src, 0, sizeof(Src));
  if ( a2 )
  {
    if ( a2 + 8 < a2 || a2 + 8 > MmUserProbeAddress )
      v4 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *v4;
    v13 = *v4;
  }
  KeEnterCriticalRegion();
  Object = 0LL;
  LOBYTE(v7) = 1;
  Binding = DxgkCompositionObject::ResolveHandle(a1, 1LL, v7, 1LL, &Object);
  if ( Binding >= 0 )
  {
    v9 = Object;
    v11 = 0LL;
    Binding = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v11);
    if ( Binding >= 0 )
    {
      Binding = CCompositionSurface::QueryBinding(v11, v6, (struct CSM_BUFFER_INFO *)Src);
      CCompositionSurface::UnlockAndRelease(v11);
    }
    ObfDereferenceObject(v9);
  }
  if ( a3 )
  {
    if ( (struct CCompositionSurface *)((char *)a3 + 1312) < a3 || (unsigned __int64)a3 + 1312 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a3, Src, 0x520uLL);
  }
  else
  {
    Binding = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Binding;
}
