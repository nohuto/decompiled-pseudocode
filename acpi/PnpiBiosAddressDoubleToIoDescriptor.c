/*
 * XREFs of PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00904A0
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008EFDC (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     ACPIInitIgnoreResourceMapDescriptor @ 0x1C003AFD0 (ACPIInitIgnoreResourceMapDescriptor.c)
 *     PnpiBiosValidateMemoryMapAttribute @ 0x1C003C574 (PnpiBiosValidateMemoryMapAttribute.c)
 *     AcpiDiagTraceMemoryReserved @ 0x1C007A720 (AcpiDiagTraceMemoryReserved.c)
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1C0090C88 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosAddressHandleMemoryFlags @ 0x1C0090E04 (PnpiBiosAddressHandleMemoryFlags.c)
 *     PnpiUpdateResourceList @ 0x1C0092328 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosAddressDoubleToIoDescriptor(
        unsigned __int8 *BugCheckParameter2,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // esi
  unsigned __int8 v5; // dl
  __int64 v7; // rbp
  char v8; // dl
  unsigned int v9; // ecx
  unsigned int v10; // r8d
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rdi
  unsigned int v16; // r9d
  int v17; // r15d
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned __int8 v20; // al
  int v21; // r8d
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // [rsp+40h] [rbp-58h]
  unsigned int v26; // [rsp+44h] [rbp-54h]
  int v27; // [rsp+48h] [rbp-50h]
  _QWORD v28[9]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+10h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v29 = 0LL;
  v28[0] = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *(unsigned int *)(BugCheckParameter2 + 6),
      *(unsigned int *)(BugCheckParameter2 + 10),
      *(unsigned int *)(BugCheckParameter2 + 14),
      *(unsigned int *)(BugCheckParameter2 + 18),
      v9);
    return 0LL;
  }
  if ( !v9 )
    return 0LL;
  v13 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v13, v28);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v15 = v28[0];
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v29);
      if ( (int)result < 0 )
        return result;
      v7 = v29;
      *(_BYTE *)(v29 + 1) = -127;
      v15 = v7 - 32;
      *(_WORD *)(v7 + 4) = 24576;
      *(_DWORD *)(v7 + 16) = 0;
    }
    if ( *(unsigned __int16 *)(BugCheckParameter2 + 1) < 0x17u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          15,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          *(unsigned __int16 *)(BugCheckParameter2 + 1));
      }
      KeBugCheckEx(
        0xA5u,
        0xFuLL,
        (ULONG_PTR)BugCheckParameter2,
        *BugCheckParameter2,
        *(unsigned __int16 *)(BugCheckParameter2 + 1));
    }
    v16 = *(_DWORD *)(BugCheckParameter2 + 10);
    v17 = *(_DWORD *)(BugCheckParameter2 + 22);
    v25 = *(_DWORD *)(BugCheckParameter2 + 6) + 1;
    v18 = *(_DWORD *)(BugCheckParameter2 + 18);
    v27 = v17;
    LODWORD(v29) = v16;
    LODWORD(v28[0]) = v16 + v18;
    v19 = *(_DWORD *)(BugCheckParameter2 + 14);
    v26 = v19;
    if ( v18 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v16, v19, v18);
      v16 = v29;
      v19 = v26;
    }
    v20 = BugCheckParameter2[4];
    if ( (v20 & 4) == 0 || (v20 & 8) == 0 )
      goto LABEL_30;
    v17 = v19 - v16 + 1;
    if ( v17 == v27 )
    {
      v17 = v27;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        13,
        16,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
      v16 = v29;
    }
    if ( (v16 & *(_DWORD *)(BugCheckParameter2 + 6)) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v14,
          13,
          17,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        v16 = v29;
      }
      v21 = 1;
    }
    else
    {
LABEL_30:
      v21 = v25;
    }
    v22 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        *(_DWORD *)(v15 + 12) = v21;
        *(_DWORD *)(v15 + 8) = v17;
        *(_DWORD *)(v15 + 16) = v16;
        *(_QWORD *)(v15 + 24) = v26;
        *(_DWORD *)(v15 + 20) = 0;
        *(_BYTE *)(v15 + 1) = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v28[0];
        if ( (BugCheckParameter2[4] & 2) == 0 )
          *(_WORD *)(v15 + 4) |= 0x20u;
        *(_DWORD *)(v15 + 12) = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        *(_BYTE *)(v15 + 1) = 6;
        *(_DWORD *)(v15 + 8) = v17;
        *(_DWORD *)(v15 + 12) = *(_DWORD *)(BugCheckParameter2 + 10);
        *(_DWORD *)(v15 + 16) = *(_DWORD *)(BugCheckParameter2 + 14);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          13,
          18,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      *(_DWORD *)(v15 + 12) = v21;
      *(_DWORD *)(v15 + 8) = v17;
      *(_DWORD *)(v15 + 16) = v16;
      *(_DWORD *)(v15 + 24) = v26;
      *(_DWORD *)(v15 + 28) = 0;
      *(_DWORD *)(v15 + 20) = 0;
      *(_BYTE *)(v15 + 1) = 3;
      v23 = v28[0];
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v23;
      PnpiBiosAddressHandleMemoryFlags(BugCheckParameter2, v15);
      *(_DWORD *)(v15 + 12) = 1;
    }
    v24 = PnpiBiosAddressHandleGlobalFlags(BugCheckParameter2, v30, v31, v15);
    if ( v24 < 0 )
      return (unsigned int)v24;
    return v4;
  }
  return result;
}
