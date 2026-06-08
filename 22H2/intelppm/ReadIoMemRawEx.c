/*
 * XREFs of ReadIoMemRawEx @ 0x1C00088D0
 * Callers:
 *     ReadGenAddrEx @ 0x1C0008734 (ReadGenAddrEx.c)
 *     WriteGenAddrEx @ 0x1C0008A68 (WriteGenAddrEx.c)
 * Callees:
 *     ReadIoMemRaw @ 0x1C0008848 (ReadIoMemRaw.c)
 */

unsigned __int64 __fastcall ReadIoMemRawEx(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v4; // r9d
  int v5; // ecx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 4);
  if ( *(_BYTE *)a1 != 10 )
    return ReadIoMemRaw(a1);
  v4 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
  if ( v4 > 8 )
  {
    if ( v4 > 0x10 )
    {
      v5 = 64;
      if ( v4 <= 0x20 )
        v5 = 32;
    }
    else
    {
      v5 = 16;
    }
  }
  else
  {
    v5 = 8;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 88LL);
  switch ( v5 )
  {
    case 8:
      return *(unsigned __int8 *)(v2 + v6);
    case 16:
      return *(unsigned __int16 *)(v2 + v6);
    case 32:
      return *(unsigned int *)(v2 + v6);
  }
  return *(_QWORD *)(v2 + v6);
}
