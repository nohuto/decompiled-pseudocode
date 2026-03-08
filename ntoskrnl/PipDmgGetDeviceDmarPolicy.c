/*
 * XREFs of PipDmgGetDeviceDmarPolicy @ 0x140842678
 * Callers:
 *     PiDmaGuardProcessPreAddDevice @ 0x14079656C (PiDmaGuardProcessPreAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084274C (PipDmgGetDriverDmarCompatLevel.c)
 */

__int64 __fastcall PipDmgGetDeviceDmarPolicy(_QWORD *a1)
{
  __int64 v1; // rbp
  _QWORD *v2; // rsi
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  int DriverDmarCompatLevel; // eax
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-38h]

  v1 = 6LL;
  v2 = a1 + 2;
  v9 = 0LL;
  v4 = 1;
  do
  {
    v5 = (_QWORD *)*v2;
    while ( v5 )
    {
      DriverDmarCompatLevel = PipDmgGetDriverDmarCompatLevel(*v5);
      v5 = (_QWORD *)v5[1];
      ++*((_DWORD *)&v9 + DriverDmarCompatLevel);
    }
    ++v2;
    --v1;
  }
  while ( v1 );
  if ( !DWORD1(v9) )
  {
    if ( HIDWORD(v9) )
    {
      v8 = *(_QWORD *)(*a1 + 720LL);
      if ( v8 && (*(_BYTE *)(v8 + 16) & 0x24) != 0 )
        return 2;
      else
        return 0;
    }
    else
    {
      return DWORD2(v9) != 0 ? 2 : 0;
    }
  }
  return v4;
}
