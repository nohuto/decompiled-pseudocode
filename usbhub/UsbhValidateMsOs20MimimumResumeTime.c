char __fastcall UsbhValidateMsOs20MimimumResumeTime(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  __int64 v4; // r9
  int v5; // r8d

  v3 = *a2;
  if ( (*a2 & 0x80u) == 0 )
  {
    if ( *a3 == 6 )
    {
      if ( *((_BYTE *)a3 + 4) <= 0xAu )
      {
        v4 = *((unsigned __int8 *)a3 + 5);
        if ( (unsigned __int8)(v4 - 1) <= 0x13u )
        {
          *((_QWORD *)a2 + 4) = a3;
          *a2 = v3 | 0x80;
          return 1;
        }
        v5 = 1447907891;
      }
      else
      {
        v4 = *((unsigned __int8 *)a3 + 4);
        v5 = 1447907890;
      }
    }
    else
    {
      v4 = *a3;
      v5 = 1447907889;
    }
  }
  else
  {
    v4 = 0LL;
    v5 = 1447907888;
  }
  Log(a1, 256, v5, v4, 0LL);
  return 0;
}
