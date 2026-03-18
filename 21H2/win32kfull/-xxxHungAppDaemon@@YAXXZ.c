/*
 * XREFs of ?xxxHungAppDaemon@@YAXXZ @ 0x1C00765A0
 * Callers:
 *     _lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_::operator() @ 0x1C00764F8 (_lambda_fa8dd67e252dc1cab0941e5eaeabf2c9_--operator().c)
 * Callees:
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00784D4 (-VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z.c)
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxHungAppDaemon(__int64 a1, unsigned __int64 a2)
{
  struct tagWND *v2; // r8
  struct tagWND *v3; // rax
  struct tagWND *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v9; // [rsp+28h] [rbp-30h]
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF

  if ( grpdeskRitInput && *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) )
  {
    v12 = 0;
    v2 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    while ( 1 )
    {
      v3 = VWPLNextBase((struct tagVWPL *)gpvwplHungRedraw, a2, v2, &v12, v8, v9);
      v4 = v3;
      if ( !v3 )
        break;
      if ( (unsigned int)IsHungWindow(v3) )
      {
        ThreadLock((__int64)v4, (__int64 *)&v10);
        v7 = *((_QWORD *)v4 + 5);
        if ( (*(_BYTE *)(v7 + 19) & 0x10) != 0 )
        {
          ClearHungFlag(v4, 0x310u);
          ProcessHungWindow(v4);
          v7 = *((_QWORD *)v4 + 5);
        }
        if ( (*(_BYTE *)(v7 + 19) & 8) != 0 )
        {
          ClearHungFlag(v4, 0x308u);
          xxxRedrawHungWindow(v4, 0LL);
        }
        ThreadUnlock1(v7, v5, v6);
      }
      v2 = v4;
    }
  }
}
