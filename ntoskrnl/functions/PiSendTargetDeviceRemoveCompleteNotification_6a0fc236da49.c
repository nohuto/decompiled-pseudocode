__int64 __fastcall PiSendTargetDeviceRemoveCompleteNotification(_QWORD **a1, unsigned int a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      v4 = *a1;
      if ( *a1 )
        v5 = *(_QWORD *)(v4[39] + 40LL);
      else
        v5 = 0LL;
      *(_DWORD *)(v5 + 704) |= 0x4000u;
      result = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_COMPLETE, v4, 0LL, 0LL);
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
