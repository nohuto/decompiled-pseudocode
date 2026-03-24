/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C00087FC
 * Callers:
 *     CleanupGDI @ 0x1C0008ABC (CleanupGDI.c)
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C0008970 (DestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0039F20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C003A140 (GreLockVisRgn.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 **v3; // rdi
  __int64 *v4; // rbx
  int v5; // eax
  __int64 *v6; // rax
  __int64 CurrentProcessWin32Process; // rax

  v2 = 1;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v3 = (__int64 **)(gpDispInfo + 24);
  v4 = *(__int64 **)(gpDispInfo + 24);
  if ( !v4 )
  {
LABEL_8:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  }
  do
  {
    v5 = *((_DWORD *)v4 + 16);
    if ( v5 >= 0 )
    {
      if ( (v5 & 0x400000) == 0 )
        goto LABEL_4;
LABEL_12:
      DestroyCacheDC(v3, v4[1]);
      goto LABEL_4;
    }
    if ( v4[10] != PsGetCurrentProcessWin32Process() )
      goto LABEL_4;
    if ( a1 )
      goto LABEL_12;
    v2 = 0;
LABEL_4:
    v6 = *v3;
    if ( v4 == *v3 )
    {
      v6 = (__int64 *)*v4;
      v3 = (__int64 **)v4;
    }
    v4 = v6;
  }
  while ( v6 );
  if ( v2 )
    goto LABEL_8;
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
}
