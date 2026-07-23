/*
 * XREFs of KiTraceLogNmiCallback @ 0x1408BB2CC
 * Callers:
 *     KeRegisterNmiCallback @ 0x140514850 (KeRegisterNmiCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall KiTraceLogNmiCallback(unsigned __int64 a1)
{
  __int64 v2; // rdi
  int v3; // esi
  int v4; // r14d
  int v5; // r15d
  PVOID *i; // rcx
  unsigned __int64 v7; // rdx
  int v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+3Ch] [rbp-CCh] BYREF
  int DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD *v15; // [rsp+88h] [rbp-80h]
  int v16; // [rsp+90h] [rbp-78h]
  int v17; // [rsp+94h] [rbp-74h]
  wchar_t *Buffer; // [rsp+98h] [rbp-70h]
  _DWORD v19[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 *v20; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+B0h] [rbp-58h]
  int v22; // [rsp+B4h] [rbp-54h]
  int *v23; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp-48h]
  int v25; // [rsp+C4h] [rbp-44h]
  int *v26; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+D4h] [rbp-34h]
  int *p_DestinationString; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  unsigned __int64 *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  UNICODE_STRING *p_DestinationString_8; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+104h] [rbp-4h]

  DestinationString_8 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"Unknown_Module");
  v2 = -1LL;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( (a1 < (unsigned __int64)PsNtosImageBase || a1 >= PsNtosImageEnd)
    && (a1 < (unsigned __int64)PsHalImageBase || a1 >= PsHalImageEnd) )
  {
    ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v7 = (unsigned __int64)i[6];
      if ( a1 >= v7 && a1 < v7 + *((unsigned int *)i + 16) )
      {
        v4 = *((_DWORD *)i + 30);
        v2 = (__int64)i[6];
        v5 = *((_DWORD *)i + 39);
        v3 = *((_DWORD *)i + 16);
        DestinationString_8 = *(UNICODE_STRING *)(i + 9);
        break;
      }
    }
    if ( (unsigned int)dword_140C01A70 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C01A70, 0x400000000000LL) )
      {
        v17 = 0;
        v19[1] = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v15 = v19;
        Buffer = DestinationString_8.Buffer;
        v19[0] = DestinationString_8.Length;
        v20 = &v12;
        v23 = &v8;
        v26 = &v9;
        p_DestinationString = &DestinationString;
        v32 = &v13;
        p_DestinationString_8 = &DestinationString_8;
        v21 = 8;
        v24 = 4;
        v27 = 4;
        v30 = 4;
        v33 = 8;
        v36 = 8;
        v16 = 2;
        v12 = v2;
        v8 = v3;
        v9 = v4;
        DestinationString = v5;
        v13 = a1;
        *(_QWORD *)&DestinationString_8.Length = 0x1000000LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C01A70,
          (unsigned __int8 *)word_14002589A,
          0LL,
          0LL,
          0xAu,
          &v14);
      }
    }
    ExReleaseResourceLite(&PsLoadedModuleResource);
  }
}
