/*
 * XREFs of ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C004F154
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C003F388 (_ChangeWindowMessageFilterEx.c)
 *     ClearHungFlag @ 0x1C007BE28 (ClearHungFlag.c)
 *     FreeWindowGCData @ 0x1C007C080 (FreeWindowGCData.c)
 *     FreeWindowMessageFilter @ 0x1C007C150 (FreeWindowMessageFilter.c)
 *     _DeregisterShellHookWindow @ 0x1C01321C0 (_DeregisterShellHookWindow.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall VWPLRemoveBase(struct tagVWPL **a1, __int64 a2, struct tagWND *a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned int *v5; // rbx
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  v5 = (unsigned int *)*a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      (_DWORD)a1,
      4,
      11,
      12,
      (__int64)&WPP_7b6843d7872833607704d87654b4b262_Traceguids,
      (char)v5,
      (char)a3);
  if ( !v5 )
    return 0LL;
  if ( v5[3] )
    return 0LL;
  v9 = *v5;
  v10 = 0;
  if ( !*v5 )
    return 0LL;
  do
  {
    if ( a3 == *(struct tagWND **)&v5[4 * v10 + 6] )
      break;
    ++v10;
  }
  while ( v10 < v9 );
  if ( v10 >= v9 )
    return 0LL;
  v11 = 2LL * v10;
  *(_QWORD *)&v5[2 * v11 + 6] = 0LL;
  v12 = *(_QWORD *)&v5[4 * v10 + 4];
  *(_QWORD *)&v5[2 * v11 + 4] = 0LL;
  v13 = --*v5;
  if ( a5 )
  {
    *a5 = v12;
    v13 = *v5;
  }
  if ( v13 )
  {
    if ( v10 < v13 )
    {
      do
      {
        v14 = 2 * (v10 + 1LL);
        v15 = 2 * (++v10 + 1LL);
        *(_OWORD *)&v5[2 * v14] = *(_OWORD *)&v5[2 * v15];
        v13 = *v5;
      }
      while ( v10 < *v5 );
    }
    *(_QWORD *)&v5[4 * v13 + 6] = 0LL;
    if ( v5[1] - *v5 >= v5[2] )
    {
      v16 = UserReAllocPoolZInit(v5, 16 * (v5[1] + 1), 16 * (*v5 + 1), 1819702101LL);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 4) = *(_DWORD *)v16;
        *a1 = (struct tagVWPL *)v16;
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
