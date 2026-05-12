/*
 * XREFs of StorpTelemetryCollectPerfData @ 0x1C0009110
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RaidQosSupportedCommand @ 0x1C0036794 (RaidQosSupportedCommand.c)
 *     McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer @ 0x1C0051544 (McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetryCollectPerfData(_QWORD *a1, __int64 a2, char *a3, __int64 a4, char a5)
{
  _BYTE *v5; // r12
  __int64 v7; // rdx
  char *v8; // rsi
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // r11d
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // r9
  int v17; // ecx
  int v18; // ecx
  unsigned __int64 v19; // rcx
  char v20; // cl
  union _LARGE_INTEGER v21; // rcx
  bool v22; // zf
  LARGE_INTEGER v23; // rax
  LARGE_INTEGER v24; // rbx
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  unsigned __int64 v29; // r14
  int v30; // edx
  __int64 v31; // r15
  __int64 *v32; // rcx
  int v33; // edx
  unsigned int v34; // eax
  unsigned int v35; // edi
  unsigned int v36; // ebx
  __int64 *v37; // rax
  int v38; // r8d
  unsigned int v39; // ecx
  ULONG CurrentProcessorNumber; // eax
  __int64 v41; // rcx
  unsigned __int8 v42; // di
  char v43; // r14
  __int64 v44; // rbx
  char v45; // al
  volatile signed __int64 *v46; // rbx
  int v47; // ebx
  unsigned int v48; // r11d
  unsigned int v49; // r9d
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // r10
  __int64 v53; // r8
  int v54; // ecx
  int v55; // ecx
  unsigned __int64 v56; // rcx
  unsigned int v57; // r11d
  unsigned int v58; // ebx
  unsigned int v59; // r10d
  __int64 v60; // rcx
  unsigned __int64 v61; // rdx
  __int64 v62; // r9
  __int64 v63; // r8
  int v64; // ecx
  int v65; // ecx
  char v66; // cl
  char v67; // al
  unsigned __int64 v68; // rcx
  volatile signed __int64 *v69; // rax
  __int64 v70; // rcx
  int v71; // ecx
  unsigned __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned __int8 v75; // [rsp+B0h] [rbp-80h]
  char v76; // [rsp+B8h] [rbp-78h]
  int v77; // [rsp+C0h] [rbp-70h]
  volatile signed __int64 *v78; // [rsp+C0h] [rbp-70h]
  int v79; // [rsp+C8h] [rbp-68h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp-60h] BYREF
  unsigned __int64 v81; // [rsp+D8h] [rbp-58h]
  int v82; // [rsp+E0h] [rbp-50h]
  _BYTE *v83; // [rsp+E8h] [rbp-48h]

  v5 = 0LL;
  v7 = *(unsigned __int8 *)(a2 + 2);
  v8 = a3;
  v82 = 0;
  LOBYTE(v79) = 0;
  v76 = 0;
  if ( (_BYTE)v7 == 40 )
    v10 = *(_DWORD *)(a2 + 20);
  else
    v10 = v7;
  v77 = v10;
  if ( v10 || ((a5 - 8) & 0x5D) != 0 )
    goto LABEL_37;
  if ( (_BYTE)v7 == 40 )
  {
    v7 = 0LL;
    v79 = *(_DWORD *)(a2 + 60);
    if ( *(_DWORD *)(a2 + 20) )
      goto LABEL_28;
    v11 = *(_DWORD *)(a2 + 56);
    v12 = 0;
    if ( !v11 )
      goto LABEL_28;
    while ( 1 )
    {
      v13 = *(unsigned int *)(a2 + 4LL * v12 + 120);
      if ( (unsigned int)v13 < 0x80 )
        goto LABEL_21;
      v14 = *(unsigned int *)(a2 + 16);
      if ( (unsigned int)v13 >= (unsigned int)v14 )
        goto LABEL_21;
      v15 = v13 + a2;
      v16 = (unsigned int)v13;
      v17 = *(_DWORD *)(v13 + a2) - 64;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 && v16 + 40 <= v14 )
          {
            v7 = v15 + 32;
            if ( !*(_DWORD *)(v15 + 12) )
              v7 = 0LL;
            goto LABEL_28;
          }
          goto LABEL_21;
        }
        v19 = v16 + 56;
      }
      else
      {
        v19 = v16 + 40;
      }
      if ( v19 <= v14 )
      {
        if ( *(_BYTE *)(v15 + 10) )
          v7 = v15 + 24;
LABEL_28:
        if ( v7 )
        {
          v20 = *(_BYTE *)v7;
          if ( ((*(_BYTE *)v7 - 8) & 0xFD) != 0 )
          {
            if ( ((v20 - 40) & 0xFD) != 0 && ((v20 + 88) & 0xFD) != 0 )
            {
              if ( ((v20 + 120) & 0xFD) != 0 )
                v76 = -1;
              else
                v76 = *(_BYTE *)(v7 + 9);
            }
            else
            {
              v76 = *(_BYTE *)(v7 + 5);
            }
          }
          else
          {
            v76 = *(_BYTE *)(v7 + 3);
          }
        }
        goto LABEL_37;
      }
LABEL_21:
      if ( ++v12 >= v11 )
        goto LABEL_28;
    }
  }
  v79 = *(_DWORD *)(a2 + 16);
  if ( !(_BYTE)v7 && *(_BYTE *)(a2 + 10) )
  {
    v7 = a2 + 72;
    goto LABEL_28;
  }
LABEL_37:
  v21.QuadPart = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled )
  {
    v22 = UseQPCTime == 0;
    goto LABEL_39;
  }
  if ( g_StorpTraceLoggingPerformanceEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_44:
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      v21 = PerformanceFrequency;
      v24.QuadPart = UnbiasedInterruptTime;
      goto LABEL_46;
    }
    v22 = g_StorpTraceLoggingPerformanceHighResolutionTimer == 0;
LABEL_39:
    if ( !v22 )
    {
      v23 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v21 = PerformanceFrequency;
      v24 = v23;
      goto LABEL_46;
    }
    goto LABEL_44;
  }
  v24.QuadPart = 0LL;
LABEL_46:
  v26 = v24.QuadPart - a1[87];
  if ( StorEtwLoggingEnabled )
  {
    if ( !UseQPCTime )
    {
LABEL_56:
      v27 = v26;
      goto LABEL_57;
    }
    if ( !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    {
      if ( !v21.QuadPart )
        return 3221225534LL;
      v7 = 10000000 * v26 % v21.QuadPart;
      v26 = 10000000 * v26 / v21.QuadPart;
    }
  }
  if ( !UseQPCTime || !g_StorpTraceLoggingPerformanceHighResolutionTimer )
    goto LABEL_56;
  if ( !v21.QuadPart )
    return 3221225534LL;
  v7 = 10000000 * v26 % v21.QuadPart;
  v27 = 10000000 * v26 / v21.QuadPart;
LABEL_57:
  v29 = a1[86];
  v81 = v27;
  if ( v8[3216] && (unsigned __int8)RaidQosSupportedCommand(a2, v7) && v29 + v27 >= *((_QWORD *)v8 + 407) )
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 264);
  if ( !v29 )
    goto LABEL_68;
  _InterlockedIncrement64((volatile signed __int64 *)v8 + 271);
  _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 272, v29);
  if ( v29 > *((_QWORD *)v8 + 273) )
    *((_QWORD *)v8 + 273) = v29;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    if ( v29 > 10000000 * (unsigned __int64)*(unsigned int *)(a2 + 40) )
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 274);
    v82 = *(_DWORD *)(a2 + 48);
LABEL_68:
    if ( *(_BYTE *)(a2 + 2) == 40 )
      *(_DWORD *)(a2 + 48) = 0;
  }
  v30 = 1;
  if ( v29 + v81 >= HighLatencyIoThreshold
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v8 + 560) <= 0x80
    && (byte_1C0069845 & 0x40) != 0 )
  {
    v31 = *((_QWORD *)v8 + 3);
    v8 = a3;
    McTemplateK0zqjuuujssstxqquqiq_EtwWriteTransfer(
      (_DWORD)a3 + 186,
      (_DWORD)a3 + 169,
      (_DWORD)a3 + 160,
      *(_QWORD *)(v31 + 4864),
      *(_DWORD *)(v31 + 56),
      v31 + 5192,
      a3[96],
      a3[97],
      a3[98],
      (__int64)(a3 + 1976),
      (__int64)(a3 + 160),
      (__int64)(a3 + 169),
      (__int64)(a3 + 186),
      a3[450] & 1,
      HighLatencyIoThreshold / 0x2710uLL,
      (int)v81 / 10000,
      v29 / 0x2710,
      a5,
      v79,
      v76,
      v82);
    v30 = 1;
  }
  if ( v77 )
    return 3221225473LL;
  if ( ((a5 - 8) & 0x5D) != 0 )
  {
    if ( a5 == 66 )
      goto LABEL_86;
    if ( a5 == 53 || a5 == -111 )
    {
      v30 = 0;
LABEL_86:
      v37 = (__int64 *)xmmword_1C0069620;
      v38 = 4;
      v39 = 0;
      while ( v26 > *v37 )
      {
        ++v39;
        ++v37;
        if ( v39 >= 4 )
          goto LABEL_91;
      }
      v38 = v39;
LABEL_91:
      v35 = *((_DWORD *)&xmmword_1C0069630 + 3);
      v36 = v30 + v38 * (unsigned __int16)xmmword_1C0069610;
      goto LABEL_92;
    }
    return 3221225473LL;
  }
  v32 = (__int64 *)*(&P + 1);
  v33 = 11;
  v34 = 0;
  while ( v26 > *v32 )
  {
    ++v34;
    ++v32;
    if ( v34 >= 0xB )
      goto LABEL_81;
  }
  v33 = v34;
LABEL_81:
  v35 = dword_1C006960C;
  v36 = (((a5 - 8) & 0x5F) != 0) + v33 * (unsigned __int16)TelemetryPerfContext;
LABEL_92:
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  v41 = v35;
  v42 = 0;
  v75 = *(_BYTE *)(a2 + 3);
  v43 = 0;
  v83 = 0LL;
  v44 = CurrentProcessorNumber % g_RaidNumberProcessors * HIDWORD(qword_1C0069640) + 24 * (v36 + v41);
  v45 = *(_BYTE *)(a2 + 2);
  v46 = (volatile signed __int64 *)(*((_QWORD *)v8 + 281) + v44);
  v78 = v46;
  if ( v45 != 40 )
  {
    v57 = v75;
    v43 = *(_BYTE *)(a2 + 4);
    LOBYTE(v57) = v75 & 0x3F;
    if ( !v45 )
    {
      v5 = *(_BYTE **)(a2 + 32);
      v42 = *(_BYTE *)(a2 + 11);
      v83 = v5;
    }
    goto LABEL_117;
  }
  v47 = *(_DWORD *)(a2 + 20);
  if ( !v47 )
  {
    v48 = *(_DWORD *)(a2 + 56);
    v49 = 0;
    if ( v48 )
    {
      while ( 1 )
      {
        v50 = *(unsigned int *)(a2 + 4LL * v49 + 120);
        if ( (unsigned int)v50 < 0x80 )
          goto LABEL_102;
        v51 = *(unsigned int *)(a2 + 16);
        if ( (unsigned int)v50 >= (unsigned int)v51 )
          goto LABEL_102;
        v52 = v50 + a2;
        v53 = (unsigned int)v50;
        v54 = *(_DWORD *)(v50 + a2) - 64;
        if ( !v54 )
          goto LABEL_100;
        v55 = v54 - 1;
        if ( v55 )
          break;
        v56 = v53 + 56;
LABEL_101:
        if ( v56 <= v51 )
        {
          v43 = *(_BYTE *)(v52 + 8);
          goto LABEL_106;
        }
LABEL_102:
        if ( ++v49 >= v48 )
          goto LABEL_106;
      }
      if ( v55 != 1 )
        goto LABEL_102;
LABEL_100:
      v56 = v53 + 40;
      goto LABEL_101;
    }
  }
LABEL_106:
  v57 = v75;
  LOBYTE(v57) = v75 & 0x3F;
  if ( v47 )
    goto LABEL_116;
  v58 = *(_DWORD *)(a2 + 56);
  v59 = 0;
  if ( !v58 )
    goto LABEL_116;
  while ( 1 )
  {
    v60 = *(unsigned int *)(a2 + 4LL * v59 + 120);
    if ( (unsigned int)v60 < 0x80 )
      goto LABEL_125;
    v61 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v60 >= (unsigned int)v61 )
      goto LABEL_125;
    v62 = v60 + a2;
    v63 = (unsigned int)v60;
    v64 = *(_DWORD *)(v60 + a2) - 64;
    if ( !v64 )
      break;
    v65 = v64 - 1;
    if ( !v65 )
    {
      v68 = v63 + 56;
      goto LABEL_124;
    }
    if ( v65 == 1 && v63 + 40 <= v61 )
    {
      v5 = *(_BYTE **)(v62 + 24);
      goto LABEL_115;
    }
LABEL_125:
    if ( ++v59 >= v58 )
      goto LABEL_116;
  }
  v68 = v63 + 40;
LABEL_124:
  if ( v68 > v61 )
    goto LABEL_125;
  v5 = *(_BYTE **)(v62 + 16);
LABEL_115:
  v42 = *(_BYTE *)(v62 + 9);
  v83 = v5;
LABEL_116:
  v46 = v78;
LABEL_117:
  if ( (v75 & 0x80u) == 0 )
  {
    if ( v43 == 2 )
      goto LABEL_134;
    if ( (unsigned __int8)v57 > 0x12u )
      goto LABEL_134;
    v71 = 262211;
    if ( !_bittest(&v71, v57) )
      goto LABEL_134;
  }
  else
  {
    if ( v5 && v42 >= 8u && (unsigned __int8)((*v5 & 0x7F) - 112) <= 1u )
    {
      v66 = v5[12];
      v67 = v5[2] & 0xF;
    }
    else
    {
      v67 = 0;
      v66 = 0;
    }
    if ( (_BYTE)v57 != 1 || v67 || v66 )
    {
LABEL_134:
      v69 = v46 + 1;
      goto LABEL_135;
    }
  }
  v69 = v46;
LABEL_135:
  _InterlockedIncrement64(v69);
  _InterlockedExchangeAdd64(v46 + 2, v81);
  if ( ((a5 - 8) & 0x5D) == 0 )
  {
    if ( *((_QWORD *)v8 + 284) )
    {
      v70 = *((_QWORD *)v8 + 284)
          + dword_1C0069658
          * (KeGetCurrentNodeNumber() % ((unsigned int)(unsigned __int16)g_RaidNumaHighestNodeNumber + 1));
      if ( *(_QWORD *)v70 < v81 )
        *(_QWORD *)v70 = v81;
      if ( ((a5 - 8) & 0x5F) != 0 )
      {
        if ( *(_BYTE *)(a2 + 2) == 40 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 16), *(unsigned int *)(a2 + 60));
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 16), *(unsigned int *)(a2 + 16));
      }
      else if ( *(_BYTE *)(a2 + 2) == 40 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 8), *(unsigned int *)(a2 + 60));
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v70 + 8), *(unsigned int *)(a2 + 16));
      }
    }
    goto LABEL_157;
  }
  if ( a5 == 53 || a5 == -111 )
  {
    if ( *((_QWORD *)v8 + 288) < v81 )
      *((_QWORD *)v8 + 288) = v81;
LABEL_157:
    if ( ((a5 - 10) & 0x5F) != 0 )
      return 0LL;
    v72 = *(_BYTE *)(a2 + 2) == 40 ? *(unsigned int *)(a2 + 60) : *(unsigned int *)(a2 + 16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 398, v72);
    v73 = a1[96];
    if ( !v73 )
    {
      v73 = a1[22];
      if ( !v73 )
        return 0LL;
    }
    if ( (*(_DWORD *)(v73 + 16) & 8) != 0 )
      v73 = *(_QWORD *)(v73 + 24);
    if ( !v73 )
      return 0LL;
    v74 = *(_QWORD *)(v73 + 184);
    if ( !v74 || !(unsigned __int16)*(_DWORD *)(v74 + 16) )
      return 0LL;
    if ( *(_BYTE *)(a2 + 2) != 40 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 399, *(unsigned int *)(a2 + 16));
      return 0LL;
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 399, *(unsigned int *)(a2 + 60));
    return 0LL;
  }
  else
  {
    if ( a5 != 66 )
      goto LABEL_157;
    if ( *((_QWORD *)v8 + 289) < v81 )
    {
      *((_QWORD *)v8 + 289) = v81;
      return 0LL;
    }
    return 0LL;
  }
}
