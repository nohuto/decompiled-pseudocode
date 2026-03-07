__int64 __fastcall Usbh_FDO_WaitPnpRestart(ULONG_PTR a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rsi
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // edi
  int v8; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 2001883988, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), 2, v5, v3, 2LL);
  v7 = v3 - 2;
  if ( !v7 )
    return Usbh_PnpRemove(a1, 2LL);
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 8);
    if ( v8 != 1 )
      UsbhTrapFatal_Dbg(v9, a1);
    UsbhSshEnabled(v9, a1);
    UsbhSshEnableDisable(*(_QWORD *)(a1 + 8), (unsigned int)v4[820]);
    v4[640] &= ~0x200u;
    KeResetEvent((PRKEVENT)(v4 + 650));
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 5, 4);
    v10 = UsbhHubStart(a1, 2);
    v12 = v10;
    if ( (v10 & 0xC0000000) == 0xC0000000 )
    {
      UsbhModuleDispatch(0LL, v11, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
      UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 7);
    }
    Log(*(_QWORD *)(a1 + 8), 2, 2001883988, v12, 3LL);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return (unsigned int)v12;
  }
  else
  {
    UsbhModuleDispatch(0LL, v6, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 3);
    UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
    return 0LL;
  }
}
