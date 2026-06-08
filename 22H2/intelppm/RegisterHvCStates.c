/*
 * XREFs of RegisterHvCStates @ 0x1C0030EB8
 * Callers:
 *     RegisterHvIdleStates @ 0x1C0031610 (RegisterHvIdleStates.c)
 *     RegisterHvPepIdleStatesV2 @ 0x1C0031DDC (RegisterHvPepIdleStatesV2.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C00044F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004AC0 (memset.c)
 *     DecodeAcpi2CState @ 0x1C0026AD8 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterHvCStates(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rdi
  __int64 *PoolWithTag; // rax
  int v5; // ebx
  unsigned __int8 v6; // r15
  unsigned int v7; // edx
  unsigned int i; // ebx
  __int64 v9; // r10
  char v10; // cl
  __int64 j; // r8
  char v12; // cl
  unsigned int *v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  int v19; // [rsp+50h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 512);
  v19 = 0;
  v3 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !v1 || !*(_DWORD *)v1 )
    goto LABEL_35;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x188uLL, 0x72637250u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x188uLL);
  v6 = 1;
  DWORD1(v17) = *(_DWORD *)(a1 + 48);
  LODWORD(v17) = 62;
  *((_QWORD *)&v17 + 1) = v3;
  if ( *(_BYTE *)(v1 + 16) != 1 )
  {
    *(__int64 *)((char *)v3 + 20) = 0LL;
    *((_DWORD *)v3 + 4) = 1;
    LOBYTE(v18) = 127;
    BYTE12(v18) = 1;
    HIWORD(v18) = 0;
    v19 = 0;
    DecodeAcpi2CState(a1, (__int64)&v18, v3 + 1, 0LL, 0LL);
    ++*(_DWORD *)v3;
  }
  v7 = *(_DWORD *)v1;
  for ( i = 0; i < *(_DWORD *)v1; ++v6 )
  {
    if ( v6 > 3u )
      break;
    v9 = *(unsigned int *)v3;
    if ( (unsigned int)v9 >= 0x10 )
      break;
    v10 = *(_BYTE *)(v1 + 20LL * i + 16);
    if ( (unsigned __int8)v10 > 3u )
      v10 = 3;
    if ( v10 == v6 )
    {
      for ( j = i + 1; (unsigned int)j < v7; j = (unsigned int)(j + 1) )
      {
        v12 = *(_BYTE *)(v1 + 20 * j + 16);
        if ( (unsigned __int8)v12 > 3u )
          v12 = 3;
        if ( v12 != v6 || *(_DWORD *)(v1 + 20 * j + 20) >= *(_DWORD *)(v1 + 20 * (i + 1LL)) )
          break;
        ++i;
      }
      v13 = (unsigned int *)&v3[2 * v9 + 1 + v9];
      v13[2] = v6;
      v14 = v1 + 4 * (i + 4LL * i + 1);
      v13[3] = *(unsigned __int16 *)(v14 + 14);
      v13[4] = *(_DWORD *)(v14 + 16);
      if ( (int)DecodeAcpi2CState(a1, v14, (__int64 *)v13, 0LL, 0LL) < 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 8u);
      else
        ++*(_DWORD *)v3;
    }
    else
    {
      --i;
    }
    v7 = *(_DWORD *)v1;
    ++i;
  }
  if ( *(_DWORD *)v3 )
  {
    if ( qword_1C001C670 )
      v15 = qword_1C001C670(&v17);
    else
      v15 = -1073741822;
    v5 = 0;
    if ( v15 != -1073741637 )
      v5 = v15;
    if ( v5 >= 0 )
    {
      v5 = 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xDu,
        (__int64)&WPP_1179e57565003c44c8b3022adf67a914_Traceguids,
        v5,
        v17);
    }
  }
  else
  {
LABEL_35:
    v5 = -1073741823;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  return (unsigned int)v5;
}
