/*
 * XREFs of IopLiveDumpOpenVMMemoryPartition @ 0x140557AD8
 * Callers:
 *     IoCaptureLiveDump @ 0x140948A78 (IoCaptureLiveDump.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x1404148F0 (ZwOpenPartition.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x140558F98 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall IopLiveDumpOpenVMMemoryPartition(__int64 a1)
{
  int v2; // ebx
  void *v3; // rcx
  bool v4; // al
  bool v6; // [rsp+38h] [rbp-69h] BYREF
  PVOID Object; // [rsp+40h] [rbp-61h] BYREF
  __int64 v8; // [rsp+48h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-51h] BYREF
  __int64 v10; // [rsp+60h] [rbp-41h]
  __int64 v11; // [rsp+68h] [rbp-39h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-31h]
  int v13; // [rsp+78h] [rbp-29h]
  int v14; // [rsp+7Ch] [rbp-25h]
  __int128 v15; // [rsp+80h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+98h] [rbp-9h] BYREF
  __int64 *v17; // [rsp+B8h] [rbp+17h]
  int v18; // [rsp+C0h] [rbp+1Fh]
  int v19; // [rsp+C4h] [rbp+23h]
  bool *v20; // [rsp+C8h] [rbp+27h]
  int v21; // [rsp+D0h] [rbp+2Fh]
  int v22; // [rsp+D4h] [rbp+33h]
  PVOID *p_Object; // [rsp+D8h] [rbp+37h]
  int v24; // [rsp+E0h] [rbp+3Fh]
  int v25; // [rsp+E4h] [rbp+43h]

  v14 = 0;
  v10 = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  v11 = 0LL;
  p_DestinationString = &DestinationString;
  v13 = 512;
  v15 = 0LL;
  v2 = ZwOpenPartition(a1 + 1096, 2LL);
  if ( v2 < 0
    || (v3 = *(void **)(a1 + 1096),
        Object = 0LL,
        v2 = ObReferenceObjectByHandle(v3, 2u, PsPartitionType, 0, &Object, 0LL),
        *(_QWORD *)(a1 + 1104) = Object,
        v2 < 0) )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
    IopLiveDumpTraceOpenVMMemoryPartitionFailure((unsigned int)v2);
    if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x200000000000LL) )
    {
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v17 = &v8;
      v4 = (*(_DWORD *)(a1 + 80) & 4) != 0;
      v8 = 0x1000000LL;
      v6 = v4;
      v20 = &v6;
      p_Object = &Object;
      v18 = 8;
      v21 = 1;
      LODWORD(Object) = v2;
      v24 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C06280,
        (unsigned __int8 *)byte_14002B815,
        (const GUID *)(a1 + 968),
        (const GUID *)(a1 + 952),
        5u,
        &v16);
    }
  }
  return (unsigned int)v2;
}
