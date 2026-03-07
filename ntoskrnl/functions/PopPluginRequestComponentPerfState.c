char __fastcall PopPluginRequestComponentPerfState(__int64 a1, int a2, int a3, __int64 a4, char *a5)
{
  ULONG_PTR v5; // rbx
  char v6; // dl
  char result; // al
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+34h] [rbp-14h]
  __int64 v13; // [rsp+38h] [rbp-10h]

  v10 = 0;
  v12 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 72);
  v9 = a2;
  v11 = a3;
  v13 = a4;
  if ( v5 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v5 + 96))(33LL, &v8) )
      PopFxBugCheck(0x605uLL, 0x21uLL, v5, 0LL);
    v6 = BYTE1(v10);
    result = v10;
  }
  else
  {
    v6 = 1;
    result = 1;
  }
  if ( result )
    *a5 = v6;
  return result;
}
