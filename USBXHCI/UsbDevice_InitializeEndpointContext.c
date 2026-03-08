/*
 * XREFs of UsbDevice_InitializeEndpointContext @ 0x1C000CD28
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000BBEC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00495EC (UsbDevice_ReconfigureEndpoint.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C000CEDC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C000CF3C (Endpoint_GetMaxPrimaryStreams.c)
 */

unsigned int __fastcall UsbDevice_InitializeEndpointContext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r8d
  char v7; // al
  int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  unsigned __int8 v11; // cl
  int v12; // edx
  char v13; // cl
  unsigned __int8 v14; // al
  int v15; // r8d
  int v16; // eax
  int MaxPrimaryStreams; // eax
  _DWORD *v18; // r10
  __int64 v19; // rcx
  __int64 DequeuePointer; // rax
  __int64 v21; // r10
  int v22; // r9d
  __int16 v23; // cx
  unsigned int v24; // r9d
  unsigned int result; // eax
  int v26; // edx
  __int64 v27; // rax
  int v28; // edx
  char v29; // al
  int v30; // r9d
  char v31; // cl
  int v32; // eax
  int v33; // edx
  int v34; // ecx

  v5 = 0;
  *(_DWORD *)(a3 + 4) ^= (*(_DWORD *)(a3 + 4) ^ (8 * *(_DWORD *)(a2 + 120))) & 0x38;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a2 + 100) & 0x7FF;
  v7 = *(_BYTE *)(a2 + 99) & 3;
  if ( v7 == 1
    || (*(_QWORD *)(*(_QWORD *)a2 + 336LL) & 0x10000000000000LL) != 0
    && v7 == 3
    && *(char *)(a2 + 98) < 0
    && (v27 = *(_QWORD *)(a2 + 16), *(_WORD *)(v27 + 124) == 1529)
    && *(_WORD *)(v27 + 126) == 4353
    && *(_DWORD *)(v27 + 36) > 1u )
  {
    v8 = 0;
  }
  else
  {
    v8 = 6;
  }
  v9 = v8 | *(_DWORD *)(a3 + 4) & 0xFFFFFFF9;
  *(_DWORD *)(a3 + 4) = v9;
  v10 = *(_DWORD *)(a1 + 20);
  v11 = *(_BYTE *)(a2 + 102);
  switch ( v10 )
  {
    case 0:
      v28 = v9 & 0x38;
      if ( v28 != 56 && v28 != 24 )
        goto LABEL_23;
      goto LABEL_32;
    case 1:
      v26 = v9 & 0x38;
      if ( v26 != 56 && v26 != 24 )
      {
        if ( ((v26 - 8) & 0xFFFFFFDF) != 0 )
        {
LABEL_23:
          *(_DWORD *)(a2 + 152) = *(unsigned __int16 *)(a3 + 6);
          break;
        }
        *(_WORD *)(a3 + 2) = 3;
LABEL_22:
        v5 = *(unsigned __int16 *)(a3 + 6);
        *(_WORD *)(a3 + 18) = v5;
        goto LABEL_23;
      }
      if ( v11 < 2u )
      {
        *(_BYTE *)(a3 + 2) = 3;
        goto LABEL_45;
      }
      if ( v11 < 4u )
      {
        *(_BYTE *)(a3 + 2) = 4;
        goto LABEL_45;
      }
      if ( v11 < 8u )
      {
        *(_BYTE *)(a3 + 2) = 5;
        if ( *(_DWORD *)(a1 + 40) )
          goto LABEL_45;
        v29 = 5;
        if ( (_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a1 + 8) + 336LL), 8).m128i_u32[0] & 0x20000) != 0 )
          v29 = 4;
        goto LABEL_44;
      }
LABEL_32:
      if ( v11 < 0x10u )
      {
        *(_BYTE *)(a3 + 2) = 6;
LABEL_45:
        *(_BYTE *)(a3 + 3) = 0;
        goto LABEL_22;
      }
      v29 = 8 - (v11 < 0x20u);
LABEL_44:
      *(_BYTE *)(a3 + 2) = v29;
      goto LABEL_45;
    case 2:
      v12 = v9 & 0x38;
      if ( v12 == 56 || ((v12 - 8) & 0xFFFFFFCF) == 0 )
      {
        if ( v11 < 2u )
        {
          v13 = 0;
        }
        else if ( v11 < 6u )
        {
          v13 = v11 - 1;
        }
        else
        {
          v13 = 5;
        }
        *(_BYTE *)(a3 + 2) = v13;
        v14 = (*(_WORD *)(a2 + 100) >> 11) & 3;
        *(_BYTE *)(a3 + 3) = 0;
        v15 = v14;
        v16 = *(unsigned __int16 *)(a3 + 6);
        *(_BYTE *)(a3 + 5) = v15;
        v5 = v16 * (v15 + 1);
        *(_WORD *)(a3 + 18) = v5;
      }
      *(_DWORD *)(a2 + 152) = *(unsigned __int16 *)(a3 + 6) * (*(unsigned __int8 *)(a3 + 5) + 1);
      break;
    case 3:
      v30 = v9 & 0x38;
      if ( v30 == 56 || ((v30 - 8) & 0xFFFFFFCF) == 0 )
      {
        if ( v11 >= 2u )
        {
          if ( v11 >= 6u )
            v31 = 5;
          else
            v31 = v11 - 1;
        }
        else
        {
          v31 = 0;
        }
        *(_BYTE *)(a3 + 2) = v31;
        v32 = *(unsigned __int8 *)(a2 + 106);
        if ( (v32 & 0x80u) == 0 )
        {
          v5 = *(unsigned __int16 *)(a2 + 107);
          *(_DWORD *)a3 ^= (*(_DWORD *)a3 ^ (v32 << 8)) & 0x300;
        }
        else
        {
          v5 = *(_DWORD *)(a2 + 113);
          *(_DWORD *)a3 &= 0xFFFFFCFF;
        }
        *(_WORD *)(a3 + 18) = v5;
        *(_BYTE *)(a3 + 3) = BYTE2(v5);
      }
      v33 = v9 & 0x38;
      if ( v33 == 40 || v33 == 8 )
        v34 = v5;
      else
        v34 = *(unsigned __int16 *)(a3 + 6) * (*(unsigned __int8 *)(a3 + 5) + 1);
      *(_DWORD *)(a2 + 152) = v34;
      *(_BYTE *)(a3 + 5) = *(_BYTE *)(a2 + 105);
      break;
  }
  if ( *(_BYTE *)(a3 + 2) > 7u && (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x10000LL) != 0 )
    *(_BYTE *)(a3 + 2) = 7;
  *(_DWORD *)(a2 + 148) = *(unsigned __int8 *)(a3 + 5);
  *(_WORD *)(a3 + 16) = v5 >> 1;
  MaxPrimaryStreams = Endpoint_GetMaxPrimaryStreams(a2);
  *v18 ^= (*v18 ^ (MaxPrimaryStreams << 10)) & 0x7C00;
  DequeuePointer = Endpoint_GetDequeuePointer(v19, 0LL);
  *(_QWORD *)(v21 + 8) = DequeuePointer;
  v23 = v22;
  LODWORD(DequeuePointer) = v22;
  v24 = v22 & 0xFFFF7FFF;
  result = DequeuePointer | 0x8000;
  if ( (v23 & 0x7C00) != 0 )
    v24 = result;
  *(_DWORD *)v21 = v24;
  return result;
}
