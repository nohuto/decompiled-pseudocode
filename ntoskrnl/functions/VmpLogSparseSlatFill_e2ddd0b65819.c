void __fastcall VmpLogSparseSlatFill(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // [rsp+20h] [rbp-59h]
  int v7; // [rsp+28h] [rbp-51h]
  int Flink; // [rsp+40h] [rbp-39h] BYREF
  int v9; // [rsp+44h] [rbp-35h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-29h] BYREF
  int *p_Flink; // [rsp+70h] [rbp-9h]
  __int64 v13; // [rsp+78h] [rbp-1h]
  __int64 *v14; // [rsp+80h] [rbp+7h]
  __int64 v15; // [rsp+88h] [rbp+Fh]
  unsigned int *v16; // [rsp+90h] [rbp+17h]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  int *v21; // [rsp+B0h] [rbp+37h]
  __int64 v22; // [rsp+B8h] [rbp+3Fh]
  unsigned int v23; // [rsp+F0h] [rbp+77h] BYREF

  v23 = a3;
  if ( *(_DWORD *)VmpTraceLoggingProvider > 5u )
  {
    if ( tlgKeywordOn(VmpTraceLoggingProvider, 1LL) )
    {
      Flink = (int)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      p_Flink = &Flink;
      v14 = &v10;
      v16 = &v23;
      v10 = v23;
      v21 = &v9;
      v19 = 16 * v23;
      v9 = v3;
      v13 = 4LL;
      v15 = 8LL;
      v17 = 4LL;
      v18 = v5;
      v20 = 0;
      v22 = 4LL;
      tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&qword_140034370, 0LL, 0, v6, v7, 7u, &v11);
    }
  }
}
