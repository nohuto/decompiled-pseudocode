/*
 * XREFs of DwmDestroyDeviceSpecificResources @ 0x1C007B790
 * Callers:
 *     <none>
 * Callees:
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0028198 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C002D7C8 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreDwmHasSoftwareCursor @ 0x1C007F36C (GreDwmHasSoftwareCursor.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C0128F08 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 */

void __fastcall DwmDestroyDeviceSpecificResources(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  struct PDEVOBJ *v3; // rdx
  HDEV v4; // rax
  HDEV v5; // rcx
  HDEV *v6; // rdx
  __int64 v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = Gre::Base::Globals(a1);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v8, v3, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v2 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v2 + 9), 7LL);
  if ( (unsigned int)GreDwmHasSoftwareCursor(a1, 1LL) )
  {
    v4 = (HDEV)((char *)a1 + 3504);
    v5 = (HDEV)*((_QWORD *)a1 + 438);
    if ( *((Gre::Base **)v5 + 1) != (Gre::Base *)((char *)a1 + 3504) || (v6 = (HDEV *)*((_QWORD *)a1 + 439), *v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *((_QWORD *)v5 + 1) = v6;
    *((_QWORD *)a1 + 439) = (char *)a1 + 3504;
    *(_QWORD *)v4 = v4;
    v7 = *((_QWORD *)v2 + 38);
    if ( *(_QWORD *)(v7 + 104) == v7 + 104 && *(_QWORD *)(v7 + 120) == v7 + 120 )
      vSpDwmDestroyCursorSprites((HDEV)a1);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v8);
}
