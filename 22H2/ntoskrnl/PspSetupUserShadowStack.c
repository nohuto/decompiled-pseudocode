/*
 * XREFs of PspSetupUserShadowStack @ 0x14090A62C
 * Callers:
 *     PspAllocateThread @ 0x1406C3E08 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlLocateExtendedFeature @ 0x14058F460 (RtlLocateExtendedFeature.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x14090A368 (PspReserveAndCommitUserShadowStack.c)
 *     RtlCalculateUserShadowStackSizes @ 0x14090FF54 (RtlCalculateUserShadowStackSizes.c)
 */

__int64 __fastcall PspSetupUserShadowStack(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        unsigned int a5)
{
  __int64 result; // rax
  _DWORD *v10; // r9
  int v11; // esi
  _QWORD *ExtendedFeature; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+30h] [rbp-31h] BYREF
  __int64 v15; // [rsp+38h] [rbp-29h] BYREF
  __int64 v16; // [rsp+40h] [rbp-21h] BYREF
  ULONG_PTR v17; // [rsp+48h] [rbp-19h] BYREF
  _OWORD v18[3]; // [rsp+50h] [rbp-11h] BYREF

  v15 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  memset(v18, 0, sizeof(v18));
  result = RtlCalculateUserShadowStackSizes(a3, &v14, &v17);
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v18, v10);
    v16 = 0LL;
    v11 = PspReserveAndCommitUserShadowStack(v14, v17, a5, &v16, &v15);
    if ( v11 < 0 )
    {
      v13 = v16;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
      {
        ExtendedFeature = RtlLocateExtendedFeature((PCONTEXT_EX)(a2 + 1232), 0xBu, 0LL);
        if ( ExtendedFeature )
        {
          *(_QWORD *)(*(int *)(a2 + 1248) + a2 + 1232) |= 0x800uLL;
          ExtendedFeature[1] = v15;
          *ExtendedFeature = 1LL;
        }
      }
      *(_QWORD *)(a3 + 64) = v16;
      *a4 |= 8u;
      v13 = 0LL;
    }
    if ( v13 )
    {
      v15 = 0LL;
      v14 = v13;
      MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v14, &v15, 0x8000, 0, 0x40000000);
    }
    KiUnstackDetachProcess((__int64)v18, 0);
    return (unsigned int)v11;
  }
  return result;
}
