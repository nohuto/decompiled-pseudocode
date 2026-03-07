NTSTATUS __fastcall EtwpPsProvTracePriority(__int64 a1, int a2, int a3, int a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 *v7; // rdx
  NTSTATUS result; // eax
  int v9; // [rsp+40h] [rbp-9h] BYREF
  int v10; // [rsp+44h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  int *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  int *v14; // [rsp+70h] [rbp+27h]
  __int64 v15; // [rsp+78h] [rbp+2Fh]
  int *v16; // [rsp+80h] [rbp+37h]
  __int64 v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+C0h] [rbp+77h] BYREF
  int v19; // [rsp+C8h] [rbp+7Fh] BYREF

  v19 = a4;
  v18 = a3;
  v4 = a2 - 1328;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        if ( v6 != 1 )
          return result;
        v7 = ThreadIoPriorityChange;
      }
      else
      {
        v7 = ThreadPagePriorityChange;
      }
    }
    else
    {
      v7 = ThreadCpuBasePriorityChange;
    }
  }
  else
  {
    v7 = (__int64 *)&ThreadCpuPriorityChange;
  }
  v9 = *(_DWORD *)(a1 + 1224);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v9;
  v10 = *(_DWORD *)(a1 + 1232);
  v12 = &v10;
  v14 = &v18;
  v16 = &v19;
  v13 = 4LL;
  v15 = 1LL;
  v17 = 1LL;
  return EtwWriteEx(EtwpPsProvRegHandle, (PCEVENT_DESCRIPTOR)v7, 0LL, 1u, 0LL, 0LL, 4u, &UserData);
}
