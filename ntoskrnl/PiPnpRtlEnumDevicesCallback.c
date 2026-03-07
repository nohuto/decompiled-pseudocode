__int64 __fastcall PiPnpRtlEnumDevicesCallback(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v5 = 0;
  *a3 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 8))(
         *(_QWORD *)a2,
         *(_QWORD *)(a1 + 16),
         *(_QWORD *)(a2 + 16));
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          return (unsigned int)-1073741248;
        else
          return (unsigned int)-1073741595;
      }
    }
    else
    {
      *(_BYTE *)(a2 + 24) = 1;
    }
    *a3 = 1;
  }
  return v5;
}
