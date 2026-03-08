/*
 * XREFs of ObCreateObjectTypeEx @ 0x14080CB20
 * Callers:
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 *     TtmInit @ 0x14080E764 (TtmInit.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140816960 (CmpInitializeLightWeightTransactionType.c)
 *     VRegSetup @ 0x1408543D0 (VRegSetup.c)
 *     AlpcpInitSystem @ 0x140856E38 (AlpcpInitSystem.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x14085FA1C (EtwpInitializePrivateSessionDemuxObject.c)
 *     IoCreateObjectTypes @ 0x140B3F3D0 (IoCreateObjectTypes.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpUnlockDirectory @ 0x140699588 (ObpUnlockDirectory.c)
 *     ObpLookupDirectoryEntry @ 0x14076161C (ObpLookupDirectoryEntry.c)
 *     ObpInsertDirectoryEntry @ 0x14076F04C (ObpInsertDirectoryEntry.c)
 *     ObpLockDirectoryExclusive @ 0x14076F3D0 (ObpLockDirectoryExclusive.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x1407A34D0 (RtlUnicodeStringToAnsiString.c)
 *     ObpAllocateObject @ 0x1407BA8D0 (ObpAllocateObject.c)
 *     ObpInitObjectTypeSD @ 0x14080D154 (ObpInitObjectTypeSD.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING SourceString,
        __int128 *a2,
        __int64 a3,
        __int16 *a4,
        _QWORD *a5)
{
  __int16 *v8; // r13
  unsigned int Length; // ecx
  unsigned __int8 v10; // r15
  char v11; // al
  unsigned int v12; // ecx
  wchar_t *Buffer; // rdx
  wchar_t v14; // ax
  _OWORD *v15; // rbx
  UNICODE_STRING v16; // xmm6
  int inited; // esi
  size_t v18; // rax
  _QWORD *v19; // rbx
  bool v20; // zf
  char v21; // r13
  unsigned __int16 v22; // r12
  void *Pool2; // rax
  PVOID v24; // r12
  _DWORD *v25; // r8
  unsigned int v26; // ecx
  int v27; // edx
  int v28; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  PVOID *v32; // rdx
  unsigned int v33; // edi
  __int64 *v34; // rdx
  unsigned int v35; // eax
  struct _KTHREAD *v36; // rcx
  int v37; // ecx
  __int64 v38; // rdx
  int v40; // eax
  unsigned int v41; // r9d
  _BYTE *v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __m256i v50; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __int16 *v52; // [rsp+68h] [rbp-A0h]
  size_t Size[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD *v54; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h]
  _QWORD *v57; // [rsp+A0h] [rbp-68h]
  _OWORD v58[4]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v59[14]; // [rsp+E8h] [rbp-20h] BYREF

  v57 = a5;
  v52 = a4;
  v8 = a4;
  memset(v59, 0, 0xD8uLL);
  Size[0] = 0LL;
  memset(&v50.m256i_u64[1], 0, 24);
  memset(v58, 0, 60);
  DestinationString = 0LL;
  if ( !SourceString
    || (Length = SourceString->Length, !(_WORD)Length)
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = 2, *((_BYTE *)a2 + 3) >= 2u)
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (v40 = *((_DWORD *)a2 + 9)) != 0 && v40 != 512 && ((unsigned __int8)v8 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  v12 = Length >> 1;
  Buffer = SourceString->Buffer;
  LODWORD(v51) = *((_DWORD *)a2 + 9);
  if ( !v12 )
  {
LABEL_13:
    if ( ObpTypeDirectoryObject )
    {
      ObpLockDirectoryExclusive((__int64)&v50.m256i_i64[1], (__int64)ObpTypeDirectoryObject);
      if ( ObpLookupDirectoryEntry(&SourceString->Length, 0x40u, &v50.m256i_i64[1]) )
      {
        if ( v50.m256i_i64[1] )
          ObpUnlockDirectory((__int64)&v50.m256i_i64[1]);
        return 3221225525LL;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePool2(256LL, SourceString->MaximumLength, 1833853519LL);
    if ( !DestinationString.Buffer )
    {
      if ( v50.m256i_i64[1] )
        ObpUnlockDirectory((__int64)&v50.m256i_i64[1]);
      return 3221225626LL;
    }
    DestinationString.MaximumLength = SourceString->MaximumLength;
    RtlCopyUnicodeString(&DestinationString, SourceString);
    v15 = ObpTypeObjectType;
    v16 = DestinationString;
    if ( !ObpTypeObjectType )
    {
      v43 = *a2;
      BYTE8(v59[2]) = 2;
      v15 = v59;
      v44 = a2[1];
      LODWORD(v59[12]) = 1416258127;
      v59[4] = v43;
      v45 = a2[2];
      v59[5] = v44;
      v46 = a2[3];
      v59[6] = v45;
      v47 = a2[4];
      v59[7] = v46;
      v48 = a2[5];
      v59[8] = v47;
      v49 = a2[6];
      v59[9] = v48;
      *(_QWORD *)&v48 = *((_QWORD *)a2 + 14);
      v59[10] = v49;
      *(_QWORD *)&v59[11] = v48;
      v59[1] = DestinationString;
    }
    memset(v58, 0, sizeof(v58));
    LODWORD(v58[0]) = 16;
    *(_QWORD *)((char *)&v58[1] + 4) = *((_QWORD *)v15 + 13);
    HIDWORD(v58[1]) = 2048;
    inited = ObpAllocateObject(v58, 0, (__int64)v15, &DestinationString, 216, Size, 0LL);
    if ( inited < 0 )
    {
      if ( v50.m256i_i64[1] )
        ObpUnlockDirectory((__int64)&v50.m256i_i64[1]);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
    }
    else
    {
      v18 = Size[0];
      *(_QWORD *)(Size[0] + 32) = 0LL;
      v19 = (_QWORD *)(v18 + 48);
      v20 = (_DWORD)InitializationPhase == 0;
      *(UNICODE_STRING *)(v18 + 64) = v16;
      if ( v20 || (inited = ObpInitObjectTypeSD(v18 + 48, a3), inited >= 0) )
      {
        *(_OWORD *)((char *)v19 + 44) = 0LL;
        *((_DWORD *)v19 + 15) = 0;
        if ( ObpTypeObjectType )
        {
          v21 = 1;
          v22 = ((RtlxUnicodeStringToOemSize(SourceString) + 2) & 0xFFFC) + 1;
          Size[1] = v22;
          Pool2 = (void *)ExAllocatePool2(256LL, v22, 1851023951LL);
          P = Pool2;
          if ( !Pool2 )
            goto LABEL_85;
          memset(Pool2, 0, Size[1]);
          Size[1] = 0LL;
          WORD1(Size[1]) = v22;
          v24 = P;
          v54 = P;
          if ( RtlUnicodeStringToAnsiString((PANSI_STRING)&Size[1], SourceString, 0) >= 0 )
          {
            v25 = v54;
            v26 = SourceString->Length >> 1;
            if ( v26 < 4 )
            {
              v41 = WORD1(Size[1]);
              v42 = (char *)v54 + v26;
              do
              {
                if ( v26 < v41 )
                  *v42 = 32;
                ++v26;
                ++v42;
              }
              while ( v26 < 4 );
            }
            v21 = 0;
            *((_DWORD *)v19 + 48) = *v25;
          }
          ExFreePoolWithTag(v24, 0);
          if ( v21 )
          {
LABEL_85:
            v8 = v52;
            if ( SourceString->Length < 4u )
              *((_DWORD *)v19 + 48) = 1063936591;
            else
              *((_DWORD *)v19 + 48) = *(_DWORD *)SourceString->Buffer;
          }
          else
          {
            v8 = v52;
          }
        }
        else
        {
          ObpTypeObjectType = v19;
          *((_DWORD *)v19 + 11) = 1;
          *((_DWORD *)v19 + 48) = 1416258127;
        }
        v27 = v51;
        *((_OWORD *)v19 + 4) = *a2;
        *((_OWORD *)v19 + 5) = a2[1];
        *((_OWORD *)v19 + 6) = a2[2];
        *((_OWORD *)v19 + 7) = a2[3];
        *((_OWORD *)v19 + 8) = a2[4];
        *((_OWORD *)v19 + 9) = a2[5];
        *((_OWORD *)v19 + 10) = a2[6];
        v19[22] = *((_QWORD *)a2 + 14);
        *((_DWORD *)v19 + 25) = v27;
        if ( (NtGlobalFlag & 0x4000) != 0 )
          *((_BYTE *)v19 + 66) |= 0x20u;
        v28 = (*((_BYTE *)a2 + 2) & 0x10) != 0 ? 104 : 88;
        if ( (v27 & 1) != 0 )
          *((_DWORD *)v19 + 26) += v28;
        else
          *((_DWORD *)v19 + 27) += v28;
        if ( !*((_QWORD *)a2 + 11) )
          v19[19] = SeDefaultObjectMethod;
        v19[23] = 0LL;
        v19[1] = v19;
        *v19 = v19;
        v19[26] = v19 + 25;
        v19[25] = v19 + 25;
        if ( (*((_BYTE *)v19 + 66) & 4) != 0 )
        {
          *((_DWORD *)v19 + 23) |= 0x100000u;
          v8 = &ObpDefaultObject;
        }
        v19[4] = v8;
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)ObpTypeObjectType + 184, 0LL);
        if ( (*(_BYTE *)(Size[0] + 26) & 1) != 0 )
          v30 = (_QWORD *)(Size[0] - 32);
        else
          v30 = 0LL;
        v31 = ObpTypeObjectType;
        v32 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
        if ( *v32 != ObpTypeObjectType )
          __fastfail(3u);
        *v30 = ObpTypeObjectType;
        v30[1] = v32;
        *v32 = v30;
        v33 = -1073741670;
        v31[1] = v30;
        v34 = (__int64 *)ObpTypeObjectType;
        v35 = *((_DWORD *)ObpTypeObjectType + 11);
        if ( v35 >= 0x100 )
          inited = -1073741670;
        else
          ObpObjectTypes[v35 - 1] = (__int64)v19;
        ExReleasePushLockEx(v34 + 23, 0LL);
        v36 = KeGetCurrentThread();
        v20 = v36->SpecialApcDisable++ == -1;
        if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
          KiCheckForKernelApcDelivery();
        if ( v19 != ObpTypeObjectType )
        {
          if ( inited < 0 )
          {
LABEL_91:
            if ( v50.m256i_i64[1] )
              ObpUnlockDirectory((__int64)&v50.m256i_i64[1]);
            v33 = inited;
            goto LABEL_94;
          }
          v37 = 3;
          v38 = 3LL;
          while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v38], 1LL, 0LL) )
          {
            v38 = ++v37;
            if ( (unsigned __int64)v37 >= 0x100 )
            {
              inited = -1073741823;
              goto LABEL_91;
            }
          }
          v10 = v37;
        }
        ObTypeIndexTable[v10] = (__int64)v19;
        *((_BYTE *)v19 + 40) = v10;
        if ( !ObpTypeDirectoryObject
          || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v19, (__int64)&v50.m256i_i64[1]) )
        {
          if ( v50.m256i_i64[1] )
            ObpUnlockDirectory((__int64)&v50.m256i_i64[1]);
          *v57 = v19;
          return 0LL;
        }
        ObTypeIndexTable[v10] = 0LL;
        if ( v50.m256i_i64[1] )
          ObpUnlockDirectory((__int64)&v50.m256i_i64[1]);
LABEL_94:
        ObfDereferenceObject(v19);
        return v33;
      }
      if ( v50.m256i_i64[1] )
        ObpUnlockDirectory((__int64)&v50.m256i_i64[1]);
      ObfDereferenceObject(v19);
    }
    return (unsigned int)inited;
  }
  while ( 1 )
  {
    v14 = *Buffer;
    --v12;
    ++Buffer;
    if ( v14 == 92 )
      return 3221225523LL;
    if ( !v12 )
      goto LABEL_13;
  }
}
