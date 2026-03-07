__int64 __fastcall UsbhQuerySSstate(__int64 a1, _BYTE *a2)
{
  _DWORD *v3; // rax
  int v4; // ecx
  unsigned int v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  __int16 v8; // [rsp+40h] [rbp-18h]

  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v3 = FdoExt(a1);
  if ( *((_QWORD *)v3 + 539) )
  {
    v4 = (*((__int64 (__fastcall **)(_QWORD, __int64 *, __int64, unsigned int *))v3 + 539))(
           *((_QWORD *)v3 + 529),
           &v7,
           10LL,
           &v6);
    if ( v4 >= 0 )
    {
      if ( v6 < 0xA )
        return (unsigned int)-1073741811;
      else
        *a2 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return (unsigned int)v4;
}
