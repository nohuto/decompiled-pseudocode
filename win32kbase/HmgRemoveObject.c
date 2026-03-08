/*
 * XREFs of HmgRemoveObject @ 0x1C0045C70
 * Callers:
 *     bDeleteBrush @ 0x1C00D59D0 (bDeleteBrush.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00DEF60 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0048350 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004A2C0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0051320 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall HmgRemoveObject(__int64 a1, __int16 a2, int a3, int a4, char a5, _DWORD *a6)
{
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rax
  _DWORD *v14; // rsi
  GdiHandleManager *v15; // rbx
  unsigned int v16; // eax
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _ENTRY *EntryFromObject; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
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
  v15 = *(GdiHandleManager **)(*(_QWORD *)(v13 + 24) + 8008LL);
  v16 = GdiHandleManager::DecodeIndex(v15, *v31 & 0xFFFFFF);
  v17 = *((_QWORD *)v15 + 2);
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
        EntryFromObject = GdiHandleManager::GetEntryFromObject(
                            *(GdiHandleManager **)(*(_QWORD *)(v24 + 24) + 8008LL),
                            (struct OBJECT *)v22);
        TrackHmgrReferenceDecrement(*((_BYTE *)EntryFromObject + 14), (struct OBJECT *)v22);
        HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v31);
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
  GreReleaseHmgrSemaphore(v27, v26, v28, v29);
  return v11;
}
