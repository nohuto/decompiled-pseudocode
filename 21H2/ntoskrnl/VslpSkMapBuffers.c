/*
 * XREFs of VslpSkMapBuffers @ 0x140890AB8
 * Callers:
 *     VslpSkStartProfiling @ 0x140890B80 (VslpSkStartProfiling.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
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
    v2[2] = qword_140CF56D8;
    v0 = VslpEnterIumSecureMode(2u, 75, 0, (__int64)v2);
    if ( v0 < 0 )
    {
      VslpUnlockPagesForTransfer((__int64 **)&VslpProfilingTransfer);
      memset(&VslpProfilingTransfer, 0, 0x48uLL);
    }
  }
  return (unsigned int)v0;
}
