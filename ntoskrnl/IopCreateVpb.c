/*
 * XREFs of IopCreateVpb @ 0x140871EB0
 * Callers:
 *     IoCreateDevice @ 0x1407F0460 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140944740 (IoVerifyVolume.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopCreateVpb(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 96LL, 543322198LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = 6291466;
  *(_QWORD *)(Pool2 + 16) = a1;
  *(_QWORD *)(a1 + 56) = Pool2;
  return 0LL;
}
