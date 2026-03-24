/*
 * XREFs of MmDeleteTeb @ 0x140636AF0
 * Callers:
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     PspExitThread @ 0x1406C35F8 (PspExitThread.c)
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x140636BA4 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  volatile signed __int32 *v5; // rax
  int v7; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(a1, 0LL, (__int64)v8, a4);
  v5 = MiObtainReferencedVadEx(a2, 0, &v7);
  if ( v5 )
    MiFreeToSubAllocatedRegion((PVOID)v5);
  return KiUnstackDetachProcess((__int64)v8, 0);
}
