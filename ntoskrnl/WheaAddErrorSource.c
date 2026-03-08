/*
 * XREFs of WheaAddErrorSource @ 0x14080C450
 * Callers:
 *     WheaRegisterErrorSourceOverride @ 0x140611120 (WheaRegisterErrorSourceOverride.c)
 *     WheaAddErrorSourceDeviceDriver @ 0x14080C280 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     WheapIsNonHestErrorSource @ 0x14037D750 (WheapIsNonHestErrorSource.c)
 *     WheapCallErrorSourceInitialize @ 0x14037D864 (WheapCallErrorSourceInitialize.c)
 *     WheapAddErrorSource @ 0x14037D97C (WheapAddErrorSource.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WheapInitializeErrorSource @ 0x14080C6B4 (WheapInitializeErrorSource.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 Pool2; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  int v12; // esi
  _BYTE *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  _DWORD Src[8]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v28[972]; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+414h] [rbp+30Ch]
  char v30; // [rsp+418h] [rbp+310h]

  memset(v28, 0, sizeof(v28));
  v4 = 7LL;
  if ( WheapIsNonHestErrorSource(a1) )
  {
    Pool2 = ExAllocatePool2(64LL, 1072LL, 1634035799LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      v7 = Pool2 + 96;
      v8 = a1;
      v9 = 7LL;
      do
      {
        *(_OWORD *)v7 = *(_OWORD *)v8;
        *(_OWORD *)(v7 + 16) = *(_OWORD *)(v8 + 16);
        *(_OWORD *)(v7 + 32) = *(_OWORD *)(v8 + 32);
        *(_OWORD *)(v7 + 48) = *(_OWORD *)(v8 + 48);
        *(_OWORD *)(v7 + 64) = *(_OWORD *)(v8 + 64);
        *(_OWORD *)(v7 + 80) = *(_OWORD *)(v8 + 80);
        *(_OWORD *)(v7 + 96) = *(_OWORD *)(v8 + 96);
        v7 += 128LL;
        v10 = *(_OWORD *)(v8 + 112);
        v8 += 128LL;
        *(_OWORD *)(v7 - 16) = v10;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)v7 = *(_OWORD *)v8;
      *(_OWORD *)(v7 + 16) = *(_OWORD *)(v8 + 16);
      *(_OWORD *)(v7 + 32) = *(_OWORD *)(v8 + 32);
      *(_OWORD *)(v7 + 48) = *(_OWORD *)(v8 + 48);
      *(_QWORD *)(v7 + 64) = *(_QWORD *)(v8 + 64);
      *(_DWORD *)(v7 + 72) = *(_DWORD *)(v8 + 72);
      v12 = WheapInitializeErrorSource(v6);
      if ( v12 )
      {
        ExFreePoolWithTag((PVOID)v6, 0x61656857u);
      }
      else
      {
        *(_QWORD *)(v6 + 56) = a2;
        WheapAddErrorSource(v11, v6);
        if ( WheapInitializationComplete )
          *(_DWORD *)(v6 + 108) = 2;
        v12 = WheapCallErrorSourceInitialize(v6, 1u);
        if ( v12 < 0 )
          *(_DWORD *)(v6 + 108) = 1;
      }
    }
    else
    {
      v12 = -1073741670;
    }
  }
  else
  {
    v12 = -1073741637;
  }
  Src[3] = 0;
  v13 = v28;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 1009;
  Src[5] = -2147483636;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 977;
  do
  {
    v14 = *(_OWORD *)a1;
    v15 = *(_OWORD *)(a1 + 16);
    a1 += 128LL;
    *(_OWORD *)v13 = v14;
    v16 = *(_OWORD *)(a1 - 96);
    *((_OWORD *)v13 + 1) = v15;
    v17 = *(_OWORD *)(a1 - 80);
    *((_OWORD *)v13 + 2) = v16;
    v18 = *(_OWORD *)(a1 - 64);
    *((_OWORD *)v13 + 3) = v17;
    v19 = *(_OWORD *)(a1 - 48);
    *((_OWORD *)v13 + 4) = v18;
    v20 = *(_OWORD *)(a1 - 32);
    *((_OWORD *)v13 + 5) = v19;
    v21 = *(_OWORD *)(a1 - 16);
    *((_OWORD *)v13 + 6) = v20;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v21;
    --v4;
  }
  while ( v4 );
  v22 = *(_QWORD *)(a1 + 64);
  v23 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v13 = *(_OWORD *)a1;
  v24 = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v13 + 1) = v23;
  v25 = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v13 + 2) = v24;
  *((_OWORD *)v13 + 3) = v25;
  *((_QWORD *)v13 + 8) = v22;
  *((_DWORD *)v13 + 18) = *(_DWORD *)(a1 + 72);
  v29 = v12;
  v30 = 0;
  WheaLogInternalEvent(Src);
  return (unsigned int)v12;
}
