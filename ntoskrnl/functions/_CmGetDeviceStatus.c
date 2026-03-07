__int64 __fastcall CmGetDeviceStatus(
        int a1,
        const WCHAR *a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  int v12; // r13d
  NTSTATUS inited; // esi
  int v15; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v18 = 0;
  *v7 = 0;
  *v9 = 0;
  v12 = (int)a2;
  DestinationString = 0LL;
  v15 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&DestinationString, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, v12, a3, 11, (__int64)&v18, (__int64)&v15, (__int64)&a7, 0)
        && a7 >= 4
        && v18 == 4 )
      {
        v8 = v15;
      }
      if ( (v8 & 4) != 0 )
        *a4 |= 0x10u;
      if ( (*a4 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 |= 0x400u;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
