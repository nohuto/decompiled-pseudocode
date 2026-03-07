__int64 __fastcall PipSendTargetDeviceQueryRemoveNotification(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v8; // esi
  unsigned int v9; // ebx
  _QWORD **i; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  _WORD *v15; // rdi
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v17[0] = 0LL;
  v8 = 0;
  v9 = 0;
  if ( !a3 )
    return v8;
  for ( i = (_QWORD **)a2; ; ++i )
  {
    v11 = *i;
    if ( *i )
    {
      v12 = *(_QWORD *)(v11[39] + 40LL);
      if ( v12 )
      {
        v13 = *(_DWORD *)(v12 + 300);
        if ( (unsigned int)(v13 - 769) <= 3 || v13 == 788 )
          goto LABEL_9;
      }
    }
    if ( *(_BYTE *)(a1 + 72) )
      break;
    v8 = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_QUERY_REMOVE, v11, 0LL, v17);
    if ( (v8 & 0x80000000) != 0 )
      goto LABEL_12;
LABEL_9:
    if ( ++v9 >= a3 )
      return v8;
  }
  v8 = -1073741536;
LABEL_12:
  v14 = v17[0];
  v15 = (_WORD *)(a4 + 8);
  *(_DWORD *)a4 = 7;
  if ( v14 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(v14 + 56));
  }
  else
  {
    memset(*(void **)(a4 + 16), 0, (unsigned __int16)*v15);
    *v15 = 0;
  }
  if ( v9 )
    PiSendTargetDeviceRemoveCanceledNotification(a2, v9);
  return v8;
}
