__int64 __fastcall NtQueryCompositionSurfaceFrameRate(void *a1, unsigned int *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // r8
  int v6; // ebx
  PVOID v7; // rdi
  unsigned __int64 v8; // rcx
  int v9; // r10d
  unsigned int v10; // r9d
  unsigned int *v11; // r8
  __int64 v12; // r11
  unsigned int v13; // edx
  unsigned int v15; // ecx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  struct CCompositionSurface *v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  KeEnterCriticalRegion();
  Object = 0LL;
  v6 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v5, (struct CompositionSurfaceObject **)&Object);
  if ( v6 >= 0 )
  {
    v18 = 0LL;
    v7 = Object;
    v6 = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v18);
    if ( v6 >= 0 )
    {
      v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v9 = 0;
      v10 = -1;
      v11 = (unsigned int *)((char *)v18 + 56);
      v12 = 2LL;
      do
      {
        v13 = *v11;
        if ( *v11 && (unsigned int)v8 >= v13 && (unsigned int)v8 - v13 <= 0x3E8 )
        {
          v9 += v11[1];
          if ( v13 < v10 )
            v10 = *v11;
        }
        v11 += 2;
        --v12;
      }
      while ( v12 );
      v15 = v8 - v10;
      if ( v9 && v15 )
        v4 = 1000 * v9 / v15;
      CCompositionSurface::UnlockAndRelease(v18);
      v7 = Object;
    }
    ObfDereferenceObject(v7);
  }
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v4;
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
