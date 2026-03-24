/*
 * XREFs of GreSetBrushOwner @ 0x1C001DDE0
 * Callers:
 *     SetSysColor @ 0x1C0020850 (SetSysColor.c)
 *     GreSetDCOwnerEx @ 0x1C0038F20 (GreSetDCOwnerEx.c)
 *     bInitBRUSHOBJ @ 0x1C02972A0 (bInitBRUSHOBJ.c)
 * Callees:
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C001E1B4 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C001E1E8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     GreSetBitmapOwner @ 0x1C002B3C0 (GreSetBitmapOwner.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030700 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0030A00 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00313F0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031680 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003350C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C00336B8 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A090 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C003A1E0 (GreAcquireHmgrSemaphore.c)
 *     HmgAllocateObjectAttr @ 0x1C0080F90 (HmgAllocateObjectAttr.c)
 *     HmgFreeObjectAttr @ 0x1C009BCC4 (HmgFreeObjectAttr.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00C9C1C (HmgIncProcessHandleCountEx.c)
 */

__int64 __fastcall GreSetBrushOwner(HBRUSH a1, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  _QWORD *ObjectAttr; // r13
  GdiHandleManager *v7; // rbx
  unsigned int v8; // r9d
  __int64 v9; // r10
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned int v17; // eax
  BOOL v18; // ecx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  _QWORD *v21; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v23; // rcx
  __int64 v24; // [rsp+30h] [rbp-A8h] BYREF
  int v25; // [rsp+38h] [rbp-A0h]
  __int64 v26; // [rsp+50h] [rbp-88h]
  __int64 v27; // [rsp+58h] [rbp-80h]
  __int64 v28; // [rsp+60h] [rbp-78h]
  _QWORD v29[14]; // [rsp+68h] [rbp-70h] BYREF
  __int16 v30; // [rsp+E2h] [rbp+Ah]

  v30 = WORD1(a1);
  v3 = (unsigned int)a1;
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v29, a1);
  if ( v29[0] && (*(_DWORD *)(v29[0] + 40LL) & 0x200) != 0 )
  {
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
    return 1LL;
  }
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v29);
  v5 = 0;
  ObjectAttr = 0LL;
  if ( a2 == -2147483646 )
    ObjectAttr = (_QWORD *)HmgAllocateObjectAttr();
  GreAcquireHmgrSemaphore();
  v24 = 0LL;
  v25 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v24, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v25 )
  {
    v7 = gpHandleManager;
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v24 & 0xFFFFFF);
    v9 = *((_QWORD *)v7 + 2);
    v10 = *(_DWORD *)(v9 + 2056);
    if ( v8 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    {
      v13 = 0LL;
      v26 = 0LL;
    }
    else
    {
      if ( v8 >= v10 )
        v11 = ((v8 - v10) >> 16) + 1;
      else
        v11 = 0;
      v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
      v27 = v12;
      if ( v11 )
        v8 += ((1 - v11) << 16) - v10;
      if ( v8 >= *(_DWORD *)(v12 + 20) )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8LL * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8);
      v26 = v13;
    }
    v14 = v24;
    if ( *(_BYTE *)(v24 + 14) != 16 || *(_WORD *)(v24 + 12) != v30 )
      goto LABEL_51;
    if ( *(_WORD *)(v13 + 12) )
    {
      if ( *(struct _KTHREAD **)(v13 + 16) != KeGetCurrentThread() )
        goto LABEL_51;
      v14 = v24;
    }
    if ( a2 == -2147483630 || !a2 )
    {
      v20 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
      if ( v20 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v21 = *(_QWORD **)(v13 + 48);
        if ( v21 != (_QWORD *)(v13 + 72) )
        {
          v28 = *(_QWORD *)(v13 + 48);
          *(_QWORD *)(v13 + 72) = *v21;
          ObjectAttr = *(_QWORD **)(v13 + 48);
          *(_QWORD *)(v13 + 48) = v13 + 72;
          *(_QWORD *)(v24 + 16) = 0LL;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v24, a2);
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        v5 = 1;
      }
      else
      {
        if ( (*(_DWORD *)(v24 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v24, a2);
          v5 = 1;
        }
        if ( !v5 )
          goto LABEL_51;
      }
      if ( !a2 )
      {
        v23 = *(_QWORD *)(v13 + 24);
        if ( v23 )
          GreSetBitmapOwner(v23, 0LL);
      }
    }
    else if ( a2 == -2147483646 )
    {
      v16 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v17 = *(_DWORD *)(v14 + 8) & 0xFFFFFFFE;
      if ( v17 == (_DWORD)v16 || v17 == -2147483630 || !v17 )
      {
        v18 = 0;
        v5 = 1;
        if ( v17 != (_DWORD)v16 )
        {
          v5 = HmgIncProcessHandleCountEx((unsigned int)v16, v15, 0LL);
          v18 = v5 != 0;
        }
        if ( !v5 )
          goto LABEL_39;
        if ( !*(_QWORD *)(v14 + 16) )
        {
          if ( ObjectAttr )
          {
            *(_QWORD *)(v13 + 48) = ObjectAttr;
            *(_QWORD *)(v14 + 16) = ObjectAttr;
            *ObjectAttr = *(_QWORD *)(v13 + 72);
            ObjectAttr = 0LL;
          }
          else
          {
            v5 = 0;
          }
        }
        if ( v5 )
        {
          HANDLELOCK::Pid((HANDLELOCK *)&v24, v16);
          v19 = *(_QWORD *)(v13 + 24);
          if ( v19 )
            GreSetBitmapOwner(v19, 2147483650LL);
        }
        else
        {
LABEL_39:
          if ( v18 )
            HmgDecProcessHandleCount((unsigned int)v16);
        }
      }
    }
LABEL_51:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v24);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v24);
  GreReleaseHmgrSemaphore();
  if ( ObjectAttr )
    HmgFreeObjectAttr(ObjectAttr);
  return v5;
}
