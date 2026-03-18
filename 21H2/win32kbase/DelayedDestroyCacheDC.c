/*
 * XREFs of DelayedDestroyCacheDC @ 0x1C005197C
 * Callers:
 *     DestroyProcessInfo @ 0x1C00188FC (DestroyProcessInfo.c)
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 */

__int64 __fastcall DelayedDestroyCacheDC(int a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 **v9; // rdi
  __int64 *v10; // rbx
  int v11; // eax
  __int64 *v12; // rax
  __int64 CurrentProcessWin32Process; // rax

  v4 = 1;
  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), a2, a3);
  v9 = (__int64 **)((char *)gpDispInfo + 24);
  v10 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
  if ( !v10 )
  {
LABEL_8:
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7, v8);
    *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v5, v7);
  }
  do
  {
    v11 = *((_DWORD *)v10 + 16);
    if ( v11 >= 0 )
    {
      if ( (v11 & 0x400000) == 0 )
        goto LABEL_4;
LABEL_12:
      DestroyCacheDC(v9);
      goto LABEL_4;
    }
    if ( v10[10] != PsGetCurrentProcessWin32Process(v6, v5, v7, v8) )
      goto LABEL_4;
    if ( a1 )
      goto LABEL_12;
    v4 = 0;
LABEL_4:
    v12 = *v9;
    if ( v10 == *v9 )
    {
      v12 = (__int64 *)*v10;
      v9 = (__int64 **)v10;
    }
    v10 = v12;
  }
  while ( v12 );
  if ( v4 )
    goto LABEL_8;
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v5, v7);
}
