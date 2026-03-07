__int64 __fastcall ExInitializePoolHeapManagement(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v3; // esi
  __int128 v4; // xmm6
  __int64 v5; // rdx
  __int64 *v6; // r14
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int128 v13; // [rsp+38h] [rbp-69h]
  __int128 v14; // [rsp+48h] [rbp-59h]
  __int128 v15; // [rsp+58h] [rbp-49h] BYREF
  __int128 v16; // [rsp+68h] [rbp-39h] BYREF
  __int128 v17; // [rsp+78h] [rbp-29h] BYREF
  __int128 v18; // [rsp+88h] [rbp-19h] BYREF
  __int128 v19; // [rsp+98h] [rbp-9h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+7h]
  __int64 v21; // [rsp+110h] [rbp+6Fh] BYREF
  union _RTL_RUN_ONCE v22; // [rsp+118h] [rbp+77h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  RtlHpGlobalsInitialize();
  v22.Value = 0x500010200LL;
  RtlHpHeapManagerInitialize(&ExPoolState, &v22);
  dword_140C74660 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x40u )
    dword_140C74660 = 64;
  result = RtlHpHeapManagerStart(&ExPoolState);
  if ( (int)result >= 0 )
  {
    RtlpHpLfhPerfFlags = 1279;
    ExpDetermineLargePagePolicy(&v19);
    v3 = 0;
    if ( dword_140C74660 )
    {
      v4 = v19;
      while ( 1 )
      {
        v5 = 0LL;
        v13 = 0LL;
        LOWORD(v13) = 259;
        v6 = &qword_140C74680[1048 * v3];
        BYTE2(v13) = v3;
        v15 = v13;
        if ( *((_QWORD *)&v19 + 1) )
          v5 = 0x4000000LL;
        result = ExCreateHeap(&v15, v5, &v21);
        if ( (int)result < 0 )
          break;
        v7 = v21;
        if ( PoolForceFullDecommit )
        {
          *(_DWORD *)(v21 + 880) |= 2u;
          *(_BYTE *)(v7 + 333) |= 8u;
          *(_BYTE *)(v7 + 525) |= 8u;
        }
        v8 = *((_QWORD *)&v19 + 1) == 0LL;
        v6[1] = v7;
        if ( !v8 )
        {
          v9 = v20;
          *(_OWORD *)(v7 + 192) = v4;
          *(_QWORD *)(v7 + 208) = v9;
          *(_BYTE *)(v7 + 333) = *(_BYTE *)(v7 + 333) & 0xF8 | 1;
          *(_BYTE *)(v7 + 525) = *(_BYTE *)(v7 + 525) & 0xF8 | 1;
        }
        RtlpDynamicLookasideInitialize(v6 + 528);
        *(_QWORD *)(v7 + 40) = v6 + 528;
        v16 = v13;
        result = ExCreateHeap(&v16, 0x40000000LL, &v21);
        if ( (int)result < 0 )
          break;
        v10 = v21;
        if ( PoolForceFullDecommit )
        {
          *(_DWORD *)(v21 + 880) |= 2u;
          *(_BYTE *)(v10 + 333) |= 8u;
          *(_BYTE *)(v10 + 525) |= 8u;
        }
        ++v3;
        *v6 = v10;
        if ( v3 >= dword_140C74660 )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v14 = 0LL;
      *(_WORD *)((char *)&v14 + 1) = 1;
      LOBYTE(v14) = 3;
      v17 = v14;
      result = ExCreateHeap(&v17, 0LL, &v21);
      if ( (int)result >= 0 )
      {
        v11 = v21;
        v18 = v14;
        *(_DWORD *)(v21 + 880) |= 2u;
        *(_BYTE *)(v11 + 333) |= 8u;
        *(_BYTE *)(v11 + 525) |= 8u;
        qword_140CF7688 = v11;
        result = ExCreateHeap(&v18, 0x40000000LL, &v21);
        if ( (int)result >= 0 )
        {
          v12 = v21;
          *(_DWORD *)(v21 + 880) |= 2u;
          *(_BYTE *)(v12 + 333) |= 8u;
          *(_BYTE *)(v12 + 525) |= 8u;
          ExPoolLimitState = 0;
          qword_140CF7E08 = 0LL;
          dword_140CF7E04 = 0;
          qword_140CF7680[0] = v12;
          result = ExInitializePoolTracker();
          if ( (int)result >= 0 )
          {
            _InterlockedOr(&ExpPoolFlags, a1);
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
