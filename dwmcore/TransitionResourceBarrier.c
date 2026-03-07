__int64 __fastcall TransitionResourceBarrier(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  result = 0LL;
  if ( a3 )
  {
    v6 = 0;
    v8 = 0LL;
    v5[0] = 0LL;
    v4 = *a1;
    v5[1] = a2;
    v7 = a3;
    return (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD *))(v4 + 208))(a1, 1LL, v5);
  }
  return result;
}
