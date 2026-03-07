__int64 __fastcall DeviceSlot_DisableAllDeviceSlots(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rcx
  __int64 result; // rax

  for ( i = 1; i <= *(_DWORD *)(a1 + 96); ++i )
  {
    if ( *(_BYTE *)(a1 + 80) )
      v3 = *(_QWORD *)(a1 + 24);
    else
      v3 = *(_QWORD *)(a1 + 72);
    result = i;
    if ( *(_QWORD *)(v3 + 8LL * i) )
      result = UsbDevice_SetDeviceDisabled();
  }
  return result;
}
