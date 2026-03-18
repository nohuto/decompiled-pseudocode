/*
 * XREFs of SeSetLearningModeObjectInformation @ 0x1405F43E0
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140244198 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     RtlStringCbCopyW @ 0x1402E0978 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1402E0A04 (RtlStringCbCatW.c)
 *     ObFastDereferenceObject @ 0x1402F89B0 (ObFastDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SepGetCurrentLogLevel @ 0x1405F4784 (SepGetCurrentLogLevel.c)
 *     ObQueryNameString @ 0x14070F640 (ObQueryNameString.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     PsReferenceEffectiveToken @ 0x1407B3B60 (PsReferenceEffectiveToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // rax
  int v4; // edi
  void *v5; // rcx
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  struct _OBJECT_NAME_INFORMATION *v7; // rdi
  NTSTATUS v8; // eax
  struct _OBJECT_NAME_INFORMATION *v9; // rax
  size_t v10; // r14
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rcx
  _BYTE v14[16]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+78h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+40h] BYREF
  int v17; // [rsp+88h] [rbp+48h] BYREF

  ReturnLength = 0;
  v17 = 0;
  LOBYTE(Object) = 0;
  if ( SepLearningModeTokenCount )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (_DWORD *)PsReferenceEffectiveToken(CurrentThread, 1953654867LL, &v17, &Object, v14, 0LL);
    v4 = v3[50] & 0x400000;
    if ( v17 == 1 )
      ObFastDereferenceObject(
        (signed __int64 *)&CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[5],
        (unsigned __int64)v3,
        0x74726853u);
    else
      ObfDereferenceObjectWithTag(v3, 0x74726853u);
    if ( v4 )
    {
      *(_OWORD *)(a1 + 40) = 0LL;
      v5 = *(void **)(a1 + 32);
      if ( !v5 )
        goto LABEL_20;
      Object = 0LL;
      if ( ObReferenceObjectByHandle(v5, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL) < 0 )
        goto LABEL_20;
      Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, 528LL, 1330799955LL);
      v7 = Pool2;
      if ( Pool2 )
      {
        v8 = ObQueryNameString(Object, Pool2, 0x210u, &ReturnLength);
        if ( v8 != -1073741820 )
          goto LABEL_12;
        ExFreePoolWithTag(v7, 0);
        v9 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 1330799955LL);
        v7 = v9;
        if ( v9 )
        {
          v8 = ObQueryNameString(Object, v9, ReturnLength, &ReturnLength);
LABEL_12:
          if ( v8 >= 0 )
          {
            if ( v7->Name.Buffer )
            {
              v10 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v7->Name.MaximumLength;
              v11 = (wchar_t *)ExAllocatePool2(256LL, v10, 1330799955LL);
              v12 = v11;
              if ( v11 )
              {
                memset(v11, 0, v10);
                RtlStringCbCopyW(v12, v10, v7->Name.Buffer);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
                {
                  RtlStringCbCatW(v12, v10, L"\\");
                  RtlStringCbCatW(v12, v10, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
                }
                RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v12);
              }
            }
          }
          ExFreePoolWithTag(v7, 0);
        }
      }
      ObfDereferenceObject(Object);
LABEL_20:
      *(_DWORD *)(a1 + 8) = SepGetCurrentLogLevel(KeGetCurrentThread());
      *(_QWORD *)a1 = *(_QWORD *)(v13 + 1528);
      *(_QWORD *)(v13 + 1528) = a1;
    }
  }
}
