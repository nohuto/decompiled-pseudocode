/*
 * XREFs of ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E48F0
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C004F868 (_ChangeWindowMessageFilterEx.c)
 *     _DeregisterShellHookWindow @ 0x1C00B76E4 (_DeregisterShellHookWindow.c)
 *     FreeWindowMessageFilter @ 0x1C013C880 (FreeWindowMessageFilter.c)
 *     FreeWindowGCData @ 0x1C013CCB8 (FreeWindowGCData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VWPLRemoveBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int *v5; // r10
  unsigned int v7; // edx
  unsigned int v8; // r9d
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v5 = (unsigned int *)*a1;
  if ( !*a1 )
    return 0LL;
  if ( v5[3] )
    return 0LL;
  v7 = *v5;
  v8 = 0;
  if ( !*v5 )
    return 0LL;
  do
  {
    if ( a3 == *(struct tagWND **)&v5[4 * v8 + 6] )
      break;
    ++v8;
  }
  while ( v8 < v7 );
  if ( v8 >= v7 )
    return 0LL;
  v9 = 2LL * v8;
  v10 = *(_QWORD *)&v5[4 * v8 + 4];
  *(_QWORD *)&v5[2 * v9 + 4] = 0LL;
  *(_QWORD *)&v5[2 * v9 + 6] = 0LL;
  --*v5;
  if ( a5 )
    *a5 = v10;
  v11 = *v5;
  if ( *v5 )
  {
    if ( v8 < v11 )
    {
      do
      {
        v13 = 2 * (v8 + 1LL);
        v14 = 2 * (++v8 + 1LL);
        *(_OWORD *)&v5[2 * v13] = *(_OWORD *)&v5[2 * v14];
        v11 = *v5;
      }
      while ( v8 < *v5 );
    }
    *(_QWORD *)&v5[4 * v11 + 6] = 0LL;
    if ( v5[1] - *v5 >= v5[2] )
    {
      v15 = UserReAllocPool(v5, 16 * (v5[1] + 1), 16 * (*v5 + 1), 1819702101LL);
      if ( v15 )
      {
        *(_DWORD *)(v15 + 4) = *(_DWORD *)v15;
        *a1 = (struct tagVWPL *)v15;
      }
    }
  }
  else
  {
    Win32FreePool(v5);
    *a1 = 0LL;
  }
  return 1LL;
}
