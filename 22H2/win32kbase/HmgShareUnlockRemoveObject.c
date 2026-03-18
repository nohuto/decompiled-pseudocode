/*
 * XREFs of HmgShareUnlockRemoveObject @ 0x1C0099840
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0044470 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
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
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v25; // [rsp+30h] [rbp-28h] BYREF
  int v26; // [rsp+38h] [rbp-20h]

  v8 = a1;
  SGDGetSessionState(a1);
  GreAcquireHmgrSemaphore(v9);
  v25 = 0LL;
  v26 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v25, (unsigned __int16)v8 | (v8 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v26 )
  {
    v11 = v25;
    if ( *(_BYTE *)(v25 + 14) == a5 && *(_WORD *)(v25 + 12) == HIWORD(v8) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v10) + 24) + 8008LL);
      v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v12, *(_DWORD *)v11 & 0xFFFFFF);
      v14 = *(_QWORD *)(v12 + 16);
      v15 = v13;
      v16 = *(_DWORD *)(v14 + 2056);
      v17 = v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16);
      if ( v13 >= (unsigned int)v17 )
        goto LABEL_22;
      if ( v13 >= v16 )
        v17 = ((v13 - v16) >> 16) + 1;
      else
        v17 = 0LL;
      v18 = *(_QWORD *)(v14 + 8 * v17 + 8);
      if ( (_DWORD)v17 )
        v15 = ((1 - (_DWORD)v17) << 16) - v16 + v13;
      if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
      {
LABEL_22:
        v19 = 0LL;
      }
      else
      {
        v17 = 2LL * (unsigned __int8)v15;
        v19 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
      }
      LOBYTE(v17) = *(_BYTE *)(v11 + 14);
      TrackHmgrReferenceDecrement(v17, (struct OBJECT *)v19);
      v23 = *(_DWORD *)(v19 + 8) - 1;
      *(_DWORD *)(v19 + 8) = v23;
      if ( v23 == a3 && *(_WORD *)(v19 + 12) == a2 && (a4 || (*(_BYTE *)(v11 + 15) & 1) == 0) )
      {
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v25, v20, v21, v22);
        goto LABEL_16;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
  }
  v19 = 0LL;
LABEL_16:
  if ( v26 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v25);
  GreReleaseHmgrSemaphore(v10);
  return v19;
}
