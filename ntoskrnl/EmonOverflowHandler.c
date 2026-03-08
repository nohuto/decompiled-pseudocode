/*
 * XREFs of EmonOverflowHandler @ 0x14051B1E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     EmonIsModifiedByBadActorInternal @ 0x1404563E0 (EmonIsModifiedByBadActorInternal.c)
 *     EmonPebsOverflowHandler @ 0x14051BA84 (EmonPebsOverflowHandler.c)
 *     KeProfileInterruptWithSource @ 0x140571A20 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x140581850 (PoGetProcessorIdleAccounting.c)
 */

__int64 (__fastcall **__fastcall EmonOverflowHandler(__int64 a1))()
{
  __int64 v1; // rsi
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // r10
  _QWORD *v4; // r15
  __int64 v5; // r12
  __int64 i; // rdi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ecx
  LARGE_INTEGER v16; // r10
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned int v24; // r13d
  __int64 v25; // rax
  unsigned int v26; // r13d
  LARGE_INTEGER v27; // rax
  __int64 v28; // r8
  __int64 v29; // r10
  LONGLONG v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rdi
  __int64 *v35; // rbx
  __int64 v36; // r14
  unsigned __int64 v37; // rsi
  void (__fastcall *v38)(unsigned __int64, __int64 *); // rax
  bool v39; // zf
  __int64 v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rbx
  unsigned __int64 v43; // r12
  __int64 v44; // r9
  unsigned int v45; // ecx
  unsigned __int64 QuadPart; // rdx
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rbx
  unsigned int v50; // ecx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // r15
  LARGE_INTEGER v56; // rax
  __int64 v57; // r8
  __int64 v58; // r11
  unsigned int v59; // r9d
  LONGLONG v60; // r10
  unsigned int v61; // ecx
  unsigned __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // [rsp+20h] [rbp-48h] BYREF
  __int64 v65; // [rsp+28h] [rbp-40h]
  __int64 v66; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-30h]
  _QWORD *v68; // [rsp+40h] [rbp-28h]
  unsigned __int64 v69; // [rsp+48h] [rbp-20h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-18h] BYREF
  LARGE_INTEGER v71; // [rsp+58h] [rbp-10h] BYREF
  int v73; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v74; // [rsp+C0h] [rbp+58h]
  unsigned int v75; // [rsp+C8h] [rbp+60h]

  v73 = 0;
  result = &DefaultProfileInterface;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = a1;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v4 = (_QWORD *)HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v4 = (_QWORD *)(HalpCounterStatus + 8LL * (unsigned int)(HalpNumberOfCounters * v1));
  }
  v68 = v4;
  if ( (unsigned int)EmonVersion >= 2 )
  {
    v33 = EmonOverflowMask & __readmsr(0x38Eu);
    v69 = v33;
    v34 = v33;
    if ( (v33 & 0x4000000000000000LL) != 0 )
    {
      EmonPebsOverflowHandler(910LL);
      v34 = v33 & 0xBFFFFFFFFFFFFFFFuLL;
    }
    v35 = (__int64 *)EmonReservedResourcesList;
    if ( (__int64 *)EmonReservedResourcesList != &EmonReservedResourcesList )
    {
      v36 = 10 * v1;
      do
      {
        v37 = v34 & v35[v36 + 4];
        if ( v37 )
        {
          v38 = (void (__fastcall *)(unsigned __int64, __int64 *))v35[2];
          if ( v38 )
            v38(v34 & v35[v36 + 4], v35);
        }
        v35 = (__int64 *)*v35;
        v34 &= ~v37;
      }
      while ( v35 != &EmonReservedResourcesList );
    }
    v39 = !_BitScanForward64((unsigned __int64 *)&v40, v34);
    if ( v39 )
    {
LABEL_101:
      result = (__int64 (__fastcall **)())v33;
      __writemsr(0x390u, v33);
      return result;
    }
    while ( 1 )
    {
      v34 &= ~(1LL << v40);
      if ( (unsigned int)v40 >= 0x20 )
        v40 = (unsigned int)(EmonNumberArchCounters - 32 + v40);
      if ( *(_DWORD *)(v4[v40] + 24LL) )
        goto LABEL_99;
      v41 = *v4;
      v42 = 5 * v40;
      LODWORD(v43) = 0;
      v65 = 5 * v40;
      v44 = (unsigned int)v40;
      v64 = v41;
      PerformanceFrequency.QuadPart = 0LL;
      LOBYTE(v73) = 0;
      v75 = v40;
      if ( (unsigned int)v40 < EmonNumberArchCounters )
      {
        v45 = v40 + 390;
        v67 = __readmsr((int)v40 + 390);
        QuadPart = v67 & 0xFFFFFFFFFFAFFFFFuLL;
      }
      else
      {
        v44 = (unsigned int)(v40 - EmonNumberArchCounters + 32);
        v75 = v40 - EmonNumberArchCounters + 32;
        v45 = 911;
        v67 = ~(15LL << (4 * ((unsigned __int8)v40 - (unsigned __int8)EmonNumberArchCounters))) & __readmsr(0x38Du);
        PerformanceFrequency.QuadPart = __readmsr(0x38Fu) & ~(1LL << ((unsigned __int8)v40
                                                                    - (unsigned __int8)EmonNumberArchCounters
                                                                    + 32));
        QuadPart = PerformanceFrequency.QuadPart;
      }
      __writemsr(v45, QuadPart);
      v47 = *(unsigned int *)(v41 + 40 * v40 + 32);
      if ( (_DWORD)v47 )
      {
        KeProfileInterruptWithSource(a1, v47);
        LODWORD(v43) = *(_DWORD *)(v41 + 40 * v40);
        goto LABEL_76;
      }
      v66 = 0LL;
      v71.QuadPart = 0LL;
      if ( HalpTimerProfilingCallback )
        HalpTimerProfilingCallback(a1, v47, (unsigned int)EmonNumberArchCounters, v44);
      else
        KeProfileInterruptWithSource(a1, 0LL);
      v48 = HalpProfileData;
      v49 = 32LL * KeGetPcr()->Prcb.Number;
      v50 = *(_DWORD *)(v49 + HalpProfileData + 24);
      if ( v50 )
      {
        v51 = *(_DWORD *)(v49 + HalpProfileData + 20);
        LODWORD(v43) = *(_DWORD *)(v49 + HalpProfileData + 16);
        if ( v51 )
        {
          v54 = v51 - 1;
          *(_DWORD *)(v49 + HalpProfileData + 20) = v54;
          if ( v54 )
            goto LABEL_75;
          v74 = 0x2710 / v50;
          *(_DWORD *)(v49 + v48 + 20) = 0x2710 / v50;
          if ( !(0x2710 / v50) )
          {
            *(_DWORD *)(v49 + v48 + 20) = 1;
            v74 = 1;
          }
          PoGetProcessorIdleAccounting(&v66, 0x2710 % v50);
          v52 = v66;
          if ( v66 == *(_QWORD *)(v49 + v48 + 8) )
          {
            v55 = v74 * (unsigned int)v43;
            v56 = KeQueryPerformanceCounter(&v71);
            v57 = HalpProfileData;
            if ( v56.QuadPart != *(_QWORD *)(v49 + HalpProfileData) )
            {
              v43 = v71.QuadPart
                  * (v55
                   * (unsigned __int64)*(unsigned int *)(v49 + HalpProfileData + 24)
                   / (v56.QuadPart - *(_QWORD *)(v49 + HalpProfileData)))
                  / 0x989680;
              if ( v43 >= 0x1000 )
              {
                if ( v43 > 0x7FFFFFFF )
                  LODWORD(v43) = 0x7FFFFFFF;
              }
              else
              {
                LODWORD(v43) = 4096;
              }
              *(_DWORD *)(v49 + HalpProfileData + 16) = v43;
              *(LARGE_INTEGER *)(v49 + v57) = v56;
            }
            goto LABEL_75;
          }
        }
        else
        {
          *(_DWORD *)(v49 + HalpProfileData + 20) = 0x2710 / v50;
          if ( !(0x2710 / v50) )
            *(_DWORD *)(v49 + v48 + 20) = 1;
          PoGetProcessorIdleAccounting(&v66, 0x2710 % v50);
          v52 = v66;
        }
        *(_QWORD *)(v49 + v48 + 8) = v52;
        *(LARGE_INTEGER *)(v49 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
      }
LABEL_75:
      v41 = v64;
      v42 = v65;
LABEL_76:
      if ( (unsigned int)v40 >= EmonNumberArchCounters )
      {
        if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
          v63 = (1LL << EmonFixedCounterResolution) - 1;
        else
          v63 = -1LL;
        v58 = v67;
        v60 = PerformanceFrequency.QuadPart | (1LL << v75);
        v61 = v40 - EmonNumberArchCounters + 777;
        v59 = 911;
        v62 = v63 & -(__int64)(unsigned int)v43;
      }
      else
      {
        if ( (unsigned int)EmonCounterResolution < 0x40 )
          v53 = (1LL << EmonCounterResolution) - 1;
        else
          v53 = -1LL;
        v58 = v67;
        v59 = v40 + 390;
        v60 = v67 | 0x500000;
        v61 = v40 + 193;
        v62 = v53 & -(__int64)(unsigned int)v43;
      }
      __writemsr(v61, v62);
      __writemsr(v59, v60);
      EmonIsModifiedByBadActorInternal(v40, v58, &v73);
      if ( (_BYTE)v73 )
        *(_BYTE *)(v41 + 8 * v42 + 36) = 1;
      v4 = v68;
LABEL_99:
      v39 = !_BitScanForward64((unsigned __int64 *)&v40, v34);
      if ( v39 )
      {
        v33 = v69;
        goto LABEL_101;
      }
    }
  }
  if ( (unsigned int)EmonCounterResolution < 0x40 )
    v5 = (1LL << EmonCounterResolution) - 1;
  else
    v5 = -1LL;
  for ( i = 0LL; (unsigned int)i < EmonNumberCounters; i = (unsigned int)(i + 1) )
  {
    result = (__int64 (__fastcall **)())v4[i];
    if ( !*((_DWORD *)result + 6) )
    {
      v7 = i + 390;
      v8 = i + 193;
      v75 = i + 390;
      v74 = i + 193;
      v9 = __readmsr((int)i + 193);
      v10 = (((unsigned __int64)HIDWORD(v9) << 32) | (unsigned int)v9) & v5;
      result = (__int64 (__fastcall **)())(v5 & 0xFFFFFFFF80000001uLL);
      if ( v10 < (v5 & 0xFFFFFFFF80000001uLL) )
      {
        v11 = 5 * i;
        v71.QuadPart = 0LL;
        LODWORD(v12) = 0;
        v13 = (unsigned int)EmonNumberArchCounters;
        v14 = (unsigned int)i;
        LOBYTE(v73) = 0;
        v67 = *v68;
        v66 = 5 * i;
        LODWORD(v65) = i;
        if ( (unsigned int)i < EmonNumberArchCounters )
        {
          v15 = i + 390;
          v69 = __readmsr(v7);
          v17 = v69 & 0xFFFFFFFFFFAFFFFFuLL;
        }
        else
        {
          v14 = (unsigned int)(i - EmonNumberArchCounters + 32);
          LODWORD(v65) = v14;
          v15 = 911;
          v69 = ~(15LL << (4 * ((unsigned __int8)i - (unsigned __int8)EmonNumberArchCounters))) & __readmsr(0x38Du);
          v16.QuadPart = __readmsr(0x38Fu);
          _bittestandreset64((__int64 *)&v16, (unsigned int)v14);
          v71 = v16;
          v17 = v16.QuadPart;
          v3 = a1;
        }
        __writemsr(v15, v17);
        v18 = *(unsigned int *)(v67 + 40 * i + 32);
        if ( (_DWORD)v18 )
        {
          KeProfileInterruptWithSource(v3, v18);
          LODWORD(v12) = *(_DWORD *)(v67 + 40 * i);
        }
        else
        {
          v64 = 0LL;
          PerformanceFrequency.QuadPart = 0LL;
          if ( HalpTimerProfilingCallback )
            HalpTimerProfilingCallback(v3, v18, v13, v14);
          else
            KeProfileInterruptWithSource(v3, 0LL);
          v19 = HalpProfileData;
          v20 = 32LL * KeGetPcr()->Prcb.Number;
          v21 = *(_DWORD *)(v20 + HalpProfileData + 24);
          if ( v21 )
          {
            v22 = *(_DWORD *)(v20 + HalpProfileData + 20);
            LODWORD(v12) = *(_DWORD *)(v20 + HalpProfileData + 16);
            if ( v22 )
            {
              v23 = v22 - 1;
              *(_DWORD *)(v20 + HalpProfileData + 20) = v23;
              if ( !v23 )
              {
                *(_DWORD *)(v20 + v19 + 20) = 0x2710 / v21;
                v24 = 0x2710 / v21;
                if ( !(0x2710 / v21) )
                {
                  *(_DWORD *)(v20 + v19 + 20) = 1;
                  v24 = 1;
                }
                PoGetProcessorIdleAccounting(&v64, 0x2710 % v21);
                if ( v64 == *(_QWORD *)(v20 + v19 + 8) )
                {
                  v26 = v12 * v24;
                  v27 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v28 = HalpProfileData;
                  if ( v27.QuadPart != *(_QWORD *)(v20 + HalpProfileData) )
                  {
                    v12 = PerformanceFrequency.QuadPart
                        * (v26
                         * (unsigned __int64)*(unsigned int *)(v20 + HalpProfileData + 24)
                         / (v27.QuadPart - *(_QWORD *)(v20 + HalpProfileData)))
                        / 0x989680;
                    if ( v12 >= 0x1000 )
                    {
                      if ( v12 > 0x7FFFFFFF )
                        LODWORD(v12) = 0x7FFFFFFF;
                    }
                    else
                    {
                      LODWORD(v12) = 4096;
                    }
                    *(_DWORD *)(v20 + HalpProfileData + 16) = v12;
                    *(LARGE_INTEGER *)(v20 + v28) = v27;
                  }
                }
                else
                {
                  *(_QWORD *)(v20 + v19 + 8) = v64;
                  *(LARGE_INTEGER *)(v20 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
                }
                v11 = v66;
              }
            }
            else
            {
              *(_DWORD *)(v20 + HalpProfileData + 20) = 0x2710 / v21;
              if ( !(0x2710 / v21) )
                *(_DWORD *)(v20 + v19 + 20) = 1;
              PoGetProcessorIdleAccounting(&v64, 0x2710 % v21);
              *(_QWORD *)(v20 + v19 + 8) = v64;
              *(LARGE_INTEGER *)(v20 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
            }
          }
          v7 = v75;
          v8 = v74;
        }
        if ( (unsigned int)i >= EmonNumberArchCounters )
        {
          if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
            v32 = (1LL << EmonFixedCounterResolution) - 1;
          else
            v32 = -1LL;
          v29 = v69;
          v30 = v71.QuadPart | (1LL << v65);
          v8 = i - EmonNumberArchCounters + 777;
          v7 = 911;
          v31 = v32 & -(__int64)(unsigned int)v12;
        }
        else
        {
          if ( (unsigned int)EmonCounterResolution < 0x40 )
            v25 = (1LL << EmonCounterResolution) - 1;
          else
            v25 = -1LL;
          v29 = v69;
          v30 = v69 | 0x500000;
          v31 = v25 & -(__int64)(unsigned int)v12;
        }
        __writemsr(v8, v31);
        __writemsr(v7, v30);
        result = (__int64 (__fastcall **)())EmonIsModifiedByBadActorInternal(i, v29, &v73);
        v4 = v68;
        v3 = a1;
        if ( (_BYTE)v73 )
        {
          result = (__int64 (__fastcall **)())v67;
          *(_BYTE *)(v67 + 8 * v11 + 36) = 1;
        }
      }
    }
  }
  return result;
}
