/*
 * XREFs of FillClippedSGL @ 0x1C00115F0
 * Callers:
 *     FirmwareDownload @ 0x1C0011914 (FirmwareDownload.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00183BC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

bool __fastcall FillClippedSGL(unsigned int *a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r10d
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx

  if ( !a1 || !a2 )
    return 0;
  v6 = *a1;
  v7 = 0LL;
  v8 = 0LL;
  if ( *a1 )
  {
    while ( 1 )
    {
      if ( a4 )
      {
        v9 = a1[6 * v8 + 6];
        if ( a4 >= v9 )
        {
          --v6;
          if ( a4 == v9 )
            a4 = 0;
          else
            a4 -= v9;
          goto LABEL_12;
        }
        v10 = 3 * v7;
        a2[2 * v10 + 4] = a4 + a1[6 * v8 + 4];
        a2[2 * v10 + 5] = a1[6 * v8 + 5];
        a2[2 * v10 + 6] = a1[6 * v8 + 6] - a4;
        a4 = 0;
      }
      else
      {
        v11 = 3 * v7;
        a2[2 * v11 + 4] = a1[6 * v8 + 4];
        a2[2 * v11 + 5] = a1[6 * v8 + 5];
        a2[2 * v11 + 6] = a1[6 * v8 + 6];
      }
      v7 = (unsigned int)(v7 + 1);
LABEL_12:
      if ( (unsigned int)v7 < a3 )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 < *a1 )
          continue;
      }
      break;
    }
  }
  *a2 = v6;
  return (unsigned int)v7 >= v6;
}
