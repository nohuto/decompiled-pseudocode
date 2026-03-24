/*
 * XREFs of DestroyCacheDCEntries @ 0x1C00088C8
 * Callers:
 *     CleanupGDI @ 0x1C0008ABC (CleanupGDI.c)
 *     DestroyThreadsObjects @ 0x1C00347E0 (DestroyThreadsObjects.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0039F20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C003A140 (GreLockVisRgn.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v2 = (_QWORD *)(gpDispInfo + 24);
  v3 = *(_QWORD **)(gpDispInfo + 24);
  if ( v3 )
  {
    do
    {
      v4 = v3;
      if ( a1 == v3[9] && (v3[8] & 0x80000002) == 2 )
      {
        DestroyCacheDC(v2, v3[1]);
        v4 = (_QWORD *)*v2;
      }
      v5 = v4;
      if ( v3 == v4 )
        v5 = (_QWORD *)*v3;
      else
        v3 = v2;
      v2 = v3;
      v3 = v5;
    }
    while ( v5 );
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
