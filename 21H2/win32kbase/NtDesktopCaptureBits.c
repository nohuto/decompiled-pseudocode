/*
 * XREFs of NtDesktopCaptureBits @ 0x1C02123B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C0212AA4 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 */

__int64 __fastcall NtDesktopCaptureBits(
        unsigned __int64 *a1,
        ULONG64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        HANDLE Handle,
        HANDLE a8)
{
  NTSTATUS v8; // esi
  DirectComposition::CConnection *DefaultConnection; // r14
  HANDLE v10; // r12
  PVOID v11; // r15
  HANDLE v12; // r13
  unsigned __int64 v13; // rbx
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+A8h] [rbp+10h]
  unsigned int v17; // [rsp+B0h] [rbp+18h]
  int v18; // [rsp+B8h] [rbp+20h]

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v8 = 0;
  DefaultConnection = 0LL;
  Object = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = Handle;
  if ( !Handle || !a8 )
    v8 = -1073741811;
  if ( v8 >= 0 )
  {
    if ( a1 )
    {
      a2 = (ULONG64)(a1 + 1);
      if ( a1 + 1 < a1 || a2 > MmUserProbeAddress )
        a1 = (unsigned __int64 *)MmUserProbeAddress;
      v13 = *a1;
    }
    else
    {
      Handle = (HANDLE)0xFFFFFFFE00000000LL;
      v13 = 0xFFFFFFFE00000000uLL;
    }
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1, a2, a3, a4);
    if ( !DefaultConnection )
      v8 = -1073741790;
    if ( v8 >= 0 )
    {
      Handle = 0LL;
      v8 = ObReferenceObjectByHandle(v12, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
      v10 = Handle;
      if ( v8 >= 0 )
      {
        Object = 0LL;
        v8 = ObReferenceObjectByHandle(a8, 6u, MmSectionObjectType, 1, &Object, 0LL);
        v11 = Object;
      }
      if ( v8 >= 0 )
        v8 = DirectComposition::CConnection::DesktopCaptureBits(DefaultConnection, v13, v16, v17, v18, a5, a6, v10, v11);
    }
  }
  if ( DefaultConnection )
    DirectComposition::CConnection::Release(DefaultConnection, a2);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v11 )
    ObfDereferenceObject(v11);
  return (unsigned int)v8;
}
