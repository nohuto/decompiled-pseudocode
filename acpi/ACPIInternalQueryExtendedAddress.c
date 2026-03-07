__int64 __fastcall ACPIInternalQueryExtendedAddress(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  int v4; // ebx
  __int128 v6; // [rsp+28h] [rbp-19h] BYREF
  __int128 v7; // [rsp+38h] [rbp-9h]
  void (__fastcall *v8)(_QWORD, __int64); // [rsp+48h] [rbp+7h]
  _QWORD v9[9]; // [rsp+50h] [rbp+Fh] BYREF

  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(v9, 0, sizeof(v9));
  v9[4] = 0LL;
  v9[1] = &GUID_PNP_EXTENDED_ADDRESS_INTERFACE;
  LOWORD(v9[0]) = 2075;
  v9[3] = &v6;
  LODWORD(v9[2]) = 65576;
  v4 = ACPIInternalSendSynchronousIrp(DeviceObject);
  if ( v4 >= 0 )
  {
    if ( v8 )
    {
      if ( WORD1(v6) == 1 )
      {
        v8(*((_QWORD *)&v6 + 1), a2);
        if ( *((_QWORD *)&v7 + 1) )
          (*((void (__fastcall **)(_QWORD))&v7 + 1))(*((_QWORD *)&v6 + 1));
      }
    }
  }
  return (unsigned int)v4;
}
