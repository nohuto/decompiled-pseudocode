__int64 __fastcall WnfHelper_PublishUsbXhciAudioOffloadState(char a1)
{
  char v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1;
  return ZwUpdateWnfStateData(&WNF_USB_XHCI_AUDIO_OFFLOAD_STATE, &v2, 1LL, 0LL, 0LL, 0, 0);
}
