/*
 * XREFs of HmgLock @ 0x1C0049C00
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C004ABC0 (-ReleaseEntryLock@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLock(unsigned int a1, char a2)
{
  __int16 v3; // ebx^2
  __int64 v4; // r14
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  GdiHandleManager *v8; // rsi
  GdiHandleManager *v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // r9d
  __int64 v14; // rax
  struct OBJECT *v15; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v18; // rax
  GdiHandleManager *v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // r8
  unsigned __int64 v22; // rdx
  unsigned int v23; // r9d
  __int64 v24; // r8
  __int16 v25; // ax
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  int v27; // [rsp+38h] [rbp-30h]

  v3 = HIWORD(a1);
  v26 = 0LL;
  v27 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v26, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v27 )
  {
    v6 = (_DWORD *)v26;
    if ( *(_BYTE *)(v26 + 14) == a2 && *(_WORD *)(v26 + 12) == v3 )
    {
      CurrentThread = KeGetCurrentThread();
      v18 = SGDGetSessionState(v5);
      v6 = (_DWORD *)v26;
      v19 = *(GdiHandleManager **)(*(_QWORD *)(v18 + 24) + 8008LL);
      v20 = GdiHandleManager::DecodeIndex(v19, *(_DWORD *)v26 & 0xFFFFFF);
      v21 = *((_QWORD *)v19 + 2);
      v22 = v20;
      v23 = *(_DWORD *)(v21 + 2056);
      v5 = v23 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16);
      if ( v20 < (unsigned int)v5 )
      {
        if ( v20 >= v23 )
        {
          v5 = ((v20 - v23) >> 16) + 1;
          v24 = *(_QWORD *)(v21 + 8 * v5 + 8);
          v22 = -65536 * ((v20 - v23) >> 16) - v23 + v20;
        }
        else
        {
          v24 = *(_QWORD *)(v21 + 8);
        }
        if ( (unsigned int)v22 < *(_DWORD *)(v24 + 20) )
        {
          v5 = 2LL * (unsigned __int8)v22;
          v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * (v22 >> 8)) + 16LL * (unsigned __int8)v22 + 8);
        }
      }
      v25 = *(_WORD *)(v4 + 12);
      if ( !v25 || *(struct _KTHREAD **)(v4 + 16) == CurrentThread )
      {
        *(_QWORD *)(v4 + 16) = CurrentThread;
        *(_WORD *)(v4 + 12) = v25 + 1;
      }
      else
      {
        v4 = 0LL;
      }
    }
    v7 = *(_QWORD *)(SGDGetSessionState(v5) + 24);
    v8 = *(GdiHandleManager **)(v7 + 8008);
    v9 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(v7) + 24) + 8008LL);
    v10 = GdiHandleManager::DecodeIndex(v9, *v6 & 0xFFFFFF);
    v11 = *((_QWORD *)v9 + 2);
    v12 = v10;
    v13 = *(_DWORD *)(v11 + 2056);
    if ( v10 >= v13 + ((*(unsigned __int16 *)(v11 + 2) + 0xFFFF) << 16)
      || (v10 >= v13
        ? (v14 = *(_QWORD *)(v11 + 8LL * (((v10 - v13) >> 16) + 1) + 8),
           v12 = -65536 * (((unsigned int)v12 - v13) >> 16) - v13 + (unsigned int)v12)
        : (v14 = *(_QWORD *)(v11 + 8)),
          (unsigned int)v12 >= *(_DWORD *)(v14 + 20)) )
    {
      v15 = 0LL;
    }
    else
    {
      v15 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * (v12 >> 8)) + 16LL * (unsigned __int8)v12 + 8);
    }
    GdiHandleManager::ReleaseEntryLock(v8, v15);
    v27 = 0;
    v26 = 0LL;
    KeLeaveCriticalRegion();
  }
  return v4;
}
