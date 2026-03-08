/*
 * XREFs of CarCopyDriverName @ 0x1405D0358
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x1405D0C78 (CarGetDriverInfoFromViolationStack.c)
 *     CarLoadImageHandler @ 0x1405D0EB4 (CarLoadImageHandler.c)
 *     CarInitializeTelemetryData @ 0x1405D1970 (CarInitializeTelemetryData.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall CarCopyDriverName(_WORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  unsigned int v7; // r9d
  __int64 v8; // rdx

  if ( a1 )
  {
    memset(a1, 0, 0x40uLL);
    if ( a2 && (v4 = *((_QWORD *)a2 + 1)) != 0 )
    {
      v5 = 0;
      v6 = *a2 >> 1;
      if ( v6 >= 0x20 )
      {
        v7 = 31;
      }
      else
      {
        v7 = *a2 >> 1;
        if ( !v6 )
          return;
      }
      v8 = 0LL;
      do
      {
        a1[v8] = *(_WORD *)(v8 * 2 + v4);
        v4 = *((_QWORD *)a2 + 1);
        if ( !*(_WORD *)(v8 * 2 + v4) )
          break;
        ++v5;
        ++v8;
      }
      while ( v5 < v7 );
      if ( v6 >= 0x20 )
        a1[30] = 126;
    }
    else
    {
      *(_DWORD *)a1 = 4259918;
    }
  }
}
