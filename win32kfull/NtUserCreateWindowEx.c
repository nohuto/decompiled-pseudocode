__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __m128i *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  __int64 v18; // rbx
  int v19; // esi
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 *v28; // rax
  int v29; // eax
  size_t *v30; // rsi
  __m128i **v31; // rcx
  __m128i *v32; // rax
  __m128i v33; // xmm0
  unsigned __int64 v34; // xmm0_8
  ULONG64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 *v38; // rax
  __m128i *v39; // r14
  __m128i *v40; // rax
  unsigned __int64 v41; // xmm0_8
  unsigned __int64 v42; // r8
  __m128i *v43; // rdi
  __m128i *v44; // rax
  unsigned __int64 v45; // xmm0_8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r8
  ULONG64 v48; // r8
  unsigned __int64 v49; // r8
  __int64 *Window; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // [rsp+90h] [rbp-108h]
  size_t Size[2]; // [rsp+98h] [rbp-100h] BYREF
  int v65; // [rsp+A8h] [rbp-F0h]
  _QWORD v66[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-D8h]
  __m128i v68; // [rsp+D0h] [rbp-C8h] BYREF
  __m128i v69; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v70; // [rsp+F0h] [rbp-A8h] BYREF
  void (*v71)(void *); // [rsp+100h] [rbp-98h]
  __int128 v72; // [rsp+110h] [rbp-88h] BYREF
  __int64 v73; // [rsp+120h] [rbp-78h]
  __int128 v74; // [rsp+128h] [rbp-70h] BYREF
  __int64 v75; // [rsp+138h] [rbp-60h]
  _BYTE v76[80]; // [rsp+148h] [rbp-50h] BYREF

  *(_OWORD *)Size = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v63 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v65 = 0;
  EnterCrit(0LL, 0LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v66);
  if ( a10 == -3 )
  {
    v20 = 0LL;
    if ( !IS_USERCRIT_OWNED_AT_ALL() )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    v21 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v21 = *ThreadWin32Thread;
    if ( v21 )
    {
      v23 = *(_QWORD *)(v21 + 456);
      if ( v23 )
        v20 = *(_QWORD *)(v23 + 104);
    }
    v24 = a16;
    if ( (a16 & 1) != 0 )
      goto LABEL_105;
  }
  else
  {
    if ( a10 )
    {
      v20 = ValidateHwnd(a10);
      if ( !v20 )
        goto LABEL_95;
    }
    else
    {
      v20 = 0LL;
    }
    v24 = a16;
  }
  if ( (v24 & 0xFFFFFFF8) == 0 )
  {
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v25 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v76, a11);
      v67 = *(_QWORD *)(v25 + 16);
      v26 = **(_QWORD **)v25;
      if ( v26 != *(_QWORD *)v66[0] )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v66);
        if ( v26 )
        {
          v66[0] = *(_QWORD *)(v26 + 152);
          ++*(_DWORD *)(v66[0] + 8LL);
        }
        else
        {
          v66[0] = gSmartObjNullRef;
        }
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v76);
LABEL_15:
      v27 = 0LL;
      v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v27 = *v28;
      if ( *(_DWORD *)(v27 + 632) <= 0x400u )
        v29 = *(_DWORD *)(v27 + 648);
      else
        LOWORD(v29) = 0;
      if ( (v29 & 0x800) != 0 )
        a1 &= 0x800777FF;
      if ( (a1 & 0x8A7F77FF) != a1 )
        a1 &= 0x8A7F77FF;
      v30 = (size_t *)a2;
      v31 = (__m128i **)MmUserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v32 = (__m128i *)MmUserProbeAddress;
        if ( a2 < MmUserProbeAddress )
          v32 = (__m128i *)a2;
        v33 = *v32;
        Size[0] = v32->m128i_i64[0];
        v34 = _mm_srli_si128(v33, 8).m128i_u64[0];
        Size[1] = v34;
        if ( v34 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v48 = v34 + LODWORD(Size[0]) + 1LL;
            if ( v48 < v34 || v48 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v34 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v35 = v34 + LODWORD(Size[0]) + 2LL;
            if ( v35 < v34 || v35 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          v36 = Win32AllocPoolWithQuotaZInit(LODWORD(Size[0]) + 2LL, 2020897621LL);
          Size[1] = v36;
          if ( !v36 )
            ExRaiseStatus(-1073741801);
          v65 = 1;
          v37 = 0LL;
          v38 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v38 )
            v37 = *v38;
          *(_QWORD *)&v70 = *(_QWORD *)(v37 + 16);
          *(_QWORD *)(v37 + 16) = &v70;
          *((_QWORD *)&v70 + 1) = v36;
          v71 = Win32FreePool;
          memmove((void *)Size[1], (const void *)v34, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v31 = (__m128i **)MmUserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        v30 = Size;
      }
      v39 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v40 = *v31;
        if ( a3 < *v31 )
          v40 = a3;
        v68 = *v40;
        v41 = _mm_srli_si128(v68, 8).m128i_u64[0];
        if ( v41 )
        {
          if ( v68.m128i_i32[0] > (v68.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v68.m128i_i32[1] < 0 )
          {
            v49 = v41 + v68.m128i_u32[0] + 1LL;
            if ( v49 < v41 || v49 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v68.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v42 = v41 + v68.m128i_u32[0] + 2LL;
            if ( v42 < v41 || v42 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v68.m128i_i32[0] = 0;
        }
        v39 = &v68;
      }
      v43 = a4;
      if ( a4 )
      {
        v44 = *v31;
        if ( a4 < *v31 )
          v44 = a4;
        v69 = *v44;
        v45 = _mm_srli_si128(v69, 8).m128i_u64[0];
        if ( v45 )
        {
          if ( v69.m128i_i32[0] > (v69.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v69.m128i_i32[1] < 0 )
          {
            v47 = v45 + v69.m128i_u32[0] + 1LL;
            if ( v47 < v45 || v47 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v69.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v46 = v45 + v69.m128i_u32[0] + 2LL;
            if ( v46 < v45 || v46 > (unsigned __int64)*v31 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v69.m128i_i32[0] = 0;
        }
        v43 = &v69;
      }
      *(_QWORD *)&v74 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v74;
      *((_QWORD *)&v74 + 1) = v20;
      if ( v20 )
        HMLockObject(v20);
      Window = (__int64 *)xxxCreateWindowEx(
                            a1,
                            v30,
                            v39,
                            v43,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v20,
                            v66,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      if ( Window )
        v54 = *Window;
      else
        v54 = 0LL;
      ThreadUnlock1(v52, v51, v53);
      v19 = v63;
      goto LABEL_84;
    }
    v61 = ValidateHmenu(a11);
    v67 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v66, v61);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v66) )
    {
      v62 = v67;
      if ( !v67 )
        v62 = *(_QWORD *)v66[0];
      *(_QWORD *)&v72 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v72;
      *((_QWORD *)&v72 + 1) = v62;
      HMLockObject(v62);
      v63 = 1;
      goto LABEL_15;
    }
LABEL_95:
    v54 = 0LL;
    goto LABEL_90;
  }
LABEL_105:
  v54 = 0LL;
  UserSetLastError(87);
LABEL_84:
  if ( v65 )
  {
    v58 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v58 )
      v18 = *v58;
    *(_QWORD *)(v18 + 16) = v70;
    ((void (__fastcall *)(_QWORD))v71)(*((_QWORD *)&v70 + 1));
  }
  if ( v19 )
    ThreadUnlock1(v56, v55, v57);
LABEL_90:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v66);
  UserSessionSwitchLeaveCrit(v59);
  return v54;
}
