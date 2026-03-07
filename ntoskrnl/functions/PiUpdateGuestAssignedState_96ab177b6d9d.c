__int64 __fastcall PiUpdateGuestAssignedState(__int64 a1, __int64 a2)
{
  unsigned int v2; // r9d
  char v3; // si
  unsigned int v4; // r9d
  __int64 v5; // r8
  int v7; // ebx
  const wchar_t *v9; // r9
  __int64 *v10; // rdx
  __int64 v11; // rdx

  v2 = *(_DWORD *)(a1 + 704);
  v3 = a2;
  v5 = v2 >> 13;
  v4 = v2 | 0x2000;
  LOBYTE(v5) = v5 & 1;
  if ( !(_BYTE)a2 )
    v4 = *(_DWORD *)(a1 + 704) & 0xFFFFDFFF;
  *(_DWORD *)(a1 + 704) = v4;
  if ( (_BYTE)v5 == (_BYTE)a2 )
    return 0;
  v9 = *(const wchar_t **)(a1 + 48);
  if ( (_BYTE)a2 )
  {
    if ( (byte_140C0E10C & 2) != 0 )
    {
      v10 = KMPnPEvt_Guest_Assigned;
LABEL_11:
      McTemplateK0z_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)v10, v5, v9);
    }
  }
  else if ( (byte_140C0E10C & 2) != 0 )
  {
    v10 = KMPnPEvt_Guest_Unassigned;
    goto LABEL_11;
  }
  LOBYTE(a2) = v3;
  v7 = PipSetGuestAssignedProperty(a1, a2, v5, v9);
  if ( v7 < 0 || (LOBYTE(v11) = v3, v7 = PipSendGuestAssignedNotification(a1, v11), v7 < 0) )
    PnpRequestDeviceRemoval(a1, 0LL, 57LL, (unsigned int)v7);
  return (unsigned int)v7;
}
