/*
 * XREFs of EtwpTrackDecodeGuidForSession @ 0x1409F26D8
 * Callers:
 *     EtwpUpdateRegEntryEnableMask @ 0x14069059C (EtwpUpdateRegEntryEnableMask.c)
 *     AddDecodeGuidToSessions @ 0x14079AF30 (AddDecodeGuidToSessions.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

bool __fastcall EtwpTrackDecodeGuidForSession(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  volatile signed __int64 *v3; // rsi
  __int64 v4; // r14
  bool v6; // bl
  _QWORD *i; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 Pool2; // rcx
  __int128 v11; // xmm1
  __int64 v13; // rcx

  v2 = *(_QWORD *)(a2 + 104);
  v3 = (volatile signed __int64 *)(a1 + 688);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  for ( i = *(_QWORD **)(a1 + 112); ; i = (_QWORD *)*i )
  {
    if ( !i )
    {
      v9 = *(_DWORD *)(a1 + 324) + 2048;
      if ( v9 <= *(_DWORD *)(a1 + 4) && v9 <= 0x10000 )
      {
        Pool2 = ExAllocatePool2(256LL, 48LL, 1651995717LL);
        if ( Pool2 )
        {
          *(_QWORD *)Pool2 = *(_QWORD *)(a1 + 112);
          *(_OWORD *)(Pool2 + 8) = *(_OWORD *)(v2 + 34);
          v11 = *(_OWORD *)(v4 + 40);
          *(_BYTE *)(Pool2 + 40) = 0;
          *(_OWORD *)(Pool2 + 24) = v11;
          ++*(_DWORD *)(a1 + 120);
          *(_DWORD *)(a1 + 324) += 32;
          *(_QWORD *)(a1 + 112) = Pool2;
          _InterlockedOr((volatile signed __int32 *)(a1 + 824), 0x8C0u);
          v6 = 1;
        }
      }
      goto LABEL_11;
    }
    v8 = *(_QWORD *)(v2 + 34) - i[1];
    if ( !v8 )
      v8 = *(_QWORD *)(v2 + 42) - i[2];
    if ( !v8 )
      break;
  }
  v13 = *(_QWORD *)(v4 + 40) - i[3];
  if ( !v13 )
    v13 = *(_QWORD *)(v4 + 48) - i[4];
  v6 = v13 == 0;
LABEL_11:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return v6;
}
