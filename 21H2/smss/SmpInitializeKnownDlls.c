/*
 * XREFs of SmpInitializeKnownDlls @ 0x140008450
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 *     SmpInitializeKnownDllsWorker @ 0x14000F1C0 (SmpInitializeKnownDllsWorker.c)
 * Callees:
 *     SmpOpenKnownDllsHandles @ 0x1400012C0 (SmpOpenKnownDllsHandles.c)
 *     SmpEventWriteULONG @ 0x14000503C (SmpEventWriteULONG.c)
 *     SmpInitializeKnownDllsInternal @ 0x140008770 (SmpInitializeKnownDllsInternal.c)
 *     SmpWow64IsWowGuestMachineSupported @ 0x14000901C (SmpWow64IsWowGuestMachineSupported.c)
 *     SmpEventWrite @ 0x14000A0B4 (SmpEventWrite.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000BC20 (SmpDeallocSavedRegistryEntry.c)
 */

__int64 SmpInitializeKnownDlls()
{
  void *v0; // r12
  void *v1; // r14
  void *v2; // r15
  void *v3; // rsi
  int v4; // ebx
  BOOL v5; // edi
  PVOID *v6; // rdi
  PVOID *v7; // rax
  PVOID *v8; // rbx
  PVOID **v9; // rcx
  PVOID v10; // r8
  PVOID *v11; // rbx
  PVOID *v12; // rax
  PVOID *v13; // rcx
  PVOID **v14; // rdx
  UNICODE_STRING v16; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING v17; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING v18; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v19; // [rsp+60h] [rbp-18h] BYREF
  void *v20; // [rsp+C0h] [rbp+48h] BYREF
  void *v21; // [rsp+C8h] [rbp+50h] BYREF
  void *v22; // [rsp+D0h] [rbp+58h] BYREF
  void *v23; // [rsp+D8h] [rbp+60h] BYREF

  *(_DWORD *)&v17.Length = 1703960;
  v17.Buffer = L"\\KnownDlls32";
  *(_DWORD *)&v16.Length = 1310738;
  v16.Buffer = L"\\SysWOW64";
  v0 = 0LL;
  v20 = 0LL;
  v19.Buffer = L"\\KnownDllsArm32";
  v1 = 0LL;
  v21 = 0LL;
  v2 = 0LL;
  v18.Buffer = L"\\SysArm32";
  v3 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_DWORD *)&v19.Length = 2097182;
  *(_DWORD *)&v18.Length = 1310738;
  SmpEventWrite(&SmssEvt_InitializeKnownDlls_Start);
  if ( (unsigned __int8)SmpWow64IsWowGuestMachineSupported(332LL) )
  {
    v4 = SmpOpenKnownDllsHandles(&v17, &v16, 0, &v21, &v20);
    if ( v4 < 0 )
      goto LABEL_36;
    v0 = v20;
    v1 = v21;
  }
  if ( !(unsigned __int8)SmpWow64IsWowGuestMachineSupported(452LL) )
    goto LABEL_7;
  v4 = SmpOpenKnownDllsHandles(&v19, &v18, 0, &v23, &v22);
  if ( v4 >= 0 )
  {
    v2 = v22;
    v3 = v23;
LABEL_7:
    v5 = v1 || v3;
    v4 = SmpInitializeKnownDllsInternal(SmpKnownDllsObjectDirectory, SmpKnownDllsFileDirectory, 0LL, v5);
    if ( v4 >= 0 )
    {
      if ( !v3 || (v4 = SmpInitializeKnownDllsInternal(v3, v2, 1LL, v5), v4 >= 0) )
      {
        if ( !v1 || (v4 = SmpInitializeKnownDllsInternal(v1, v0, 1LL, v5), v4 >= 0) )
        {
          v6 = (PVOID *)SmpKnownDllsList;
          if ( SmpKnownDllsList != &SmpKnownDllsList )
          {
            do
            {
              v7 = (PVOID *)*v6;
              v8 = v6;
              v6 = v7;
              if ( v7[1] != v8 )
                goto LABEL_41;
              v9 = (PVOID **)v8[1];
              if ( *v9 != v8 )
                goto LABEL_41;
              *v9 = v7;
              v7[1] = v9;
              RtlFreeUnicodeString((PUNICODE_STRING)v8 + 2);
              v10 = v8[6];
              if ( v10 )
                RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v10);
              RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v8);
            }
            while ( v6 != &SmpKnownDllsList );
            v0 = v20;
            v1 = v21;
            v2 = v22;
            v3 = v23;
          }
          v11 = (PVOID *)SmpExcludeKnownDllsList;
          if ( SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
          {
            while ( 1 )
            {
              v12 = (PVOID *)*v11;
              v13 = v11;
              v11 = v12;
              if ( v12[1] != v13 )
                break;
              v14 = (PVOID **)v13[1];
              if ( *v14 != v13 )
                break;
              *v14 = v12;
              v12[1] = v14;
              SmpDeallocSavedRegistryEntry(v13);
              if ( v11 == &SmpExcludeKnownDllsList )
                goto LABEL_27;
            }
LABEL_41:
            __fastfail(3u);
          }
LABEL_27:
          v4 = 0;
        }
      }
    }
  }
  if ( v0 )
    NtClose(v0);
  if ( v1 )
    NtClose(v1);
  if ( v2 )
    NtClose(v2);
  if ( v3 )
    NtClose(v3);
LABEL_36:
  if ( SmpKnownDllsFileDirectory )
    NtClose(SmpKnownDllsFileDirectory);
  if ( SmpKnownDllsObjectDirectory )
    NtClose(SmpKnownDllsObjectDirectory);
  SmpEventWriteULONG(&SmssEvt_InitializeKnownDlls_Stop, v4);
  return (unsigned int)v4;
}
