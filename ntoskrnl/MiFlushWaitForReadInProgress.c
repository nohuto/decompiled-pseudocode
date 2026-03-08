/*
 * XREFs of MiFlushWaitForReadInProgress @ 0x140633B18
 * Callers:
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x1402A2D3C (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402A304C (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x1402A346C (MiInitializePageFaultPacket.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiFlushWaitForReadInProgress(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  int v7[4]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v8[18]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v8, 0, 0x88uLL);
  v7[0] = 1;
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, v8);
  MiObtainProtoReference(a2, 1);
  return MiWaitForCollidedFaultComplete(v8, a1, a2, a3, v7);
}
