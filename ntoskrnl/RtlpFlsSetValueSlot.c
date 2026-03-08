/*
 * XREFs of RtlpFlsSetValueSlot @ 0x14076B5F4
 * Callers:
 *     RtlpFlsSetValue @ 0x14076B564 (RtlpFlsSetValue.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x1402E0E10 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$03$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 */

__int64 __fastcall RtlpFlsSetValueSlot(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  int v8; // edx
  __int64 v9; // r8
  ULONG_PTR v10; // rbx
  int v11; // ecx
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // r8
  _QWORD *v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _BYTE v21[24]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]

  v4 = a3;
  v5 = a2;
  _BitScanReverse((unsigned int *)&a2, a3);
  *(_QWORD *)&v21[16] = &v21[8];
  *(_QWORD *)&v21[8] = &v21[8];
  v9 = *(&PspTlsContext + (unsigned int)(v8 - 4) + 1);
  if ( v9 )
    v10 = v9 + 8 * ((v4 ^ (unsigned int)(1 << a2)) + 4 * (v4 ^ (unsigned int)(1 << a2)) + 1);
  else
    v10 = 0LL;
  _BitScanReverse((unsigned int *)&v11, v4);
  v12 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v11 - 4));
  if ( !v12
    || (v16 = (_QWORD *)(v12
                       + 8
                       * ((a3 ^ (unsigned __int64)(unsigned int)(1 << v11))
                        + 2 * (a3 ^ (unsigned __int64)(unsigned int)(1 << v11))
                        + 1))) == 0LL )
  {
    *(_QWORD *)v21 = a4;
    *(_OWORD *)&v21[8] = 0LL;
    v22 = *(_OWORD *)v21;
    v23 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v21[8], *(__m128d *)&v21[8]);
    result = RTL_BINARY_ARRAY<RTLP_FLS_SLOT,4,4>::SetValue(v5, v4, (__int64)&v22);
    if ( (int)result < 0 )
      return result;
    _BitScanReverse((unsigned int *)&v14, v4);
    v15 = *(_QWORD *)(v5 + 8LL * (unsigned int)(v14 - 4));
    if ( v15 )
      v16 = (_QWORD *)(v15
                     + 8
                     * ((a3 ^ (unsigned __int64)(unsigned int)(1 << v14))
                      + 2 * (a3 ^ (unsigned __int64)(unsigned int)(1 << v14))
                      + 1));
    else
      v16 = 0LL;
    v16[2] = v16 + 1;
    v16[1] = v16 + 1;
  }
  v17 = v16 + 1;
  if ( (_QWORD *)*v17 == v17 )
  {
    if ( a4 )
    {
      ExAcquirePushLockExclusiveEx(v10, 0LL);
      v18 = *(_QWORD **)(v10 + 32);
      if ( *v18 == v10 + 24 )
      {
        *v17 = v10 + 24;
        v16[2] = v18;
        *v18 = v17;
        *(_QWORD *)(v10 + 32) = v17;
LABEL_12:
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v10);
        KeAbPostRelease(v10);
        goto LABEL_15;
      }
      goto LABEL_25;
    }
  }
  else if ( !a4 )
  {
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *v16 = 0LL;
    v19 = *v17;
    if ( *(_QWORD **)(*v17 + 8LL) == v17 )
    {
      v20 = (_QWORD *)v16[2];
      if ( (_QWORD *)*v20 == v17 )
      {
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v16[2] = v16 + 1;
        *v17 = v17;
        goto LABEL_12;
      }
    }
LABEL_25:
    __fastfail(3u);
  }
LABEL_15:
  result = 0LL;
  *v16 = a4;
  *(_DWORD *)(v5 + 32) |= 1u;
  return result;
}
