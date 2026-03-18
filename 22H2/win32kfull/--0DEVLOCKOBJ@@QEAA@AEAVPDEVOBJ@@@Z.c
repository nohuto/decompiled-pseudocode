/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C013E544
 * Callers:
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0265A70 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C011BFB4 (--0DLODCOBJ@@QEAA@XZ.c)
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  Gre::Base *v4; // rcx
  __int64 v5; // rcx

  DLODCOBJ::DLODCOBJ((DEVLOCKOBJ *)((char *)this + 32));
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) != 0 )
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
