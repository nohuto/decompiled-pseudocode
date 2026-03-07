__int64 __fastcall ExpWnfPopulateStateData(__int64 a1)
{
  unsigned __int64 v2; // rcx
  ULONG v4; // r15d
  __int64 v5; // rdx
  _DWORD *Pool2; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // edi
  NTSTATUS v10; // eax
  __int64 v11; // r14
  int v12; // eax
  struct _EX_RUNDOWN_REF *v13; // rdi
  unsigned __int64 ExtensionTable; // rax
  int v15; // ebx
  unsigned int v16; // eax
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  __int64 v20; // [rsp+58h] [rbp-1h] BYREF
  char v21; // [rsp+60h] [rbp+7h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  Length = 0;
  KeyHandle = 0LL;
  if ( ((v2 >> 6) & 0xF) == 5 )
  {
    v13 = (struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest;
    v20 = v2 ^ 0x41C64E6DA3BC0074LL;
    ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
    if ( ExtensionTable )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall *)(int, int, int, int, void *, size_t), __int64))(ExtensionTable + 120))(
              &v20,
              ExpWnfPopulateStateDataRemoteCallback,
              a1);
      ExReleaseExtensionTable(v13);
      if ( v15 != -1073741822 )
      {
        if ( v15 < 0 )
          return (unsigned int)v15;
        return 0LL;
      }
    }
  }
  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = v4 + 16;
  while ( 1 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v5, 543583831LL);
    if ( !Pool2 )
      return 3221225626LL;
    v7 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&ValueName.Length = 2228224LL;
    ValueName.Buffer = (wchar_t *)&v21;
    ExpWnfComposeValueName(v7, &ValueName);
    v8 = *(_QWORD *)(a1 + 104);
    Length = v4 + 16;
    v9 = ExpWnfAcquirePermanentDataStoreHandle(v8, &KeyHandle);
    if ( v9 >= 0 )
    {
      v10 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v11 = *(_QWORD *)(a1 + 104);
      v9 = v10;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 8), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v11 + 8));
      KeAbPostRelease(v11 + 8);
    }
    if ( v9 == -1073741772 )
    {
      *(_OWORD *)Pool2 = 0LL;
LABEL_13:
      *Pool2 = 1050884;
      v12 = Pool2[3];
      Pool2[1] = v4;
      *(_DWORD *)(a1 + 96) = v12;
      *(_QWORD *)(a1 + 88) = Pool2;
      return 0LL;
    }
    if ( v9 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0x20666E57u);
    v5 = Length;
    v4 = Length - 16;
  }
  if ( v9 >= 0 )
  {
    if ( Pool2[1] == 3 )
    {
      v16 = Pool2[2];
      if ( v16 >= 4 )
      {
        Pool2[2] = v16 - 4;
        goto LABEL_13;
      }
    }
    v9 = -1073741823;
  }
  ExFreePoolWithTag(Pool2, 0x20666E57u);
  return (unsigned int)v9;
}
