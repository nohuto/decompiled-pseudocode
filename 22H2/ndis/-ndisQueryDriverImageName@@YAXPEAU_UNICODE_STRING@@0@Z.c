/*
 * XREFs of ?ndisQueryDriverImageName@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C002E8B0
 * Callers:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C002E810 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisFRegisterFilterDriver @ 0x1C002F530 (NdisFRegisterFilterDriver.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036A70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ?ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z @ 0x1C0136AD4 (-ndisRegisterMiniportDriver@@_Y2PAGENPNP@@AHPEAXPEAU_NDIS51_MINIPORT_CHARACTERISTICS@@IPEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0040B00 (memset.c)
 */

void __fastcall ndisQueryDriverImageName(struct _UNICODE_STRING *a1, struct _UNICODE_STRING *a2)
{
  wchar_t *Buffer; // rbx
  unsigned __int16 v4; // bx
  PVOID v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v11; // di
  wchar_t *PoolWithTag; // rax
  const WCHAR *v13; // rax
  PVOID P[2]; // [rsp+38h] [rbp-39h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+48h] [rbp-29h] BYREF

  *(_OWORD *)P = 0LL;
  if ( !a1->Length
    || (Buffer = a1->Buffer) == 0LL
    || (memset(QueryTable, 0, sizeof(QueryTable)),
        QueryTable[0].Flags = 304,
        QueryTable[0].Name = L"ImagePath",
        QueryTable[0].DefaultType = 0x2000000,
        QueryTable[0].EntryContext = P,
        RtlQueryRegistryValuesEx(1u, (PCWSTR)Buffer, QueryTable, 0LL, 0LL)) )
  {
LABEL_11:
    v5 = P[1];
    goto LABEL_12;
  }
  v4 = 0;
  v5 = P[1];
  v6 = 0;
  v7 = LOWORD(P[0]) >> 1;
  if ( LOWORD(P[0]) >> 1 )
  {
    do
    {
      v8 = v6 + 1;
      v9 = v6 + 1;
      if ( *((_WORD *)P[1] + v6++) != 92 )
        v9 = v4;
      v4 = v9;
    }
    while ( v8 < v7 );
  }
  if ( v4 < v7 )
  {
    v11 = LOWORD(P[0]) + 2 * (1 - v4);
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x6E61444Eu);
    a2->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      v13 = (const WCHAR *)P[1];
      a2->Length = 0;
      a2->MaximumLength = v11;
      RtlAppendUnicodeToString(a2, &v13[v4]);
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
}
