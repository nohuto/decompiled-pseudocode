/*
 * XREFs of NtDCompositionGetTargetStatistics @ 0x1C0080B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00163FC (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C00164EC (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1C0080D28 (-QueryTargetStats@CConnection@DirectComposition@@QEAA_N_KAEBUtagCOMPOSITION_TARGET_ID@@PEAUtagCO.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall NtDCompositionGetTargetStatistics(unsigned __int64 *a1, ULONG64 a2, ULONG64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  int v5; // ebx
  unsigned __int64 v6; // r14
  DirectComposition::CConnection *DefaultConnection; // rdi
  unsigned int v8; // edx
  __int128 v10; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-A0h]
  int v12; // [rsp+40h] [rbp-98h]
  __int128 v13; // [rsp+48h] [rbp-90h]
  __int64 v14; // [rsp+58h] [rbp-80h]
  int v15; // [rsp+60h] [rbp-78h]
  _OWORD v16[6]; // [rsp+70h] [rbp-68h] BYREF

  v4 = a3;
  v5 = 0;
  v6 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  if ( a1 && a2 )
  {
    a3 = (ULONG64)(a1 + 1);
    if ( a1 + 1 < a1 || a3 > MmUserProbeAddress )
      a1 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *a1;
    a1 = (unsigned __int64 *)(a2 + 28);
    if ( a2 + 28 < a2 || (unsigned __int64)a1 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v13 = *(_OWORD *)a2;
    v14 = *(_QWORD *)(a2 + 16);
    v15 = *(_DWORD *)(a2 + 24);
    v10 = v13;
    v11 = v14;
    v12 = v15;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection((__int64)a1, a2, a3, a4);
    if ( DefaultConnection )
    {
      memset(v16, 0, 0x48uLL);
      if ( DirectComposition::CConnection::QueryTargetStats(
             DefaultConnection,
             v6,
             (const struct tagCOMPOSITION_TARGET_ID *)&v10,
             (struct tagCOMPOSITION_TARGET_STATS *)v16) )
      {
        if ( v4 + 72 < v4 || v4 + 72 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)v4 = v16[0];
        *(_OWORD *)(v4 + 16) = v16[1];
        *(_OWORD *)(v4 + 32) = v16[2];
        *(_OWORD *)(v4 + 48) = v16[3];
        *(_QWORD *)(v4 + 64) = *(_QWORD *)&v16[4];
      }
      else
      {
        v5 = -1073741275;
      }
      DirectComposition::CConnection::Release(DefaultConnection, v8);
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v5;
}
