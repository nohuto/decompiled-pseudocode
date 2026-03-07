__int64 __fastcall NtDCompositionGetTargetStatistics(unsigned __int64 *a1, ULONG64 a2, unsigned __int64 a3)
{
  int v4; // ebx
  unsigned __int64 v5; // r14
  DirectComposition::CConnection *DefaultConnection; // rdi
  __int128 v8; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+38h] [rbp-A0h]
  int v10; // [rsp+40h] [rbp-98h]
  __int128 v11; // [rsp+48h] [rbp-90h]
  __int64 v12; // [rsp+58h] [rbp-80h]
  int v13; // [rsp+60h] [rbp-78h]
  _OWORD v14[6]; // [rsp+70h] [rbp-68h] BYREF

  v4 = 0;
  v5 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  if ( a1 && a2 )
  {
    if ( a1 + 1 < a1 || (unsigned __int64)(a1 + 1) > MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a1;
    if ( a2 + 28 < a2 || a2 + 28 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11 = *(_OWORD *)a2;
    v12 = *(_QWORD *)(a2 + 16);
    v13 = *(_DWORD *)(a2 + 24);
    v8 = v11;
    v9 = v12;
    v10 = v13;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( DefaultConnection )
    {
      memset(v14, 0, 0x48uLL);
      if ( DirectComposition::CConnection::QueryTargetStats(
             DefaultConnection,
             v5,
             (const struct tagCOMPOSITION_TARGET_ID *)&v8,
             (struct tagCOMPOSITION_TARGET_STATS *)v14) )
      {
        if ( a3 + 72 < a3 || a3 + 72 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a3 = v14[0];
        *(_OWORD *)(a3 + 16) = v14[1];
        *(_OWORD *)(a3 + 32) = v14[2];
        *(_OWORD *)(a3 + 48) = v14[3];
        *(_QWORD *)(a3 + 64) = *(_QWORD *)&v14[4];
      }
      else
      {
        v4 = -1073741275;
      }
      DirectComposition::CConnection::Release(DefaultConnection);
    }
    else
    {
      v4 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v4;
}
