bool PspInitPhase3()
{
  int SystemDllSecureHandle; // ebx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  __int64 v5; // [rsp+28h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v6; // [rsp+30h] [rbp-40h] BYREF

  memset(&v6, 0, sizeof(v6));
  v5 = 0LL;
  if ( !VslVsmEnabled )
    return 1;
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)&v6);
  SystemDllSecureHandle = PspGetSystemDllSecureHandle(*PspSystemDlls[0], &v5);
  if ( SystemDllSecureHandle >= 0 )
  {
    SystemDllSecureHandle = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)PspSystemDlls[0], 0, 0);
    if ( SystemDllSecureHandle >= 0 )
    {
      v4 = 0LL;
      if ( (int)PspGetSystemDllSecureHandle(*off_140D53218, &v4) < 0 )
      {
        v3 = v4;
      }
      else
      {
        v2 = PspMapSystemDll((struct _KPROCESS *)PsSecureSystemProcess, (__int64)off_140D53218, 0, 0);
        v3 = v4;
        if ( v2 < 0 )
          v3 = 0LL;
      }
      SystemDllSecureHandle = VslRegisterSecureSystemDlls(v5, v3);
    }
  }
  KiUnstackDetachProcess(&v6);
  return SystemDllSecureHandle >= 0;
}
