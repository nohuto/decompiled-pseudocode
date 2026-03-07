__int64 __fastcall KiIpiSendRequest(__int64 a1, int a2, int a3, _OWORD *a4, __int64 a5)
{
  int v5; // r15d
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int16 *v10; // r12
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rbx
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // r14d
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  _QWORD *v20; // r11
  int v21; // r9d
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  signed __int64 *v25; // rcx
  bool v26; // zf
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  __int64 v31; // rcx
  unsigned __int16 *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  ULONG_PTR BugCheckParameter4; // rbx
  char v36; // [rsp+30h] [rbp-81h]
  int v37; // [rsp+34h] [rbp-7Dh]
  int v38; // [rsp+38h] [rbp-79h]
  int v39; // [rsp+3Ch] [rbp-75h]
  unsigned int v40; // [rsp+40h] [rbp-71h]
  int v41; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-61h]
  __int128 v43; // [rsp+58h] [rbp-59h]
  __int64 v44; // [rsp+68h] [rbp-49h]
  int v45; // [rsp+70h] [rbp-41h]
  signed __int64 v46; // [rsp+78h] [rbp-39h]
  __int64 v47; // [rsp+80h] [rbp-31h]
  __int64 v48; // [rsp+88h] [rbp-29h]
  __int128 v49; // [rsp+90h] [rbp-21h] BYREF
  _OWORD v50[2]; // [rsp+A0h] [rbp-11h] BYREF

  v48 = a1;
  v5 = 0;
  v41 = a2;
  v44 = 0LL;
  v46 = 0LL;
  v8 = a1;
  v43 = 0LL;
  memset(v50, 0, sizeof(v50));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x400000) != 0 )
  {
    v36 = 1;
    EtwGetKernelTraceTimestampSilo(v50, 1077936128LL, 0LL);
  }
  else
  {
    v36 = 0;
  }
  v9 = v8 + 12232;
  *(_QWORD *)(v8 + 12232) = 2097153LL;
  v10 = (unsigned __int16 *)(v8 + 12496);
  memset((void *)(v8 + 12240), 0, 0x100uLL);
  *(_QWORD *)(v8 + 12496) = 2097153LL;
  memset((void *)(v8 + 12504), 0, 0x100uLL);
  KiIpiSetTargetAffinity(v8, (unsigned int)&v41, (unsigned int)&a5, a3, v8 + 12232);
  v11 = a5 & 0xF;
  *(_DWORD *)(v8 + 11648) = 1;
  v37 = 0;
  v12 = 0;
  v13 = v11 | ((_QWORD)a4 << 7);
  v39 = 0;
  v14 = 0;
  v42 = *(_DWORD *)(v8 + 36);
  result = (unsigned __int16)KiSubNodeCount;
  v16 = 0;
  *(_DWORD *)(v8 + 11652) = (unsigned __int16)KiSubNodeCount;
  v38 = 0;
  v40 = 0;
  v49 = 0LL;
  if ( !(_DWORD)result )
    goto LABEL_25;
  do
  {
    v17 = *(_QWORD *)(KiSubNodes + 8LL * v16);
    if ( !v17 )
    {
      v37 = ++v5;
      goto LABEL_22;
    }
    v49 = *(unsigned __int64 *)(v17 + 128);
    WORD4(v49) = *(_WORD *)(v17 + 136);
    if ( !(unsigned int)KeAndGroupAffinityEx(v9, &v49, &v49) )
    {
      v37 = ++v5;
      goto LABEL_22;
    }
    v18 = v49;
    v19 = v42;
    v20 = 0LL;
    LOWORD(v44) = WORD4(v49);
    v21 = WORD4(v49);
    *((_QWORD *)&v43 + 1) = v49;
    *(_QWORD *)&v43 = 0LL;
    while ( 1 )
    {
      v45 = 0;
      if ( !v18 )
        break;
LABEL_8:
      v21 = (unsigned __int16)v44;
      _BitScanForward64(&v22, v18);
      v45 = v22;
      *((_QWORD *)&v43 + 1) = v18 & ~(1LL << v22);
      v23 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v44 + (unsigned __int8)v22];
      v47 = v23;
      v24 = KiProcessorBlock[v23];
      _m_prefetchw((const void *)(v24 + 37696));
      v25 = (signed __int64 *)(v24 + ((v19 + 763) << 6));
      _m_prefetchw(v25);
      if ( !v20 )
      {
        v20 = v25 + 7;
        v23 = v47;
        *((_DWORD *)v25 + 14) = (unsigned int)((0x101010101010101LL
                                              * (((((_QWORD)v49 - (((unsigned __int64)v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                + ((((unsigned __int64)v49
                                                   - (((unsigned __int64)v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                                + (((((_QWORD)v49 - (((unsigned __int64)v49 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                                  + ((((unsigned __int64)v49
                                                     - (((unsigned __int64)v49 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      }
      v26 = a5 == 5;
      v25[6] = (signed __int64)v20;
      if ( v26 )
      {
        *((_OWORD *)v25 + 1) = *a4;
        *((_OWORD *)v25 + 2) = a4[1];
        v46 = v25[5];
      }
      v25[1] = v13;
      v27 = *(_QWORD *)(v24 + 37696);
      do
      {
        v28 = v27;
        *v25 = v27;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v24 + 37696), (signed __int64)v25, v27);
      }
      while ( v27 != v28 );
      if ( v27 )
      {
        v38 = 1;
      }
      else
      {
        v29 = KiProcessorIndexToNumberMappingTable[v23];
        v30 = v29 & 0x3F;
        v31 = v29 >> 6;
        v39 = 1;
        if ( *v10 > (unsigned int)v31 )
          goto LABEL_16;
        if ( v10[1] > (unsigned int)v31 )
        {
          *v10 = v31 + 1;
LABEL_16:
          v32 = &v10[4 * v31];
          v33 = *((_QWORD *)v32 + 1);
          _bittestandset64(&v33, v30);
          *((_QWORD *)v32 + 1) = v33;
        }
      }
      v34 = *(_QWORD *)(v24 + 35000);
      if ( v34 )
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 32));
      v18 = *((_QWORD *)&v43 + 1);
    }
    while ( 1 )
    {
      LOWORD(v44) = v44 + 1;
      if ( (unsigned __int16)v44 >= (unsigned int)(v21 + 1) )
        break;
      *((_QWORD *)&v43 + 1) = *(_QWORD *)(8LL * (unsigned __int16)v44 + 8);
      v18 = *((_QWORD *)&v43 + 1);
      if ( *((_QWORD *)&v43 + 1) )
        goto LABEL_8;
    }
    v8 = v48;
    v16 = v40;
    v5 = v37;
    v9 = v48 + 12232;
LABEL_22:
    result = (unsigned __int16)KiSubNodeCount;
    v40 = ++v16;
  }
  while ( v16 < (unsigned __int16)KiSubNodeCount );
  if ( v5 )
  {
    result = (unsigned int)(_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 11652), -v5) - v5);
    if ( !(_DWORD)result )
    {
      *(_DWORD *)(v8 + 11648) = 0;
      return result;
    }
  }
  v12 = v39;
  v14 = v38;
LABEL_25:
  BugCheckParameter4 = v41;
  if ( a5 != 5 && v14 )
  {
    if ( v12 )
    {
      ++*(_DWORD *)(v8 + 35024);
      KiIpiEnlightenedGuestPriorityKick(v10);
      result = HalRequestIpi(0LL, v10);
    }
  }
  else
  {
    if ( (unsigned int)(v41 - 1) <= 1 )
      ++*(_DWORD *)(v8 + 35020);
    else
      ++*(_DWORD *)(v8 + 35024);
    KiIpiEnlightenedGuestPriorityKick(v9);
    result = HalRequestIpiSpecifyVector(BugCheckParameter4, v9, 0xE1u);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, (int)result, BugCheckParameter4);
  }
  if ( v36 )
    return PerfInfoLogIpiSend((unsigned int)v50, a5, v46, BugCheckParameter4, v9);
  return result;
}
