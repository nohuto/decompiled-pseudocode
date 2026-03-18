/*
 * XREFs of PspInitPhase3 @ 0x140B313B8
 * Callers:
 *     PsInitSystem @ 0x140B02300 (PsInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PspMapSystemDll @ 0x140756AD4 (PspMapSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B533E0 (PspGetSystemDllSecureHandle.c)
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
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(*PspSystemDlls[0], &v9);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls[0], 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v8 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(*off_140D3B1A8, &v8) < 0 )
      {
        v7 = v8;
      }
      else
      {
        v6 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140D3B1A8, 0, 0);
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
  KiUnstackDetachProcess((__int64)v10, 0LL);
  return SystemDllSecureHandle >= 0;
}
