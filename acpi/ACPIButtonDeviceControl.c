__int64 __fastcall ACPIButtonDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned int v7; // edi
  KIRQL v8; // al
  KIRQL v9; // r8
  __int64 v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = 0LL;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v7 = -1073741822;
LABEL_17:
    *(_DWORD *)(a2 + 48) = v7;
    IofCompleteRequest((PIRP)a2, 0);
    return v7;
  }
  if ( *(_DWORD *)(v5 + 24) == 2703680 )
  {
    if ( *(_DWORD *)(v5 + 8) == 4 )
    {
      v7 = 0;
      **(_DWORD **)(a2 + 24) = *(_DWORD *)(DeviceExtension + 200);
      v6 = 4LL;
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v5 + 24) != 2703684 )
  {
    v7 = -1073741637;
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v5 + 8) != 4 )
  {
LABEL_14:
    v7 = -1073741820;
    goto LABEL_16;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiButtonLock);
  v9 = v8;
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIButtonCancelRequest);
  if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
  {
    KeReleaseSpinLock(&AcpiButtonLock, v8);
    v7 = -1073741536;
LABEL_16:
    *(_QWORD *)(a2 + 56) = v6;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(a2 + 184);
  v11 = (_QWORD *)(a2 + 168);
  *(_BYTE *)(v10 + 3) |= 1u;
  v12 = (_QWORD *)qword_1C006F438;
  if ( *(__int64 **)qword_1C006F438 != &AcpiButtonList )
    __fastfail(3u);
  *v11 = &AcpiButtonList;
  v11[1] = v12;
  *v12 = v11;
  qword_1C006F438 = (__int64)v11;
  KeReleaseSpinLock(&AcpiButtonLock, v9);
  return (unsigned int)ACPIButtonEvent(a1, 0LL, v13, v14);
}
