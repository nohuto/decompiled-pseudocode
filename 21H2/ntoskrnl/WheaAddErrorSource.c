/*
 * XREFs of WheaAddErrorSource @ 0x1407AF4C0
 * Callers:
 *     WheaAddErrorSourceDeviceDriver @ 0x1407AF2F0 (WheaAddErrorSourceDeviceDriver.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403BAEC0 (WheaLogInternalEvent.c)
 *     WheapCallErrorSourceInitialize @ 0x1403BAFC0 (WheapCallErrorSourceInitialize.c)
 *     WheapAddErrorSource @ 0x1403BB194 (WheapAddErrorSource.c)
 *     WheapIsNonHestErrorSource @ 0x1403BB214 (WheapIsNonHestErrorSource.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     WheapInitializeErrorSource @ 0x1407AF8E0 (WheapInitializeErrorSource.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaAddErrorSource(__int128 *a1, __int64 a2)
{
  _DWORD *v2; // r12
  __int128 *v3; // rbx
  __int64 v5; // r14
  int v6; // edi
  PVOID PoolWithTag; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int128 *v10; // r8
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // rcx
  char *v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  bool v23; // zf
  __int64 v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  _DWORD Src[8]; // [rsp+20h] [rbp-E0h] BYREF
  char v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+40Ch] [rbp+30Ch]
  char v37; // [rsp+410h] [rbp+310h]

  v2 = (_DWORD *)a1 + 2;
  v3 = a1;
  v5 = 7LL;
  if ( WheapIsNonHestErrorSource(*((_DWORD *)a1 + 2)) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x430uLL, 0x61656857u);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x430uLL);
      v9 = v8 + 96;
      v10 = v3;
      v11 = 7LL;
      do
      {
        *(_OWORD *)v9 = *v10;
        *(_OWORD *)(v9 + 16) = v10[1];
        *(_OWORD *)(v9 + 32) = v10[2];
        *(_OWORD *)(v9 + 48) = v10[3];
        *(_OWORD *)(v9 + 64) = v10[4];
        *(_OWORD *)(v9 + 80) = v10[5];
        *(_OWORD *)(v9 + 96) = v10[6];
        v9 += 128LL;
        v12 = v10[7];
        v10 += 8;
        *(_OWORD *)(v9 - 16) = v12;
        --v11;
      }
      while ( v11 );
      *(_OWORD *)v9 = *v10;
      *(_OWORD *)(v9 + 16) = v10[1];
      *(_OWORD *)(v9 + 32) = v10[2];
      *(_OWORD *)(v9 + 48) = v10[3];
      *(_QWORD *)(v9 + 64) = *((_QWORD *)v10 + 8);
      *(_DWORD *)(v9 + 72) = *((_DWORD *)v10 + 18);
      v6 = WheapInitializeErrorSource(v8);
      if ( v6 )
      {
        ExFreePoolWithTag((PVOID)v8, 0x61656857u);
      }
      else
      {
        *(_QWORD *)(v8 + 56) = a2;
        WheapAddErrorSource(v13, v8);
        v6 = 0;
        if ( WheapInitializationComplete )
        {
          *(_DWORD *)(v8 + 108) = 2;
          v6 = WheapCallErrorSourceInitialize(v8, 1u);
          if ( v6 < 0 )
            *(_DWORD *)(v8 + 108) = 1;
        }
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  Src[3] = 0;
  v14 = &v30;
  Src[0] = 1733060695;
  Src[1] = 1;
  Src[2] = 1009;
  Src[5] = -2147483636;
  Src[4] = 1280201291;
  Src[6] = 2;
  Src[7] = 977;
  do
  {
    v15 = *v3;
    v16 = v3[1];
    v3 += 8;
    *(_OWORD *)v14 = v15;
    v17 = *(v3 - 6);
    *((_OWORD *)v14 + 1) = v16;
    v18 = *(v3 - 5);
    *((_OWORD *)v14 + 2) = v17;
    v19 = *(v3 - 4);
    *((_OWORD *)v14 + 3) = v18;
    v20 = *(v3 - 3);
    *((_OWORD *)v14 + 4) = v19;
    v21 = *(v3 - 2);
    *((_OWORD *)v14 + 5) = v20;
    v22 = *(v3 - 1);
    *((_OWORD *)v14 + 6) = v21;
    v14 += 128;
    *((_OWORD *)v14 - 1) = v22;
    --v5;
  }
  while ( v5 );
  v23 = *v2 == 16;
  v24 = *((_QWORD *)v3 + 8);
  v25 = v3[1];
  *(_OWORD *)v14 = *v3;
  v26 = v3[2];
  *((_OWORD *)v14 + 1) = v25;
  v27 = v3[3];
  *((_OWORD *)v14 + 2) = v26;
  *((_OWORD *)v14 + 3) = v27;
  *((_QWORD *)v14 + 8) = v24;
  *((_DWORD *)v14 + 18) = *((_DWORD *)v3 + 18);
  if ( v23 )
  {
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    v31 = 0LL;
    v35 = 0LL;
  }
  v36 = v6;
  v37 = 0;
  WheaLogInternalEvent(Src);
  return (unsigned int)v6;
}
