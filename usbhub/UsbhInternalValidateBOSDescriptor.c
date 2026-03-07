char __fastcall UsbhInternalValidateBOSDescriptor(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v4; // r10
  __int64 v5; // r11
  char v6; // r9
  unsigned int v7; // eax
  unsigned __int16 v8; // cx

  v4 = a2;
  v5 = a1;
  v6 = 1;
  if ( !a2 )
    Log(a1, 256, 1447187249, 0LL, 0LL);
  v7 = *(_DWORD *)(a3 + 16);
  if ( v7 < 5 )
  {
    Log(v5, 256, 1447187250, v7, 0LL);
    v6 = 0;
  }
  if ( v4[1] != 15 )
  {
    Log(v5, 256, 1447187251, v4[1], 0LL);
    v6 = 0;
  }
  if ( *v4 != 5 )
  {
    Log(v5, 256, 1447187252, *v4, 0LL);
    v6 = 0;
  }
  v8 = *((_WORD *)v4 + 1);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)a3 + v8;
  if ( v8 < 5u )
    Log(v5, 256, 1447187253, 0LL, 0LL);
  if ( *((unsigned __int16 *)v4 + 1) < *v4 + 2 * (unsigned int)v4[4] )
  {
    Log(v5, 256, 1447187254, *((unsigned __int16 *)v4 + 1), 0LL);
    v6 = 0;
  }
  if ( !v4[4] )
    Log(v5, 256, 1447187255, 0LL, 0LL);
  return v6;
}
