/*
 * XREFs of ?xxxEnableWindowGDIScaledDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C021F868
 * Callers:
 *     NtUserEnableWindowGDIScaledDpiMessage @ 0x1C01CF5B0 (NtUserEnableWindowGDIScaledDpiMessage.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 */

char __fastcall xxxEnableWindowGDIScaledDpiMessageX(struct tagWND *a1, int a2)
{
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx

  v4 = 0;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    if ( *((_QWORD *)PtiCurrentShared(v6, v5, v7, v8) + 57) )
    {
      if ( (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v10, v9, v11, v12) + 57) + 8LL) + 64LL) & 1) != 0 )
      {
        v13 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (v13 & 0xF) == 0 && (v13 & 0x40000000) != 0 )
        {
          if ( a2 )
            *((_DWORD *)a1 + 80) |= 0x100000u;
          else
            *((_DWORD *)a1 + 80) &= ~0x100000u;
          return 1;
        }
      }
    }
  }
  return v4;
}
