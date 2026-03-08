/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C012F70C
 * Callers:
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0268520 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  Gre::Base *v4; // rcx
  __int64 v5; // rcx

  *((_WORD *)this + 24) = 256;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 1;
  v4 = (Gre::Base *)*(unsigned int *)(*(_QWORD *)a2 + 40LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    Gre::Base::Globals(v4);
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    GreAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, 11LL);
  }
  return this;
}
