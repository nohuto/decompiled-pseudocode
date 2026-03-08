/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C00A7AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0051320 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall HmgShareUnlockRemoveObject(__int64 a1, __int16 a2, int a3, int a4, char a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned __int8 v19; // cl
  __int64 v20; // rbx
  char v21; // al
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v26; // [rsp+30h] [rbp-28h] BYREF
  int v27; // [rsp+38h] [rbp-20h]

  v8 = a1;
  SGDGetSessionState(a1);
  GreAcquireHmgrSemaphore(v9);
  v26 = 0LL;
  v27 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, (unsigned __int16)v8 | (v8 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v27 )
    goto LABEL_23;
  v11 = v26;
  if ( *(_BYTE *)(v26 + 14) == a5 && *(_WORD *)(v26 + 12) == HIWORD(v8) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v10) + 24) + 8008LL);
    v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v12, *(_DWORD *)v11 & 0xFFFFFF);
    v14 = *(_QWORD *)(v12 + 16);
    v15 = v13;
    v16 = *(unsigned int *)(v14 + 2056);
    if ( v13 >= (unsigned int)v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
      goto LABEL_25;
    if ( v13 >= (unsigned int)v16 )
      v17 = ((v13 - (unsigned int)v16) >> 16) + 1;
    else
      v17 = 0LL;
    v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
    if ( (_DWORD)v17 )
      v15 = ((1 - (_DWORD)v17) << 16) - (_DWORD)v16 + v13;
    if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
    {
LABEL_25:
      v20 = 0LL;
    }
    else
    {
      v19 = v15;
      v15 >>= 8;
      v20 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * v15) + 16LL * v19 + 8);
    }
    v21 = *(_BYTE *)(v11 + 14);
    if ( v21 == 5 )
    {
      v22 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v20 + 680);
      v23 = 0LL;
    }
    else
    {
      if ( v21 != 16 )
        goto LABEL_14;
      v22 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v20 + 136);
      v23 = 2LL;
    }
    TrackObjectReferenceDecrement(v23, v22);
LABEL_14:
    v24 = *(_DWORD *)(v20 + 8) - 1;
    *(_DWORD *)(v20 + 8) = v24;
    if ( v24 == a3 && *(_WORD *)(v20 + 12) == a2 && (a4 || (*(_BYTE *)(v11 + 15) & 1) == 0) )
    {
      HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v26, v15, v16);
      goto LABEL_19;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
LABEL_23:
  v20 = 0LL;
LABEL_19:
  if ( v27 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
  GreReleaseHmgrSemaphore(v10);
  return v20;
}
