/*
 * XREFs of GreIsDisconnectDeviceAttached @ 0x1C0070020
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C006FF40 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0070088 (--1SEMOBJSHARED@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00700D0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

__int64 GreIsDisconnectDeviceAttached()
{
  unsigned int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v2, (HSEMAPHORE)ghsemDynamicModeChange);
  v0 = 1;
  if ( (!gpLocalDiscGraphicsDevice || (*((_DWORD *)gpLocalDiscGraphicsDevice + 40) & 1) == 0)
    && (!gpRemoteDiscGraphicsDevice || (*((_DWORD *)gpRemoteDiscGraphicsDevice + 40) & 1) == 0) )
  {
    v0 = 0;
  }
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)&v2);
  return v0;
}
