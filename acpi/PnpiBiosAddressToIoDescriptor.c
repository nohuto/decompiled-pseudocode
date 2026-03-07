__int64 __fastcall PnpiBiosAddressToIoDescriptor(
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
  struct _IO_RESOURCE_DESCRIPTOR *v14; // rdi
  int v15; // edx
  unsigned int v16; // eax
  unsigned int v17; // r9d
  unsigned int v18; // r13d
  int v19; // r12d
  unsigned __int16 v20; // cx
  unsigned __int8 v21; // al
  int v22; // r12d
  int v23; // edx
  NTSTATUS v24; // eax
  unsigned __int16 v25; // [rsp+40h] [rbp-48h]
  unsigned __int16 v26; // [rsp+42h] [rbp-46h]
  struct _IO_RESOURCE_DESCRIPTOR *v27; // [rsp+48h] [rbp-40h] BYREF
  __int64 v28; // [rsp+90h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+10h]
  unsigned int v30; // [rsp+A0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v4 = 0;
  v5 = BugCheckParameter2[4];
  v7 = 0LL;
  v28 = 0LL;
  v27 = 0LL;
  if ( (v5 & 1) != 0 && BugCheckParameter2[3] == 1 && (a4 & 1) != 0 )
    return 0LL;
  if ( !PnpiBiosValidateMemoryMapAttribute() )
  {
    AcpiDiagTraceMemoryReserved(
      BugCheckParameter2[3],
      v8,
      BugCheckParameter2[5],
      *((unsigned __int16 *)BugCheckParameter2 + 3),
      *((unsigned __int16 *)BugCheckParameter2 + 4),
      *((unsigned __int16 *)BugCheckParameter2 + 5),
      *((unsigned __int16 *)BugCheckParameter2 + 6),
      v9);
    return 0LL;
  }
  if ( !(_WORD)v9 )
    return 0LL;
  v13 = v11 + 8LL * v10;
  result = PnpiUpdateResourceList(v13, &v27);
  if ( (int)result >= 0 )
  {
    if ( BugCheckParameter2[3] > 1u )
    {
      v14 = v27;
    }
    else
    {
      result = PnpiUpdateResourceList(v13, &v28);
      if ( (int)result < 0 )
        return result;
      v7 = v28;
      *(_BYTE *)(v28 + 1) = -127;
      v14 = (struct _IO_RESOURCE_DESCRIPTOR *)(v7 - 32);
      *(_WORD *)(v7 + 4) = 24576;
      *(_DWORD *)(v7 + 16) = 0;
    }
    v15 = 13;
    if ( *(_WORD *)(BugCheckParameter2 + 1) < 0xDu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          13,
          11,
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
    v16 = *((unsigned __int16 *)BugCheckParameter2 + 6);
    v17 = *((unsigned __int16 *)BugCheckParameter2 + 4);
    v18 = *((unsigned __int16 *)BugCheckParameter2 + 7);
    v19 = *((unsigned __int16 *)BugCheckParameter2 + 3) + 1;
    LODWORD(v27) = v19;
    LOWORD(v28) = v17;
    v26 = v16 + v17;
    v20 = *((_WORD *)BugCheckParameter2 + 5);
    v25 = v20;
    if ( (_WORD)v16 )
    {
      ACPIInitIgnoreResourceMapDescriptor(v17, *((unsigned __int16 *)BugCheckParameter2 + 5), v16);
      LOWORD(v17) = v28;
      v15 = 13;
      v20 = v25;
    }
    v21 = BugCheckParameter2[4];
    if ( (v21 & 4) != 0 && (v21 & 8) != 0 )
    {
      v22 = v20 - (unsigned __int16)v17 + 1;
      if ( v22 != v18 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            13,
            12,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          LOWORD(v17) = v28;
        }
        v18 = v22;
      }
      if ( ((unsigned __int16)v17 & *((_WORD *)BugCheckParameter2 + 3)) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            13,
            13,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          LOWORD(v17) = v28;
        }
        v19 = 1;
      }
      else
      {
        v19 = (int)v27;
      }
    }
    v23 = BugCheckParameter2[3];
    if ( BugCheckParameter2[3] )
    {
      if ( BugCheckParameter2[3] == 1 )
      {
        v14->u.Port.Alignment = v19;
        v14->u.Port.Length = v18;
        v14->u.Port.MinimumAddress.LowPart = (unsigned __int16)v17;
        v14->u.Port.MaximumAddress.LowPart = v25;
        v14->u.Port.MaximumAddress.HighPart = 0;
        v14->u.Port.MinimumAddress.HighPart = 0;
        v14->Type = 1;
        if ( (BugCheckParameter2[5] & 0x20) != 0 )
          *(_WORD *)(v7 + 4) |= 1u;
        *(_DWORD *)(v7 + 8) = (BugCheckParameter2[5] & 0x10 | 8u) >> 3;
        *(_DWORD *)(v7 + 12) = v26;
        if ( (BugCheckParameter2[4] & 2) == 0 )
          v14->Flags |= 0x20u;
        v14->u.Port.Alignment = 1;
      }
      else if ( BugCheckParameter2[3] == 2 )
      {
        v14->Type = 6;
        v14->u.Port.Alignment = *((unsigned __int16 *)BugCheckParameter2 + 4);
        v14->u.Port.MinimumAddress.LowPart = *((unsigned __int16 *)BugCheckParameter2 + 5);
        v14->u.Port.Length = v18;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 2;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          13,
          14,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          BugCheckParameter2[3]);
      }
    }
    else
    {
      v14->u.Port.Alignment = v19;
      v14->u.Port.Length = v18;
      v14->u.Port.MinimumAddress.LowPart = (unsigned __int16)v17;
      v14->u.Port.MaximumAddress.LowPart = v25;
      v14->u.Port.MaximumAddress.HighPart = 0;
      v14->u.Port.MinimumAddress.HighPart = 0;
      v14->Type = 3;
      *(_DWORD *)(v7 + 8) = (~BugCheckParameter2[5] & 0x20 | 0x10u) >> 4;
      *(_DWORD *)(v7 + 12) = v26;
      PnpiBiosAddressHandleMemoryFlags((__int64)BugCheckParameter2, (__int64)v14);
      v14->u.Port.Alignment = 1;
    }
    v24 = PnpiBiosAddressHandleGlobalFlags((__int64)BugCheckParameter2, v29, v30, v14);
    if ( v24 < 0 )
      return (unsigned int)v24;
    return v4;
  }
  return result;
}
