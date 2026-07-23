/*
 * XREFs of NtQueryDirectoryObject @ 0x1406DA180
 * Callers:
 *     <none>
 * Callees:
 *     ObpLockDirectoryShared @ 0x1402065CC (ObpLockDirectoryShared.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ObpUnlockDirectory @ 0x140347B1C (ObpUnlockDirectory.c)
 *     Feature_1148767544__private_IsEnabledDeviceUsage @ 0x1403F74D4 (Feature_1148767544__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  size_t v7; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // r12d
  char *PoolWithQuotaTag; // rax
  _OWORD *v15; // r14
  int v16; // ebx
  ULONG v17; // r14d
  ULONG v18; // r15d
  NTSTATUS v19; // r13d
  _QWORD *v20; // rbx
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  ULONG v24; // eax
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // r13
  int v28; // edi
  int IsEnabledDeviceUsage; // eax
  unsigned __int16 v30; // r9
  ULONG v31; // r10d
  ULONG v32; // r8d
  bool v33; // cc
  _OWORD *v34; // r8
  __int64 v35; // rdx
  int v36; // eax
  char *v37; // rbx
  const void **v38; // rdi
  char *v39; // rbx
  char *v40; // rbx
  struct _DMA_ADAPTER *v41; // rbx
  ULONG v42; // eax
  int v43; // [rsp+30h] [rbp-B8h]
  int v44; // [rsp+30h] [rbp-B8h]
  int v45; // [rsp+38h] [rbp-B0h]
  unsigned int v46; // [rsp+3Ch] [rbp-ACh]
  ULONG v47; // [rsp+40h] [rbp-A8h]
  _OWORD *v48; // [rsp+48h] [rbp-A0h]
  const void **Src; // [rsp+50h] [rbp-98h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  ULONG v51; // [rsp+60h] [rbp-88h]
  _QWORD *v52; // [rsp+68h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-78h] BYREF
  __int128 v54; // [rsp+80h] [rbp-68h] BYREF
  __int64 v55; // [rsp+90h] [rbp-58h]
  __int64 v56; // [rsp+98h] [rbp-50h]
  int v57; // [rsp+A0h] [rbp-48h]
  int v58; // [rsp+A4h] [rbp-44h]

  v7 = Length;
  DestinationString = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v58 = 0;
  v54 = 0LL;
  v57 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, Length, 2u);
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Context < 0x7FFFFFFF0000LL )
      v11 = (__int64)Context;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( RestartScan )
    {
      v12 = 0;
      v51 = 0;
    }
    else
    {
      v12 = *Context;
      v51 = *Context;
    }
  }
  else if ( RestartScan )
  {
    v12 = 0;
  }
  else
  {
    v12 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v15 = PoolWithQuotaTag;
  Src = (const void **)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v16 >= 0 )
  {
    v48 = v15;
    v17 = 32;
    v45 = 32;
    v18 = 0;
    v43 = 0;
    v19 = -2147483622;
    v20 = Object;
    ObpLockDirectoryShared((__int64)&v54, Object);
    v21 = 0;
    v46 = 0;
    v22 = v20;
    v52 = v20;
    do
    {
      v23 = (_QWORD *)*v22;
      if ( *v22 )
      {
        while ( 1 )
        {
          v47 = v18;
          v24 = v18++;
          if ( v12 == v24 )
          {
            v25 = v23[1];
            if ( (*(_BYTE *)(v25 - 22) & 2) == 0
              || (v26 = ObpInfoMaskToOffset[*(_BYTE *)(v25 - 22) & 3], v25 - 48 == v26) )
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
            }
            else
            {
              DestinationString = *(UNICODE_STRING *)(v25 - 48 - v26 + 8);
            }
            v27 = (unsigned __int8)((unsigned __int16)(v25 - 48) >> 8);
            v28 = *(unsigned __int16 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v25 - 24) ^ v27]
                                      + 16);
            IsEnabledDeviceUsage = Feature_1148767544__private_IsEnabledDeviceUsage();
            v30 = DestinationString.Length;
            v31 = v17;
            v32 = DestinationString.Length + 36 + v17 + v28;
            if ( IsEnabledDeviceUsage && v17 > v32 )
            {
              v19 = 261;
              v18 = v47;
              goto LABEL_40;
            }
            v17 += DestinationString.Length + 36 + v28;
            v45 = v32;
            v33 = v32 <= Length;
            v34 = v48;
            if ( !v33 )
            {
              v18 = v47;
              v19 = -1073741789;
              if ( !ReturnSingleEntry )
              {
                v19 = 261;
                v17 = v31;
              }
              v45 = v17;
              goto LABEL_41;
            }
            *(_WORD *)v48 = DestinationString.Length;
            *((_WORD *)v48 + 1) = v30 + 2;
            *((_QWORD *)v48 + 1) = DestinationString.Buffer;
            v35 = (unsigned __int8)ObHeaderCookie;
            *((_WORD *)v48 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v25 - 24) ^ v27 ^ (unsigned __int8)ObHeaderCookie]
                                           + 16);
            *((_WORD *)v48 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v25 - 24) ^ v27 ^ (unsigned int)v35]
                                           + 16)
                                + 2;
            *((_QWORD *)v48 + 3) = *(_QWORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v25 - 24) ^ v27 ^ v35] + 24);
            v19 = 0;
            v34 = v48 + 2;
            v48 += 2;
            v36 = ++v43;
            if ( ReturnSingleEntry )
              goto LABEL_42;
            ++v12;
          }
          v23 = (_QWORD *)*v23;
          if ( !v23 )
          {
            v22 = v52;
            v21 = v46;
            break;
          }
        }
      }
      v46 = ++v21;
      v52 = ++v22;
    }
    while ( v21 < 0x25 );
LABEL_40:
    v34 = v48;
LABEL_41:
    v36 = v43;
LABEL_42:
    if ( v19 >= 0 )
    {
      *v34 = 0LL;
      v34[1] = 0LL;
      v37 = (char *)(v34 + 2);
      if ( v36 )
      {
        v38 = Src + 3;
        do
        {
          v44 = v36 - 1;
          memmove(v37, *(v38 - 2), *((unsigned __int16 *)v38 - 12));
          *(v38 - 2) = (char *)Buffer + v37 - (char *)Src;
          v39 = &v37[*((unsigned __int16 *)v38 - 12)];
          *(_WORD *)v39 = 0;
          v39 += 2;
          memmove(v39, *v38, *((unsigned __int16 *)v38 - 4));
          *v38 = (char *)Buffer + v39 - (char *)Src;
          v40 = &v39[*((unsigned __int16 *)v38 - 4)];
          *(_WORD *)v40 = 0;
          v37 = v40 + 2;
          v38 += 4;
          v36 = v44;
        }
        while ( v44 );
        v17 = v45;
      }
    }
    v41 = (struct _DMA_ADAPTER *)Object;
    ObpUnlockDirectory((__int64)Object, (__int64)&v54);
    v42 = Length;
    if ( v17 <= Length )
      v42 = v17;
    memmove(Buffer, Src, v42);
    if ( ReturnLength )
      *ReturnLength = v17;
    if ( v19 >= 0 )
      *Context = v18;
    HalPutDmaAdapter(v41);
    ExFreePoolWithTag(Src, 0);
    return v19;
  }
  else
  {
    ExFreePoolWithTag(v15, 0);
    return v16;
  }
}
