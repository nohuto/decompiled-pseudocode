/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x1C00D1B20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D0F08 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxCreateWindowStation @ 0x1C00D22F8 (xxxCreateWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00D28E0 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall EditionCreateWindowStationEntryPoint(
        ULONG64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  int v9; // r12d
  ULONG64 v12; // rdi
  int v13; // eax
  const unsigned __int16 *v14; // rdi
  unsigned __int64 v15; // rsi
  ULONG64 v16; // rdx
  _BYTE **v17; // rcx
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  _OWORD *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rax
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  unsigned int *v25; // rdx
  __int64 v26; // rcx
  void *v27; // r8
  ULONG64 v28; // rdx
  _BYTE **v29; // rax
  unsigned __int16 v30; // ax
  int v31; // eax
  int ProcessLuid; // edi
  ULONG64 v33; // rdx
  char v34; // si
  ULONG64 v35; // rcx
  __int64 v36; // rcx
  int v37; // eax
  _DWORD *v38; // rdi
  int v39; // edx
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v41; // ecx
  ULONG v43; // eax
  __int64 v44; // rdx
  int WindowStation; // [rsp+54h] [rbp-694h]
  int v46; // [rsp+60h] [rbp-688h]
  int v47; // [rsp+60h] [rbp-688h]
  __int64 v48; // [rsp+68h] [rbp-680h] BYREF
  _DWORD *v49; // [rsp+70h] [rbp-678h]
  PVOID BaseAddress; // [rsp+78h] [rbp-670h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-668h] BYREF
  int v52; // [rsp+90h] [rbp-658h]
  int v53; // [rsp+98h] [rbp-650h]
  __int64 v54; // [rsp+A0h] [rbp-648h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp-640h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-638h] BYREF
  __m128i v57; // [rsp+C0h] [rbp-628h]
  __int128 v58; // [rsp+D0h] [rbp-618h]
  __int64 v59; // [rsp+E0h] [rbp-608h]
  __int128 v60; // [rsp+E8h] [rbp-600h]
  __int128 v61; // [rsp+F8h] [rbp-5F0h] BYREF
  __int64 v62; // [rsp+108h] [rbp-5E0h]
  __int128 v63; // [rsp+110h] [rbp-5D8h]
  __int64 v64; // [rsp+120h] [rbp-5C8h]
  __int128 v65; // [rsp+130h] [rbp-5B8h]
  __m128i v66; // [rsp+140h] [rbp-5A8h]
  __int128 v67; // [rsp+150h] [rbp-598h]
  _BYTE v68[792]; // [rsp+160h] [rbp-588h] BYREF
  __int64 v69; // [rsp+478h] [rbp-270h] BYREF
  int v70; // [rsp+480h] [rbp-268h]
  unsigned __int16 v71[12]; // [rsp+488h] [rbp-260h] BYREF
  WCHAR SourceString[256]; // [rsp+4A0h] [rbp-248h] BYREF

  v9 = a3;
  v52 = a2;
  v59 = a3;
  v53 = a4;
  v12 = a7;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v69 = 0LL;
  v70 = 0;
  v54 = 0LL;
  *(_OWORD *)Src = 0LL;
  v60 = 0LL;
  v49 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v48 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a7 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_DWORD *)v12;
  v46 = *(_DWORD *)v12;
  LODWORD(v60) = *(_DWORD *)v12;
  v14 = *(const unsigned __int16 **)(v12 + 8);
  *((_QWORD *)&v60 + 1) = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int16)v13;
  v16 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  v17 = (_BYTE **)MmUserProbeAddress;
  if ( v16 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v46) )
  {
    if ( (v13 & 1) != 0 )
    {
LABEL_39:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
      v17 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_40;
    }
    if ( v16 > (unsigned __int64)v14 )
      goto LABEL_8;
  }
  if ( (v13 & 1) != 0 )
    goto LABEL_39;
LABEL_40:
  **v17 = 0;
LABEL_8:
  RtlStringCchCopyNW(v71, 9uLL, v14, v15 >> 1);
  v49 = (_DWORD *)Win32AllocPoolWithQuotaZInit(792LL, 1702064981LL);
  if ( !v49 )
  {
    v48 = 0LL;
    UserSetLastError(8LL, v18);
    goto LABEL_61;
  }
  v19 = (_OWORD *)a6;
  if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
    v19 = (_OWORD *)MmUserProbeAddress;
  v20 = v68;
  v21 = 6LL;
  v22 = 6LL;
  do
  {
    *v20 = *v19;
    v20[1] = v19[1];
    v20[2] = v19[2];
    v20[3] = v19[3];
    v20[4] = v19[4];
    v20[5] = v19[5];
    v20[6] = v19[6];
    v20 += 8;
    *(v20 - 1) = v19[7];
    v19 += 8;
    --v22;
  }
  while ( v22 );
  *v20 = *v19;
  *((_QWORD *)v20 + 2) = *((_QWORD *)v19 + 2);
  v23 = v49;
  v24 = v68;
  do
  {
    *v23 = *v24;
    v23[1] = v24[1];
    v23[2] = v24[2];
    v23[3] = v24[3];
    v23[4] = v24[4];
    v23[5] = v24[5];
    v23[6] = v24[6];
    v23 += 8;
    *(v23 - 1) = v24[7];
    v24 += 8;
    --v21;
  }
  while ( v21 );
  *v23 = *v24;
  *((_QWORD *)v23 + 2) = *((_QWORD *)v24 + 2);
  if ( *v49 < 8u )
  {
    if ( a1 + 48 < a1 || a1 + 48 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v65 = *(_OWORD *)a1;
    v66 = *(__m128i *)(a1 + 16);
    v67 = *(_OWORD *)(a1 + 32);
    v56 = v65;
    v57 = v66;
    v58 = v67;
    v57.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v66, 8)) & 0xFFFFFDFF;
    v25 = (unsigned int *)v66.m128i_i64[0];
    if ( __PAIR128__(v66.m128i_u64[0], *((unsigned __int64 *)&v65 + 1)) == 0 )
    {
      ProcessLuid = GetProcessLuid(0LL, &v54);
      if ( ProcessLuid >= 0 )
      {
        RtlStringCchPrintfW(
          SourceString,
          0x100uLL,
          (size_t *)L"%ws\\Service-0x%x-%x$",
          szWindowStationDirectory,
          HIDWORD(v54),
          v54);
        RtlInitUnicodeString((PUNICODE_STRING)Src, SourceString);
        v57.m128i_i64[0] = (__int64)Src;
      }
      v34 = 0;
LABEL_30:
      if ( ProcessLuid >= 0 )
      {
        v35 = *((_QWORD *)&v58 + 1);
        if ( *((_QWORD *)&v58 + 1) )
        {
          v33 = *((_QWORD *)&v58 + 1) + 12LL;
          if ( (unsigned __int64)(*((_QWORD *)&v58 + 1) + 12LL) < *((_QWORD *)&v58 + 1) || v33 > MmUserProbeAddress )
            v35 = MmUserProbeAddress;
          v37 = *(_DWORD *)(v35 + 8);
          v69 = *(_QWORD *)v35;
          v70 = v37;
          *((_QWORD *)&v58 + 1) = &v69;
        }
        if ( (_QWORD)v58 )
        {
          LOBYTE(v33) = 1;
          ProcessLuid = SeCaptureSecurityDescriptor(v58, v33);
          *(_QWORD *)&v58 = 0LL;
        }
      }
      if ( ProcessLuid < 0 )
      {
        v41 = ProcessLuid;
      }
      else
      {
        v38 = v49;
        PushW32ThreadLock((__int64)v49, &v61, (__int64)Win32FreePool);
        LOBYTE(v39) = v34;
        WindowStation = xxxCreateWindowStation(
                          (unsigned int)&v56,
                          v39,
                          a2,
                          v9,
                          a4,
                          a5,
                          (__int64)v38,
                          (__int64)v71,
                          a8,
                          (__int64)&v48);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v61;
        v41 = WindowStation;
        if ( WindowStation >= 0 )
          goto LABEL_56;
      }
      v48 = 0LL;
      v43 = RtlNtStatusToDosError(v41);
      UserSetLastError(v43, v44);
      goto LABEL_56;
    }
    if ( v66.m128i_i64[0] >= MmUserProbeAddress )
      v25 = (unsigned int *)MmUserProbeAddress;
    v26 = *v25;
    v47 = *v25;
    LODWORD(Src[0]) = *v25;
    v27 = (void *)*((_QWORD *)v25 + 1);
    Src[1] = v27;
    if ( ((unsigned __int8)v27 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = (ULONG64)v27 + (unsigned __int16)v26 + 2;
    v29 = (_BYTE **)MmUserProbeAddress;
    if ( v28 < MmUserProbeAddress && (unsigned __int16)v26 <= HIWORD(v47) )
    {
      if ( (v26 & 1) != 0 )
        goto LABEL_47;
      if ( v28 > (unsigned __int64)v27 )
      {
LABEL_26:
        v30 = 522;
        if ( LOWORD(Src[0]) < 0x20Au )
          v30 = (unsigned __int16)Src[0];
        LOWORD(Src[0]) = v30;
        RegionSize = v30;
        v31 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        ProcessLuid = v31;
        if ( v31 < 0 )
          ExRaiseStatus(v31);
        memmove(BaseAddress, Src[1], LOWORD(Src[0]));
        Src[1] = BaseAddress;
        v57.m128i_i64[0] = (__int64)Src;
        v34 = 1;
        goto LABEL_30;
      }
    }
    if ( (v26 & 1) == 0 )
    {
LABEL_48:
      **v29 = 0;
      goto LABEL_26;
    }
LABEL_47:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26);
    v29 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_48;
  }
  v48 = 0LL;
  UserSetLastError(87LL, (__int64)v20);
LABEL_56:
  if ( v49 )
    Win32FreePool(v49);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  v36 = 0LL;
LABEL_61:
  UserSessionSwitchLeaveCrit(v36);
  return v48;
}
