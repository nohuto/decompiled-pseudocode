__int64 __fastcall NVMeControllerPowerUp(__int64 a1)
{
  unsigned int inited; // edi
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // eax

  *(_DWORD *)(a1 + 32) &= ~4u;
  NVMeQueuesReInit();
  inited = ControllerReset(a1, 1);
  if ( inited || (inited = NVMeControllerInitPart1(a1, 0)) != 0 || (inited = NVMeControllerInitPart2(a1, 0, 1)) != 0 )
  {
    NVMeControllerStartFailureEventLog(a1);
  }
  else
  {
    NVMeControllerInitPart3(a1);
    v4 = *(_DWORD *)(a1 + 4336);
    if ( (v4 & 2) != 0 )
    {
      v5 = v4 & 0xFFFFFFFD;
      *(_DWORD *)(a1 + 4336) = v5;
      LOBYTE(v3) = (v5 & 4) != 0;
      NVMeSetNonOperationalPowerStatePermissiveMode(a1, v3);
    }
  }
  return inited;
}
