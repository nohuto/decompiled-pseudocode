__int64 __fastcall NtDesktopCaptureBits(
        unsigned __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        HANDLE Handle,
        HANDLE a8)
{
  NTSTATUS v9; // esi
  HANDLE v10; // r15
  PVOID v11; // r14
  HANDLE v12; // r10
  unsigned __int64 v13; // rbx
  __int64 v14; // rcx
  DirectComposition::CConnection *DefaultConnection; // r12
  unsigned int v16; // edx
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF

  v9 = 0;
  v10 = 0LL;
  Object = 0LL;
  v11 = 0LL;
  v12 = Handle;
  if ( !Handle || !a8 )
    v9 = -1073741811;
  if ( v9 >= 0 )
  {
    if ( a1 )
    {
      if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
        a1 = (unsigned __int64 *)MmUserProbeAddress;
      v13 = *a1;
    }
    else
    {
      Handle = (HANDLE)0xFFFFFFFE00000000LL;
      v13 = 0xFFFFFFFE00000000uLL;
    }
    Handle = 0LL;
    v9 = ObReferenceObjectByHandle(v12, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
    v10 = Handle;
    if ( v9 >= 0 )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(a8, 6u, MmSectionObjectType, 1, &Object, 0LL);
      v11 = Object;
    }
    if ( v9 >= 0 )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v14);
      if ( DefaultConnection )
      {
        v9 = DirectComposition::CConnection::DesktopCaptureBits(DefaultConnection, v13, a2, a3, a4, a5, a6, v10, v11);
        DirectComposition::CConnection::Release(DefaultConnection, v16);
      }
      else
      {
        v9 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)v9;
}
