__int64 __fastcall ACPIPepPlatformEntryExitNotify(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  int v4; // edx
  int v5; // edx
  unsigned int v6; // r9d
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+50h] [rbp-48h] BYREF

  v3 = -1073741823;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return (unsigned int)v3;
        v6 = 9;
      }
      else
      {
        v6 = 8 - (a3 != 0);
      }
    }
    else
    {
      v6 = 4 - (a3 != 0);
    }
  }
  else
  {
    v6 = 6 - (a3 != 0);
  }
  v7 = *(_QWORD **)(a1 + 760);
  v9 = 0LL;
  memset(v11, 0, sizeof(v11));
  v10 = PEP_NOTIFICATIONS_DSM_UUID;
  v3 = ACPIAmliEvaluateDsm(v7, (__int64)&v10, 0, v6, v11, &v9);
  if ( v3 >= 0 )
    AMLIFreeDataBuffs(v9);
  return (unsigned int)v3;
}
