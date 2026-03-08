/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1407DB4E0
 * Callers:
 *     NtQueryInformationAtom @ 0x1407DC6C0 (NtQueryInformationAtom.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x140354C6C (RtlpLookupLowBox.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1403D91A0 (_snwprintf_s.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407D8D38 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpLockAtomTable @ 0x1407DA790 (RtlpLockAtomTable.c)
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
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned int v12; // edi
  unsigned int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned int v17; // [rsp+30h] [rbp-88h]
  wchar_t DstBuf[16]; // [rsp+50h] [rbp-68h] BYREF

  v8 = a2;
  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  if ( (unsigned __int16)v8 < 0xC000u )
  {
    if ( (_WORD)v8 )
    {
      v17 = 0;
      if ( a3 )
        *a3 = 1;
      if ( a4 )
        *a4 = 1;
      if ( a5 )
      {
        v14 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
        v15 = *a6;
        if ( v14 >= *a6 )
        {
          if ( v15 < 2 )
            v14 = 0;
          else
            v14 = v15 - 2;
        }
        if ( v14 )
        {
          memmove(a5, DstBuf, v14);
          *((_WORD *)a5 + ((unsigned __int64)v14 >> 1)) = 0;
          *a6 = v14;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
    else
    {
      v17 = -1073741811;
    }
  }
  else
  {
    v17 = -1073741816;
    v10 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
    v11 = v10;
    if ( v10 && *(_WORD *)(v10 + 10) == (_WORD)v8 && RtlpLookupLowBox(a1, v10, 0) )
    {
      v17 = 0;
      if ( a3 )
        *a3 = *(unsigned __int16 *)(v11 + 36);
      if ( a4 )
        *a4 = *(unsigned __int16 *)(v11 + 38);
      if ( a5 )
      {
        v12 = 2 * *(unsigned __int8 *)(v11 + 40);
        v13 = *a6;
        if ( v12 >= *a6 )
        {
          if ( v13 < 2 )
          {
            *a6 = v12;
            v12 = 0;
          }
          else
          {
            v12 = v13 - 2;
          }
        }
        if ( v12 )
        {
          memmove(a5, (const void *)(v11 + 42), v12);
          *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
          *a6 = v12;
        }
        else
        {
          v17 = -1073741789;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v17;
}
