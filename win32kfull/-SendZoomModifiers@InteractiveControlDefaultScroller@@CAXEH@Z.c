/*
 * XREFs of ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C024A964
 * Callers:
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C024A564 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C024A88C (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 * Callees:
 *     xxxSendInput @ 0x1C00171A4 (xxxSendInput.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall InteractiveControlDefaultScroller::SendZoomModifiers(char a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rbx
  __int64 CurrentKbdTables; // rax
  __int16 v12; // ax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int16 v15; // ax
  int v16; // [rsp+28h] [rbp-49h] BYREF
  _WORD v17[60]; // [rsp+30h] [rbp-41h]

  memset_0(&v16, 0, 0x78uLL);
  v6 = a1 & 1;
  if ( (a1 & 1) != 0 )
  {
    v5 = 17LL;
    v17[0] = 17;
  }
  v7 = v6;
  if ( (a1 & 2) != 0 )
  {
    v5 = 5LL * v6;
    v17[20 * v6] = 18;
    v7 = (unsigned int)v6 + 1;
  }
  if ( (a1 & 4) != 0 )
  {
    v5 = 5 * v7;
    v17[20 * v7] = 16;
    LODWORD(v7) = v7 + 1;
  }
  v8 = 0LL;
  if ( (_DWORD)v7 )
  {
    v9 = 0;
    if ( a2 )
    {
      do
      {
        v10 = 5LL * v9;
        *(_DWORD *)&v17[20 * v9] = 1;
        CurrentKbdTables = GetCurrentKbdTables(v5, v4);
        v12 = InternalMapVirtualKeyEx((unsigned __int16)v17[20 * v9++], 0LL, CurrentKbdTables);
        *(_DWORD *)&v17[4 * v10 + 2] = 0;
        v17[4 * v10 + 1] = v12;
      }
      while ( v9 != (_DWORD)v7 );
    }
    else
    {
      do
      {
        v13 = 5 * v8;
        *(_DWORD *)&v17[20 * v8] = 1;
        v14 = GetCurrentKbdTables(v5, v4);
        v15 = InternalMapVirtualKeyEx((unsigned __int16)v17[20 * v8], 0LL, v14);
        v8 = (unsigned int)(v8 + 1);
        *(_DWORD *)&v17[4 * v13 + 2] = 2;
        v17[4 * v13 + 1] = v15;
      }
      while ( (_DWORD)v8 != (_DWORD)v7 );
    }
    xxxSendInput((unsigned int)v7, (__int64)&v16);
  }
}
