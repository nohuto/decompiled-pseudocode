__int64 __fastcall fnHkINLPCWPRETEXSTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 Valid; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]
  __int64 v15; // [rsp+50h] [rbp-18h]
  __int64 v16; // [rsp+58h] [rbp-10h]

  v12[0] = 0LL;
  v14 = 0;
  v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
  v9 = *(_QWORD *)(gptiCurrent + 688LL);
  if ( v9 )
  {
    Valid = PhkNextValid(v9);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 48) != 12 )
        return 0LL;
    }
  }
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  v13 = a2;
  v12[2] = a3;
  v12[1] = a4;
  v16 = 0LL;
  v12[0] = *(_QWORD *)(v8 + 104);
  return xxxCallNextHookEx(0, (*(_DWORD *)v8 >> 4) & 1, (__int64)v12);
}
