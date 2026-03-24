/*
 * XREFs of WheaAddErrorSource @ 0x1407AF2C0
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x1407AF0F0 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403BAD50 (WheaLogInternalEvent.c)
 *     WheapCallErrorSourceInitialize @ 0x1403BAE50 (WheapCallErrorSourceInitialize.c)
 *     WheapAddErrorSource @ 0x1403BB024 (WheapAddErrorSource.c)
 *     WheapIsNonHestErrorSource @ 0x1403BB0A4 (WheapIsNonHestErrorSource.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     WheapInitializeErrorSource @ 0x1407AF744 (WheapInitializeErrorSource.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSource(__int128 *a1, __int64 a2)
{
  __int128 *v2; // rbx
  __int64 v4; // r14
  PVOID PoolWithTag; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int128 *v8; // r8
  __int64 v9; // rax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  int v12; // esi
  char *v13; // rcx
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
  char v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+414h] [rbp+30Ch]
  char v30; // [rsp+418h] [rbp+310h]

  v2 = a1;
  v4 = 7LL;
  if ( WheapIsNonHestErrorSource(*((_DWORD *)a1 + 2)) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x430uLL, 0x61656857u);
    v6 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x430uLL);
      v7 = v6 + 96;
      v8 = v2;
      v9 = 7LL;
      do
      {
        *(_OWORD *)v7 = *v8;
        *(_OWORD *)(v7 + 16) = v8[1];
        *(_OWORD *)(v7 + 32) = v8[2];
        *(_OWORD *)(v7 + 48) = v8[3];
        *(_OWORD *)(v7 + 64) = v8[4];
        *(_OWORD *)(v7 + 80) = v8[5];
        *(_OWORD *)(v7 + 96) = v8[6];
        v7 += 128LL;
        v10 = v8[7];
        v8 += 8;
        *(_OWORD *)(v7 - 16) = v10;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)v7 = *v8;
      *(_OWORD *)(v7 + 16) = v8[1];
      *(_OWORD *)(v7 + 32) = v8[2];
      *(_OWORD *)(v7 + 48) = v8[3];
      *(_QWORD *)(v7 + 64) = *((_QWORD *)v8 + 8);
      *(_DWORD *)(v7 + 72) = *((_DWORD *)v8 + 18);
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
        {
          *(_DWORD *)(v6 + 108) = 2;
          v12 = WheapCallErrorSourceInitialize(v6, 1u);
          if ( v12 < 0 )
            *(_DWORD *)(v6 + 108) = 1;
        }
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
  v13 = &v28;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 1009;
  Src[5] = -2147483636;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 977;
  do
  {
    v14 = *v2;
    v15 = v2[1];
    v2 += 8;
    *(_OWORD *)v13 = v14;
    v16 = *(v2 - 6);
    *((_OWORD *)v13 + 1) = v15;
    v17 = *(v2 - 5);
    *((_OWORD *)v13 + 2) = v16;
    v18 = *(v2 - 4);
    *((_OWORD *)v13 + 3) = v17;
    v19 = *(v2 - 3);
    *((_OWORD *)v13 + 4) = v18;
    v20 = *(v2 - 2);
    *((_OWORD *)v13 + 5) = v19;
    v21 = *(v2 - 1);
    *((_OWORD *)v13 + 6) = v20;
    v13 += 128;
    *((_OWORD *)v13 - 1) = v21;
    --v4;
  }
  while ( v4 );
  v22 = *((_QWORD *)v2 + 8);
  v23 = v2[1];
  *(_OWORD *)v13 = *v2;
  v24 = v2[2];
  *((_OWORD *)v13 + 1) = v23;
  v25 = v2[3];
  *((_OWORD *)v13 + 2) = v24;
  *((_OWORD *)v13 + 3) = v25;
  *((_QWORD *)v13 + 8) = v22;
  *((_DWORD *)v13 + 18) = *((_DWORD *)v2 + 18);
  v29 = v12;
  v30 = 0;
  WheaLogInternalEvent(Src);
  return (unsigned int)v12;
}
