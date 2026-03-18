/*
 * XREFs of DestroyCacheDCEntries @ 0x1C0051A48
 * Callers:
 *     DestroyThreadsObjects @ 0x1C002D9E0 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // r8d
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), a2, a3);
  v6 = (char *)gpDispInfo + 24;
  v7 = (_QWORD *)*((_QWORD *)gpDispInfo + 3);
  if ( v7 )
  {
    do
    {
      v8 = v7;
      if ( a1 == v7[9] && (v7[8] & 0x80000002) == 2 )
      {
        DestroyCacheDC(v6);
        v8 = (_QWORD *)*v6;
      }
      v9 = v8;
      if ( v7 == v8 )
        v9 = (_QWORD *)*v7;
      else
        v7 = v6;
      v6 = v7;
      v7 = v9;
    }
    while ( v9 );
  }
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v4, v5);
}
