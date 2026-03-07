__int64 __fastcall UsbhEnumerate1(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  __int64 v8; // r11
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  __int64 v15; // r9
  unsigned int (__fastcall *v16)(__int64, __int64, __int64); // rax
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9

  v5 = *(_DWORD *)(a4 + 400);
  Log(a1, 4, 1162761521, a4, a2);
  v10 = v9 - 1;
  if ( !v10 )
  {
    Log(a1, 4, 1162752355, v8, 0LL);
    v16 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0061368[2 * v25];
LABEL_7:
    if ( v16 )
      return v16(a1, a4, a5);
    return v5;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    Log(a1, 4, 1162752357, v8, 0LL);
    v16 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0060D68[2 * v24];
    goto LABEL_7;
  }
  v12 = v11 - 2;
  if ( !v12 )
  {
    Log(a1, 4, 1162752371, v8, 0LL);
    v16 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0061168[2 * v23];
    goto LABEL_7;
  }
  v13 = v12 - 4;
  if ( !v13 )
  {
    Log(a1, 4, 1162752374, v8, 0LL);
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  }
  v14 = v13 - 8;
  if ( !v14 )
  {
    Log(a1, 4, 1162752370, (unsigned int)v8, 0LL);
    v16 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C005F4D8[2 * v15];
    goto LABEL_7;
  }
  v19 = v14 - 65520;
  if ( !v19 )
  {
    Log(a1, 4, 1162752372, v8, 0LL);
    v16 = (unsigned int (__fastcall *)(__int64, __int64, __int64))qword_1C0060F68[2 * v22];
    goto LABEL_7;
  }
  v20 = v19 - 0x10000;
  if ( !v20 )
  {
    Log(a1, 4, 1162752376, v8, 0LL);
    return (unsigned int)UsbhFailDriverResetPort(a1, a4, a5);
  }
  v21 = v20 - 0x20000;
  if ( !v21 )
  {
    v5 = UsbhCancelEnumeration(a1, 1LL, a4, a5);
    UsbhSignalSuspendEvent(a1, a4);
    return v5;
  }
  if ( v21 == 0x40000 )
  {
    Log(a1, 4, 1162752368, v8, 0LL);
    return (unsigned int)UsbhCancelEnumeration(a1, 1LL, a4, a5);
  }
  return v5;
}
