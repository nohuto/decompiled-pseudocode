/*
 * XREFs of NtUserCreateWindowEx @ 0x1C00BF540
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C008A9C4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C008AA9C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C01674C4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z @ 0x1C01695F4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUHMENU__@@@Z.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 */

__int64 __fastcall NtUserCreateWindowEx(
        unsigned int a1,
        ULONG64 a2,
        __m128i *a3,
        __int128 *a4,
        int a5,
        __int32 a6,
        LONG a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        __int64 a17)
{
  int v18; // r12d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 *v32; // rax
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // r13d
  wchar_t *v36; // r14
  __m128i **v37; // rcx
  __m128i v38; // xmm0
  unsigned __int64 v39; // xmm0_8
  __int64 v40; // rax
  ULONG64 v41; // rdx
  __int64 v42; // rax
  __m128i *v43; // rsi
  __int128 *v44; // rbx
  unsigned __int64 v45; // xmm0_8
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // xmm0_8
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r8
  ULONG64 v50; // rdx
  unsigned __int64 v51; // r8
  __int64 *Window; // rax
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v58; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v61; // rcx
  __int64 CurrentThreadProcess; // rax
  int v63; // [rsp+90h] [rbp-108h]
  size_t Size[2]; // [rsp+98h] [rbp-100h] BYREF
  int v65; // [rsp+A8h] [rbp-F0h]
  __int64 v66[2]; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-D8h]
  __m128i v68; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v69; // [rsp+E0h] [rbp-B8h] BYREF
  __int128 v70; // [rsp+F8h] [rbp-A0h] BYREF
  __int64 v71; // [rsp+108h] [rbp-90h]
  __int128 v72; // [rsp+110h] [rbp-88h] BYREF
  __int64 v73; // [rsp+120h] [rbp-78h]
  __int128 v74; // [rsp+128h] [rbp-70h] BYREF
  __int64 v75; // [rsp+138h] [rbp-60h]
  _BYTE v76[80]; // [rsp+148h] [rbp-50h] BYREF

  *(_OWORD *)Size = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v18 = 0;
  v63 = 0;
  v74 = 0LL;
  v75 = 0LL;
  v65 = 0;
  EnterCrit(0LL, 1LL);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v66);
  if ( a10 == -3 )
  {
    v21 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v23 = *(_QWORD *)(ThreadWin32Thread + 456);
      if ( v23 )
        v21 = *(_QWORD *)(v23 + 104);
    }
    if ( (a16 & 1) != 0 )
      goto LABEL_92;
  }
  else if ( a10 )
  {
    v21 = ValidateHwnd(a10);
    if ( !v21 )
      goto LABEL_86;
  }
  else
  {
    v21 = 0LL;
  }
  if ( (a16 & 0xFFFFFFF8) == 0 )
  {
    if ( (a5 & 0xC0000000) == 0x40000000 || !a11 )
    {
      v24 = SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v76, a11);
      v67 = *(_QWORD *)(v24 + 16);
      v25 = **(_QWORD **)v24;
      if ( v25 != *(_QWORD *)v66[0] )
      {
        SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v66);
        if ( v25 )
        {
          v66[0] = *(_QWORD *)(v25 + 152);
          ++*(_DWORD *)(v66[0] + 8);
        }
        else
        {
          v66[0] = gSmartObjNullRef;
        }
      }
      SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v76);
LABEL_11:
      CurrentThread = KeGetCurrentThread();
      v28 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v26)
        || (CurrentProcess = PsGetCurrentProcess(v30, v29, v31),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v61),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        v32 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v32 )
          v28 = *v32;
      }
      LOWORD(v33) = 0;
      if ( *(_DWORD *)(v28 + 632) <= 0x400u )
        v33 = *(_DWORD *)(v28 + 648);
      v34 = a1 & 0x800777FF;
      if ( (v33 & 0x800) == 0 )
        v34 = a1;
      v35 = v34 & 0x8A7F77FF;
      if ( (v34 & 0x8A7F77FF) == v34 )
        v35 = v34;
      v36 = (wchar_t *)a2;
      v37 = (__m128i **)MmUserProbeAddress;
      if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a2 >= MmUserProbeAddress )
          v36 = (wchar_t *)MmUserProbeAddress;
        v38 = *(__m128i *)v36;
        Size[0] = *(_QWORD *)v36;
        v39 = _mm_srli_si128(v38, 8).m128i_u64[0];
        Size[1] = v39;
        if ( v39 )
        {
          if ( LODWORD(Size[0]) > (HIDWORD(Size[0]) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( (Size[0] & 0x8000000000000000uLL) != 0LL )
          {
            v40 = LODWORD(Size[0]);
            v50 = v39 + LODWORD(Size[0]) + 1LL;
            if ( v50 < v39 || v50 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v39 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v40 = LODWORD(Size[0]);
            v41 = v39 + LODWORD(Size[0]) + 2LL;
            if ( v41 < v39 || v41 > MmUserProbeAddress )
              ExRaiseAccessViolation();
          }
          v42 = Win32AllocPoolWithQuota(v40 + 2, 2020897621LL);
          Size[1] = v42;
          if ( !v42 )
            ExRaiseStatus(-1073741801);
          v65 = 1;
          PushW32ThreadLock(v42, &v74, Win32FreePool);
          memmove((void *)Size[1], (const void *)v39, LODWORD(Size[0]));
          *(_WORD *)(Size[1] + 2 * ((unsigned __int64)LODWORD(Size[0]) >> 1)) = 0;
          HIDWORD(Size[0]) ^= (HIDWORD(Size[0]) ^ (LODWORD(Size[0]) + 2)) & 0x7FFFFFFF;
          v37 = (__m128i **)MmUserProbeAddress;
        }
        else
        {
          LODWORD(Size[0]) = 0;
        }
        v36 = (wchar_t *)Size;
      }
      v43 = a3;
      if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( a3 >= *v37 )
          v43 = *v37;
        v68 = *v43;
        v47 = _mm_srli_si128(v68, 8).m128i_u64[0];
        if ( v47 )
        {
          if ( v68.m128i_i32[0] > (v68.m128i_i32[1] & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( v68.m128i_i32[1] < 0 )
          {
            v51 = v47 + v68.m128i_u32[0] + 1LL;
            if ( v51 < v47 || v51 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (v68.m128i_i8[8] & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v48 = v47 + v68.m128i_u32[0] + 2LL;
            if ( v48 < v47 || v48 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          v68.m128i_i32[0] = 0;
        }
        v43 = &v68;
      }
      v44 = a4;
      if ( a4 )
      {
        if ( a4 >= (__int128 *)*v37 )
          v44 = (__int128 *)*v37;
        v69 = *v44;
        v45 = _mm_srli_si128((__m128i)v69, 8).m128i_u64[0];
        if ( v45 )
        {
          if ( (unsigned int)v69 > (DWORD1(v69) & 0x7FFFFFFFu) )
            ExRaiseAccessViolation();
          if ( SDWORD1(v69) < 0 )
          {
            v49 = v45 + (unsigned int)v69 + 1LL;
            if ( v49 < v45 || v49 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
          else
          {
            if ( (BYTE8(v69) & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v46 = v45 + (unsigned int)v69 + 2LL;
            if ( v46 < v45 || v46 > (unsigned __int64)*v37 )
              ExRaiseAccessViolation();
          }
        }
        else
        {
          LODWORD(v69) = 0;
        }
        v44 = &v69;
      }
      *(_QWORD *)&v72 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v72;
      *((_QWORD *)&v72 + 1) = v21;
      if ( v21 )
        HMLockObject(v21);
      Window = (__int64 *)xxxCreateWindowEx(
                            v35,
                            v36,
                            (__int64)v43,
                            v44,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            v21,
                            (__int64)v66,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17);
      v54 = 0LL;
      if ( Window )
        v54 = *Window;
      ThreadUnlock1(v53);
      v18 = v63;
      goto LABEL_79;
    }
    ValidateHmenu(a11);
    v67 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v66);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v66) )
    {
      v58 = v67;
      if ( !v67 )
        v58 = *(_QWORD *)v66[0];
      *(_QWORD *)&v70 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v70;
      *((_QWORD *)&v70 + 1) = v58;
      HMLockObject(v58);
      v63 = 1;
      goto LABEL_11;
    }
LABEL_86:
    v54 = 0LL;
    goto LABEL_83;
  }
LABEL_92:
  v54 = 0LL;
  UserSetLastError(87LL, v19, v20);
LABEL_79:
  if ( v65 )
    PopAndFreeAlwaysW32ThreadLock(&v74);
  if ( v18 )
    ThreadUnlock1(v55);
LABEL_83:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64)v66);
  UserSessionSwitchLeaveCrit(v56);
  return v54;
}
