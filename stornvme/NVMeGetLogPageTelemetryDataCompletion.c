/*
 * XREFs of NVMeGetLogPageTelemetryDataCompletion @ 0x1C0015DE0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     GetSrbDataBuffer @ 0x1C0007AB8 (GetSrbDataBuffer.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EE04 (NVMeFreeDmaBuffer.c)
 */

char __fastcall NVMeGetLogPageTelemetryDataCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rax
  __int64 v5; // rbx
  size_t v6; // rdi
  char *SrbDataBuffer; // rax
  int v8; // r9d
  char v9; // r10
  char *v10; // rbp
  unsigned int *v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rdx
  char v14; // cl
  char v15; // al
  char v16; // cl
  char v17; // al
  char v18; // cl
  char v19; // cl
  size_t v20; // r8
  const void *v21; // rdx
  char *v22; // rcx
  unsigned int *v24; // [rsp+C0h] [rbp+8h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v24 = 0LL;
  v5 = SrbExtension;
  v6 = *(unsigned int *)(SrbExtension + 4240);
  SrbDataBuffer = (char *)GetSrbDataBuffer(a2, &v24);
  v10 = SrbDataBuffer;
  if ( *(_BYTE *)(a2 + 3) == 1 )
  {
    v11 = v24;
    if ( v8 )
    {
      if ( (unsigned int)v6 < 0x200 || *v24 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) != v9 )
        goto LABEL_18;
      v21 = *(const void **)(v5 + 4200);
      v20 = v6;
      v22 = SrbDataBuffer;
LABEL_17:
      LOBYTE(SrbDataBuffer) = (unsigned __int8)memmove(v22, v21, v20);
LABEL_18:
      *v11 = v6;
      v12 = (_QWORD *)(v5 + 4200);
      goto LABEL_22;
    }
    if ( *(_BYTE *)(a1 + 20) == v9 )
    {
      LOBYTE(SrbDataBuffer) = (unsigned __int8)NVMeZeroMemory(SrbDataBuffer, *v24);
      v9 = 0;
    }
    v12 = (_QWORD *)(v5 + 4200);
    v13 = *(_QWORD *)(v5 + 4200);
    if ( (unsigned int)v6 >= 0x200 )
    {
      v14 = *(_BYTE *)(v13 + 5);
      if ( *(_BYTE *)(a1 + 20) == v9 )
      {
        v10[7] = v14;
        v10[6] = *(_BYTE *)(v13 + 6);
        v10[5] = *(_BYTE *)(v13 + 7);
        v10[9] = *(_BYTE *)(v13 + 8);
        v10[8] = *(_BYTE *)(v13 + 9);
        v10[11] = *(_BYTE *)(v13 + 10);
        v10[10] = *(_BYTE *)(v13 + 11);
        v10[13] = *(_BYTE *)(v13 + 12);
        v10[12] = *(_BYTE *)(v13 + 13);
        v10[17] = *(_BYTE *)(v13 + 16);
        v10[16] = *(_BYTE *)(v13 + 17);
        v10[15] = *(_BYTE *)(v13 + 18);
        v10[14] = *(_BYTE *)(v13 + 19);
        v10[382] = *(_BYTE *)(v13 + 382);
        LOBYTE(SrbDataBuffer) = *(_BYTE *)(v13 + 383);
        v10[383] = (char)SrbDataBuffer;
        *((_OWORD *)v10 + 24) = *(_OWORD *)(v13 + 384);
        *((_OWORD *)v10 + 25) = *(_OWORD *)(v13 + 400);
        *((_OWORD *)v10 + 26) = *(_OWORD *)(v13 + 416);
        *((_OWORD *)v10 + 27) = *(_OWORD *)(v13 + 432);
        *((_OWORD *)v10 + 28) = *(_OWORD *)(v13 + 448);
        *((_OWORD *)v10 + 29) = *(_OWORD *)(v13 + 464);
        *((_OWORD *)v10 + 30) = *(_OWORD *)(v13 + 480);
        *((_OWORD *)v10 + 31) = *(_OWORD *)(v13 + 496);
      }
      else
      {
        *(_BYTE *)(v13 + 5) = *(_BYTE *)(v13 + 7);
        v15 = *(_BYTE *)(v13 + 9);
        *(_BYTE *)(v13 + 7) = v14;
        v16 = *(_BYTE *)(v13 + 8);
        *(_BYTE *)(v13 + 8) = v15;
        v17 = *(_BYTE *)(v13 + 11);
        *(_BYTE *)(v13 + 9) = v16;
        v18 = *(_BYTE *)(v13 + 10);
        *(_BYTE *)(v13 + 10) = v17;
        LOBYTE(SrbDataBuffer) = *(_BYTE *)(v13 + 13);
        *(_BYTE *)(v13 + 11) = v18;
        v19 = *(_BYTE *)(v13 + 12);
        *(_BYTE *)(v13 + 12) = (_BYTE)SrbDataBuffer;
        *(_BYTE *)(v13 + 13) = v19;
      }
      if ( (unsigned int)v6 <= 0x200 || *v11 < (unsigned int)v6 || *(_BYTE *)(a1 + 20) != v9 )
        goto LABEL_18;
      v20 = (unsigned int)(v6 - 512);
      v21 = (const void *)(v13 + 512);
      v22 = v10 + 512;
      goto LABEL_17;
    }
  }
  else
  {
    v12 = (_QWORD *)(v5 + 4200);
  }
  if ( *(_BYTE *)(a1 + 24) != v9 )
    LOBYTE(SrbDataBuffer) = StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
LABEL_22:
  if ( !*(_BYTE *)(a1 + 20) )
    LOBYTE(SrbDataBuffer) = NVMeFreeDmaBuffer(
                              a1,
                              *(unsigned int *)(v5 + 4240),
                              (__int64 *)(v5 + 4200),
                              *(_QWORD *)(v5 + 4208));
  *(_BYTE *)(v5 + 4253) |= 8u;
  *(_DWORD *)(v5 + 4240) = 0;
  *v12 = 0LL;
  return (char)SrbDataBuffer;
}
