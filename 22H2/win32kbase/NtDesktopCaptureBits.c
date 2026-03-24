/*
 * XREFs of NtDesktopCaptureBits @ 0x1C01D2B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C005D370 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C005D904 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C01D2F60 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 */

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
  NTSTATUS v8; // esi
  DirectComposition::CConnection *DefaultConnection; // r14
  HANDLE v10; // r12
  HANDLE v11; // r15
  HANDLE v12; // r13
  unsigned __int64 v13; // rbx

  v8 = 0;
  DefaultConnection = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = Handle;
  if ( !Handle || !a8 )
    v8 = -1073741811;
  if ( v8 >= 0 )
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
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1);
    if ( !DefaultConnection )
      v8 = -1073741790;
    if ( v8 >= 0 )
    {
      Handle = 0LL;
      v8 = ObReferenceObjectByHandle(v12, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 1, &Handle, 0LL);
      v10 = Handle;
      if ( v8 >= 0 )
      {
        Handle = 0LL;
        v8 = ObReferenceObjectByHandle(a8, 6u, MmSectionObjectType, 1, &Handle, 0LL);
        v11 = Handle;
      }
      if ( v8 >= 0 )
        v8 = DirectComposition::CConnection::DesktopCaptureBits(DefaultConnection, v13, a2, a3, a4, a5, a6, v10, v11);
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
