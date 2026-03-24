/*
 * XREFs of vCleanupUMWindowlessSprite @ 0x1C0014B70
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00172B0 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BD784 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE140 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     GreDeleteSprite @ 0x1C00EF0D8 (GreDeleteSprite.c)
 */

void __fastcall vCleanupUMWindowlessSprite(int a1)
{
  HDEV HDEV; // rsi
  struct PDEVOBJ *v3; // rdx
  char *v4; // rax
  char *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  DYNAMICMODECHANGESHARELOCK *v9; // rcx
  char v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  if ( g_pDwmState && PsGetCurrentProcess() != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
    v12 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    HDEV = (HDEV)UserGetHDEV();
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v10, v3, 0, 1);
    v11 = ghsemDwmState;
    GreAcquireSemaphore(ghsemDwmState);
    if ( g_pDwmState )
    {
      v4 = (char *)g_pDwmState + 80;
      v5 = (char *)*((_QWORD *)g_pDwmState + 10);
      while ( v5 != v4 )
      {
        v6 = (__int64)v5;
        v7 = (unsigned __int64)(v5 - 24);
        v5 = *(char **)v5;
        v8 = -v6;
        if ( (*(_DWORD *)((v7 & -(__int64)(v8 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v7 & -(__int64)(v8 != 0)) + 0x70) == a1 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)(v7 & -(__int64)(v8 != 0)), 1);
        }
        v4 = (char *)g_pDwmState + 80;
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v11);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v9);
  }
}
