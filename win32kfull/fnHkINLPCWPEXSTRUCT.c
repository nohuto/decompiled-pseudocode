/*
 * XREFs of fnHkINLPCWPEXSTRUCT @ 0x1C0009B90
 * Callers:
 *     <none>
 * Callees:
 *     xxxCallNextHookEx @ 0x1C0009C64 (xxxCallNextHookEx.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall fnHkINLPCWPEXSTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rdi
  __int64 Valid; // rax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-28h]
  int v13; // [rsp+44h] [rbp-24h]
  __int64 v14; // [rsp+48h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-18h]

  v13 = 0;
  v8 = *(_DWORD **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480);
  if ( *(_QWORD *)(gptiCurrent + 688LL) )
  {
    Valid = PhkNextValid();
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 4 )
        return 0LL;
    }
  }
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  v12 = a2;
  v11[1] = a3;
  v11[0] = a4;
  v15 = 0LL;
  return xxxCallNextHookEx(0, (*v8 >> 4) & 1, (__int64)v11);
}
