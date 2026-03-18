/*
 * XREFs of rimExtractGeometryPoints @ 0x1C01AF988
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C01B00C4 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimExtractGeometryPoints(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // r10
  __int16 v10; // r12
  unsigned int v11; // r14d
  unsigned __int8 v12; // bp
  int v13; // r15d
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // r11d
  _BYTE *v17; // r9
  int v18; // edx
  __int64 v19; // r10
  __int64 v20; // rdx

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v9 = a4;
  v10 = a1;
  v11 = a5;
  v12 = 0;
  v13 = a5 & 7;
  if ( (a5 & 7) != 0 )
  {
    a1 = a5 & 7;
    v12 = (1 << v13) - 1;
  }
  LOBYTE(v14) = v10 - 48;
  if ( (unsigned __int16)(v10 - 48) > 1u )
  {
    LOBYTE(v14) = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 1LL);
    v9 = a4;
  }
  if ( a5 <= 0x20 )
  {
    if ( a5 < 8 )
    {
LABEL_11:
      if ( v11 && (unsigned int)v6 < 4 )
        *(_BYTE *)(v6 + a3) = v12 & *(_BYTE *)(v7 + v9);
      goto LABEL_14;
    }
  }
  else
  {
    LOBYTE(v14) = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, 1LL);
  }
  v9 = a4;
  while ( (unsigned int)v6 < 4 )
  {
    v11 -= 8;
    *(_BYTE *)(v6 + a3) = *(_BYTE *)(v7 + a4);
    v7 = (unsigned int)(v7 + 1);
    v6 = (unsigned int)(v6 + 1);
    if ( v11 < 8 )
      goto LABEL_11;
  }
LABEL_14:
  v15 = 16LL;
  if ( v10 != 49 )
    v15 = 12LL;
  v16 = 0;
  v17 = (_BYTE *)(a2 + v15);
  if ( v11 )
  {
    v18 = *(unsigned __int8 *)(v7 + v9);
    v7 = (unsigned int)(v7 + 1);
    v14 = ~v12;
    *v17 = (v14 & v18) >> v13;
    v5 = v13 + a5 - 8;
  }
  for ( ; v5; v5 -= 8 )
  {
    if ( v16 >= 4 || (unsigned int)v7 >= 8 )
      break;
    LOBYTE(v14) = *(_BYTE *)(v7 + a4);
    v19 = v16 + 1;
    v20 = v16++;
    if ( (a5 & 7) != 0 )
    {
      LOBYTE(v14) = (v12 & (unsigned __int8)v14) << (8 - v13);
      v17[v20] |= v14;
      if ( (unsigned int)v19 < 4 )
      {
        v14 = *(unsigned __int8 *)(v7 + a4);
        v17[v19] = (v14 & ~v12) >> v13;
      }
    }
    else
    {
      v17[v20] = v14;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( v5 <= 8 )
      break;
  }
  return v14;
}
