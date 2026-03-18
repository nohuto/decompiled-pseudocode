/*
 * XREFs of VfNotifyVerifierExtensions @ 0x140A89F08
 * Callers:
 *     VfDriverLoadSucceeded @ 0x140A7C224 (VfDriverLoadSucceeded.c)
 *     VfNotifyVerifierOfEvent @ 0x140A81780 (VfNotifyVerifierOfEvent.c)
 *     VfSuspectApplyDifVolatileVerification @ 0x140A9A468 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectDriversLoadCallback @ 0x140A9A8F8 (VfSuspectDriversLoadCallback.c)
 *     VfSuspectDriversUnloadCallback @ 0x140A9ACE0 (VfSuspectDriversUnloadCallback.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0 (VfSuspectRemoveDifVolatileVerification.c)
 *     ViLogAndLoadXdv @ 0x140B536A4 (ViLogAndLoadXdv.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VfNotifyVerifierExtensions(int a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v4[20]; // [rsp+28h] [rbp-28h]
  __int64 v5; // [rsp+3Ch] [rbp-14h]

  result = 0LL;
  v3[1] = 0;
  v5 = 0LL;
  *(_OWORD *)&v4[4] = 0LL;
  if ( ViFnXdvNotifyExtensions )
  {
    if ( a1 )
    {
      result = (unsigned int)(a1 - 1);
      if ( (unsigned int)result > 1 )
        return result;
      v3[0] = a1;
      *(_QWORD *)v4 = a2 + 88;
      *(_QWORD *)&v4[8] = *(_QWORD *)(a2 + 48);
      *(_DWORD *)&v4[16] = *(_DWORD *)(a2 + 64);
      LODWORD(v5) = *(_DWORD *)(a2 + 156);
      HIDWORD(v5) = *(_DWORD *)(a2 + 120);
    }
    else
    {
      v3[0] = 0;
      *(_DWORD *)v4 = a2;
    }
    return ((__int64 (__fastcall *)(_DWORD *))ViFnXdvNotifyExtensions)(v3);
  }
  return result;
}
