/*
 * XREFs of EtwpGetLoggerInfoFromContext @ 0x1407458FC
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405FD178 (EtwpTransitionToRealtime.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140744D3C (EtwpUpdateTrace.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x1407456E0 (EtwpQueryTrace.c)
 *     EtwpFlushTrace @ 0x140748AA8 (EtwpFlushTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E5140 (EtwpIncrementTraceFile.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     EtwpMapEnableFlags @ 0x1407487E8 (EtwpMapEnableFlags.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpGetLoggerInfoFromContext(__int64 a1, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int16 v6; // ax
  __int64 v7; // rax
  char PreviousMode; // r12
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // [rsp+40h] [rbp-58h] BYREF
  __int128 v17; // [rsp+50h] [rbp-48h]

  v16 = 0LL;
  v17 = 0LL;
  if ( (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
  {
    v14 = 32LL * *(unsigned __int8 *)(a2 + 818);
    v15 = *(_QWORD *)(a2 + 1096);
    v16 = *(_OWORD *)(v14 + v15 + 4284);
    v17 = *(_OWORD *)(v14 + v15 + 4300);
    EtwpMapEnableFlags(&v16, 0LL);
    *(_DWORD *)(a1 + 72) = v16;
  }
  else
  {
    *(_DWORD *)(a1 + 72) = 0;
  }
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 276);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 292);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 4) >> 10;
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 228);
  v4 = *(_DWORD *)(a2 + 248);
  if ( v4 <= *(_DWORD *)(a2 + 256) )
    v4 = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 108) = v4;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = (*(_DWORD *)(a2 + 816) >> 4) & 1;
  *(_QWORD *)(a1 + 80) = v5;
  *(_QWORD *)(a1 + 80) = v5 | (*(_DWORD *)(a2 + 816) >> 26) & 2;
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 212);
  if ( *(_DWORD *)a2 )
    v6 = *(_WORD *)a2;
  else
    v6 = -1;
  *(_WORD *)(a1 + 8) = v6;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 )
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v7 + 1232);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 200);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  ExAcquirePushLockExclusiveEx(a2 + 688, 0LL);
  v9 = *(unsigned __int16 *)(a2 + 152);
  if ( (_WORD)v9 && *(_WORD *)(a1 + 130) )
  {
    if ( PreviousMode )
      ProbeForWrite(*(volatile void **)(a1 + 136), v9 + 2, 2u);
    RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 128), (PCUNICODE_STRING)(a2 + 152));
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 688), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 688));
  KeAbPostRelease(a2 + 688);
  if ( *(_WORD *)(a2 + 136) && *(_WORD *)(a1 + 146) )
  {
    if ( PreviousMode )
    {
      v11 = *(unsigned __int16 *)(a1 + 144);
      if ( (_WORD)v11 )
      {
        v12 = *(_QWORD *)(a1 + 152);
        if ( (v12 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v12 + v11 > 0x7FFFFFFF0000LL || v12 + v11 < v12 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 136), (PCUNICODE_STRING)(a1 + 144), 0) )
    {
      if ( PreviousMode )
        ProbeForWrite(*(volatile void **)(a1 + 152), *(unsigned __int16 *)(a2 + 136) + 2LL, 2u);
      RtlCopyUnicodeString((PUNICODE_STRING)(a1 + 144), (PCUNICODE_STRING)(a2 + 136));
    }
  }
  return 0LL;
}
