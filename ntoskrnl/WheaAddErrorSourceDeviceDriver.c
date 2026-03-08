/*
 * XREFs of WheaAddErrorSourceDeviceDriver @ 0x14080C280
 * Callers:
 *     WheaAddErrorSourceDeviceDriverV1 @ 0x1403AFCC0 (WheaAddErrorSourceDeviceDriverV1.c)
 * Callees:
 *     WheapDeviceDriverGetPacketLength @ 0x14037D77C (WheapDeviceDriverGetPacketLength.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WheaAddErrorSource @ 0x14080C450 (WheaAddErrorSource.c)
 *     WheaConfigureErrorSource @ 0x140A8D100 (WheaConfigureErrorSource.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriver(__int64 a1, __int64 a2, unsigned int a3)
{
  void *Pool2; // rsi
  __int64 v4; // r14
  void *v5; // rdi
  unsigned int v8; // r15d
  int v9; // r12d
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm0
  unsigned int PacketLength; // eax
  unsigned int v15; // r15d
  __int64 v16; // rax
  int v17; // ebx
  _QWORD v19[122]; // [rsp+28h] [rbp-E0h] BYREF

  Pool2 = 0LL;
  v4 = a3;
  v5 = 0LL;
  if ( !*(_QWORD *)(a2 + 28) || !*(_QWORD *)(a2 + 36) )
    return 3221225485LL;
  if ( *(_DWORD *)a2 == 2 )
  {
    v8 = *(_DWORD *)(a2 + 48) + 2;
    v9 = *(_DWORD *)(a2 + 44) * v8;
    if ( !byte_140D16DF8 )
      WheaConfigureErrorSource(16LL, &WheaDeviceDriverDefaultSourceConfig);
    memset(v19, 0, 0x3CCuLL);
    v10 = *(_OWORD *)(a2 + 52);
    WORD2(v19[7]) = *(_WORD *)(a2 + 20);
    v11 = *(_OWORD *)(a2 + 68);
    v19[10] = *(_QWORD *)(a2 + 28);
    v12 = *(_QWORD *)(a2 + 36);
    *(_OWORD *)&v19[13] = v10;
    v19[11] = v12;
    v13 = *(_OWORD *)(a2 + 4);
    HIDWORD(v19[4]) = 0;
    v19[9] = 0LL;
    v19[18] = 0LL;
    v19[12] = WheapCorrectErrorSourceDeviceDriver;
    v19[0] = 0xB000003CCLL;
    v19[1] = 0x100000010LL;
    v19[3] = v8;
    v19[2] = __PAIR64__(v4, v9);
    *(_OWORD *)&v19[15] = v11;
    *(_OWORD *)((char *)&v19[5] + 4) = v13;
    PacketLength = WheapDeviceDriverGetPacketLength(v9, v8);
    v15 = PacketLength;
    if ( (_DWORD)v4 )
    {
      Pool2 = (void *)ExAllocatePool2(66LL, (unsigned int)v4 * PacketLength, 1095059543LL);
      v16 = ExAllocatePool2(66LL, 104 * v4, 1095059543LL);
      v5 = (void *)v16;
      if ( !Pool2 || !v16 )
        return (unsigned int)-1073741670;
      v19[9] = Pool2;
      v19[18] = v16;
    }
    v19[17] = *(_QWORD *)(a2 + 44);
    v19[8] = __PAIR64__(v4, v15);
    v17 = WheaAddErrorSource(v19, a1);
    if ( v17 < 0 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x41454857u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41454857u);
    }
    return (unsigned int)v17;
  }
  return 3221225712LL;
}
