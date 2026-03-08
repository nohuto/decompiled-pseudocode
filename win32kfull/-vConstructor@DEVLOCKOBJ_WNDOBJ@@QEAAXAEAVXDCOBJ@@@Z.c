/*
 * XREFs of ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C027A0CC
 * Callers:
 *     ??0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C02777F4 (--0DEVLOCKOBJ_WNDOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     UserGetHwnd @ 0x1C01BEFCC (UserGetHwnd.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::vConstructor(DEVLOCKOBJ_WNDOBJ *this, struct XDCOBJ *a2)
{
  int v2; // ebp
  __int64 *v3; // rsi
  __int64 v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 22);
  v3 = (__int64 *)((char *)this + 80);
  *((_QWORD *)this + 10) = 0LL;
  UserEnterUserCritSec();
  DEVLOCKOBJ::bLock(this, a2, 0);
  v6 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) == 0 || *(_DWORD *)(v6 + 32) )
  {
    v8 = *(_QWORD *)(v6 + 496);
    if ( v8 )
      v8 = *(_QWORD *)(v8 + 136);
    *v3 = v8;
  }
  else
  {
    v7 = *(__int64 **)v6;
    v9 = 0LL;
    if ( !(unsigned int)UserGetHwnd(v7, &v9, v3) )
      EngSetLastError(6u);
  }
  if ( !v2 )
    UserLeaveUserCritSec();
}
