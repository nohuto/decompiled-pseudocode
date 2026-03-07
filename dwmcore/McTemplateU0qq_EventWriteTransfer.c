__int64 __fastcall McTemplateU0qq_EventWriteTransfer(__int64 a1, __int64 a2, int a3, int a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-48h] BYREF
  int v6; // [rsp+48h] [rbp-30h]
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  int v11; // [rsp+90h] [rbp+18h] BYREF
  int v12; // [rsp+98h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v5[2] = &v11;
  v6 = 4;
  v7 = 0;
  v8 = &v12;
  v9 = 4;
  v10 = 0;
  return McGenEventWrite_EventWriteTransfer(a1, a2, 4LL, 3LL, v5);
}
