/*
 * XREFs of SeSetLearningModeObjectInformation @ 0x14027C980
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1402C7068 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x140661100 (ObReferenceObjectByName.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140264ED8 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x140265118 (RtlStringCbCatW.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     memset @ 0x140414200 (memset.c)
 *     SepGetCurrentLogLevel @ 0x1405967D0 (SepGetCurrentLogLevel.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameString @ 0x140718930 (ObQueryNameString.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  void *v2; // rcx
  struct _OBJECT_NAME_INFORMATION *PoolWithTag; // rax
  struct _OBJECT_NAME_INFORMATION *v4; // rdi
  NTSTATUS v5; // eax
  struct _OBJECT_NAME_INFORMATION *v6; // rax
  SIZE_T v7; // r14
  wchar_t *v8; // rax
  wchar_t *v9; // rsi
  __int64 v10; // rcx
  ULONG ReturnLength; // [rsp+58h] [rbp+10h] BYREF
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  ReturnLength = 0;
  if ( byte_140C545F4 )
  {
    *(_OWORD *)(a1 + 40) = 0LL;
    v2 = *(void **)(a1 + 32);
    if ( !v2 )
      goto LABEL_16;
    Object = 0LL;
    if ( ObReferenceObjectByHandle(v2, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL) < 0 )
      goto LABEL_16;
    PoolWithTag = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x210uLL, 0x4F526553u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      v5 = ObQueryNameString(Object, PoolWithTag, 0x210u, &ReturnLength);
      if ( v5 != -1073741820 )
        goto LABEL_8;
      ExFreePoolWithTag(v4, 0);
      v6 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, ReturnLength, 0x4F526553u);
      v4 = v6;
      if ( v6 )
      {
        v5 = ObQueryNameString(Object, v6, ReturnLength, &ReturnLength);
LABEL_8:
        if ( v5 >= 0 )
        {
          if ( v4->Name.Buffer )
          {
            v7 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v4->Name.MaximumLength;
            v8 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x4F526553u);
            v9 = v8;
            if ( v8 )
            {
              memset(v8, 0, v7);
              RtlStringCbCopyW(v9, v7, v4->Name.Buffer);
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
              {
                RtlStringCbCatW(v9, v7, L"\\");
                RtlStringCbCatW(v9, v7, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
              }
              RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v9);
            }
          }
        }
        ExFreePoolWithTag(v4, 0);
      }
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
LABEL_16:
    *(_DWORD *)(a1 + 8) = SepGetCurrentLogLevel(KeGetCurrentThread());
    *(_QWORD *)a1 = *(_QWORD *)(v10 + 1448);
    *(_QWORD *)(v10 + 1448) = a1;
  }
}
