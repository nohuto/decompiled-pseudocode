__int64 __fastcall DpReadDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 (__fastcall *v10)(_QWORD, __int64, void *); // r11
  ULONG BusDataByOffset; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 (__fastcall *v15)(_QWORD, void *, _QWORD, _QWORD); // rax

  v6 = 0;
  if ( !a1 )
    goto LABEL_12;
  if ( !a3 )
    goto LABEL_12;
  if ( !a6 )
    goto LABEL_12;
  *a6 = 0;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_12;
  if ( *(_DWORD *)(v8 + 16) != 1953656900 )
    goto LABEL_12;
  v9 = *(_DWORD *)(v8 + 20);
  if ( (unsigned int)(v9 - 2) > 1 )
    goto LABEL_12;
  if ( (_DWORD)a2 && (_DWORD)a2 != 1382638416 )
  {
    if ( (_DWORD)a2 == 0x80000000 )
    {
      BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
      goto LABEL_10;
    }
    if ( (_DWORD)a2 == -2147483647 && v9 == 2 )
    {
      if ( (*(_DWORD *)(v8 + 4004) & 4) == 0 )
      {
        v13 = -1071774661LL;
        goto LABEL_19;
      }
      v15 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(v8 + 2968);
      if ( v15 )
      {
        BusDataByOffset = v15(*(_QWORD *)(v8 + 2944), a3, Offset, Length);
        goto LABEL_10;
      }
LABEL_22:
      v13 = -1073741823LL;
      v6 = -1073741823;
      v12 = 3LL;
      goto LABEL_11;
    }
LABEL_12:
    v13 = -1073741811LL;
LABEL_19:
    v6 = v13;
    v12 = 2LL;
    goto LABEL_11;
  }
  v10 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(v8 + 616);
  if ( !v10 )
    goto LABEL_22;
  BusDataByOffset = v10(*(_QWORD *)(v8 + 568), a2, a3);
LABEL_10:
  *a6 = BusDataByOffset;
  v12 = 4LL;
  v13 = BusDataByOffset;
LABEL_11:
  WdLogSingleEntry1(v12, v13);
  return v6;
}
