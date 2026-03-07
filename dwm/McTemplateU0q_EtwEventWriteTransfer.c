__int64 __fastcall McTemplateU0q_EtwEventWriteTransfer(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v5[3]; // [rsp+38h] [rbp-30h] BYREF
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]

  v4 = 0;
  v5[2] = &v4;
  v7 = 0;
  v6 = 4;
  return McGenEventWrite_EtwEventWriteTransfer(a1, (__int64)"\t", a3, 2, (__int64)v5);
}
