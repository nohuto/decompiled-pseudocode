/*
 * XREFs of HmgRemoveObject @ 0x1C0047F80
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C00605C0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     bDeleteBrush @ 0x1C00C64F0 (bDeleteBrush.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1C00D2508 (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00D33D8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C016B1A0 (EngDeleteDriverObj.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C00427F0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0042870 (GreAcquireHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00442B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00443E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0044470 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0045760 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, __int16 a2, int a3, int a4, char a5, _DWORD *a6)
{
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  _DWORD *v31; // [rsp+30h] [rbp-38h] BYREF
  int v32; // [rsp+38h] [rbp-30h]

  v9 = a1;
  SGDGetSessionState(a1);
  GreAcquireHmgrSemaphore(v10);
  v11 = 0LL;
  v31 = 0LL;
  v32 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v31, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, 1, 0, 0);
  if ( !v32 )
  {
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v31);
    goto LABEL_20;
  }
  v13 = SGDGetSessionState(v12);
  v14 = v31;
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 24) + 8008LL);
  v16 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v15, *v31 & 0xFFFFFF);
  v17 = *(_QWORD *)(v15 + 16);
  v18 = v16;
  v19 = *(_DWORD *)(v17 + 2056);
  if ( v16 >= v19 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_23;
  if ( v16 >= v19 )
    v20 = ((v16 - v19) >> 16) + 1;
  else
    v20 = 0;
  v21 = *(_QWORD *)(v17 + 8LL * v20 + 8);
  if ( v20 )
    v18 = ((1 - v20) << 16) - v19 + v16;
  if ( (unsigned int)v18 >= *(_DWORD *)(v21 + 20) )
LABEL_23:
    v22 = 0LL;
  else
    v22 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * (v18 >> 8)) + 16LL * (unsigned __int8)v18 + 8);
  if ( *((_BYTE *)v14 + 14) == a5 && *((_WORD *)v14 + 6) == HIWORD(v9) )
  {
    v23 = *(unsigned int *)(v22 + 8);
    if ( (_DWORD)v23 == a3 && *(_WORD *)(v22 + 12) == a2 )
    {
      if ( a4 || (*((_BYTE *)v14 + 15) & 1) == 0 )
      {
        v24 = SGDGetSessionState(v23);
        LOBYTE(v25) = *((_BYTE *)GdiHandleManager::GetEntryFromObject(
                                   *(GdiHandleEntryDirectory ***)(*(_QWORD *)(v24 + 24) + 8008LL),
                                   (struct OBJECT *)v22)
                      + 14);
        TrackHmgrReferenceDecrement(v25, (struct OBJECT *)v22);
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v31, v26, v27, v28);
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v31);
        v11 = v22;
        goto LABEL_20;
      }
    }
    else
    {
      *((_BYTE *)v14 + 15) |= 8u;
      if ( a6 )
        *a6 = v23;
    }
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
  if ( v32 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v31);
LABEL_20:
  GreReleaseHmgrSemaphore(v29);
  return v11;
}
