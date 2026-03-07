_DWORD *__fastcall DmrConvertDeviceScope(__int64 a1, _BYTE *a2)
{
  _DWORD *v2; // rbx
  __int16 v4; // bp
  unsigned __int16 v5; // di
  _DWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = a1;
  if ( *a2 == 1 )
  {
    v5 = (unsigned __int8)a2[1] - 6;
    if ( (v5 & 1) == 0 )
    {
      v7 = 0LL;
      ExtEnvAllocateMemory(a1, (unsigned int)v5 + 24, &v7);
      v2 = v7;
      if ( v7 )
      {
        *v7 = 1;
        *((_WORD *)v2 + 4) = v4;
        *((_BYTE *)v2 + 11) = a2[5];
        *((_WORD *)v2 + 7) = v5 >> 1;
        *((_QWORD *)v2 + 2) = v2 + 6;
        memmove(v2 + 6, a2 + 6, v5);
      }
    }
  }
  return v2;
}
