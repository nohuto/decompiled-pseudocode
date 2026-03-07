void PpmEventVetoReasonRundown()
{
  _QWORD *v0; // rdx
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rax
  int v4; // ecx
  __int64 v5; // rax
  unsigned int v6; // [rsp+40h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v6 = 0;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_VETO_NAME_RUNDOWN) )
    {
      v0 = PpmIdleVetoList;
      if ( PpmIdleVetoList )
      {
        UserData.Reserved = 0;
        UserData.Ptr = (ULONGLONG)&v6;
        v1 = 0LL;
        UserData.Size = 4;
        if ( *((_DWORD *)PpmIdleVetoList + 1) )
        {
          do
          {
            v2 = v1 + 1;
            v3 = 3 * v1;
            v6 = v2;
            v4 = WORD1(v0[v3 + 2]);
            v5 = v0[v3 + 3];
            v10 = 0;
            v8 = v5;
            v9 = v4;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_VETO_NAME_RUNDOWN, 0LL, 0, 0LL, 0LL, 2u, &UserData);
            v0 = PpmIdleVetoList;
            v1 = v2;
          }
          while ( v2 < *((_DWORD *)PpmIdleVetoList + 1) );
        }
      }
    }
  }
}
