/*
 * XREFs of PpmParkSteerInterrupts @ 0x1402CD760
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeIntSteerPeriodic @ 0x1402CDD80 (KeIntSteerPeriodic.c)
 *     KeAndAffinityEx @ 0x1402CE930 (KeAndAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1402CEA40 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KeComplementAffinityEx @ 0x1402CEAE0 (KeComplementAffinityEx.c)
 *     KeIntSteerSnapPerf @ 0x1402CEB50 (KeIntSteerSnapPerf.c)
 *     KeSubtractAffinityEx @ 0x1402CFF20 (KeSubtractAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1405137D0 (KeFindFirstSetRightAffinityEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  unsigned int v0; // r14d
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  bool v15; // cf
  unsigned __int64 v16; // rax
  SIZE_T v18; // rbx
  PVOID PoolWithTag; // rax
  unsigned int FirstSetRightAffinity; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[22]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v28[22]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v29[22]; // [rsp+1E0h] [rbp+E0h] BYREF
  _DWORD v30[44]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v31[22]; // [rsp+340h] [rbp+240h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  memset(v27, 0, 0xA8uLL);
  memset(&v28[1], 0, 0xA0uLL);
  memset(v29, 0, 0xA8uLL);
  memset(v30, 0, 0xA8uLL);
  memset(v31, 0, 0xA8uLL);
  v23 = 0;
  v22 = 0;
  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v18 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v18);
  }
  KeIntSteerSnapPerf(&v23, &v26);
  KeComplementAffinityEx(v29, PpmPerfCoreParkingMask);
  KeQuerySystemAllowedCpuSetAffinity(&PpmCachedSystemAllowedCpuSet, &PpmCachedSystemAllowedCpuSetVersion);
  KeAndAffinityEx(v29, &PpmCachedSystemAllowedCpuSet, v29);
  LODWORD(v28[0]) = 1310721;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  memset((char *)v28 + 4, 0, 0xA4uLL);
  v3 = qword_140CFC848[0];
  v4 = v26;
  *(_QWORD *)&v24 = KeActiveProcessors;
  while ( v3 )
  {
LABEL_6:
    ++v0;
    _BitScanForward64(&v5, v3);
    v3 &= ~(1LL << v5);
    v22 = KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v25 + (unsigned __int8)v5];
    v6 = KiProcessorIndexToNumberMappingTable[v22];
    v7 = v6 & 0x3F;
    if ( ((v29[((unsigned __int64)v6 >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[v22] & 0x3F)) & 1) != 0 )
    {
      ++v2;
      v8 = *(_QWORD *)(PpmIntSteerTrigger + 8LL * v22);
      if ( !v8 )
      {
        v8 = v4;
        *(_QWORD *)(PpmIntSteerTrigger + 8LL * v22) = v4;
      }
      if ( v4 - v8 >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
      {
        v9 = v6 >> 6;
        if ( LOWORD(v28[0]) <= (unsigned int)v9 )
          LOWORD(v28[0]) = v9 + 1;
        v10 = v28[v9 + 1];
        _bittestandset64(&v10, v7);
        v28[v9 + 1] = v10;
        ++v1;
      }
    }
    else
    {
      *(_QWORD *)(8LL * v22 + PpmIntSteerTrigger) = 0LL;
    }
  }
  while ( 1 )
  {
    LOWORD(v25) = v25 + 1;
    if ( (unsigned __int16)v25 >= (unsigned int)(unsigned __int16)KeActiveProcessors[0] )
      break;
    *((_QWORD *)&v24 + 1) = *(_QWORD *)&KeActiveProcessors[4 * (unsigned __int16)v25 + 4];
    v3 = *((_QWORD *)&v24 + 1);
    if ( *((_QWORD *)&v24 + 1) )
    {
      v4 = v26;
      goto LABEL_6;
    }
  }
  if ( !v1 )
  {
    if ( v2 )
    {
      KeCopyAffinityEx(v28, v29);
      v1 = v2;
    }
    else
    {
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&PpmCachedSystemAllowedCpuSet);
      if ( FirstSetRightAffinity == -1 )
        FirstSetRightAffinity = 0;
      v22 = FirstSetRightAffinity;
      KeAddProcessorAffinityEx(v28, FirstSetRightAffinity);
      v1 = 1;
    }
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_16;
  switch ( PpmIntSteerMode )
  {
    case 1:
      KeCopyAffinityEx(v27, KeActiveProcessors);
      v2 = v0;
      break;
    case 2:
      KeCopyAffinityEx(v27, v28);
      v2 = v1;
      break;
    case 3:
      KeCopyAffinityEx(v27, v29);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_16:
        v2 = (PpmIntSteerLoadMax + v23) / (unsigned int)PpmIntSteerLoadMax;
        if ( v2 >= v1 )
        {
          v2 = v1;
          KeCopyAffinityEx(v27, v28);
        }
        else
        {
          LODWORD(v27[0]) = 1310721;
          memset((char *)v27 + 4, 0, 0xA4uLL);
          v30[0] = 1310721;
          memset(&v30[1], 0, 0xA4uLL);
          if ( PpmParkPreferenceHandler )
            PpmParkPreferenceHandler(1LL, PpmCheckTime, v2, v28, 0LL, 0LL, v30, v27);
          v11 = 0;
          if ( LOWORD(v27[0]) )
          {
            v12 = &v27[1];
            v13 = LOWORD(v27[0]);
            do
            {
              v14 = *v12++;
              v11 += (unsigned int)((0x101010101010101LL
                                   * ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              --v13;
            }
            while ( v13 );
          }
          v15 = v11 < v2;
          if ( v11 > v2 )
          {
            LODWORD(v27[0]) = 1310721;
            memset((char *)v27 + 4, 0, 0xA4uLL);
            v15 = v2 != 0;
            v11 = 0;
          }
          if ( v15 )
          {
            KeSubtractAffinityEx(v28, v30, v31);
            *((_QWORD *)&v24 + 1) = v31[1];
            *(_QWORD *)&v24 = v31;
            LOWORD(v25) = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v24) )
            {
              v16 = (unsigned int)KiProcessorIndexToNumberMappingTable[v22];
              if ( ((v27[(v16 >> 6) + 1] >> (v16 & 0x3F)) & 1) == 0 )
              {
                KeAddProcessorAffinityEx(v27, v22);
                if ( ++v11 >= v2 )
                  goto LABEL_29;
              }
            }
            if ( v11 < v2 )
            {
              *((_QWORD *)&v24 + 1) = v28[1];
              *(_QWORD *)&v24 = v28;
              LOWORD(v25) = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v24) )
              {
                v21 = (unsigned int)KiProcessorIndexToNumberMappingTable[v22];
                if ( ((v27[(v21 >> 6) + 1] >> (v21 & 0x3F)) & 1) == 0 )
                {
                  KeAddProcessorAffinityEx(v27, v22);
                  if ( ++v11 >= v2 )
                    break;
                }
              }
            }
          }
        }
        break;
      }
      LODWORD(v27[0]) = 1310721;
      memset((char *)v27 + 4, 0, 0xA4uLL);
      KeAddProcessorAffinityEx(v27, (unsigned int)(PpmIntSteerMode - 5));
      v2 = 1;
      break;
  }
LABEL_29:
  if ( (unsigned int)KeIsEmptyAffinityEx(v27) )
    KeAddProcessorAffinityEx(v27, 0LL);
  KeIntSteerPeriodic(v27, v2);
  return 1;
}
