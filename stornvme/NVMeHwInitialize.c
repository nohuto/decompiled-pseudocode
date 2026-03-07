char __fastcall NVMeHwInitialize(__int64 a1)
{
  char v1; // bl
  __int64 v3; // rdx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    if ( !(unsigned int)NVMeControllerInitPart2(a1) )
    {
      LOBYTE(v3) = 1;
      return NVMeControllerInitPart3(a1, v3);
    }
  }
  else
  {
    StorPortNotification(4096LL, a1, NVMeHwPassiveInitialize);
    return 0;
  }
  return v1;
}
