__int64 __fastcall Usbh_FDO_WaitPnpStart(__int64 a1, int a2)
{
  __int64 v3; // r14
  int v4; // esi
  _DWORD *v5; // rbp
  int v6; // r8d
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  int v9; // r10d
  bool v10; // r12
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int v15; // ebx

  v3 = a2;
  v4 = 1;
  v5 = FdoExt(*(_QWORD *)(a1 + 8));
  Log(*(_QWORD *)(a1 + 8), 2, 2001949268, a1, 1LL);
  Log(*(_QWORD *)(a1 + 8), 2, v6, v3, 2LL);
  if ( (_DWORD)v3 == 2 )
    return Usbh_PnpRemove(a1, 2LL);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = RtlCheckRegistryKey(2u, (PWSTR)L"MiniNT");
  Log(v7, 2, 1767329861, v8, 0LL);
  v10 = v9 >= 0;
  v5[640] = v5[640] & 0xF7FFFFFF | ((v9 >= 0) << 27);
  KeInitializeEvent((PRKEVENT)(v5 + 644), NotificationEvent, 0);
  v5[640] &= ~0x200u;
  KeResetEvent((PRKEVENT)(v5 + 650));
  v11 = 5;
  LOBYTE(v12) = 1;
  v15 = UsbhModuleDispatch(v12, v13, *(_LIST_ENTRY **)(a1 + 8), 5, 0LL, a1);
  if ( (v15 & 0xC0000000) == 0xC0000000
    || ((v5[640] & 1) == 0 || v10 ? (v4 = 0) : (v11 = 6),
        UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), v11, v3),
        v15 = UsbhHubStart(a1, v4),
        (v15 & 0xC0000000) == 0xC0000000) )
  {
    UsbhModuleDispatch(0LL, v14, *(_LIST_ENTRY **)(a1 + 8), 6, 0LL, a1);
    UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 4, 7);
  }
  Log(*(_QWORD *)(a1 + 8), 2, 2001949268, (int)v15, 3LL);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  return v15;
}
