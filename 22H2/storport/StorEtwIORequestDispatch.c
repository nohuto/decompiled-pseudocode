/*
 * XREFs of StorEtwIORequestDispatch @ 0x1C004F5DC
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0009B50 (RaUnitScsiIrp.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C001CFAC (GetSrbScsiData.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     McTemplateK0puxipu_EtwWriteTransfer @ 0x1C004E73C (McTemplateK0puxipu_EtwWriteTransfer.c)
 *     StRtlIoStorInfoGetNvCachePriority @ 0x1C005AD68 (StRtlIoStorInfoGetNvCachePriority.c)
 */

char __fastcall StorEtwIORequestDispatch(__int64 a1)
{
  __int64 v1; // rax
  char v2; // di
  __int64 v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // r14
  char v6; // r15
  __int64 v8; // rcx
  int v9; // r13d
  _BYTE *SrbScsiData; // rax
  _BYTE *v11; // r9
  __int64 v12; // r14
  int NvCachePriority; // eax
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-60h]
  char v17; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 v18[3]; // [rsp+51h] [rbp-2Fh] BYREF
  unsigned int v19; // [rsp+54h] [rbp-2Ch]
  __int64 v20; // [rsp+58h] [rbp-28h]
  GUID v21; // [rsp+60h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  v2 = 0;
  v3 = 0LL;
  v17 = 0;
  v4 = 0;
  v20 = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = -1;
  v21 = 0LL;
  v19 = 0;
  v18[0] = -1;
  IoGetActivityIdIrp(a1, &v21);
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v9 = *(_DWORD *)(v5 + 20);
    SrbScsiData = (_BYTE *)GetSrbScsiData(v5, &v17, 0LL, 0LL, 0LL, 0LL);
    v11 = SrbScsiData;
    if ( SrbScsiData )
      v2 = *SrbScsiData;
    v12 = *(_QWORD *)(v5 + 104);
    LOBYTE(NvCachePriority) = v17;
  }
  else
  {
    v11 = (_BYTE *)(v5 + 72);
    v9 = *(unsigned __int8 *)(v5 + 2);
    LOBYTE(NvCachePriority) = *(_BYTE *)(v5 + 10);
    v2 = *(_BYTE *)(v5 + 72);
    v12 = *(_QWORD *)(v5 + 56);
  }
  if ( v11 )
  {
    if ( (_BYTE)NvCachePriority == 16 )
    {
      HIBYTE(v20) = v11[2];
      BYTE6(v20) = v11[3];
      BYTE5(v20) = v11[4];
      BYTE4(v20) = v11[5];
      BYTE3(v20) = v11[6];
      BYTE2(v20) = v11[7];
      BYTE1(v20) = v11[8];
      LOBYTE(v20) = v11[9];
      HIBYTE(v19) = v11[10];
      BYTE2(v19) = v11[11];
      BYTE1(v19) = v11[12];
      LOBYTE(NvCachePriority) = v11[13];
    }
    else
    {
      BYTE3(v20) = v11[2];
      BYTE2(v20) = v11[3];
      BYTE1(v20) = v11[4];
      LOBYTE(v20) = v11[5];
      BYTE1(v19) = v11[7];
      LOBYTE(NvCachePriority) = v11[8];
    }
    v3 = v20;
    LOBYTE(v19) = NvCachePriority;
    v4 = v19;
  }
  if ( v12 )
  {
    NvCachePriority = StRtlIoStorInfoGetNvCachePriority(v12, v18);
    v8 = v18[0];
    if ( NvCachePriority < 0 )
      v8 = 255LL;
    v6 = v8;
  }
  if ( !v9 )
  {
    if ( ((v2 - 8) & 0x5F) != 0 )
    {
      LOBYTE(NvCachePriority) = v2 - 10;
      if ( ((v2 - 10) & 0x5F) == 0 )
      {
        NvCachePriority = *(_DWORD *)(a1 + 16);
        if ( (NvCachePriority & 0x42) != 0 )
        {
          if ( (byte_1C0069841 & 0x20) != 0 )
          {
            v14 = (const EVENT_DESCRIPTOR *)&EventPagingWriteRequest;
            goto LABEL_28;
          }
        }
        else if ( (byte_1C0069841 & 8) != 0 )
        {
          v14 = (const EVENT_DESCRIPTOR *)&EventWriteRequest;
          goto LABEL_28;
        }
      }
    }
    else
    {
      NvCachePriority = *(_DWORD *)(a1 + 16);
      if ( (NvCachePriority & 0x42) != 0 )
      {
        if ( (byte_1C0069841 & 0x10) != 0 )
        {
          v14 = (const EVENT_DESCRIPTOR *)&EventPagingReadRequest;
          goto LABEL_28;
        }
      }
      else if ( (byte_1C0069841 & 4) != 0 )
      {
        v14 = (const EVENT_DESCRIPTOR *)&EventReadRequest;
LABEL_28:
        LOBYTE(v16) = v2;
        LOBYTE(NvCachePriority) = McTemplateK0puxipu_EtwWriteTransfer(v8, v14, &v21, a1, v16, v4, v3, v12, v6);
      }
    }
  }
  return NvCachePriority;
}
