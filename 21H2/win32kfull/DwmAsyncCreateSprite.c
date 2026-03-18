/*
 * XREFs of DwmAsyncCreateSprite @ 0x1C00838C0
 * Callers:
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0083498 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncCreateSprite(PVOID Object, __int64 a2, __int64 a3, _OWORD *a4, int a5, __int64 a6, int a7)
{
  unsigned int v11; // edi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  _OWORD v20[14]; // [rsp+20h] [rbp-E0h] BYREF

  v11 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v20, 0, 0xDCuLL);
    LODWORD(v20[0]) = 14418100;
    WORD2(v20[0]) = 0x8000;
    HIDWORD(v20[4]) = a5;
    DWORD2(v20[13]) = a7;
    DWORD2(v20[2]) = 1073741826;
    *(_QWORD *)((char *)&v20[2] + 12) = a2;
    *(_QWORD *)((char *)&v20[3] + 4) = a3;
    if ( a4 )
      *(_OWORD *)((char *)&v20[3] + 12) = *a4;
    if ( a6 )
    {
      v12 = *(_OWORD *)(a6 + 16);
      v20[5] = *(_OWORD *)a6;
      v13 = *(_OWORD *)(a6 + 32);
      v20[6] = v12;
      v14 = *(_OWORD *)(a6 + 48);
      v20[7] = v13;
      v15 = *(_OWORD *)(a6 + 64);
      v20[8] = v14;
      v16 = *(_OWORD *)(a6 + 80);
      v20[9] = v15;
      v17 = *(_OWORD *)(a6 + 96);
      v20[10] = v16;
      v20[11] = v17;
      v18 = *(_QWORD *)(a6 + 128);
      v20[12] = *(_OWORD *)(a6 + 112);
      *(_QWORD *)&v20[13] = v18;
    }
    EtwUpdateEvent(a3);
    v11 = LpcRequestPort(Object, v20);
    ObfDereferenceObject(Object);
  }
  return v11;
}
