__int64 __fastcall UsbhEnumerate2(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 v8; // r11
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  __int64 v19; // r9
  unsigned int (__fastcall *v20)(__int64, __int64, __int64); // rax
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9

  v5 = *(_DWORD *)(a4 + 400);
  Log(a1, 4, 1162761522, a4, a2);
  v10 = v9 - 1;
  if ( !v10 )
  {
    Log(a1, 4, 1162752611, v8, 0LL);
    v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0061968[2 * v24];
LABEL_19:
    if ( v20 )
      return v20(a1, a4, a5);
    return v5;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    Log(a1, 4, 1162752613, v8, 0LL);
    v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0061568[2 * v23];
    goto LABEL_19;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    Log(a1, 4, 1162752627, v8, 0LL);
    v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0065098[2 * v22];
    goto LABEL_19;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    Log(a1, 4, 1162752630, v8, 0LL);
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  }
  v14 = v13 - 8;
  if ( !v14 )
  {
    Log(a1, 4, 1162752626, v8, 0LL);
    v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0061B68[2 * v21];
    goto LABEL_19;
  }
  v15 = v14 - 65520;
  if ( !v15 )
  {
    Log(a1, 4, 1162752628, v8, 0LL);
    v20 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0061768[2 * v19];
    goto LABEL_19;
  }
  v16 = v15 - 0x10000;
  if ( !v16 )
  {
    Log(a1, 4, 1162752632, v8, 0LL);
    return (unsigned int)UsbhFailDriverResetPort(a1, a4, a5);
  }
  v17 = v16 - 0x20000;
  if ( v17 )
  {
    if ( v17 == 0x40000 )
    {
      Log(a1, 4, 1162752624, (unsigned int)v8, 0LL);
      return (unsigned int)UsbhCancelEnumeration(a1, 2u, a4, a5);
    }
  }
  else
  {
    v5 = UsbhCancelEnumeration(a1, 2u, a4, a5);
    UsbhSignalSuspendEvent(a1, a4);
  }
  return v5;
}
