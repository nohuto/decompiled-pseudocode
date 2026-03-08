/*
 * XREFs of HmgSetOwner @ 0x1C00522C0
 * Callers:
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C001D0B4 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C001D190 (GreMakeBitmapNonStock.c)
 *     GreSetBitmapOwnerEx @ 0x1C001D614 (GreSetBitmapOwnerEx.c)
 *     CreateEmptyRgnPublic @ 0x1C0041F30 (CreateEmptyRgnPublic.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00517A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x1C0052260 (GreSetRegionOwner.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C00577F0 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     GreSetBitmapOwner @ 0x1C00A5460 (GreSetBitmapOwner.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 *     GreSetPaletteOwner @ 0x1C0199D60 (GreSetPaletteOwner.c)
 *     bInitICM @ 0x1C031D1E8 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C031DE4C (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C031FEE0 (bInitBMOBJ.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C004A680 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C004B3B0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C004B670 (--1HANDLELOCK@@QEAA@XZ.c)
 *     W32GetCurrentThread @ 0x1C004DBF0 (W32GetCurrentThread.c)
 *     HmgDecProcessHandleCount @ 0x1C004FDA0 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C004FEB0 (HmgIncProcessHandleCountEx.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C005162C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     Feature_1626422585__private_IsEnabledDeviceUsage @ 0x1C00DDF7C (Feature_1626422585__private_IsEnabledDeviceUsage.c)
 *     HmgIsGarbageCollectibleType @ 0x1C0185FA4 (HmgIsGarbageCollectibleType.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v7; // r14d
  __int64 v8; // rsi
  struct OBJECT *v9; // rbx
  __int64 CurrentThread; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int16 v14; // cx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+38h] [rbp-30h]

  LODWORD(v4) = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore(a1);
  v17 = 0LL;
  v18 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v17, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v18 )
  {
    v8 = v17;
    if ( *(_BYTE *)(v17 + 14) == a3 && *(_WORD *)(v17 + 12) == HIWORD(v5) )
    {
      v9 = HANDLELOCK::pObj((HANDLELOCK *)&v17);
      CurrentThread = W32GetCurrentThread();
      if ( CurrentThread )
      {
        v11 = *(_QWORD *)(CurrentThread + 72);
        if ( v11 && (_DWORD)v4 )
          v7 = 1;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !*((_WORD *)v9 + 6) )
        goto LABEL_15;
      if ( *((struct _KTHREAD **)v9 + 2) == KeGetCurrentThread() || v7 )
      {
        v8 = v17;
LABEL_15:
        v6 = 1;
        v12 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
        if ( v7 )
          LODWORD(v4) = *(_DWORD *)(v11 + 8);
        if ( v12 != (_DWORD)v4 )
        {
          v6 = HmgIncProcessHandleCountEx((unsigned int)v4, 1, 0);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v12);
            HANDLELOCK::Pid((HANDLELOCK *)&v17, v4);
            if ( (_DWORD)v4 )
            {
              if ( (_DWORD)v4 != -2147483630 )
              {
                if ( !(unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage()
                  || (LOBYTE(v13) = a3, (unsigned int)HmgIsGarbageCollectibleType(v13)) )
                {
                  if ( *((_WORD *)v9 + 6) || *((_DWORD *)v9 + 2) )
                  {
                    v14 = *((_WORD *)v9 + 7);
                    if ( (v14 & 0x4000) == 0 )
                      *((_WORD *)v9 + 7) = v14 | 0x4000;
                  }
                }
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v17);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v17);
  GreReleaseHmgrSemaphore(v15);
  return v6;
}
