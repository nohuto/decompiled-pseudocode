/*
 * XREFs of PspInitPhase3 @ 0x140A4C0C0
 * Callers:
 *     PsInitSystem @ 0x140A4D2F8 (PsInitSystem.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PspMapSystemDll @ 0x1406C0A58 (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140A94648 (PspGetSystemDllSecureHandle.c)
 */

bool PspInitPhase3()
{
  int SystemDllSecureHandle; // ebx
  int v2; // eax
  __int64 v3; // rbx
  __int64 v4; // [rsp+20h] [rbp-69h] BYREF
  __int64 v5; // [rsp+28h] [rbp-61h] BYREF
  _OWORD v6[3]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v7[14]; // [rsp+60h] [rbp-29h] BYREF

  memset(v6, 0, sizeof(v6));
  v5 = 0LL;
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v6);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(PspSystemDlls, &v5);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls, 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v4 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(off_140D2D268, &v4) < 0 )
      {
        v3 = v4;
      }
      else
      {
        v2 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140D2D268, 0, 0);
        v3 = v4;
        if ( v2 < 0 )
          v3 = 0LL;
      }
      memset(v7, 0, 0x68uLL);
      v7[1] = v5;
      v7[2] = v3;
      SystemDllSecureHandle = VslpEnterIumSecureMode(2u, 4, 0, (__int64)v7);
    }
  }
  KiUnstackDetachProcess((__int64)v6, 0LL);
  return SystemDllSecureHandle >= 0;
}
