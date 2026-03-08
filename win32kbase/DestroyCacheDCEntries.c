/*
 * XREFs of DestroyCacheDCEntries @ 0x1C007944C
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0078460 (DestroyThreadsObjects.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     GreLockVisRgn @ 0x1C00794E0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 */

__int64 __fastcall DestroyCacheDCEntries(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rbx
  char *v4; // rax

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
  v2 = (char *)gpDispInfo + 24;
  v3 = (char *)*((_QWORD *)gpDispInfo + 3);
  if ( v3 )
  {
    do
    {
      if ( a1 == *((_QWORD *)v3 + 9) && (*((_DWORD *)v3 + 16) & 0x80000002) == 2 )
        DestroyCacheDC(v2, *((_QWORD *)v3 + 1));
      v4 = *(char **)v2;
      if ( v3 == *(char **)v2 )
      {
        v4 = *(char **)v3;
        v2 = v3;
      }
      v3 = v4;
    }
    while ( v4 );
  }
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
}
