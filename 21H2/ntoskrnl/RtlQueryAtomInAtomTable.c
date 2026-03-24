/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x14061B790
 * Callers:
 *     NtQueryInformationAtom @ 0x14069F590 (NtQueryInformationAtom.c)
 * Callees:
 *     RtlpLookupLowBox @ 0x14025AA58 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1403D7200 (_snwprintf_s.c)
 *     Feature_1332687163__private_IsEnabledDeviceUsage @ 0x1403F860C (Feature_1332687163__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     RtlpLockAtomTable @ 0x14061BA14 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x14061BA60 (RtlpAtomMapAtomToHandleEntry.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // [rsp+34h] [rbp-94h]
  wchar_t DstBuf[16]; // [rsp+68h] [rbp-60h] BYREF

  v8 = a2;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v11 = *a6 & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v18 = -1073741816;
    v14 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
    v15 = v14;
    if ( !v14 || *(_WORD *)(v14 + 10) != (_WORD)v8 || !RtlpLookupLowBox(a1, v14, 0) )
      goto LABEL_36;
    v18 = 0;
    if ( a3 )
      *a3 = *(unsigned __int16 *)(v15 + 36);
    if ( a4 )
      *a4 = *(unsigned __int16 *)(v15 + 38);
    if ( !a5 )
      goto LABEL_36;
    v16 = 2 * *(unsigned __int8 *)(v15 + 40);
    v17 = *a6;
    if ( v16 >= *a6 )
    {
      if ( v17 < 2 )
      {
        *a6 = v16;
        goto LABEL_35;
      }
      v16 = v17 - 2;
    }
    if ( v16 )
    {
      memmove(a5, (const void *)(v15 + 42), v16);
      *((_WORD *)a5 + ((unsigned __int64)v16 >> 1)) = 0;
      *a6 = v16;
      goto LABEL_36;
    }
LABEL_35:
    v18 = -1073741789;
    goto LABEL_36;
  }
  if ( (_WORD)v8 )
  {
    v18 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_36;
    v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( (unsigned int)Feature_1332687163__private_IsEnabledDeviceUsage() )
    {
      if ( v12 < v11 )
        goto LABEL_19;
      if ( v11 >= 2 )
      {
        v12 = v11 - 2;
        goto LABEL_19;
      }
LABEL_15:
      v18 = -1073741789;
      goto LABEL_36;
    }
    v13 = *a6;
    if ( v12 >= *a6 )
    {
      if ( v13 < 2 )
        goto LABEL_15;
      v12 = v13 - 2;
    }
LABEL_19:
    if ( v12 )
    {
      memmove(a5, DstBuf, v12);
      *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
      *a6 = v12;
      goto LABEL_36;
    }
    goto LABEL_15;
  }
  v18 = -1073741811;
LABEL_36:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 8);
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v18;
}
