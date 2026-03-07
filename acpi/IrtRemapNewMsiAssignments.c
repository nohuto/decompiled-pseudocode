__int64 __fastcall IrtRemapNewMsiAssignments(__int64 a1)
{
  struct _RTL_RANGE_LIST *v1; // rcx
  _DWORD *UserData; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 result; // rax
  _BYTE v7[4]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v8; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v9; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+78h] [rbp+3Fh] BYREF
  int v13; // [rsp+80h] [rbp+47h]

  v1 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  v8 = 0;
  Range = 0LL;
  v9 = 0;
  v12 = 0LL;
  v13 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  v7[0] = 0;
  RtlGetFirstRange(v1, &Iterator, &Range);
  while ( Range )
  {
    if ( Range->Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          v3 = UserData[1];
          if ( (v3 & 4) != 0 && UserData[2] == 3 )
          {
            UserData[1] = v3 & 0xFFFFFFFB;
            if ( (int)PcisuppGetBusSlotNumber((__int64)Range->Owner, (int *)&v8, (int *)&v9, (__int64)v7, (__int64)&v12) >= 0 )
            {
              v4 = v8;
              v5 = v9;
            }
            else
            {
              v4 = 0LL;
              v5 = 0LL;
              v8 = 0;
              v9 = 0;
              v12 = 0LL;
              v13 = 0;
              v7[0] = 0;
            }
            result = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))HalPrivateDispatchTable[64])(v4, v5, &v12);
            if ( (int)result < 0 )
              return result;
          }
        }
      }
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return 0LL;
}
