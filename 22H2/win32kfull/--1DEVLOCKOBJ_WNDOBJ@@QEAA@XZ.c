/*
 * XREFs of ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C0274EE0
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0276D58 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSwapBuffers @ 0x1C02D84A0 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027785C (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ_WNDOBJ::~DEVLOCKOBJ_WNDOBJ(DEVLOCKOBJ_WNDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  DEVLOCKOBJ::vDestructorNULL(this);
  if ( *((_DWORD *)this + 30) )
    UserLeaveUserCritSec();
  DEVLOCKOBJ::vDestructor(this, v2, v3, v4);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ_WNDOBJ *)((char *)this + 32));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)this + 48);
}
