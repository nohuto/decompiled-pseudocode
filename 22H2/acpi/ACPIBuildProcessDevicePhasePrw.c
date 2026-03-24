/*
 * XREFs of ACPIBuildProcessDevicePhasePrw @ 0x1C0015900
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015D80 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015E24 (ACPIBuildDevicePowerNodes.c)
 *     ACPIGpeValidIndex @ 0x1C001A140 (ACPIGpeValidIndex.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C584 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054C98 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrw(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rdi
  __int64 v5; // r13
  char v7; // si
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG_PTR v12; // rdx
  __int64 v13; // rdx
  void *v14; // rax
  void *v15; // r8
  __int64 v17; // rbx
  __int16 v18; // ax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned __int8 v23; // cl
  unsigned int v24; // ebx
  int v25; // esi
  unsigned __int64 v26; // rdx
  __int64 *v27; // rbx
  int v28; // r8d
  unsigned __int8 v29; // r8
  __int64 v30; // rdx
  void *v31; // rax
  void *v32; // r8
  _QWORD v33[16]; // [rsp+50h] [rbp-B8h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v5 = a1 + 80;
  *(_DWORD *)(a1 + 32) = 18;
  v7 = 0;
  v8 = 0;
  if ( *(_QWORD *)(v4 + 416) )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      dword_1C0082908 = 0;
      pszDest = 0;
      FreeDataBuffs(a1 + 80, 1u);
    }
  }
  else
  {
    v9 = AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 1465074783LL, a3, a4);
    if ( v9 )
      *(_DWORD *)(v4 + 560) |= 0x40u;
    else
      v9 = AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 1465077855LL, v10, v11);
    *(_QWORD *)(v4 + 416) = v9;
    v12 = *(_QWORD *)(a1 + 56);
    if ( !v12 )
    {
      if ( (*(_DWORD *)(v4 + 560) & 0x40) == 0 )
        goto LABEL_6;
      _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x10000uLL);
      _InterlockedOr64((volatile signed __int64 *)(v4 + 960), 0x400000000uLL);
      v12 = *(_QWORD *)(a1 + 56);
    }
    if ( v12 )
    {
      if ( (AcpiOverrideAttributes & 8) != 0 && (*(_QWORD *)(v4 + 8) & 0x800000000LL) == 0 )
        v7 = 1;
      if ( *(_WORD *)(v5 + 2) != 4 )
      {
        ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
        v12 = *(_QWORD *)(a1 + 56);
      }
      v8 = ACPIBuildDevicePowerNodes(v4, v12);
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v17 = *(_QWORD *)(v5 + 32);
      v18 = *(_WORD *)(v17 + 10);
      if ( v18 != 1 )
      {
        if ( v18 != 4 )
          KeBugCheckEx(0xA5u, 4uLL, v4, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v17 + 10));
        v8 = ACPIBuildWakeEventDeviceContext(v4, v17 + 8);
        if ( v8 < 0 )
        {
          v30 = *(_QWORD *)(v4 + 8);
          v31 = &unk_1C00701BA;
          v32 = &unk_1C00701BA;
          if ( (v30 & 0x200000000000LL) != 0 )
          {
            v31 = *(void **)(v4 + 568);
            if ( (v30 & 0x400000000000LL) != 0 )
              v32 = *(void **)(v4 + 576);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = 2;
            WPP_RECORDER_SF_Lqss(
              WPP_GLOBAL_Control->DeviceExtension,
              v30,
              10,
              43,
              (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
              v8,
              v4,
              (__int64)v31,
              (__int64)v32);
          }
          KeBugCheckEx(0xA5u, 6uLL, v4, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v17 + 10));
        }
      }
      v19 = *(_QWORD *)(v5 + 32);
      if ( *(_WORD *)(v19 + 50) != 1 )
        KeBugCheckEx(0xA5u, 4uLL, v4, *(_QWORD *)(a1 + 56), *(unsigned __int16 *)(v19 + 50));
      if ( !v7 )
      {
        *(_DWORD *)(v4 + 464) = *(_DWORD *)(v17 + 24);
        v20 = *(_QWORD *)(v19 + 64);
        if ( v20 >= 6 )
          v21 = 0;
        else
          v21 = SystemPowerStateTranslation[v20];
        *(_DWORD *)(v4 + 496) = v21;
        _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x10000uLL);
        if ( *((_BYTE *)AcpiInformation + 133) )
        {
          _InterlockedOr64((volatile signed __int64 *)(v4 + 960), 0x100000000uLL);
        }
        else
        {
          v22 = *(_QWORD *)(v4 + 960);
          if ( (v22 & 0x800000000LL) != 0 )
          {
            if ( (v22 & 0x100000000LL) == 0 )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v4, 0LL, 0LL);
            if ( *(_QWORD *)(v17 + 24) != 0xFFFFFFFFLL )
              KeBugCheckEx(0xA5u, 0x1000DuLL, v4, 1uLL, 0LL);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      if ( !*((_BYTE *)AcpiInformation + 133)
        && (*(_QWORD *)(v4 + 960) & 0x100000000LL) == 0
        && (unsigned __int8)ACPIGpeValidIndex(*(unsigned int *)(v17 + 24)) )
      {
        v24 = v23;
        v25 = 1 << (v23 & 7);
        KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
        v26 = (unsigned __int64)v24 >> 3;
        if ( ((unsigned __int8)v25 & *((_BYTE *)GpeEnable + v26)) != 0 )
        {
          if ( (*(_QWORD *)(v4 + 8) & 0x800000000LL) != 0 )
          {
            *((_BYTE *)GpeSpecialHandler + v26) |= v25;
            v29 = *((_BYTE *)GpeWakeHandler + v26);
            if ( (v29 & (unsigned __int8)v25) != 0 )
              *((_BYTE *)GpeWakeHandler + v26) = v29 & ~(_BYTE)v25;
          }
          else if ( ((unsigned __int8)v25 & *((_BYTE *)GpeSpecialHandler + v26)) == 0 )
          {
            *((_BYTE *)GpeWakeHandler + v26) |= v25;
          }
        }
        KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      }
    }
    dword_1C0082908 = 0;
    pszDest = 0;
    FreeDataBuffs(v5, 1u);
    v27 = *(__int64 **)(v4 + 416);
    if ( v27 )
    {
      memset(v33, 0, 0x78uLL);
      v28 = *(_DWORD *)(v4 + 560) & 0x40;
      WORD1(v33[0]) = 1;
      v33[2] = 0LL;
      WORD1(v33[5]) = 1;
      v33[7] = 0LL;
      WORD1(v33[10]) = 1;
      v33[12] = 0LL;
      AMLIAsyncEvalObject(v27, 0LL, (v28 | 0x20u) >> 5, v33, 0LL, 0LL);
    }
  }
LABEL_6:
  v13 = *(_QWORD *)(v4 + 8);
  v14 = &unk_1C00701BA;
  v15 = &unk_1C00701BA;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v14 = *(void **)(v4 + 568);
    if ( (v13 & 0x400000000000LL) != 0 )
      v15 = *(void **)(v4 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      6,
      44,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v8,
      v4,
      (__int64)v14,
      (__int64)v15);
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return (unsigned int)v8;
}
