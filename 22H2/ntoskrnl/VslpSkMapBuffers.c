/*
 * XREFs of VslpSkMapBuffers @ 0x1408909A8
 * Callers:
 *     VslpSkStartProfiling @ 0x140890A70 (VslpSkStartProfiling.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x140393974 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x1403939C8 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 VslpSkMapBuffers()
{
  int v0; // ebx
  _QWORD v2[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  v0 = VslpLockPagesForTransfer(
         (__int64)&VslpProfilingTransfer,
         (struct _MDL *)VslpEventLog,
         *((_DWORD *)VslpEventLog + 3),
         1,
         0);
  if ( v0 >= 0 )
  {
    v2[1] = VslpProfilingTransfer;
    v2[2] = qword_140CF5658;
    v0 = VslpEnterIumSecureMode(2u, 75, 0, (__int64)v2);
    if ( v0 < 0 )
    {
      VslpUnlockPagesForTransfer((__int64 **)&VslpProfilingTransfer);
      memset(&VslpProfilingTransfer, 0, 0x48uLL);
    }
  }
  return (unsigned int)v0;
}
