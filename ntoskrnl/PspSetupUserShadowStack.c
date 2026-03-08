/*
 * XREFs of PspSetupUserShadowStack @ 0x1409AEB6C
 * Callers:
 *     PspAllocateThread @ 0x1406B00F4 (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlLocateExtendedFeature @ 0x14045BC10 (RtlLocateExtendedFeature.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     RtlCalculateUserShadowStackSizes @ 0x1408A15B4 (RtlCalculateUserShadowStackSizes.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409AE7B0 (PspReserveAndCommitUserShadowStack.c)
 */

NTSTATUS __fastcall PspSetupUserShadowStack(PRKPROCESS PROCESS, __int64 a2, __int64 a3, _BYTE *a4, unsigned int a5)
{
  NTSTATUS result; // eax
  int v10; // esi
  _QWORD *ExtendedFeature; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-31h] BYREF
  __int64 v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  ULONG_PTR v16; // [rsp+48h] [rbp-19h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-11h] BYREF

  v14 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  result = RtlCalculateUserShadowStackSizes(a3, &v13);
  if ( result >= 0 )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v15 = 0LL;
    v10 = PspReserveAndCommitUserShadowStack(v13, v16, a5, &v15, &v14);
    if ( v10 < 0 )
    {
      v12 = v15;
    }
    else
    {
      if ( (*(_DWORD *)(a2 + 48) & 0x100040) == 0x100040 )
      {
        ExtendedFeature = (_QWORD *)RtlLocateExtendedFeature(a2 + 1232, 11LL, 0LL);
        if ( ExtendedFeature )
        {
          *(_QWORD *)(*(int *)(a2 + 1248) + a2 + 1232) |= 0x800uLL;
          ExtendedFeature[1] = v14;
          *ExtendedFeature = 1LL;
        }
      }
      *(_QWORD *)(a3 + 64) = v15;
      *a4 |= 8u;
      v12 = 0LL;
    }
    if ( v12 )
    {
      v14 = 0LL;
      v13 = v12;
      MmFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v13, &v14, 0x8000, 0, 0x40000000);
    }
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    return v10;
  }
  return result;
}
