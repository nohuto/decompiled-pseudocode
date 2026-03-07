__int64 __fastcall PnpLogActionQueueEvent(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 v5; // r9
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 result; // rax
  __int64 *v9; // rdx
  __int64 v10; // r9

  if ( a2 > 16 )
  {
    if ( a2 == 21 || a2 == 22 || (unsigned int)(a2 - 23) <= 1 )
    {
      LODWORD(v10) = 0;
      if ( (_DWORD)a3 )
      {
        if ( (_DWORD)a3 == 1 )
        {
          if ( (byte_140C0E109 & 0x20) != 0 )
          {
            if ( a1 )
              v10 = *(_QWORD *)(a1 + 48);
            return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ConfigureDevice_Start, 1, v10, a2);
          }
        }
        else if ( (_DWORD)a3 == 2 && (byte_140C0E109 & 0x20) != 0 )
        {
          if ( a1 )
            v10 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zdq_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ConfigureDevice_Stop, 2, v10, a2, a4);
        }
      }
      else if ( (byte_140C0E109 & 0x20) != 0 )
      {
        if ( a1 )
          v10 = *(_QWORD *)(a1 + 48);
        return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ConfigureDevice_Queue, 0, v10, a2);
      }
    }
  }
  else
  {
    if ( a2 != 16 )
    {
      if ( a2 == 8 )
      {
        v5 = 0LL;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (byte_140C0E10B & 8) == 0 )
              return result;
            if ( a1 )
              v5 = *(_QWORD *)(a1 + 48);
            v9 = KMPnPEvt_ReenumerateDeviceOnly_Start;
          }
          else
          {
            if ( (_DWORD)a3 != 2 || (byte_140C0E10B & 8) == 0 )
              return result;
            if ( a1 )
              v5 = *(_QWORD *)(a1 + 48);
            v9 = KMPnPEvt_ReenumerateDeviceOnly_Stop;
          }
        }
        else
        {
          if ( (byte_140C0E10B & 8) == 0 )
            return result;
          if ( a1 )
            v5 = *(_QWORD *)(a1 + 48);
          v9 = KMPnPEvt_ReenumerateDeviceOnly_Queue;
        }
        return McTemplateK0z_EtwWriteTransfer(a1, v9, a3, v5);
      }
      if ( a2 == 9 || a2 == 10 )
        goto LABEL_14;
      if ( a2 != 12 )
      {
        if ( a2 != 14 )
          return result;
LABEL_14:
        LODWORD(v6) = 0;
        if ( (_DWORD)a3 )
        {
          if ( (_DWORD)a3 == 1 )
          {
            if ( (byte_140C0E10B & 8) != 0 )
            {
              if ( a1 )
                v6 = *(_QWORD *)(a1 + 48);
              return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ReenumerateDeviceTree_Start, 1, v6, a2);
            }
          }
          else if ( (_DWORD)a3 == 2 && (byte_140C0E10B & 8) != 0 )
          {
            if ( a1 )
              v6 = *(_QWORD *)(a1 + 48);
            return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ReenumerateDeviceTree_Stop, 2, v6, a2);
          }
        }
        else if ( (byte_140C0E10B & 8) != 0 )
        {
          if ( a1 )
            v6 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_ReenumerateDeviceTree_Queue, 0, v6, a2);
        }
        return result;
      }
    }
    LODWORD(v7) = 0;
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 1 )
      {
        if ( (byte_140C0E10B & 0x10) != 0 )
        {
          if ( a1 )
            v7 = *(_QWORD *)(a1 + 48);
          return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_DeviceAction_Start, 1, v7, a2);
        }
      }
      else if ( (_DWORD)a3 == 2 && (byte_140C0E10B & 0x10) != 0 )
      {
        if ( a1 )
          v7 = *(_QWORD *)(a1 + 48);
        return McTemplateK0zdq_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_DeviceAction_Stop, 2, v7, a2, a4);
      }
    }
    else if ( (byte_140C0E10B & 0x10) != 0 )
    {
      if ( a1 )
        v7 = *(_QWORD *)(a1 + 48);
      return McTemplateK0zd_EtwWriteTransfer(a1, (unsigned int)KMPnPEvt_DeviceAction_Queue, 0, v7, a2);
    }
  }
  return result;
}
