/*
 * XREFs of HalCreateCommonBufferFromMdlDmarThin @ 0x140511380
 * Callers:
 *     <none>
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaReferenceDomainObject @ 0x14038D02C (HalpDmaReferenceDomainObject.c)
 *     HalpAllocateCommonBufferEntry @ 0x14038D0B4 (HalpAllocateCommonBufferEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpCreateCommonBufferFromMdlVerifyParams @ 0x14050D904 (HalpCreateCommonBufferFromMdlVerifyParams.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 */

__int64 __fastcall HalCreateCommonBufferFromMdlDmarThin(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5)
{
  __int64 *v5; // rsi
  __int128 *v6; // r12
  char *v7; // r13
  int CommonBufferFromMdlVerifyParams; // eax
  int CommonBufferEntry; // ebx
  __int64 v10; // rax
  PMDL v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // rdx
  PVOID MappedSystemVa; // rax
  __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-39h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-31h]
  __int128 v21; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-19h]
  __int128 v23; // [rsp+70h] [rbp-11h] BYREF
  __int128 v24; // [rsp+80h] [rbp-1h]
  __int64 v25; // [rsp+90h] [rbp+Fh]

  v5 = *(__int64 **)(a1 + 512);
  MemoryDescriptorList = a2;
  v20 = a5;
  v18 = 0LL;
  v25 = 0LL;
  v6 = 0LL;
  LODWORD(v22) = 0;
  v7 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v23);
  CommonBufferEntry = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams >= 0 )
  {
    CommonBufferEntry = HalpDmaReferenceDomainObject((__int64)v5);
    if ( CommonBufferEntry >= 0 )
    {
      v10 = v5[7];
      if ( v10 )
        *(_BYTE *)(v10 + 524) = 1;
      if ( BYTE4(v25) )
      {
        v6 = &v23;
        v7 = (char *)&v23 + 8;
      }
      v11 = MemoryDescriptorList;
      v12 = *((_QWORD *)&v24 + 1);
      v13 = v24;
      v14 = *((_QWORD *)&v24 + 1) + MemoryDescriptorList->ByteOffset;
      if ( (_DWORD)v25 )
      {
        if ( (_DWORD)v25 == 1 )
          v15 = 2LL;
        else
          v15 = 3LL;
      }
      else
      {
        v15 = 1LL;
      }
      LODWORD(v21) = 2;
      *((_QWORD *)&v21 + 1) = (char *)MemoryDescriptorList + 8 * (v14 >> 12) + 48;
      v22 = (unsigned __int64)v24 >> 12;
      CommonBufferEntry = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, _QWORD, __int128 *, char *, __int64 *))(HalpDmaIommuInterfaceFcnTable + 56))(
                            v5[5],
                            v15,
                            &v21,
                            0LL,
                            v6,
                            v7,
                            &v18);
      if ( CommonBufferEntry >= 0 )
      {
        if ( (v11->MdlFlags & 5) != 0 )
          MappedSystemVa = v11->MappedSystemVa;
        else
          MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0);
        CommonBufferEntry = HalpAllocateCommonBufferEntry(
                              (__int64)v11,
                              (unsigned __int64)MappedSystemVa + v12,
                              v18,
                              (__int64)v5,
                              0);
        if ( CommonBufferEntry >= 0 )
        {
          *v20 = v18;
          return (unsigned int)CommonBufferEntry;
        }
        (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(HalpDmaIommuInterfaceFcnTable + 64))(
          v5[5],
          v18,
          v13 >> 12);
      }
      HalpDmaDereferenceDomainObject(v5);
    }
  }
  else if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)CommonBufferEntry;
}
