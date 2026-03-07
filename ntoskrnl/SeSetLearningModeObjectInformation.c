void __fastcall SeSetLearningModeObjectInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _DWORD *v3; // rax
  int v4; // edi
  void *v5; // rcx
  NTSTATUS v6; // eax
  PVOID v7; // r15
  struct _OBJECT_NAME_INFORMATION *Pool2; // rax
  struct _OBJECT_NAME_INFORMATION *v9; // rdi
  NTSTATUS v10; // eax
  struct _OBJECT_NAME_INFORMATION *v11; // rax
  size_t v12; // r14
  wchar_t *v13; // rax
  wchar_t *v14; // rsi
  __int64 v15; // rcx
  _BYTE v16[16]; // [rsp+30h] [rbp-10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+48h] BYREF
  ULONG ReturnLength; // [rsp+90h] [rbp+50h] BYREF
  int v19; // [rsp+98h] [rbp+58h] BYREF

  ReturnLength = 0;
  v19 = 0;
  if ( SepLearningModeTokenCount )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = (_DWORD *)PsReferenceEffectiveToken(
                     (_DWORD)CurrentThread,
                     1953654867,
                     (unsigned int)&v19,
                     (unsigned int)&Object,
                     (__int64)v16,
                     0LL);
    v4 = v3[50] & 0x1000000;
    if ( v19 == 1 )
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
      v6 = ObReferenceObjectByHandle(v5, 0, 0LL, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
      v7 = Object;
      if ( v6 < 0 )
        goto LABEL_20;
      Pool2 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, 528LL, 1330799955LL);
      v9 = Pool2;
      if ( Pool2 )
      {
        v10 = ObQueryNameString(v7, Pool2, 0x210u, &ReturnLength);
        if ( v10 != -1073741820 )
          goto LABEL_12;
        ExFreePoolWithTag(v9, 0);
        v11 = (struct _OBJECT_NAME_INFORMATION *)ExAllocatePool2(256LL, ReturnLength, 1330799955LL);
        v9 = v11;
        if ( v11 )
        {
          v10 = ObQueryNameString(v7, v11, ReturnLength, &ReturnLength);
LABEL_12:
          if ( v10 >= 0 )
          {
            if ( v9->Name.Buffer )
            {
              v12 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 2LL) + 2LL + v9->Name.MaximumLength;
              v13 = (wchar_t *)ExAllocatePool2(256LL, v12, 1330799955LL);
              v14 = v13;
              if ( v13 )
              {
                memset(v13, 0, v12);
                RtlStringCbCopyW(v14, v12, v9->Name.Buffer);
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) )
                {
                  RtlStringCbCatW(v14, v12, L"\\");
                  RtlStringCbCatW(v14, v12, *(NTSTRSAFE_PCWSTR *)(*(_QWORD *)(a1 + 24) + 8LL));
                }
                RtlInitUnicodeString((PUNICODE_STRING)(a1 + 40), v14);
              }
            }
          }
          ExFreePoolWithTag(v9, 0);
        }
      }
      ObfDereferenceObject(v7);
LABEL_20:
      *(_DWORD *)(a1 + 8) = SepGetCurrentLogLevel(KeGetCurrentThread());
      *(_QWORD *)a1 = *(_QWORD *)(v15 + 1528);
      *(_QWORD *)(v15 + 1528) = a1;
    }
  }
}
