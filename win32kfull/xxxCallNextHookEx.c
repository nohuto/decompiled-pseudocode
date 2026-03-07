__int64 __fastcall xxxCallNextHookEx(int a1, unsigned __int64 a2, __int64 a3)
{
  struct tagHOOK *Valid; // rax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  if ( !*(_QWORD *)(gptiCurrent + 688LL) )
    return 0LL;
  Valid = (struct tagHOOK *)PhkNextValid();
  return xxxCallHook2(Valid, a1, a2, a3, &v8, 0);
}
