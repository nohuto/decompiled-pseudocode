/*
 * XREFs of WheaAddErrorSourceDeviceDriver @ 0x1407AF2F0
 * Callers:
 *     WheaAddErrorSourceDeviceDriverV1 @ 0x1403BAE40 (WheaAddErrorSourceDeviceDriverV1.c)
 * Callees:
 *     WheapDeviceDriverGetPacketLength @ 0x1403BB230 (WheapDeviceDriverGetPacketLength.c)
 *     memset @ 0x140414300 (memset.c)
 *     WheaAddErrorSource @ 0x1407AF4C0 (WheaAddErrorSource.c)
 *     WheaConfigureErrorSource @ 0x1409A1370 (WheaConfigureErrorSource.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriver(__int64 a1, __int64 a2, unsigned int a3)
{
  PVOID PoolWithTag; // rsi
  __int64 v4; // r12
  void *v5; // rdi
  unsigned int v8; // r15d
  int v9; // r14d
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int PacketLength; // r14d
  PVOID v13; // rax
  int v14; // ebx
  _QWORD v16[122]; // [rsp+28h] [rbp-E0h] BYREF

  PoolWithTag = 0LL;
  v4 = a3;
  v5 = 0LL;
  if ( !*(_QWORD *)(a2 + 28) || !*(_QWORD *)(a2 + 36) )
    return 3221225485LL;
  if ( *(_DWORD *)a2 == 2 )
  {
    v8 = *(_DWORD *)(a2 + 48) + 2;
    v9 = *(_DWORD *)(a2 + 44) * v8;
    if ( !byte_140CF4B88 )
      WheaConfigureErrorSource(16LL, &WheaDeviceDriverDefaultSourceConfig);
    memset(v16, 0, 0x3CCuLL);
    WORD2(v16[7]) = *(_WORD *)(a2 + 20);
    v16[10] = *(_QWORD *)(a2 + 28);
    v16[11] = *(_QWORD *)(a2 + 36);
    v16[12] = WheapCorrectErrorSourceDeviceDriver;
    v16[0] = 0xB000003CCLL;
    v16[1] = 0x100000010LL;
    v16[3] = v8;
    HIDWORD(v16[4]) = 0;
    v16[2] = __PAIR64__(v4, v9);
    v16[9] = 0LL;
    v16[18] = 0LL;
    v10 = *(_OWORD *)(a2 + 68);
    *(_OWORD *)&v16[13] = *(_OWORD *)(a2 + 52);
    v11 = *(_OWORD *)(a2 + 4);
    *(_OWORD *)&v16[15] = v10;
    *(_OWORD *)((char *)&v16[5] + 4) = v11;
    if ( (_DWORD)v4 && v9 )
    {
      PacketLength = WheapDeviceDriverGetPacketLength(*(_DWORD *)(a2 + 44) * v8, v8);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v4 * PacketLength, 0x41454857u);
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 104 * v4, 0x41454857u);
      v5 = v13;
      if ( !PoolWithTag || !v13 )
        return (unsigned int)-1073741670;
      v16[17] = *(_QWORD *)(a2 + 44);
      v16[9] = PoolWithTag;
      v16[18] = v13;
      v16[8] = __PAIR64__(v4, PacketLength);
    }
    v14 = WheaAddErrorSource(v16, a1);
    if ( v14 < 0 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x41454857u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41454857u);
    }
    return (unsigned int)v14;
  }
  return 3221225712LL;
}
