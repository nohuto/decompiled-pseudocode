/*
 * XREFs of ??0MULTISPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C001BAF8
 * Callers:
 *     vSpDynamicModeChange @ 0x1C001B8E0 (vSpDynamicModeChange.c)
 * Callees:
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C001B570 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

MULTISPRITEDDIACCESS *__fastcall MULTISPRITEDDIACCESS::MULTISPRITEDDIACCESS(
        MULTISPRITEDDIACCESS *this,
        struct PDEVOBJ *a2)
{
  __int64 ThreadWin32Thread; // rbx
  __int64 v5; // r8
  __int64 v7; // rbx
  __int64 v8; // rax

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    v5 = *(_QWORD *)a2 + 80LL;
    *(_QWORD *)this = v5;
    if ( *(_DWORD *)(v5 + 60) )
    {
      v7 = 0LL;
      do
      {
        v8 = *(_QWORD *)(*(_QWORD *)(v5 + 64) + 8 * v7);
        if ( !*(_DWORD *)(v8 + 168) && (*(_DWORD *)(v8 + 40) & 0x20000) == 0 )
          vSpDirectDriverAccess((struct _SPRITESTATE *)(v8 + 80), 1);
        v5 = *(_QWORD *)this;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *(_DWORD *)(*(_QWORD *)this + 60LL) );
    }
    else if ( !*(_DWORD *)(v5 + 88) && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x20000) == 0 )
    {
      vSpDirectDriverAccess((struct _SPRITESTATE *)v5, 1);
    }
  }
  return this;
}
