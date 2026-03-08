/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x1C00BDD10
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035F20 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00BE504 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxCreateWindowStation @ 0x1C00BE56C (xxxCreateWindowStation.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall EditionCreateWindowStationEntryPoint(
        __m128i *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  int v9; // r15d
  ULONG64 v12; // rdi
  int v13; // ecx
  const unsigned __int16 *v14; // r8
  ULONG64 v15; // rdx
  _OWORD *v16; // rcx
  _OWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  ULONG64 v24; // rdx
  int v25; // ecx
  void *v26; // rax
  ULONG64 v27; // rdx
  unsigned __int16 v28; // ax
  int v29; // eax
  int ProcessLuid; // edi
  ULONG64 v31; // rdx
  char v32; // si
  ULONG64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rdi
  int v37; // edx
  __int64 ThreadWin32Thread; // rax
  NTSTATUS v39; // ecx
  ULONG v41; // eax
  int v42; // [rsp+54h] [rbp-664h]
  int v43; // [rsp+54h] [rbp-664h]
  int WindowStation; // [rsp+58h] [rbp-660h]
  __int64 v45; // [rsp+68h] [rbp-650h] BYREF
  int v46; // [rsp+70h] [rbp-648h]
  _DWORD *v47; // [rsp+78h] [rbp-640h]
  PVOID BaseAddress; // [rsp+80h] [rbp-638h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-630h] BYREF
  int v50; // [rsp+98h] [rbp-620h]
  int v51; // [rsp+A0h] [rbp-618h]
  __int64 v52; // [rsp+A8h] [rbp-610h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-608h] BYREF
  _OWORD v54[2]; // [rsp+B8h] [rbp-600h] BYREF
  __m128i v55; // [rsp+D8h] [rbp-5E0h]
  __int64 v56; // [rsp+E8h] [rbp-5D0h]
  __int128 v57; // [rsp+F0h] [rbp-5C8h] BYREF
  __int64 v58; // [rsp+100h] [rbp-5B8h]
  __int128 v59; // [rsp+108h] [rbp-5B0h]
  __int64 v60; // [rsp+118h] [rbp-5A0h]
  int v61; // [rsp+128h] [rbp-590h]
  const unsigned __int16 *v62; // [rsp+130h] [rbp-588h]
  _BYTE v63[792]; // [rsp+138h] [rbp-580h] BYREF
  __int64 v64; // [rsp+450h] [rbp-268h] BYREF
  int v65; // [rsp+458h] [rbp-260h]
  unsigned __int16 v66[16]; // [rsp+460h] [rbp-258h] BYREF
  WCHAR SourceString[256]; // [rsp+480h] [rbp-238h] BYREF

  v9 = a3;
  v50 = a2;
  v56 = a3;
  v51 = a4;
  v12 = a7;
  memset(v54, 0, sizeof(v54));
  v55 = 0LL;
  v64 = 0LL;
  v65 = 0;
  v52 = 0LL;
  *(_OWORD *)Src = 0LL;
  v47 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v45 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a7 >= MmUserProbeAddress )
    v12 = MmUserProbeAddress;
  v13 = *(_DWORD *)v12;
  v42 = *(_DWORD *)v12;
  v61 = *(_DWORD *)v12;
  v14 = *(const unsigned __int16 **)(v12 + 8);
  v62 = v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
  if ( v15 <= (unsigned __int64)v14 || v15 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v13 > HIWORD(v42) )
  {
    if ( (v13 & 1) == 0 )
      goto LABEL_55;
    goto LABEL_54;
  }
  if ( (v13 & 1) != 0 )
  {
LABEL_54:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 700LL);
LABEL_55:
    ExRaiseAccessViolation();
  }
  RtlStringCchCopyNW(v66, 9uLL, v14, (unsigned __int64)(unsigned __int16)v13 >> 1);
  v47 = (_DWORD *)Win32AllocPoolWithQuotaZInit(792LL, 1702064981LL);
  if ( !v47 )
  {
    v45 = 0LL;
    UserSetLastError(8);
    goto LABEL_64;
  }
  v16 = (_OWORD *)a6;
  if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
    v16 = (_OWORD *)MmUserProbeAddress;
  v17 = v63;
  v18 = 6LL;
  v19 = 6LL;
  do
  {
    *v17 = *v16;
    v17[1] = v16[1];
    v17[2] = v16[2];
    v17[3] = v16[3];
    v17[4] = v16[4];
    v17[5] = v16[5];
    v17[6] = v16[6];
    v17 += 8;
    *(v17 - 1) = v16[7];
    v16 += 8;
    --v19;
  }
  while ( v19 );
  *v17 = *v16;
  *((_QWORD *)v17 + 2) = *((_QWORD *)v16 + 2);
  v20 = v47;
  v21 = v63;
  do
  {
    *v20 = *v21;
    v20[1] = v21[1];
    v20[2] = v21[2];
    v20[3] = v21[3];
    v20[4] = v21[4];
    v20[5] = v21[5];
    v20[6] = v21[6];
    v20 += 8;
    *(v20 - 1) = v21[7];
    v21 += 8;
    --v18;
  }
  while ( v18 );
  *v20 = *v21;
  *((_QWORD *)v20 + 2) = *((_QWORD *)v21 + 2);
  if ( *v47 < 8u )
  {
    if ( &a1[3] < a1 || (unsigned __int64)&a1[3] > MmUserProbeAddress )
      a1 = (__m128i *)MmUserProbeAddress;
    v22 = a1[1];
    v23 = a1[2];
    v54[0] = *a1;
    v54[1] = v22;
    v55 = v23;
    DWORD2(v54[1]) = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8)) & 0xFFFFFDFF;
    v24 = v22.m128i_i64[0];
    if ( *(_OWORD *)((char *)v54 + 8) == 0LL )
    {
      ProcessLuid = GetProcessLuid(0LL, &v52);
      if ( ProcessLuid >= 0 )
      {
        RtlStringCchPrintfW(
          SourceString,
          0x100uLL,
          L"%ws\\Service-0x%x-%x$",
          szWindowStationDirectory,
          HIDWORD(v52),
          v52);
        RtlInitUnicodeString((PUNICODE_STRING)Src, SourceString);
        *(_QWORD *)&v54[1] = Src;
      }
      v32 = 0;
LABEL_30:
      if ( ProcessLuid >= 0 )
      {
        v33 = v55.m128i_u64[1];
        if ( v55.m128i_i64[1] )
        {
          v31 = v55.m128i_i64[1] + 12;
          if ( (unsigned __int64)(v55.m128i_i64[1] + 12) < v55.m128i_i64[1] || v31 > MmUserProbeAddress )
            v33 = MmUserProbeAddress;
          v35 = *(_DWORD *)(v33 + 8);
          v64 = *(_QWORD *)v33;
          v65 = v35;
          v55.m128i_i64[1] = (__int64)&v64;
        }
        if ( v55.m128i_i64[0] )
        {
          LOBYTE(v31) = 1;
          ProcessLuid = SeCaptureSecurityDescriptor(v55.m128i_i64[0], v31);
          v55.m128i_i64[0] = 0LL;
        }
      }
      if ( ProcessLuid < 0 )
      {
        v39 = ProcessLuid;
      }
      else
      {
        v36 = (__int64)v47;
        PushW32ThreadLock((__int64)v47, &v57, (__int64)Win32FreePool);
        LOBYTE(v37) = v32;
        WindowStation = xxxCreateWindowStation(
                          (unsigned int)v54,
                          v37,
                          a2,
                          v9,
                          a4,
                          a5,
                          v36,
                          (__int64)v66,
                          a8,
                          (__int64)&v45);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v57;
        v39 = WindowStation;
        if ( WindowStation >= 0 )
          goto LABEL_59;
      }
      v45 = 0LL;
      v41 = RtlNtStatusToDosError(v39);
      UserSetLastError(v41);
      goto LABEL_59;
    }
    if ( *(_QWORD *)&v54[1] >= MmUserProbeAddress )
      v24 = MmUserProbeAddress;
    v25 = *(_DWORD *)v24;
    v43 = *(_DWORD *)v24;
    LODWORD(Src[0]) = *(_DWORD *)v24;
    v26 = *(void **)(v24 + 8);
    Src[1] = v26;
    if ( ((unsigned __int8)v26 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = (ULONG64)v26 + (unsigned __int16)v25 + 2;
    if ( v27 <= (unsigned __int64)v26 || v27 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v25 > HIWORD(v43) )
    {
      if ( (v25 & 1) == 0 )
        goto LABEL_51;
    }
    else if ( (v25 & 1) == 0 )
    {
      v28 = 522;
      if ( (unsigned __int16)v25 < 0x20Au )
        v28 = v25;
      LOWORD(Src[0]) = v28;
      RegionSize = v28;
      v29 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
      ProcessLuid = v29;
      if ( v29 < 0 )
        ExRaiseStatus(v29);
      memmove(BaseAddress, Src[1], LOWORD(Src[0]));
      Src[1] = BaseAddress;
      *(_QWORD *)&v54[1] = Src;
      v32 = 1;
      goto LABEL_30;
    }
    v46 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 751LL);
LABEL_51:
    ExRaiseAccessViolation();
  }
  v45 = 0LL;
  UserSetLastError(87);
LABEL_59:
  if ( v47 )
    Win32FreePool(v47);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  v34 = 0LL;
LABEL_64:
  UserSessionSwitchLeaveCrit(v34);
  return v45;
}
