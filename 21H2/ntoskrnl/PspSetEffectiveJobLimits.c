/*
 * XREFs of PspSetEffectiveJobLimits @ 0x14060F644
 * Callers:
 *     PspSetJobLimitsJobPreCallback @ 0x14060F610 (PspSetJobLimitsJobPreCallback.c)
 *     PspEstablishJobHierarchy @ 0x1406F5948 (PspEstablishJobHierarchy.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeAndAffinityEx @ 0x1402CE930 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403C2680 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspSetEffectiveLimit @ 0x14060F91C (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // al
  int v6; // ecx
  unsigned int v7; // r12d
  __int64 v8; // r15
  unsigned __int8 v9; // cl
  __int64 v10; // rdx
  int v11; // r8d
  __int64 result; // rax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  unsigned int v21; // ecx
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  _OWORD *v26; // rbp
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int16 v30[88]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v30, 0, 0xA8uLL);
  v4 = *(_QWORD *)(a1 + 1072);
  v5 = PspSetEffectiveLimit(16LL, a2);
  v7 = v6 - 15;
  v8 = (unsigned int)(v6 + 112);
  if ( v5 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 )
    {
      if ( !v4 || (v26 = (_OWORD *)(v4 + 616), (unsigned int)KeIsEmptyAffinityEx((_WORD *)(v4 + 616))) )
      {
        v16 = a1 + 616;
        v17 = (unsigned __int16 *)(a1 + 264);
      }
      else
      {
        KeAndAffinityEx((unsigned __int16 *)(v4 + 616), (unsigned __int16 *)(a1 + 264), v30);
        if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(a1 + 264), v30)
          || (unsigned int)KeIsEmptyAffinityEx(v30) )
        {
          *(_OWORD *)(a1 + 616) = *v26;
          *(_OWORD *)(a1 + 632) = *(_OWORD *)(v4 + 632);
          *(_OWORD *)(a1 + 648) = *(_OWORD *)(v4 + 648);
          *(_OWORD *)(a1 + 664) = *(_OWORD *)(v4 + 664);
          *(_OWORD *)(a1 + 680) = *(_OWORD *)(v4 + 680);
          *(_OWORD *)(a1 + 696) = *(_OWORD *)(v4 + 696);
          *(_OWORD *)(a1 + 712) = *(_OWORD *)(v4 + 712);
          v18 = v8 + a1 + 616;
          *(_OWORD *)(v18 - 16) = *(_OWORD *)(v4 + 728);
          *(_OWORD *)v18 = *(_OWORD *)((char *)v26 + v8);
          *(_OWORD *)(v18 + 16) = *(_OWORD *)((char *)v26 + v8 + 16);
          v19 = *(_QWORD *)((char *)v26 + v8 + 32);
          goto LABEL_18;
        }
        v16 = a1 + 616;
        v17 = v30;
      }
    }
    else
    {
      v16 = a1 + 616;
      if ( !v4 )
      {
        *(_DWORD *)(a1 + 620) = 0;
        *(_DWORD *)v16 = 1310721;
        memset((void *)(a1 + 624), 0, 0xA0uLL);
        goto LABEL_2;
      }
      v17 = (unsigned __int16 *)(v4 + 616);
    }
    *(_OWORD *)v16 = *(_OWORD *)v17;
    *(_OWORD *)(v16 + 16) = *((_OWORD *)v17 + 1);
    *(_OWORD *)(v16 + 32) = *((_OWORD *)v17 + 2);
    *(_OWORD *)(v16 + 48) = *((_OWORD *)v17 + 3);
    *(_OWORD *)(v16 + 64) = *((_OWORD *)v17 + 4);
    *(_OWORD *)(v16 + 80) = *((_OWORD *)v17 + 5);
    *(_OWORD *)(v16 + 96) = *((_OWORD *)v17 + 6);
    v18 = v8 + v16;
    *(_OWORD *)(v18 - 16) = *((_OWORD *)v17 + 7);
    *(_OWORD *)v18 = *(_OWORD *)((char *)v17 + v8);
    *(_OWORD *)(v18 + 16) = *(_OWORD *)((char *)v17 + v8 + 16);
    v19 = *(_QWORD *)((char *)v17 + v8 + 32);
LABEL_18:
    *(_QWORD *)(v18 + 32) = v19;
  }
LABEL_2:
  if ( (unsigned __int8)PspSetEffectiveLimit(32LL, a2) )
  {
    if ( v4 )
      v20 = *(_BYTE *)(v4 + 872);
    else
      v20 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & v9) != 0
      && *((_BYTE *)&PspPriorityClassRank + v20) >= *((_BYTE *)&PspPriorityClassRank + *(unsigned __int8 *)(a1 + 873)) )
    {
      v20 = *(_BYTE *)(a1 + 873);
    }
    *(_BYTE *)(a1 + 872) = v20;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit((unsigned int)v8, a2) )
  {
    if ( v4 )
      v21 = *(_DWORD *)(v4 + 852);
    else
      v21 = 10;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v8) != 0 && (v27 = *(_DWORD *)(a1 + 484), v27 < v21) )
      *(_DWORD *)(a1 + 852) = v27;
    else
      *(_DWORD *)(a1 + 852) = v21;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v7, v10) )
  {
    if ( v4 )
    {
      v22 = *(_QWORD *)(v4 + 792);
      v23 = *(_QWORD *)(v4 + 800);
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v7) == 0
      || (v28 = *(_QWORD *)(a1 + 248), v28 >= v23) && v23 )
    {
      *(_QWORD *)(a1 + 800) = v23;
      *(_QWORD *)(a1 + 792) = v22;
    }
    else
    {
      *(_QWORD *)(a1 + 800) = v28;
      *(_QWORD *)(a1 + 792) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(256LL, a2) )
  {
    if ( v4 )
    {
      v14 = *(_QWORD *)(v4 + 808);
      v15 = *(_QWORD *)(v4 + 816);
    }
    else
    {
      v14 = 0LL;
      v15 = 0LL;
    }
    if ( (v11 & *(_DWORD *)(a1 + 256)) == 0 || (v25 = *(_QWORD *)(a1 + 576), v25 >= v14) && v14 )
    {
      *(_QWORD *)(a1 + 808) = v14;
      *(_QWORD *)(a1 + 816) = v15;
    }
    else
    {
      *(_QWORD *)(a1 + 808) = v25;
      *(_QWORD *)(a1 + 816) = a1;
    }
  }
  result = PspSetEffectiveLimit(2LL, a2);
  if ( (_BYTE)result )
  {
    if ( v4 )
    {
      result = *(_QWORD *)(v4 + 784);
      v24 = *(_QWORD *)(v4 + 824);
    }
    else
    {
      result = 0LL;
      v24 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v29 = *(_QWORD *)(a1 + 224), v29 >= result) && result )
    {
      *(_QWORD *)(a1 + 784) = result;
      *(_QWORD *)(a1 + 824) = v24;
    }
    else
    {
      *(_QWORD *)(a1 + 784) = v29;
      *(_QWORD *)(a1 + 824) = a1;
    }
  }
  v13 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 848) = v13;
  if ( v4 )
  {
    result = v13 | *(_DWORD *)(v4 + 848);
    *(_DWORD *)(a1 + 848) = result;
  }
  return result;
}
