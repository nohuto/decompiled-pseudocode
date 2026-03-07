__int64 __fastcall InkProcessor::Initialize(__int64 a1)
{
  unsigned int v1; // ebx
  InkProcessor *v2; // rax
  __int64 v3; // rcx
  InkProcessor *v4; // rdi
  __int64 v5; // rcx
  int v7; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v1 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1) + 3440) )
  {
    v2 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    if ( v2 )
      v4 = InkProcessor::InkProcessor(v2);
    else
      v4 = 0LL;
    *(_QWORD *)(SGDGetUserSessionState(v3) + 3440) = v4;
    if ( !*(_QWORD *)(SGDGetUserSessionState(v5) + 3440) )
    {
      v1 = -1073741801;
      if ( (unsigned int)dword_1C03570E0 > 2 )
      {
        v11 = 0;
        v9 = &v7;
        v7 = -1073741801;
        v10 = 4;
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C03570E0, (int)&dword_1C031DA06, 0, 0, 3u, &v8);
      }
    }
  }
  return v1;
}
