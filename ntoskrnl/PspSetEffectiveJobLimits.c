/*
 * XREFs of PspSetEffectiveJobLimits @ 0x14078B504
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1407001E0 (PspEstablishJobHierarchy.c)
 *     PspSetJobLimitsJobPreCallback @ 0x14078B4D0 (PspSetJobLimitsJobPreCallback.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x140237260 (KeIsEqualAffinityEx.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspSetEffectiveLimit @ 0x14078B77C (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // al
  int v6; // ecx
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int16 *v15; // r8
  unsigned __int8 v16; // dl
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  _DWORD v25[68]; // [rsp+20h] [rbp-158h] BYREF

  memset(&v25[2], 0, 0x100uLL);
  v4 = *(_QWORD *)(a1 + 1288);
  v5 = PspSetEffectiveLimit(16LL, a2);
  v7 = v6 - 15;
  v8 = v6 + 16;
  if ( v5 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 )
    {
      if ( !v4 || (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v4 + 712)) )
      {
        v14 = a1 + 712;
        v15 = (unsigned __int16 *)(a1 + 264);
      }
      else
      {
        v25[0] = 2097153;
        memset(&v25[1], 0, 0x104uLL);
        KiAndAffinityEx((unsigned __int16 *)(v4 + 712), (unsigned __int16 *)(a1 + 264), v25, 0x20u);
        if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(a1 + 264), (unsigned __int16 *)v25)
          || (unsigned int)KeIsEmptyAffinityEx(v25) )
        {
          v14 = a1 + 712;
          v15 = (unsigned __int16 *)(v4 + 712);
        }
        else
        {
          v14 = a1 + 712;
          v15 = (unsigned __int16 *)v25;
        }
      }
    }
    else
    {
      v14 = a1 + 712;
      if ( !v4 )
      {
        *(_DWORD *)(a1 + 716) = 0;
        *(_DWORD *)v14 = 2097153;
        memset((void *)(a1 + 720), 0, 0x100uLL);
        goto LABEL_2;
      }
      v15 = (unsigned __int16 *)(v4 + 712);
    }
    KiCopyAffinityEx(v14, *(_WORD *)(v14 + 2), v15);
  }
LABEL_2:
  if ( (unsigned __int8)PspSetEffectiveLimit(v8, a2) )
  {
    if ( v4 )
      v16 = *(_BYTE *)(v4 + 1084);
    else
      v16 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v8) != 0
      && *((_BYTE *)&PspPriorityClassRank + v16) >= *((_BYTE *)&PspPriorityClassRank + *(unsigned __int8 *)(a1 + 1085)) )
    {
      v16 = *(_BYTE *)(a1 + 1085);
    }
    *(_BYTE *)(a1 + 1084) = v16;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(128LL, a2) )
  {
    if ( v4 )
      v17 = *(_DWORD *)(v4 + 1044);
    else
      v17 = 10;
    if ( (*(_DWORD *)(a1 + 256) & 0x80u) == 0 || (v22 = *(_DWORD *)(a1 + 580), v22 >= v17) )
      *(_DWORD *)(a1 + 1044) = v17;
    else
      *(_DWORD *)(a1 + 1044) = v22;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v7, v9) )
  {
    if ( v4 )
    {
      v18 = *(_QWORD *)(v4 + 984);
      v19 = *(_QWORD *)(v4 + 992);
    }
    else
    {
      v18 = 0LL;
      v19 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v7) == 0
      || (v23 = *(_QWORD *)(a1 + 248), v23 >= v19) && v19 )
    {
      *(_QWORD *)(a1 + 992) = v19;
      *(_QWORD *)(a1 + 984) = v18;
    }
    else
    {
      *(_QWORD *)(a1 + 992) = v23;
      *(_QWORD *)(a1 + 984) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(256LL, a2) )
  {
    if ( v4 )
    {
      v10 = *(_QWORD *)(v4 + 1000);
      v11 = *(_QWORD *)(v4 + 1008);
    }
    else
    {
      v10 = 0LL;
      v11 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 0x100) == 0 || (v12 = *(_QWORD *)(a1 + 672), v12 >= v10) && v10 )
    {
      *(_QWORD *)(a1 + 1000) = v10;
      *(_QWORD *)(a1 + 1008) = v11;
    }
    else
    {
      *(_QWORD *)(a1 + 1000) = v12;
      *(_QWORD *)(a1 + 1008) = a1;
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(2LL, a2) )
  {
    if ( v4 )
    {
      v20 = *(_QWORD *)(v4 + 976);
      v21 = *(_QWORD *)(v4 + 1016);
    }
    else
    {
      v20 = 0LL;
      v21 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v24 = *(_QWORD *)(a1 + 224), v24 >= v20) && v20 )
    {
      *(_QWORD *)(a1 + 976) = v20;
      *(_QWORD *)(a1 + 1016) = v21;
    }
    else
    {
      *(_QWORD *)(a1 + 976) = v24;
      *(_QWORD *)(a1 + 1016) = a1;
    }
  }
  result = *(unsigned int *)(a1 + 256);
  *(_DWORD *)(a1 + 1040) = result;
  if ( v4 )
  {
    result = *(_DWORD *)(v4 + 1040) | (unsigned int)result;
    *(_DWORD *)(a1 + 1040) = result;
  }
  return result;
}
