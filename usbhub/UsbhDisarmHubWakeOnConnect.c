void __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1)
{
  _DWORD *v2; // rbx

  v2 = FdoExt(a1);
  UsbhDisarmHubForWakeDetect(a1);
  if ( (v2[640] & 0x80000) != 0 && (int)UsbhSetHubRemoteWake(a1, 0) >= 0 )
    v2[640] &= ~0x80000u;
}
