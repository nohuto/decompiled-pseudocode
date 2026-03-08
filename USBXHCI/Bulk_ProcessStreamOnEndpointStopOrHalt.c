/*
 * XREFs of Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C0046E58
 * Callers:
 *     Bulk_EP_FSEReceived @ 0x1C000FC40 (Bulk_EP_FSEReceived.c)
 *     Bulk_EP_EndpointHalted @ 0x1C0046BB0 (Bulk_EP_EndpointHalted.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000E120 (WPP_RECORDER_SF_DDDD.c)
 *     Bulk_FindStage @ 0x1C000E218 (Bulk_FindStage.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessStreamOnEndpointStopOrHalt(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 v4; // r11
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // r10
  __int64 v8; // r9
  int v9; // r8d
  unsigned int v10; // edx
  bool v11; // cl
  unsigned int v12; // edx
  size_t v13; // r8
  int v14; // edx
  __int64 result; // rax
  unsigned int v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v17; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v16 = 0;
  v17 = 0LL;
  if ( !Bulk_FindStage(
          a1,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 136) + 32LL) + 16LL) + 16LL * *(unsigned int *)(a1 + 64)) & 0xFFFFFFFFFFFFFFF0uLL,
          (__int64 *)&v17,
          &v16)
    || (v3 = (__int64)v17) == 0 )
  {
    result = *(unsigned int *)(a1 + 348);
    goto LABEL_24;
  }
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 64);
  v6 = *v17;
  v7 = *(_QWORD *)(*(_QWORD *)v4 + 336LL);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 136) + 32LL) + 16LL) + 16LL * v5;
  if ( (v7 & 0x1800000000LL) != 0 )
  {
    if ( (v7 & 0x1000000000LL) == 0 )
    {
      v10 = *(_DWORD *)(v8 + 8);
      v11 = (v10 & 0x80u) == 0;
      v12 = v10 >> 8;
      v13 = 0LL;
      if ( !v11 || (v7 & 0x200000000000LL) == 0 )
        v13 = v12;
      goto LABEL_13;
    }
    if ( (v7 & 0x800000000LL) != 0 )
    {
      v13 = 0LL;
      goto LABEL_13;
    }
    v9 = *(_DWORD *)(v8 + 12);
  }
  else
  {
    v9 = *(_DWORD *)(v8 + 8);
  }
  v13 = v9 & 0xFFFFFF;
LABEL_13:
  if ( (v7 & 0x10000000000LL) != 0 )
    v13 = (*(_DWORD *)(v8 + 12) & 0x1FFFF) + (unsigned int)v13;
  if ( (unsigned int)v13 > *((_DWORD *)v17 + 10) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(v4 + 80),
        v14,
        14,
        12,
        (__int64)&WPP_92c598da33ef340e00f5370896d293ba_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(v4 + 144),
        v5,
        v13);
    }
    v13 = 0LL;
  }
  *(_DWORD *)(v6 + 108) += v13;
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 48) + 32LL) & 1) != 0 && *(_DWORD *)(v6 + 76) == 2 )
    memmove(*(void **)(v3 + 64), *(const void **)(*(_QWORD *)(v3 + 72) + 16LL), v13);
  result = v16;
LABEL_24:
  *(_DWORD *)(a1 + 352) = result;
  return result;
}
