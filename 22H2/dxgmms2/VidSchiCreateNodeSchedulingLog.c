/*
 * XREFs of VidSchiCreateNodeSchedulingLog @ 0x1C003AC00
 * Callers:
 *     ?VidSchiProcessAsyncOperation@@YAXPEAX@Z @ 0x1C00380C0 (-VidSchiProcessAsyncOperation@@YAXPEAX@Z.c)
 *     VidSchCreateSchedulingLogs @ 0x1C0096760 (VidSchCreateSchedulingLogs.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011E50 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00128EC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0036434 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C003E5D0 (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C003E604 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00D23C0 (VidSchiSerializeSchedulingLog.c)
 */

__int64 __fastcall VidSchiCreateNodeSchedulingLog(struct _VIDSCH_NODE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // esi
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  void *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  _QWORD v24[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v25; // [rsp+78h] [rbp-8h]
  unsigned __int64 v26; // [rsp+C0h] [rbp+40h] BYREF
  PVOID P; // [rsp+D0h] [rbp+50h] BYREF
  void *v28; // [rsp+D8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = a2;
  v23 = 0LL;
  v4 = *((unsigned __int16 *)a1 + 2);
  v21 = 0LL;
  P = 0LL;
  v22 = 0LL;
  v6 = *(_QWORD *)(v2 + 624);
  v28 = 0LL;
  v26 = 0LL;
  if ( (unsigned int)v4 < *(_DWORD *)(v2 + 696) )
    v6 += 8 * v4;
  v8 = VIDMM_SCH_LOG::CreateSchLog(
         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v2 + 8) + 648LL),
         *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL),
         32 * (a2 + 1),
         (struct VIDMM_SCH_LOG **)&P,
         &v28,
         &v26);
  if ( v8 < 0 )
    goto LABEL_16;
  v9 = v28;
  *((_QWORD *)v28 + 1) = v3;
  v10 = *((unsigned __int16 *)a1 + 2);
  v11 = *(_QWORD *)(v2 + 624);
  if ( (unsigned int)v10 < *(_DWORD *)(v2 + 696) )
    v11 += 8 * v10;
  DWORD1(v21) = *(unsigned __int16 *)(*(_QWORD *)v11 + 6LL);
  v12 = *(_QWORD *)(v2 + 624);
  if ( (unsigned int)v10 < *(_DWORD *)(v2 + 696) )
    v12 += 8 * v10;
  v13 = *(unsigned __int16 *)(*(_QWORD *)v12 + 8LL);
  LODWORD(v23) = (unsigned int)(3 * v3) >> 2;
  *((_QWORD *)&v22 + 1) = v26;
  LODWORD(v21) = v13;
  DWORD2(v21) = v3;
  *(_QWORD *)&v22 = v9;
  v8 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[20])(*(_QWORD *)(v2 + 8), &v21);
  if ( v8 == -1073741822 )
    v8 = 0;
  if ( v8 < 0 )
  {
LABEL_16:
    if ( P )
      VIDMM_SCH_LOG::`scalar deleting destructor'(P, v7);
    return (unsigned int)v8;
  }
  else
  {
    v25 = 0;
    v24[0] = v2 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v24);
    v14 = (void *)*((_QWORD *)a1 + 1390);
    v15 = *((_QWORD *)a1 + 1395);
    v16 = *((_QWORD *)a1 + 1396);
    v17 = *((_QWORD *)a1 + 1397);
    v28 = (void *)*((_QWORD *)a1 + 1398);
    *((_QWORD *)a1 + 1390) = P;
    v18 = v26;
    *((_DWORD *)a1 + 2782) = v3;
    *((_QWORD *)a1 + 1393) = v18;
    *((_QWORD *)a1 + 1392) = v9;
    *((_QWORD *)a1 + 1398) = 0LL;
    *((_QWORD *)a1 + 1396) = 0LL;
    *((_QWORD *)a1 + 1397) = 0LL;
    *((_QWORD *)a1 + 1395) = 0LL;
    *((_QWORD *)a1 + 1394) = 0LL;
    VidSchiCalibrateHwClock(a1);
    AcquireSpinLock::Release((AcquireSpinLock *)v24);
    if ( v14 )
    {
      if ( bTracingEnabled )
        VidSchiSerializeSchedulingLog((_DWORD)a1, (_DWORD)v14, v15, v16, v17, (__int64)v28);
      VIDMM_SCH_LOG::`scalar deleting destructor'(v14, v19);
    }
    return 0LL;
  }
}
