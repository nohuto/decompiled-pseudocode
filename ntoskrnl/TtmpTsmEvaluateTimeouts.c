_QWORD *__fastcall TtmpTsmEvaluateTimeouts(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // rdx
  _DWORD *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  char v9; // al
  _DWORD *v10; // r9
  __int64 v11; // rcx
  _QWORD *result; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  if ( (unsigned __int8)TtmpTsmTestTimeout(a2, a3, v13) )
  {
    *v6 = 1;
  }
  else
  {
    v9 = TtmpTsmTestTimeout(v8, v5, v13);
    *v10 = 3 - (v9 != 0);
  }
  v11 = v13[0];
  if ( v13[0] )
    v11 = v13[0] - v7;
  result = a5;
  *a5 = v11;
  return result;
}
