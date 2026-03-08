/*
 * XREFs of HalCreateCommonBufferFromMdl @ 0x14050FA20
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
 *     MmGetCacheAttributeEx @ 0x14061C860 (MmGetCacheAttributeEx.c)
 */

__int64 __fastcall HalCreateCommonBufferFromMdl(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  ULONG_PTR v6; // rsi
  unsigned int v7; // r12d
  int CommonBufferFromMdlVerifyParams; // eax
  int CacheAttribute; // ebx
  PMDL v10; // r13
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  int v15; // ecx
  __int64 v16; // r14
  unsigned __int64 v17; // r10
  unsigned int v18; // edx
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // rdx
  unsigned __int64 v23; // rcx
  bool v24; // cc
  PVOID MappedSystemVa; // rax
  char v26; // al
  char v28; // [rsp+41h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-79h] BYREF
  int v30; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 *v32; // [rsp+60h] [rbp-61h]
  unsigned __int64 *v33; // [rsp+68h] [rbp-59h]
  _QWORD *v34; // [rsp+70h] [rbp-51h]
  __int128 v35; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v36; // [rsp+88h] [rbp-39h]
  __int64 v37; // [rsp+90h] [rbp-31h]
  __int64 v38; // [rsp+98h] [rbp-29h]
  unsigned __int64 *v39; // [rsp+A0h] [rbp-21h]
  __int128 v40; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-9h]
  __int64 v42; // [rsp+C8h] [rbp+7h]

  v37 = a1;
  MemoryDescriptorList = a2;
  v39 = a5;
  v30 = 0;
  v6 = *(_QWORD *)(a1 + 512);
  v42 = 0LL;
  LODWORD(v36) = 0;
  v32 = 0LL;
  v33 = 0LL;
  v40 = 0LL;
  v31 = 0LL;
  LOBYTE(v7) = 0;
  v41 = 0LL;
  v28 = 0;
  v35 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v40);
  CacheAttribute = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams < 0 )
  {
    if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
      return (unsigned int)-1073741811;
    return (unsigned int)CacheAttribute;
  }
  v10 = MemoryDescriptorList;
  v38 = *((_QWORD *)&v41 + 1);
  v11 = v41;
  v34 = &MemoryDescriptorList[1].Next
      + ((*((_QWORD *)&v41 + 1) + (unsigned __int64)MemoryDescriptorList->ByteOffset) >> 12);
  if ( (_DWORD)v42 )
  {
    if ( (_DWORD)v42 == 1 )
      LODWORD(MemoryDescriptorList) = 2;
    else
      LODWORD(MemoryDescriptorList) = 3;
  }
  else
  {
    LODWORD(MemoryDescriptorList) = 1;
  }
  CacheAttribute = HalpDmaReferenceDomainObject(v6);
  if ( CacheAttribute >= 0 )
  {
    v12 = *(_QWORD *)(v6 + 56);
    if ( v12 )
      *(_BYTE *)(v12 + 524) = 1;
    if ( BYTE4(v42) )
    {
      v32 = (unsigned __int64 *)&v40;
      v33 = (unsigned __int64 *)&v40 + 1;
    }
    if ( !*(_BYTE *)(a1 + 445) )
    {
      v7 = 0;
      if ( v11 >> 12 )
      {
        v13 = 0LL;
        while ( 1 )
        {
          CacheAttribute = MmGetCacheAttributeEx(v34[v13] << 12, 0LL, &v30);
          if ( CacheAttribute < 0 )
            goto LABEL_62;
          if ( v30 )
          {
            CacheAttribute = -1073741811;
            goto LABEL_62;
          }
          v13 = ++v7;
          if ( v7 >= v11 >> 12 )
          {
            LOBYTE(v7) = 0;
            break;
          }
        }
      }
    }
    v14 = v11 >> 12;
    v36 = v11 >> 12;
    LODWORD(v35) = 2;
    *((_QWORD *)&v35 + 1) = v34;
    v15 = *(_DWORD *)(v6 + 48);
    if ( v15 && (unsigned int)(v15 - 1) > 1 )
    {
      v22 = v32;
LABEL_52:
      CacheAttribute = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(HalpDmaIommuInterfaceFcnTable + 56))(
                         *(_QWORD *)(v6 + 40),
                         (unsigned int)MemoryDescriptorList,
                         &v35,
                         0LL,
                         v22,
                         v33,
                         &v31);
      if ( CacheAttribute < 0 )
      {
LABEL_57:
        v17 = v31;
        v26 = v28;
LABEL_58:
        if ( (_BYTE)v7 )
        {
          (*(void (__fastcall **)(_QWORD, __int128 *))(HalpDmaIommuInterfaceFcnTable + 80))(*(_QWORD *)(v6 + 40), &v35);
        }
        else if ( v26 )
        {
          (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(HalpDmaIommuInterfaceFcnTable + 64))(
            *(_QWORD *)(v6 + 40),
            v17,
            v11 >> 12);
        }
        goto LABEL_62;
      }
      v28 = 1;
      v16 = (__int64)v10;
      goto LABEL_43;
    }
    v16 = 0LL;
    v17 = *v34 << 12;
    v18 = 1;
    v31 = v17;
    if ( v14 > 1 )
    {
      v19 = 1LL;
      while ( v34[v19] - 1LL == v34[v18 - 1] )
      {
        v19 = ++v18;
        if ( v18 >= v14 )
          goto LABEL_27;
      }
      v22 = v32;
      CacheAttribute = -1073741811;
LABEL_49:
      if ( *(_DWORD *)(v6 + 48) != 2 )
      {
        v26 = 0;
        goto LABEL_58;
      }
      goto LABEL_52;
    }
LABEL_27:
    v20 = *(_DWORD *)(v37 + 448);
    if ( v20 < 0x40 )
      v21 = (1LL << v20) - 1;
    else
      v21 = -1LL;
    if ( v33 )
    {
      v23 = *v33;
      if ( *v33 >= v21 )
        v23 = v21;
      v22 = v32;
      *v33 = v23;
      if ( v17 < *v22 )
      {
LABEL_38:
        CacheAttribute = -1073741811;
        goto LABEL_49;
      }
      v24 = v17 + v11 - 1 <= v23;
    }
    else
    {
      v24 = v17 + v11 - 1 <= v21;
      v22 = v32;
    }
    if ( v24 )
    {
      if ( *(_DWORD *)(v6 + 48) == 1 )
      {
        CacheAttribute = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(HalpDmaIommuInterfaceFcnTable + 72))(
                           *(_QWORD *)(v6 + 40),
                           (unsigned int)MemoryDescriptorList,
                           &v35);
        if ( CacheAttribute < 0 )
        {
LABEL_62:
          HalpDmaDereferenceDomainObject(v6);
          return (unsigned int)CacheAttribute;
        }
        LOBYTE(v7) = 1;
LABEL_43:
        v17 = v31;
        goto LABEL_44;
      }
      if ( (_DWORD)v42 == 2 )
      {
        LOBYTE(v7) = 0;
LABEL_44:
        if ( (v10->MdlFlags & 5) != 0 )
        {
          MappedSystemVa = v10->MappedSystemVa;
        }
        else
        {
          MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0);
          v17 = v31;
        }
        CacheAttribute = HalpAllocateCommonBufferEntry(v16, (unsigned __int64)MappedSystemVa + v38, v17, v6, 0);
        if ( CacheAttribute >= 0 )
        {
          *v39 = v31;
          return (unsigned int)CacheAttribute;
        }
        goto LABEL_57;
      }
      CacheAttribute = -1073741637;
      goto LABEL_49;
    }
    goto LABEL_38;
  }
  return (unsigned int)CacheAttribute;
}
