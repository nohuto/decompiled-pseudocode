/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C003D924
 * Callers:
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     CleanupGDI @ 0x1C00B57A0 (CleanupGDI.c)
 *     DestroyProcessInfo @ 0x1C00D51B0 (DestroyProcessInfo.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C003DA20 (DestroyCacheDC.c)
 *     GreLockVisRgn @ 0x1C00794E0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00795D0 (GreUnlockVisRgn.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1)
{
  int v2; // esi
  __int64 v3; // rcx
  __int64 **v4; // rdi
  __int64 *v5; // rbx
  int v6; // eax
  __int64 *v7; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rax

  v2 = 1;
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
  v4 = (__int64 **)((char *)gpDispInfo + 24);
  v5 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
  if ( !v5 )
  {
LABEL_8:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
  }
  do
  {
    v6 = *((_DWORD *)v5 + 16);
    if ( v6 >= 0 )
    {
      if ( (v6 & 0x400000) == 0 )
        goto LABEL_4;
LABEL_17:
      DestroyCacheDC(v4, v5[1]);
      goto LABEL_4;
    }
    v10 = PsGetCurrentProcessWin32Process(v3);
    if ( v10 )
    {
      v3 = -*(_QWORD *)v10;
      v10 &= -(__int64)(*(_QWORD *)v10 != 0LL);
    }
    if ( v5[10] == v10 )
    {
      if ( !a1 )
      {
        v2 = 0;
        goto LABEL_4;
      }
      goto LABEL_17;
    }
LABEL_4:
    v7 = *v4;
    if ( v5 == *v4 )
    {
      v7 = (__int64 *)*v5;
      v4 = (__int64 **)v5;
    }
    v5 = v7;
  }
  while ( v7 );
  if ( v2 )
    goto LABEL_8;
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
}
