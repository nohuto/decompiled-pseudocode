/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CBF38
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x1C000D864 (HmgNextGarbageCollectible.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00C9AAC (HmgIsProcessCleanupRequired.c)
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CB9F8 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBAE4 (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBBFC (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBD08 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBDF4 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  char v4; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp+18h] BYREF

  if ( gGarbageCollectionPendingCount )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      v5 = 0LL;
      v2 = 0;
      v4 = 30;
      while ( 1 )
      {
        v3 = HmgNextGarbageCollectible(v2, &v5, &v4);
        if ( !v3 )
          break;
        switch ( v4 )
        {
          case 5:
            vGarbageCollectObject<SURFREFGC>(v5);
            break;
          case 7:
            vGarbageCollectObject<EPATHOBJGC>(v5);
            break;
          case 8:
            vGarbageCollectObject<XEPALOBJ2>(v5);
            break;
          case 9:
            vGarbageCollectObject<COLORSPACEGC>(v5);
            break;
          case 16:
            vGarbageCollectObject<BRUSHSELOBJGC>(v5);
            break;
        }
        v2 = v3;
      }
    }
  }
}
