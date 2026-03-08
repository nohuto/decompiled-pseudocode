/*
 * XREFs of MiLogPinDriverAddress @ 0x1407EB808
 * Callers:
 *     MiLogPinDriverAddressesWorker @ 0x1407EB6F0 (MiLogPinDriverAddressesWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MiLookupDataTableEntry @ 0x14035ECF0 (MiLookupDataTableEntry.c)
 *     _tlgWriteAgg @ 0x14035EDD0 (_tlgWriteAgg.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall MiLogPinDriverAddress(__int64 *a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  _QWORD *v4; // rax
  int v5; // esi
  int v6; // r14d
  UNICODE_STRING *p_DestinationString; // rbx
  __int64 v8; // r8
  __int64 v9; // r10
  unsigned int v10; // ecx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19; // [rsp+4Ch] [rbp-B4h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+54h] [rbp-ACh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  int *v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  int *v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  int *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]
  int *v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+118h] [rbp+18h]
  _DWORD *v43; // [rsp+120h] [rbp+20h]
  __int64 v44; // [rsp+128h] [rbp+28h]
  wchar_t *Buffer; // [rsp+130h] [rbp+30h]
  _DWORD v46[2]; // [rsp+138h] [rbp+38h] BYREF
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  UNICODE_STRING *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]

  v1 = *a1;
  CurrentThread = KeGetCurrentThread();
  DestinationString = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry(v1 & 0xFFFFFFFFFFFFF000uLL, 0);
  if ( v4 )
  {
    v5 = *((_DWORD *)v4 + 30);
    p_DestinationString = (UNICODE_STRING *)(v4 + 11);
    v6 = *((_DWORD *)v4 + 39);
  }
  else
  {
    v5 = 0;
    v6 = 0;
    p_DestinationString = &DestinationString;
    RtlInitUnicodeString(&DestinationString, L"Image not found");
  }
  if ( **(_DWORD **)&qword_140C69568 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C69568, 0x400000000000LL) )
  {
    v10 = *(_DWORD *)a1;
    v25 = &v23;
    v23 = 1LL;
    v12 = (v10 >> 1) & 1;
    v27 = &v12;
    v26 = 8LL;
    v13 = (v10 >> 2) & 1;
    v29 = &v13;
    v28 = 4LL;
    v14 = (v10 >> 3) & 1;
    v31 = &v14;
    v30 = 4LL;
    v15 = (v10 >> 4) & 1;
    v33 = &v15;
    v32 = 4LL;
    v16 = (v10 >> 5) & 1;
    v35 = &v16;
    v34 = 4LL;
    v17 = (unsigned __int8)v10 >> 6;
    v37 = &v17;
    v18 = (v10 >> 10) & 3;
    v36 = 4LL;
    v39 = &v18;
    v41 = &v19;
    v43 = v46;
    Buffer = p_DestinationString->Buffer;
    v46[0] = p_DestinationString->Length;
    v47 = &v20;
    v49 = &v21;
    *(_QWORD *)&DestinationString.Length = 2164260864LL;
    v51 = &DestinationString;
    v38 = 4LL;
    v40 = 4LL;
    v19 = (v10 >> 8) & 3;
    v42 = 4LL;
    v44 = 2LL;
    v46[1] = 0;
    v20 = v5;
    v48 = 4LL;
    v21 = v6;
    v50 = 4LL;
    v52 = 8LL;
    tlgWriteAgg(v9, (unsigned __int8 *)&byte_140039D43, v8, 0x10u, &v24);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
