/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C000FA60
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C00117E4 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C0039A94 (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x1C003D5DC (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 *     VidSchiControlVSync @ 0x1C00A5D30 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(__int64 a1, unsigned int a2, char a3, unsigned int *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  struct _ERESOURCE *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  char v13; // cl
  bool v14; // zf
  __int64 v15; // r9
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  _QWORD v29[4]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v30; // [rsp+78h] [rbp-30h]

  v5 = 0;
  v6 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchGlobal, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 >= *(_DWORD *)(a1 + 40) )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    return 3221225485LL;
  }
  _mm_lfence();
  v10 = (struct _ERESOURCE *)(a1 + 1088);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1088), 1u);
  v11 = *(unsigned int *)(a1 + 2208);
  v12 = 1 << v6;
  v13 = *(_BYTE *)(a1 + 2212);
  if ( a3 )
  {
    *(_DWORD *)(a1 + 2208) = v11 | v12;
    if ( v13 )
      v14 = *(_DWORD *)(a1 + 4 * v6 + 1824) == 0;
    else
      v14 = *(_DWORD *)(a1 + 1824) == 0;
    if ( v14 )
      goto LABEL_15;
    v15 = (unsigned int)v6;
    v16 = 65538LL;
    if ( !v13 )
      v15 = 4294967293LL;
    LOBYTE(v11) = 1;
    goto LABEL_14;
  }
  v17 = v11 & ~v12;
  *(_DWORD *)(a1 + 2208) = v17;
  if ( v13 )
  {
    v15 = (unsigned int)v6;
    goto LABEL_13;
  }
  if ( !v17 )
  {
    v15 = 4294967293LL;
LABEL_13:
    v11 = 0LL;
    v16 = 2LL;
LABEL_14:
    VidSchiControlVSync(a1, v11, v16, v15);
  }
LABEL_15:
  ExReleaseResourceLite(v10);
  v30 = 0;
  v29[0] = a1 + 1728;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v29);
  v18 = v6;
  v19 = *(_QWORD *)(a1 + 8 * v6 + 3200);
  if ( *(_BYTE *)(a1 + 59) )
  {
    VSYNC_TIME_STATS::MonitorPowerStateChange(v19 + 78496, 2 - (unsigned int)(a3 != 0));
    v18 = v6;
  }
  if ( a3 )
  {
    v20 = a4[3];
    if ( (_DWORD)v20 )
    {
      v21 = 0x3E8 / (unsigned int)v20;
      v22 = 0x989680 / v20;
      if ( *(_DWORD *)(v19 + 82944) != 0x3E8 / (unsigned int)v20 && *(_BYTE *)(a1 + 6634) )
      {
        if ( is_mul_ok(v22, *(_QWORD *)(a1 + 2624)) )
          v26 = v22 * *(_QWORD *)(a1 + 2624) / 0x989680;
        else
          LODWORD(v26) = *(_QWORD *)(a1 + 2624) * (v22 / 0x989680)
                       + *(_QWORD *)(a1 + 2624) * (v22 % 0x989680) / 0x989680;
        VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*(VIDSCH_VSYNC_SMOOTHER **)(v19 + 44248), *(_DWORD *)(v19 + 82952), v26);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v18);
      v22 = 160000LL;
      v21 = 0;
    }
    *(_DWORD *)(v19 + 82944) = v21;
    if ( is_mul_ok(v22, *(_QWORD *)(a1 + 2624)) )
      v23 = v22 * *(_QWORD *)(a1 + 2624) / 0x989680;
    else
      v23 = *(_QWORD *)(a1 + 2624) * (v22 / 0x989680) + *(_QWORD *)(a1 + 2624) * (v22 % 0x989680) / 0x989680;
    v24 = a1 + 16;
    *(_QWORD *)(v19 + 82952) = v23;
    if ( a5 && *(int *)(*(_QWORD *)v24 + 2820LL) >= 2600 )
      *(_DWORD *)(v19 + 82948) ^= (*(_DWORD *)(v19 + 82948) ^ (*a5 >> 11)) & 1;
    else
      *(_DWORD *)(v19 + 82948) &= ~1u;
    if ( *(int *)(*(_QWORD *)v24 + 2820LL) >= 2900 )
    {
      if ( a4[15] * a4[4] != a4[14] * a4[5] )
        v5 = 10000000 * (unsigned __int64)a4[5] / a4[4];
      if ( v5 != *(_DWORD *)(v19 + 82936) )
      {
        WdLogSingleEntry4(4LL, v5, v6, *(unsigned int *)(v19 + 82936), *(unsigned int *)(v19 + 3032));
        if ( (byte_1C00769C4 & 1) != 0 )
          McTemplateK0qqqq_EtwWriteTransfer(
            v27,
            (unsigned int)&EventSetBaseDesktopDuration,
            v28,
            v6,
            *(_DWORD *)(v19 + 82936),
            *(_DWORD *)(v19 + 3032),
            v5);
        *(_DWORD *)(v19 + 82936) = v5;
      }
      *(_DWORD *)(v19 + 82932) = 1;
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v29);
  return 0LL;
}
