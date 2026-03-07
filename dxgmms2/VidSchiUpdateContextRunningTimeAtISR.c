_BOOL8 __fastcall VidSchiUpdateContextRunningTimeAtISR(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r15
  _QWORD *v4; // rbp
  __int64 v5; // r14
  bool v6; // si
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  unsigned __int128 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  _BOOL8 result; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  signed __int32 v21; // eax
  volatile signed __int32 *v22; // rcx
  __int64 v23; // r9
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+90h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+10h]

  v1 = a1[1];
  v3 = v1;
  v4 = *(_QWORD **)(v1 + 96);
  if ( *(_QWORD *)(v1 + 496) )
    v3 = *(_QWORD *)(v1 + 496);
  v5 = v4[3];
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 436), 0, 0) == 1;
  PerformanceFrequency.QuadPart = 0LL;
  *(LARGE_INTEGER *)&v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = v9 - *(_QWORD *)(v1 + 464);
  v8 = v9;
  *(_QWORD *)&v9 = 10000000 * v7;
  v25 = (v7 * (unsigned __int128)0x989680uLL) >> 64;
  v10 = 10000000 * v7;
  if ( is_mul_ok(v7, 0x989680uLL) )
  {
    if ( PerformanceFrequency.QuadPart == 10000000 )
    {
      v9 = v10 * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
      v11 = v10 / 0x989680;
    }
    else
    {
      *((_QWORD *)&v9 + 1) = (unsigned __int64)v9 % PerformanceFrequency.QuadPart;
      v11 = (unsigned __int64)v9 / PerformanceFrequency.QuadPart;
    }
  }
  else
  {
    *((_QWORD *)&v9 + 1) = v7 % PerformanceFrequency.QuadPart;
    v11 = 10000000 * (v7 / PerformanceFrequency.QuadPart)
        + 10000000 * (v7 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
  }
  *(_QWORD *)(v1 + 448) += v11;
  *(_QWORD *)(v1 + 456) += v11;
  v4[331] += v11;
  v12 = *(_QWORD *)(v1 + 96);
  if ( (*(_DWORD *)(v12 + 12) & 0x40) != 0 )
  {
    v15 = 0LL;
  }
  else
  {
    v13 = *(unsigned __int16 *)(v12 + 4);
    v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 104) + 40LL) + 32LL)
                    + 8LL * *(unsigned int *)(*(_QWORD *)(v12 + 24) + 4LL));
    *((_QWORD *)&v9 + 1) = *(_QWORD *)(v14 + 8);
    if ( (unsigned int)v13 < *(_DWORD *)(v14 + 80) )
      *((_QWORD *)&v9 + 1) += 8 * v13;
    v15 = (_QWORD *)**((_QWORD **)&v9 + 1);
  }
  *v15 += v11;
  _InterlockedExchangeAdd64(*(volatile signed __int64 **)(v5 + 6608), v11);
  *(_QWORD *)(v1 + 464) = v8;
  if ( v6 )
  {
    v19 = *(_QWORD *)(v3 + 440) - v11;
    *(_QWORD *)(v3 + 440) = v19;
    if ( v19 <= 0 )
    {
      v20 = *(_QWORD *)(v1 + 496);
      v21 = 1;
      if ( v20 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 436), 2, 1);
        v21 = 0;
        v22 = (volatile signed __int32 *)(*(_QWORD *)(v1 + 496) + 436LL);
      }
      else
      {
        v22 = (volatile signed __int32 *)(v1 + 436);
      }
      _InterlockedCompareExchange(v22, 2, v21);
      v6 = 0;
    }
  }
  else if ( (*(_DWORD *)(v5 + 2536) & 4) != 0 && !gulPriorityToYieldPriorityBand[*(unsigned int *)(v1 + 404)] )
  {
    *(_QWORD *)(v3 + 440) -= v11;
  }
  if ( bTracingEnabled )
  {
    v16 = *(_QWORD *)(v1 + 56);
    *(_QWORD *)&v9 = *(_QWORD *)(v1 + 440);
    if ( !v16 || (DWORD2(v9) = *(_DWORD *)(v1 + 112), (BYTE8(v9) & 0x40) != 0) )
      LODWORD(v16) = v1;
    if ( (byte_1C00769C1 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(v1 + 448),
        DWORD2(v9),
        v4[252],
        v16,
        *(_QWORD *)(v1 + 448),
        v9,
        v4[252],
        *(_DWORD *)(v1 + 436),
        2);
    v17 = *(_QWORD *)(v1 + 496);
    if ( v17 )
    {
      v23 = *(_QWORD *)(v17 + 56);
      *(_QWORD *)&v9 = *(_QWORD *)(v17 + 440);
      if ( !v23 || (DWORD2(v9) = *(_DWORD *)(v17 + 112), (BYTE8(v9) & 0x40) != 0) )
        v23 = *(_QWORD *)(v1 + 496);
      if ( (byte_1C00769C1 & 2) != 0 )
        McTemplateK0piixqq_EtwWriteTransfer(
          *(_QWORD *)(v17 + 448),
          DWORD2(v9),
          v17,
          v23,
          *(_QWORD *)(v17 + 448),
          v9,
          v4[252],
          *(_DWORD *)(v17 + 436),
          2);
    }
  }
  result = v6;
  a1[3] = *(_QWORD *)(v3 + 440);
  a1[2] = *(_QWORD *)(v1 + 448);
  return result;
}
