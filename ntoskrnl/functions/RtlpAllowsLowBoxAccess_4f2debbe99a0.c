char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  bool v1; // zf
  _DWORD *v3; // rax
  char result; // al
  size_t v5; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v7; // rbx
  const WCHAR *v8; // rdx
  bool v9; // di
  int v10; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v11; // [rsp+6Ch] [rbp-9Ch] BYREF
  _QWORD v12[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v13[4]; // [rsp+88h] [rbp-80h] BYREF
  char v14; // [rsp+8Ch] [rbp-7Ch] BYREF
  char *v15; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v17; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v19; // [rsp+D8h] [rbp-30h]
  __int128 v20; // [rsp+E8h] [rbp-20h]
  __int64 v21; // [rsp+F8h] [rbp-10h]
  _DWORD v22[4]; // [rsp+100h] [rbp-8h] BYREF
  char v23; // [rsp+110h] [rbp+8h] BYREF

  LODWORD(v12[0]) = 0;
  v11 = 0;
  v1 = (*(_BYTE *)(a1 + 38) & 2) == 0;
  v22[0] = 0x20000;
  memset(&v17, 0, sizeof(v17));
  v22[1] = 196608;
  v22[2] = 0x20000;
  v22[3] = 2031616;
  v18 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&v12[1] = 0LL;
  if ( !v1 )
    return 1;
  v3 = (_DWORD *)PsReferenceEffectiveToken(
                   (unsigned int)KeGetCurrentThread(),
                   1836020801,
                   (unsigned int)&v14,
                   (unsigned int)&v10,
                   (__int64)v13,
                   0LL);
  v17.PrimaryToken = v3;
  if ( (v3[50] & 0x1000000) == 0 )
  {
    ObfDereferenceObjectWithTag(v3, 0x6D6F7441u);
    return 0;
  }
  RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
  v5 = 2LL * *(unsigned __int8 *)(a1 + 40) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v5, 1833858113LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    if ( RtlStringCbCopyW(Pool2, v5, (NTSTRSAFE_PCWSTR)(a1 + 42)) < 0 )
      v8 = L"Unable to capture ATOM name.";
    else
      v8 = v7;
  }
  else
  {
    v8 = L"Unable to Allocate space for ATOM name.";
  }
  RtlInitUnicodeString((PUNICODE_STRING)&v12[1], v8);
  *(_QWORD *)&v19 = &DestinationString;
  *((_QWORD *)&v19 + 1) = &v12[1];
  SeSetLearningModeObjectInformation(&v18);
  v15 = &v23;
  v17.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v9 = SeAccessCheckWithHint(
         SeAtomSd,
         0,
         &v17,
         0,
         0x20000u,
         0,
         &v15,
         v22,
         KeGetCurrentThread()->PreviousMode,
         &v11,
         (int *)v12);
  ObfDereferenceObjectWithTag(v17.PrimaryToken, 0x6D6F7441u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  result = 1;
  if ( !v9 || !v11 )
    return 0;
  return result;
}
