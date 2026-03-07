NTSTATUS __fastcall IrtClearDeletedMsiMappings(__int64 a1)
{
  struct _RTL_RANGE_LIST *v1; // rcx
  NTSTATUS result; // eax
  PVOID Owner; // r10
  _DWORD *UserData; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  _BYTE v7[4]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v8; // [rsp+44h] [rbp+Bh] BYREF
  unsigned int v9; // [rsp+48h] [rbp+Fh] BYREF
  PRTL_RANGE Range; // [rsp+50h] [rbp+17h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+78h] [rbp+3Fh] BYREF
  int v13; // [rsp+80h] [rbp+47h]

  v1 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  v8 = 0;
  Range = 0LL;
  v9 = 0;
  v12 = 0LL;
  v13 = 0;
  memset(&Iterator, 0, sizeof(Iterator));
  v7[0] = 0;
  result = RtlGetFirstRange(v1, &Iterator, &Range);
  while ( Range )
  {
    Owner = Range->Owner;
    if ( Owner )
    {
      if ( (Range->Attributes & 1) == 0 )
      {
        UserData = Range->UserData;
        if ( UserData )
        {
          if ( (UserData[1] & 8) != 0 && UserData[2] == 3 )
          {
            if ( (int)PcisuppGetBusSlotNumber((__int64)Owner, (int *)&v9, (int *)&v8, (__int64)v7, (__int64)&v12) >= 0 )
            {
              v6 = v8;
              v5 = v9;
            }
            else
            {
              v5 = 0LL;
              v6 = 0LL;
              v9 = 0;
              v8 = 0;
              v12 = 0LL;
              v13 = 0;
              v7[0] = 0;
            }
            ((void (__fastcall *)(__int64, __int64, __int64 *))HalPrivateDispatchTable[65])(v5, v6, &v12);
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
