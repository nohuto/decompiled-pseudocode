/*
 * XREFs of HmgLock @ 0x1C0021050
 * Callers:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DA130 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     EngDeleteDriverObj @ 0x1C01781D0 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C01783E0 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C0178460 (EngUnlockDriverObj.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgLock(unsigned int a1, char a2)
{
  _DWORD *v3; // rbx
  __int16 v4; // edi^2
  __int64 v5; // r15
  _DWORD *v6; // rsi
  GdiHandleManager *v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned int v16; // r9d
  __int64 v17; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  GdiHandleManager *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // r8
  __int16 v26; // ax
  __int64 v27; // [rsp+30h] [rbp-38h] BYREF
  int v28; // [rsp+38h] [rbp-30h]

  v3 = 0LL;
  v4 = HIWORD(a1);
  v27 = 0LL;
  v28 = 0;
  v5 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v27, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v28 )
  {
    v6 = (_DWORD *)v27;
    if ( *(_BYTE *)(v27 + 14) == a2 && *(_WORD *)(v27 + 12) == v4 )
    {
      CurrentThread = KeGetCurrentThread();
      v6 = (_DWORD *)v27;
      v20 = gpHandleManager;
      v21 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v27 & 0xFFFFFF);
      v22 = *((_QWORD *)v20 + 2);
      v23 = v21;
      v24 = *(_DWORD *)(v22 + 2056);
      if ( v21 < v24 + ((*(unsigned __int16 *)(v22 + 2) + 0xFFFF) << 16) )
      {
        if ( v21 >= v24 )
        {
          v25 = *(_QWORD *)(v22 + 8LL * (((v21 - v24) >> 16) + 1) + 8);
          v23 = -65536 * ((v21 - v24) >> 16) - v24 + v21;
        }
        else
        {
          v25 = *(_QWORD *)(v22 + 8);
        }
        if ( (unsigned int)v23 < *(_DWORD *)(v25 + 20) )
          v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8 * (v23 >> 8)) + 16LL * (unsigned __int8)v23 + 8);
      }
      v26 = *(_WORD *)(v5 + 12);
      if ( !v26 || *(struct _KTHREAD **)(v5 + 16) == CurrentThread )
      {
        *(_QWORD *)(v5 + 16) = CurrentThread;
        *(_WORD *)(v5 + 12) = v26 + 1;
      }
      else
      {
        v5 = 0LL;
      }
    }
    v7 = gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *v6 & 0xFFFFFF);
    v9 = *((_QWORD *)v7 + 2);
    v10 = v8;
    v11 = *(_DWORD *)(v9 + 2056);
    if ( v8 < v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      if ( v8 >= v11 )
      {
        v12 = *(_QWORD *)(v9 + 8LL * (((v8 - v11) >> 16) + 1) + 8);
        v10 = -65536 * ((v8 - v11) >> 16) - v11 + v8;
      }
      else
      {
        v12 = *(_QWORD *)(v9 + 8);
      }
      if ( (unsigned int)v10 < *(_DWORD *)(v12 + 20) )
        v3 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
    }
    v13 = GdiHandleManager::DecodeIndex(v7, (unsigned __int16)*v3 | (*v3 >> 8) & 0xFF0000);
    v14 = *((_QWORD *)v7 + 2);
    v15 = v13;
    v16 = *(_DWORD *)(v14 + 2056);
    if ( v13 < v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      if ( v13 >= v16 )
      {
        v17 = *(_QWORD *)(v14 + 8LL * (((v13 - v16) >> 16) + 1) + 8);
        v15 = -65536 * ((v13 - v16) >> 16) - v16 + v13;
      }
      else
      {
        v17 = *(_QWORD *)(v14 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v17 + 24 * v15 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
  return v5;
}
