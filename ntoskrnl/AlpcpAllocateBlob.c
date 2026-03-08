/*
 * XREFs of AlpcpAllocateBlob @ 0x1407CBB50
 * Callers:
 *     AlpcpCreateRegion @ 0x1406A0608 (AlpcpCreateRegion.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x1406D45F8 (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140710ED0 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcpCreateSection @ 0x140712378 (AlpcpCreateSection.c)
 *     AlpcpAllocateMessage @ 0x140712E84 (AlpcpAllocateMessage.c)
 *     AlpcpCreateClientPort @ 0x140713330 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x14077D738 (AlpcpCreateConnectionPort.c)
 *     AlpcpCreateReserve @ 0x140781384 (AlpcpCreateReserve.c)
 *     AlpcpSendMessage @ 0x1407CAFB0 (AlpcpSendMessage.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

char *__fastcall AlpcpAllocateBlob(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  char *result; // rax
  char v6; // dl
  char v7; // cl

  v3 = a2 + 48;
  if ( a3 || *(_QWORD *)(a1 + 48) < v3 )
  {
    if ( *(_QWORD *)(a1 + 48) )
      result = (char *)(*((__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))&AlpcpLookasides
                        + 16 * (unsigned __int64)*(unsigned int *)(a1 + 8)
                        + 6))(
                         1LL,
                         v3,
                         *(unsigned int *)(a1 + 4));
    else
      result = (char *)ExAllocatePool2(256LL, v3, *(unsigned int *)(a1 + 4));
    v6 = 0;
  }
  else
  {
    result = (char *)ExAllocateFromNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(a1 + 8));
    v6 = 2;
  }
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *((_QWORD *)result + 1) = 0LL;
    *((_QWORD *)result + 2) = 0LL;
    *((_QWORD *)result + 3) = 0LL;
    *((_QWORD *)result + 5) = 0LL;
    *((_QWORD *)result + 4) = 0LL;
    result[17] = *(_BYTE *)a1;
    v7 = result[16];
    *((_QWORD *)result + 1) = result;
    *(_QWORD *)result = result;
    result[16] = v6 | v7 & 0xFD;
    *((_QWORD *)result + 3) = 1LL;
    result += 48;
  }
  return result;
}
