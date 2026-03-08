/*
 * XREFs of rimExtractGeometryPoints @ 0x1C01D708C
 * Callers:
 *     rimExtractPointerDeviceUsages @ 0x1C01D78A0 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimExtractGeometryPoints(__int16 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r11
  unsigned int v9; // ebp
  unsigned int v10; // edi
  unsigned int v11; // r15d
  unsigned __int8 v12; // si
  int v13; // r14d
  __int64 v14; // rax
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // r10
  unsigned int v18; // ebp
  _BYTE *v19; // r10
  __int64 v20; // rax
  unsigned __int8 *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r11
  unsigned __int8 v24; // al

  v5 = a5;
  v7 = a4;
  v9 = 0;
  v10 = 0;
  v11 = a5;
  v12 = 0;
  v13 = a5 & 7;
  if ( (a5 & 7) != 0 )
    v12 = (1 << v13) - 1;
  if ( (unsigned __int16)(a1 - 48) > 1u )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3213);
    v7 = a4;
  }
  if ( a5 <= 0x20 )
  {
    if ( a5 < 8 )
    {
LABEL_11:
      if ( v11 && v9 < 4 )
        *(_BYTE *)(v9 + a3) = v12 & *(_BYTE *)(v10 + v7);
      goto LABEL_14;
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3214);
  }
  v7 = a4;
  while ( v9 < 4 )
  {
    v14 = v10;
    v11 -= 8;
    ++v10;
    v15 = *(_BYTE *)(v14 + a4);
    v16 = v9++;
    *(_BYTE *)(v16 + a3) = v15;
    if ( v11 < 8 )
      goto LABEL_11;
  }
LABEL_14:
  v17 = 16LL;
  if ( a1 != 49 )
    v17 = 12LL;
  v18 = 0;
  v19 = (_BYTE *)(a2 + v17);
  if ( v11 )
  {
    v20 = v10++;
    *v19 = (~v12 & *(unsigned __int8 *)(v20 + v7)) >> v13;
    v5 = v13 + a5 - 8;
  }
  for ( ; v5; v5 -= 8 )
  {
    if ( v18 >= 4 || v10 >= 8 )
      break;
    v21 = (unsigned __int8 *)(v7 + v10);
    v22 = v18;
    v23 = ++v18;
    v24 = *v21;
    if ( (a5 & 7) != 0 )
    {
      v19[v22] |= (v12 & v24) << (8 - v13);
      if ( (unsigned int)v23 < 4 )
        v19[v23] = (*v21 & ~v12) >> v13;
    }
    else
    {
      v19[v22] = v24;
    }
    ++v10;
    if ( v5 <= 8 )
      break;
    v7 = a4;
  }
}
