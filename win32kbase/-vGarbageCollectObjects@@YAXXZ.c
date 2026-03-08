/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C006F238
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgIsProcessCleanupRequired @ 0x1C00B1BB0 (HmgIsProcessCleanupRequired.c)
 *     Feature_1626422585__private_IsEnabledDeviceUsage @ 0x1C00DDF7C (Feature_1626422585__private_IsEnabledDeviceUsage.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEB84 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEC7C (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DED6C (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     HmgNextGarbageCollectible @ 0x1C0186160 (HmgNextGarbageCollectible.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198EC0 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C0198FBC (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int i; // ecx
  unsigned int GarbageCollectible; // ebx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_DWORD *)(v1 + 1908) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      for ( i = 0; ; i = GarbageCollectible )
      {
        GarbageCollectible = HmgNextGarbageCollectible(i);
        if ( !GarbageCollectible )
          break;
      }
    }
  }
}
