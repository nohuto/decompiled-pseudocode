/*
 * XREFs of PspInitPhase3 @ 0x140A4B0C0
 * Callers:
 *     PsInitSystem @ 0x140A4C2F8 (PsInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspMapSystemDll @ 0x1406FCA38 (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A93648 (PspGetSystemDllSecureHandle.c)
 */

bool __fastcall PspInitPhase3(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int SystemDllSecureHandle; // ebx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-69h] BYREF
  __int64 v9; // [rsp+28h] [rbp-61h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v11[14]; // [rsp+60h] [rbp-29h] BYREF

  memset(v10, 0, sizeof(v10));
  v9 = 0LL;
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0LL, (__int64)v10, a4);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(PspSystemDlls, &v9);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls, 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v8 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(off_140D2D268, &v8) < 0 )
      {
        v7 = v8;
      }
      else
      {
        v6 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140D2D268, 0, 0);
        v7 = v8;
        if ( v6 < 0 )
          v7 = 0LL;
      }
      memset(v11, 0, 0x68uLL);
      v11[1] = v9;
      v11[2] = v7;
      SystemDllSecureHandle = VslpEnterIumSecureMode(2u, 4, 0, (__int64)v11);
    }
  }
  KiUnstackDetachProcess((__int64)v10, 0);
  return SystemDllSecureHandle >= 0;
}
