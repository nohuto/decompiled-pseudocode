__int64 __fastcall USBD_IsochUrbAllocate(USBD_HANDLE__ *USBDHandle, __int64 NumberOfIsochPackets, _URB **Urb)
{
  int v5; // ebx
  __int64 (__fastcall *v6)(_QWORD, __int64); // rax
  SIZE_T v7; // rbx
  _URB *PoolWithTag; // rax
  void (__fastcall *v9)(_QWORD); // rax

  if ( USBDHandle )
  {
    if ( !Urb )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
      return (unsigned int)-1073741811;
    }
    if ( *((_BYTE *)USBDHandle + 225) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", USBDHandle);
    }
    else
    {
      if ( *((int *)USBDHandle + 55) >= 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)USBDHandle + 55);
        v6 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)USBDHandle + 16);
        if ( v6 )
        {
          v5 = v6(*((_QWORD *)USBDHandle + 6), NumberOfIsochPackets);
        }
        else
        {
          v7 = (unsigned int)(12 * NumberOfIsochPackets + 152);
          PoolWithTag = (_URB *)ExAllocatePoolWithTag(g_NonPagedPoolType, v7, *((_DWORD *)USBDHandle + 16));
          *Urb = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, v7);
            v5 = 0;
          }
          else
          {
            if ( g_EnableDbgPrints )
              DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate Isoch URB\n");
            v5 = -1073741670;
          }
        }
        if ( v5 < 0 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)USBDHandle + 55, 0xFFFFFFFF) <= 1 )
          {
            if ( *((_BYTE *)USBDHandle + 225) )
            {
              v9 = (void (__fastcall *)(_QWORD))*((_QWORD *)USBDHandle + 14);
              if ( v9 )
                v9(*((_QWORD *)USBDHandle + 6));
              ExFreePoolWithTag(USBDHandle, *((_DWORD *)USBDHandle + 16));
            }
            else if ( g_EnableDbgPrints )
            {
              DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", USBDHandle);
            }
          }
          goto LABEL_33;
        }
        return (unsigned int)v5;
      }
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", USBDHandle);
    }
    v5 = -1073741436;
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
    goto LABEL_33;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
  v5 = -1073741811;
  if ( Urb )
LABEL_33:
    *Urb = 0LL;
  return (unsigned int)v5;
}
