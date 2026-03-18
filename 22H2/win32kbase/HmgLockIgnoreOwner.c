/*
 * XREFs of HmgLockIgnoreOwner @ 0x1C005C9F0
 * Callers:
 *     GreValidateServerHandle @ 0x1C000EF20 (GreValidateServerHandle.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     UserValidateCopyRgn @ 0x1C005C980 (UserValidateCopyRgn.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0043330 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0043570 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ @ 0x1C00440F0 (-pObj@HANDLELOCK@@QEAAPEAVOBJECT@@XZ.c)
 */

struct OBJECT *__fastcall HmgLockIgnoreOwner(unsigned int a1, char a2)
{
  __int16 v3; // edi^2
  struct OBJECT *v4; // rbx
  __int16 v5; // ax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v3 = HIWORD(a1);
  v8 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v7, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0, 0);
  if ( v8 )
  {
    if ( *(_BYTE *)(v7 + 14) == a2 && *(_WORD *)(v7 + 12) == v3 )
    {
      v4 = HANDLELOCK::pObj((HANDLELOCK *)&v7);
      v5 = *((_WORD *)v4 + 6);
      if ( !v5 || *((struct _KTHREAD **)v4 + 2) == KeGetCurrentThread() )
      {
        *((_WORD *)v4 + 6) = v5 + 1;
        *((_QWORD *)v4 + 2) = KeGetCurrentThread();
      }
      else
      {
        v4 = 0LL;
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
    if ( v8 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
  }
  return v4;
}
