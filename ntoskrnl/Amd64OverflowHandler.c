/*
 * XREFs of Amd64OverflowHandler @ 0x140527640
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     Amd64IsModifiedByBadActorInternal @ 0x1404568D2 (Amd64IsModifiedByBadActorInternal.c)
 *     KeProfileInterruptWithSource @ 0x140571A20 (KeProfileInterruptWithSource.c)
 *     PoGetProcessorIdleAccounting @ 0x140581850 (PoGetProcessorIdleAccounting.c)
 */

__int64 (__fastcall **__fastcall Amd64OverflowHandler(__int64 a1))()
{
  unsigned __int64 v2; // rsi
  __int64 (__fastcall **result)(); // rax
  __int64 v4; // r14
  unsigned int i; // ebp
  unsigned int v6; // r12d
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // r12d
  LARGE_INTEGER v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  bool v23; // [rsp+88h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v23 = 0;
  LODWORD(v2) = 0x7FFFFFFF;
  result = &DefaultProfileInterface;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v4 = HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v4 = HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number;
  }
  for ( i = 0; i < Amd64NumberCounters; ++i )
  {
    result = *(__int64 (__fastcall ***)())(v4 + 8LL * i);
    if ( !*((_DWORD *)result + 6) )
    {
      v7 = *((unsigned int *)result + 8);
      v24 = *((_DWORD *)&Amd64PerfCounterRegisters + i);
      v6 = v24;
      v8 = __readmsr(v24);
      result = (__int64 (__fastcall **)())((((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) & 0xFFFFFFFFFFFFLL);
      if ( (unsigned __int64)result < 0xFFFF80000001LL )
      {
        v25 = *((_DWORD *)&Amd64EventSelectRegisters + i);
        v9 = v25;
        v22 = __readmsr(v25);
        v10 = v22;
        __writemsr(v25, v22 & 0xFFFFFFFFFFAFFFFFuLL);
        if ( (_DWORD)v7 )
        {
          KeProfileInterruptWithSource(a1, (unsigned int)v7);
          v19 = *(_QWORD *)(v4 + 8LL * i);
          LODWORD(v2) = *(_DWORD *)v19;
        }
        else
        {
          v20 = 0LL;
          PerformanceFrequency.QuadPart = 0LL;
          if ( HalpTimerProfilingCallback )
            HalpTimerProfilingCallback(a1, (v22 & 0xFFFFFFFFFFAFFFFFuLL) >> 32, v7, 0LL);
          else
            KeProfileInterruptWithSource(a1, 0LL);
          v11 = HalpProfileData;
          v12 = 32LL * KeGetPcr()->Prcb.Number;
          v13 = *(_DWORD *)(v12 + HalpProfileData + 24);
          if ( v13 )
          {
            v14 = *(_DWORD *)(v12 + HalpProfileData + 20);
            LODWORD(v2) = *(_DWORD *)(v12 + HalpProfileData + 16);
            if ( v14 )
            {
              v15 = v14 - 1;
              *(_DWORD *)(v12 + HalpProfileData + 20) = v15;
              if ( !v15 )
              {
                *(_DWORD *)(v12 + v11 + 20) = 0x2710 / v13;
                v16 = 0x2710 / v13;
                if ( !(0x2710 / v13) )
                {
                  *(_DWORD *)(v12 + v11 + 20) = 1;
                  v16 = 1;
                }
                PoGetProcessorIdleAccounting(&v20, 0x2710 % v13);
                if ( v20 == *(_QWORD *)(v12 + v11 + 8) )
                {
                  v17 = KeQueryPerformanceCounter(&PerformanceFrequency);
                  v18 = HalpProfileData;
                  if ( v17.QuadPart != *(_QWORD *)(v12 + HalpProfileData) )
                  {
                    v2 = PerformanceFrequency.QuadPart
                       * (v16
                        * (unsigned int)v2
                        * (unsigned __int64)*(unsigned int *)(v12 + HalpProfileData + 24)
                        / (v17.QuadPart - *(_QWORD *)(v12 + HalpProfileData)))
                       / 0x989680;
                    if ( v2 >= 0x1000 )
                    {
                      if ( v2 > 0x7FFFFFFF )
                        LODWORD(v2) = 0x7FFFFFFF;
                    }
                    else
                    {
                      LODWORD(v2) = 4096;
                    }
                    *(_DWORD *)(v12 + HalpProfileData + 16) = v2;
                    *(LARGE_INTEGER *)(v12 + v18) = v17;
                  }
                }
                else
                {
                  *(_QWORD *)(v12 + v11 + 8) = v20;
                  *(LARGE_INTEGER *)(v12 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
                }
                v6 = v24;
              }
            }
            else
            {
              *(_DWORD *)(v12 + HalpProfileData + 20) = 0x2710 / v13;
              if ( !(0x2710 / v13) )
                *(_DWORD *)(v12 + v11 + 20) = 1;
              PoGetProcessorIdleAccounting(&v20, 0x2710 % v13);
              *(_QWORD *)(v12 + v11 + 8) = v20;
              *(LARGE_INTEGER *)(v12 + HalpProfileData) = KeQueryPerformanceCounter(0LL);
            }
          }
          v19 = *(_QWORD *)(v4 + 8LL * i);
          v10 = v22;
          v9 = v25;
        }
        if ( i < 6 && *(_BYTE *)(*(_QWORD *)(v19 + 16) + 8LL) )
          __writemsr(*((_DWORD *)&Amd64PerfCounterRegisters + i + 1), 0xFFFFuLL);
        __writemsr(v6, -(__int64)(unsigned int)v2);
        __writemsr(v9, v10 | 0x500000);
        result = (__int64 (__fastcall **)())Amd64IsModifiedByBadActorInternal(i, v10, &v23);
        if ( v23 )
        {
          result = *(__int64 (__fastcall ***)())(v4 + 8LL * i);
          *((_BYTE *)result + 36) = 1;
        }
      }
    }
  }
  return result;
}
