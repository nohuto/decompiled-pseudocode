/*
 * XREFs of sub_180079020 @ 0x180079020
 * Callers:
 *     sub_180079718 @ 0x180079718 (sub_180079718.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 *     sub_180064680 @ 0x180064680 (sub_180064680.c)
 *     sub_18006CF10 @ 0x18006CF10 (sub_18006CF10.c)
 *     sub_1800706D4 @ 0x1800706D4 (sub_1800706D4.c)
 *     sub_1800713F8 @ 0x1800713F8 (sub_1800713F8.c)
 *     sub_180071F8C @ 0x180071F8C (sub_180071F8C.c)
 *     sub_180078E8C @ 0x180078E8C (sub_180078E8C.c)
 *     sub_18007C2C0 @ 0x18007C2C0 (sub_18007C2C0.c)
 *     sub_1800AF5FC @ 0x1800AF5FC (sub_1800AF5FC.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18011E0DC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     ?__ExceptionPtrCreate@@YAXPEAX@Z @ 0x18011FA68 (-__ExceptionPtrCreate@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrDestroy@@YAXPEAX@Z @ 0x18011FA6E (-__ExceptionPtrDestroy@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrToBool@@YA_NPEBX@Z @ 0x18011FA7A (-__ExceptionPtrToBool@@YA_NPEBX@Z.c)
 *     ?__ExceptionPtrCurrentException@@YAXPEAX@Z @ 0x18011FA80 (-__ExceptionPtrCurrentException@@YAXPEAX@Z.c)
 *     K32GetProcessMemoryInfo @ 0x18011FB80 (K32GetProcessMemoryInfo.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_180079020(_QWORD *a1, char a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  HANDLE CurrentProcess; // rax
  SIZE_T v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r12
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  bool v12; // zf
  int v13; // ebx
  float v14; // xmm6_4
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 (__fastcall *v28)(__int64, _QWORD, __m128i *); // rax
  __m128i *v29; // r8
  __int64 v30; // rcx
  void *v31; // rax
  _BYTE *v32; // rax
  int v33; // [rsp+30h] [rbp-158h]
  _QWORD *v35; // [rsp+40h] [rbp-148h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-138h]
  __int64 v37[2]; // [rsp+58h] [rbp-130h] BYREF
  __m128i si128; // [rsp+68h] [rbp-120h]
  float v39; // [rsp+78h] [rbp-110h]
  std::exception *v40; // [rsp+80h] [rbp-108h] BYREF
  __int64 v41; // [rsp+88h] [rbp-100h] BYREF
  __int64 v42; // [rsp+90h] [rbp-F8h]
  __m128i v43; // [rsp+98h] [rbp-F0h]
  __m128i v44; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v46; // [rsp+C8h] [rbp-C0h]
  __int128 v47; // [rsp+D0h] [rbp-B8h] BYREF
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+E0h] [rbp-A8h] BYREF

  v2 = a1;
  v35 = a1;
  v36 = a1;
  if ( a1[60] )
  {
    CurrentProcess = GetCurrentProcess();
    K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
    v5 = ppsmemCounters.PeakWorkingSetSize - v2[146];
    v44.m128i_i64[0] = v5;
    v6 = 0x7FFFFFFFFFFFFFFFLL;
    v7 = 0x8000000000000000uLL;
    v8 = 0LL;
    LODWORD(v9) = 0;
    v10 = (_QWORD *)v2[21];
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 == v10 )
    {
      v13 = 0;
    }
    else
    {
      do
      {
        sub_1800AF5FC(v11[2], &v41);
        if ( (_DWORD)v41 )
        {
          if ( v42 < v6 )
            v6 = v42;
          if ( v7 < v43.m128i_i64[1] )
            v7 = v43.m128i_i64[1];
          v8 += v43.m128i_i64[0] * (unsigned int)v41;
          LODWORD(v9) = v41 + v9;
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v10 );
      v33 = v9;
      v12 = (_DWORD)v9 == 0;
      LODWORD(v9) = 0;
      v5 = v44.m128i_i64[0];
      v13 = v33;
      if ( !v12 )
        v9 = v8 / v33;
    }
    v47 = 0LL;
    if ( (v5 & 0x8000000000000000uLL) != 0LL )
      v14 = (float)(int)(v5 & 1 | (v5 >> 1)) + (float)(int)(v5 & 1 | (v5 >> 1));
    else
      v14 = (float)(int)v5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v37[0]) = 0;
    unknown_libname_98(v37, "Engine Max Memory Usage");
    v39 = v14;
    v44.m128i_i64[0] = (__int64)v37;
    v44.m128i_i64[1] = (__int64)&v40;
    sub_1800713F8((__int64 *)&v47, &v44);
    `eh vector destructor iterator'(v37, 0x28uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
    if ( v13 )
    {
      v43 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(v41) = 0;
      LOBYTE(v15) = 0;
      sub_18000FB34(&v41, 0x1AuLL, v15, "Min Time Per-render-update");
      sub_1800706D4((__int64 *)&v47, (__int64)&v44, (size_t *)&v41);
      *(float *)(v44.m128i_i64[0] + 64) = (float)(int)v6 / 1000000.0;
      if ( v43.m128i_i64[1] >= 0x10uLL )
      {
        v17 = v41;
        if ( (unsigned __int64)(v43.m128i_i64[1] + 1) >= 0x1000 )
        {
          v17 = *(_QWORD *)(v41 - 8);
          if ( (unsigned __int64)(v41 - v17 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v17, v43.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v17);
      }
      v43 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(v41) = 0;
      LOBYTE(v16) = 0;
      sub_18000FB34(&v41, 0x1AuLL, v16, "Avg Time Per-render-update");
      sub_1800706D4((__int64 *)&v47, (__int64)&v44, (size_t *)&v41);
      *(float *)(v44.m128i_i64[0] + 64) = (float)(int)v9 / 1000000.0;
      if ( v43.m128i_i64[1] >= 0x10uLL )
      {
        v19 = v41;
        if ( (unsigned __int64)(v43.m128i_i64[1] + 1) >= 0x1000 )
        {
          v19 = *(_QWORD *)(v41 - 8);
          if ( (unsigned __int64)(v41 - v19 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v19, v43.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v19);
      }
      v43 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
      LOBYTE(v41) = 0;
      LOBYTE(v18) = 0;
      sub_18000FB34(&v41, 0x1AuLL, v18, "Max Time Per-render-update");
      sub_1800706D4((__int64 *)&v47, (__int64)&v44, (size_t *)&v41);
      *(float *)(v44.m128i_i64[0] + 64) = (float)(int)v7 / 1000000.0;
      if ( v43.m128i_i64[1] >= 0x10uLL )
      {
        v20 = v41;
        if ( (unsigned __int64)(v43.m128i_i64[1] + 1) >= 0x1000 )
        {
          v20 = *(_QWORD *)(v41 - 8);
          if ( (unsigned __int64)(v41 - v20 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v20, v43.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v20);
      }
    }
    v43 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
    LOBYTE(v41) = 0;
    LOBYTE(v15) = 0;
    sub_18000FB34(&v41, 0x14uLL, v15, "Engine Shutting Down");
    v2 = v35;
    v21 = v35[60];
    v44 = 0LL;
    v22 = operator new(0x60uLL);
    *v22 = v22;
    v22[1] = v22;
    v22[2] = v22;
    *((_WORD *)v22 + 12) = 257;
    v44.m128i_i64[0] = (__int64)v22;
    (*(void (__fastcall **)(__int64, __int64 *, __m128i *, __int128 *))(*(_QWORD *)v21 + 40LL))(v21, &v41, &v44, &v47);
    sub_18006CF10(v44.m128i_i64, (__int64)&v44);
    if ( v43.m128i_i64[1] >= 0x10uLL )
    {
      v23 = v41;
      if ( (unsigned __int64)(v43.m128i_i64[1] + 1) >= 0x1000 )
      {
        v23 = *(_QWORD *)(v41 - 8);
        if ( (unsigned __int64)(v41 - v23 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v23, v43.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v23);
    }
    sub_180064680((__int64 *)&v47, (__int64)&v47);
    result = v2[62];
  }
  else
  {
    result = a1[62];
    if ( !result )
      return result;
  }
  if ( result )
  {
    try
    {
      v46 = 15LL;
      v45 = 0LL;
      v44.m128i_i8[0] = 0;
      v47 = 0LL;
      __ExceptionPtrCreate(&v47);
      __ExceptionPtrCurrentException(&v47);
      if ( __ExceptionPtrToBool(&v47) )
      {
        v31 = sub_180071F8C(&v35, &v47);
        sub_18007C2C0(v31);
      }
      __ExceptionPtrDestroy(&v47);
    }
    catch ( std::exception *v40 )
    {
      v32 = (_BYTE *)(*(__int64 (__fastcall **)(std::exception *))(*(_QWORD *)v40 + 8LL))(v40);
      unknown_libname_98(v44.m128i_i64, v32);
      v2 = v36;
    }
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v26 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
        + 1000000000 * (perf_counter / perf_frequency)
        - v2[147];
    if ( a2 )
    {
      sub_180078E8C((__int64)v2);
      v27 = a1[62];
      v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v27 + 40LL);
    }
    else
    {
      v27 = a1[62];
      v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v27 + 32LL);
    }
    v29 = &v44;
    if ( v46 >= 0x10 )
      v29 = (__m128i *)v44.m128i_i64[0];
    result = v28(v27, (unsigned int)(int)(float)((float)(int)v26 / 1000000.0), v29);
    if ( v46 >= 0x10 )
    {
      v30 = v44.m128i_i64[0];
      if ( v46 + 1 >= 0x1000 )
      {
        v30 = *(_QWORD *)(v44.m128i_i64[0] - 8);
        if ( (unsigned __int64)(v44.m128i_i64[0] - v30 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v30, v46 + 40);
          __debugbreak();
        }
      }
      return j_j__o_free(v30);
    }
  }
  return result;
}
