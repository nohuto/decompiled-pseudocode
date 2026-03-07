__int64 __fastcall MmWriteUnloadedDriverInformation(unsigned int *a1)
{
  __int64 result; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rsi
  unsigned int i; // edi
  _QWORD *v6; // r9
  unsigned __int16 v7; // ax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( MmUnloadedDrivers )
  {
    v3 = a1 + 2;
    v4 = (unsigned int)(MmLastUnloadedDriver - 1);
    for ( i = 0; i < 0x32; ++i )
    {
      v6 = MmUnloadedDrivers;
      result = 49LL;
      if ( (unsigned int)v4 >= 0x32 )
        v4 = 49LL;
      *(_OWORD *)v3 = *(_OWORD *)((char *)MmUnloadedDrivers + 40 * v4);
      if ( !v6[5 * v4 + 1] )
        break;
      *((_QWORD *)v3 + 5) = v6[5 * v4 + 2];
      *((_QWORD *)v3 + 6) = v6[5 * v4 + 3];
      if ( *(_WORD *)v3 > 0x18u )
        *(_WORD *)v3 = 24;
      v7 = *((_WORD *)v3 + 1);
      if ( v7 > 0x18u )
      {
        *((_WORD *)v3 + 1) = 24;
        v7 = 24;
      }
      *((_QWORD *)v3 + 1) = v3 + 4;
      result = (__int64)memmove(v3 + 4, (const void *)v6[5 * v4 + 1], v7);
      v3 += 14;
      v4 = (unsigned int)(v4 - 1);
    }
  }
  else
  {
    i = 0;
  }
  *a1 = i;
  return result;
}
