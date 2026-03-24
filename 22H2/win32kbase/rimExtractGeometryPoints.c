/*
 * XREFs of rimExtractGeometryPoints @ 0x1C017A2C8
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C017A940 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall rimExtractGeometryPoints(__int16 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // r14d
  unsigned __int8 v11; // bp
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  unsigned int v16; // r11d
  _BYTE *v17; // r9
  int v18; // edx
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  unsigned int v22; // ecx

  v5 = a5;
  v8 = 0;
  v9 = 0;
  v10 = a5;
  v11 = 0;
  v12 = a5 & 7;
  if ( (a5 & 7) != 0 )
    v11 = (1 << v12) - 1;
  LOBYTE(v13) = a1 - 48;
  if ( (unsigned __int16)(a1 - 48) > 1u )
    LOBYTE(v13) = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3147);
  if ( a5 > 0x20 )
    LOBYTE(v13) = MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3148);
  if ( a5 >= 8 )
  {
    do
    {
      if ( v8 >= 4 )
        break;
      v13 = v9;
      v10 -= 8;
      v14 = v8;
      ++v9;
      ++v8;
      LOBYTE(v13) = *(_BYTE *)(v13 + a4);
      *(_BYTE *)(v14 + a3) = v13;
    }
    while ( v10 >= 8 );
  }
  if ( v10 && v8 < 4 )
  {
    LOBYTE(v13) = v8;
    *(_BYTE *)(v8 + a3) = v11 & *(_BYTE *)(v9 + a4);
  }
  v15 = 16LL;
  if ( a1 != 49 )
    v15 = 12LL;
  v16 = 0;
  v17 = (_BYTE *)(a2 + v15);
  if ( v10 )
  {
    v13 = v9++;
    v18 = *(unsigned __int8 *)(v13 + a4);
    LODWORD(v13) = ~v11;
    *v17 = (int)(v13 & v18) >> v12;
    v5 = v12 + a5 - 8;
  }
  for ( ; v5; ++v9 )
  {
    if ( v16 >= 4 || v9 >= 8 )
      break;
    v19 = v16 + 1;
    v20 = v16++;
    v21 = *(_BYTE *)(v9 + a4);
    if ( (a5 & 7) != 0 )
    {
      v17[v20] |= (v11 & v21) << (8 - v12);
      if ( (unsigned int)v19 < 4 )
        v17[v19] = (*(unsigned __int8 *)(v9 + a4) & ~v11) >> v12;
    }
    else
    {
      v17[v20] = v21;
    }
    LODWORD(v13) = v5;
    v22 = v5 - 8;
    v5 = 0;
    if ( (unsigned int)v13 > 8 )
      v5 = v22;
  }
  return v13;
}
