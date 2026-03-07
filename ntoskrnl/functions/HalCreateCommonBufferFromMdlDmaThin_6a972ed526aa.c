__int64 __fastcall HalCreateCommonBufferFromMdlDmaThin(
        __int64 a1,
        struct _MDL *a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r14
  char v6; // r12
  unsigned __int64 *v7; // r13
  int CommonBufferFromMdlVerifyParams; // eax
  int CommonBufferEntry; // ebx
  __int64 v10; // rax
  PMDL v11; // r15
  __int64 v12; // rbx
  int v13; // r8d
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r11
  _QWORD *v16; // r11
  unsigned int v17; // r9d
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 *v23; // r9
  __int64 v24; // rdx
  PVOID MappedSystemVa; // rax
  unsigned __int64 *v27; // [rsp+40h] [rbp-61h]
  unsigned __int64 v28; // [rsp+48h] [rbp-59h] BYREF
  __int64 v29; // [rsp+50h] [rbp-51h]
  PMDL MemoryDescriptorList; // [rsp+58h] [rbp-49h] BYREF
  __int64 v31; // [rsp+60h] [rbp-41h]
  unsigned __int64 *v32; // [rsp+68h] [rbp-39h]
  __int128 v33; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp-21h]
  __int128 v35; // [rsp+88h] [rbp-19h] BYREF
  __int128 v36; // [rsp+98h] [rbp-9h]
  __int64 v37; // [rsp+A8h] [rbp+7h]

  v5 = *(_QWORD *)(a1 + 512);
  MemoryDescriptorList = a2;
  v32 = a5;
  v29 = a1;
  v28 = 0LL;
  v27 = 0LL;
  v37 = 0LL;
  v6 = 0;
  LODWORD(v34) = 0;
  v7 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v33 = 0LL;
  CommonBufferFromMdlVerifyParams = HalpCreateCommonBufferFromMdlVerifyParams(
                                      (__int64 **)&MemoryDescriptorList,
                                      a3,
                                      a4,
                                      (__int64)&v35);
  CommonBufferEntry = CommonBufferFromMdlVerifyParams;
  if ( CommonBufferFromMdlVerifyParams >= 0 )
  {
    CommonBufferEntry = HalpDmaReferenceDomainObject(v5);
    if ( CommonBufferEntry < 0 )
      return (unsigned int)CommonBufferEntry;
    v10 = *(_QWORD *)(v5 + 56);
    if ( v10 )
      *(_BYTE *)(v10 + 524) = 1;
    if ( BYTE4(v37) )
    {
      v27 = (unsigned __int64 *)&v35;
      v7 = (unsigned __int64 *)&v35 + 1;
    }
    v11 = MemoryDescriptorList;
    v12 = 0LL;
    v13 = v37;
    v14 = v36;
    v15 = *((_QWORD *)&v36 + 1) + MemoryDescriptorList->ByteOffset;
    v31 = *((_QWORD *)&v36 + 1);
    v16 = &MemoryDescriptorList[1].Next + (v15 >> 12);
    if ( (_DWORD)v37 == 2 )
    {
      v17 = 1;
      if ( (unsigned __int64)v36 >> 12 <= 1 )
      {
LABEL_15:
        v19 = *v16 << 12;
        v28 = v19;
        v20 = *(_DWORD *)(v29 + 448);
        if ( v20 < 0x40 )
          v21 = (1LL << v20) - 1;
        else
          v21 = -1LL;
        if ( v7 )
        {
          v22 = *v7;
          v23 = v27;
          if ( *v7 >= v21 )
            v22 = v21;
          *v7 = v22;
          if ( v19 >= *v27 && v28 + v14 - 1 <= v22 )
            goto LABEL_35;
          v13 = v37;
          CommonBufferEntry = -1073741811;
LABEL_27:
          if ( *(_DWORD *)(v5 + 48) != 2 )
          {
LABEL_37:
            if ( v6 )
              (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64, unsigned __int64 *))(HalpDmaIommuInterfaceFcnTable + 64))(
                *(_QWORD *)(v5 + 40),
                v28,
                v14 >> 12,
                v23);
            goto LABEL_39;
          }
          if ( v13 )
          {
            if ( v13 == 1 )
              v24 = 2LL;
            else
              v24 = 3LL;
          }
          else
          {
            v24 = 1LL;
          }
          LODWORD(v33) = 2;
          *((_QWORD *)&v33 + 1) = v16;
          v34 = v14 >> 12;
          CommonBufferEntry = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(HalpDmaIommuInterfaceFcnTable + 56))(
                                *(_QWORD *)(v5 + 40),
                                v24,
                                &v33,
                                0LL,
                                v23,
                                v7,
                                &v28);
          if ( CommonBufferEntry < 0 )
          {
LABEL_39:
            HalpDmaDereferenceDomainObject((__int64 *)v5);
            return (unsigned int)CommonBufferEntry;
          }
          v6 = 1;
          v12 = (__int64)v11;
LABEL_35:
          if ( (v11->MdlFlags & 5) != 0 )
            MappedSystemVa = v11->MappedSystemVa;
          else
            MappedSystemVa = MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0);
          CommonBufferEntry = HalpAllocateCommonBufferEntry(v12, (unsigned __int64)MappedSystemVa + v31, v28, v5, 0);
          if ( CommonBufferEntry >= 0 )
          {
            *v32 = v28;
            return (unsigned int)CommonBufferEntry;
          }
          goto LABEL_37;
        }
        if ( (unsigned __int64)v36 + v19 - 1 <= v21 )
          goto LABEL_35;
      }
      else
      {
        v18 = 1LL;
        while ( v16[v18] - 1LL == v16[v17 - 1] )
        {
          v18 = ++v17;
          if ( v17 >= (unsigned __int64)v36 >> 12 )
            goto LABEL_15;
        }
      }
      CommonBufferEntry = -1073741811;
    }
    else
    {
      CommonBufferEntry = -1073741637;
    }
    v23 = v27;
    goto LABEL_27;
  }
  if ( (unsigned int)(CommonBufferFromMdlVerifyParams + 1073741585) <= 1 )
    return (unsigned int)-1073741811;
  return (unsigned int)CommonBufferEntry;
}
