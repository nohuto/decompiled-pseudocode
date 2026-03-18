/*
 * XREFs of HmgSetOwner @ 0x1C0028640
 * Callers:
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C0017F5C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     GreSetBitmapOwner @ 0x1C0019F20 (GreSetBitmapOwner.c)
 *     GreCreateBitmap @ 0x1C001A360 (GreCreateBitmap.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0027800 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetRegionOwner @ 0x1C00285E0 (GreSetRegionOwner.c)
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C00628A0 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C0064440 (GreMakeBitmapNonStock.c)
 *     CreateEmptyRgnPublic @ 0x1C006EF60 (CreateEmptyRgnPublic.c)
 *     GreSetPaletteOwner @ 0x1C00C1130 (GreSetPaletteOwner.c)
 *     bInitPALOBJ @ 0x1C02E572C (bInitPALOBJ.c)
 *     bInitICM @ 0x1C02E5C44 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C02E5FA0 (bInitBMOBJ.c)
 * Callees:
 *     HmgDecProcessHandleCount @ 0x1C001ECFC (HmgDecProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C001F14C (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0022AE0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0022D20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     ?Feature_1827749177__private_IsEnabled@@YAHXZ @ 0x1C00D8C50 (-Feature_1827749177__private_IsEnabled@@YAHXZ.c)
 *     HmgIncProcessHandleCountEx @ 0x1C016C18C (HmgIncProcessHandleCountEx.c)
 *     HmgIsGarbageCollectibleType @ 0x1C016C298 (HmgIsGarbageCollectibleType.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v7; // r14d
  __int64 v8; // rsi
  struct OBJECT *EntryObject; // rbx
  __int64 CurrentThread; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int16 v15; // cx
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+38h] [rbp-30h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  GreAcquireHmgrSemaphore(a1);
  v18 = 0LL;
  v19 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v18, (unsigned __int16)v5 | (v5 >> 8) & 0xFF0000, 0LL, 0, 0);
  if ( v19 )
  {
    v8 = v18;
    if ( *(_BYTE *)(v18 + 14) == a3 && *(_WORD *)(v18 + 12) == HIWORD(v5) )
    {
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v18 & 0xFFFFFF);
      CurrentThread = W32GetCurrentThread();
      if ( CurrentThread )
      {
        v11 = *(_QWORD *)(CurrentThread + 72);
        if ( v11 && v4 )
          v7 = 1;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !*((_WORD *)EntryObject + 6) )
        goto LABEL_15;
      if ( *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() || v7 )
      {
        v8 = v18;
LABEL_15:
        v6 = 1;
        v12 = *(_DWORD *)(v8 + 8) & 0xFFFFFFFE;
        if ( v7 )
          v4 = *(_DWORD *)(v11 + 8);
        if ( v12 != v4 )
        {
          v6 = HmgIncProcessHandleCountEx(v4, 1LL, 0LL);
          if ( v6 )
          {
            HmgDecProcessHandleCount(v12);
            HANDLELOCK::Pid((HANDLELOCK *)&v18, v4);
            if ( v4 )
            {
              if ( v4 != -2147483630 )
              {
                if ( !(unsigned int)Feature_1827749177__private_IsEnabled()
                  || (LOBYTE(v14) = a3, (unsigned int)HmgIsGarbageCollectibleType(v14, v13)) )
                {
                  if ( *((_WORD *)EntryObject + 6) || *((_DWORD *)EntryObject + 2) )
                  {
                    v15 = *((_WORD *)EntryObject + 7);
                    if ( (v15 & 0x4000) == 0 )
                      *((_WORD *)EntryObject + 7) = v15 | 0x4000;
                  }
                }
              }
            }
          }
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v18);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v18);
  GreReleaseHmgrSemaphore(v16);
  return v6;
}
