char __fastcall InbvPortInitialize(
        int a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        char a8)
{
  unsigned __int8 v8; // r11
  char v10; // bl
  __int64 v11; // r8
  _DWORD *v12; // r13
  __int64 v14; // rbp
  __int64 *v15; // r14
  char v16; // di
  char v17; // si
  int v18; // eax
  __int64 (__fastcall **v19)(_QWORD, char *, __int64, _DWORD *, char); // rax

  v8 = a6;
  v10 = 1;
  v11 = 1LL;
  v12 = a4;
  if ( a2 )
    v11 = a2;
  if ( (unsigned int)v11 > 4 )
    return 0;
  v14 = (unsigned int)(v11 - 1);
  v15 = (__int64 *)((char *)&Ports + 40 * v14);
  if ( *v15 )
    return 0;
  if ( a6 )
  {
    v10 = a8;
    v17 = a7;
    v16 = a5;
  }
  else
  {
    v16 = 0;
    v17 = 8;
    if ( a3 )
    {
      v8 = 1;
      goto LABEL_12;
    }
    a3 = (unsigned int)v11;
  }
  if ( !a3 || a6 >= 0x15u )
    return 0;
LABEL_12:
  UartHardwareDriver = (__int64)UartHardwareDrivers[v8];
  if ( !UartHardwareDriver )
    return 0;
  if ( v16 )
  {
    a3 = MmMapIoSpaceEx(a3, 4096LL, 0x204u);
    if ( !a3 )
      return 0;
  }
  *v15 = a3;
  v18 = 19200;
  if ( a1 )
    v18 = a1;
  LOBYTE(a4) = v10;
  dword_140D1BFF8[10 * v14] = v18;
  LOBYTE(v11) = v16;
  v19 = (__int64 (__fastcall **)(_QWORD, char *, __int64, _DWORD *, char))UartHardwareDriver;
  *v12 = v14;
  return (*v19)(0LL, (char *)&Ports + 40 * v14, v11, a4, v17);
}
