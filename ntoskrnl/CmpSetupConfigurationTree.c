/*
 * XREFs of CmpSetupConfigurationTree @ 0x140B52640
 * Callers:
 *     CmpInitializeHardwareConfiguration @ 0x140B51F64 (CmpInitializeHardwareConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140B52640 (CmpSetupConfigurationTree.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _stricmp @ 0x1403D3BD0 (_stricmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     __report_rangecheckfailure @ 0x1404FBCCC (__report_rangecheckfailure.c)
 *     CmpInitializeRegistryNode @ 0x140816FB8 (CmpInitializeRegistryNode.c)
 *     CmpSetupConfigurationTree @ 0x140B52640 (CmpSetupConfigurationTree.c)
 */

NTSTATUS __fastcall CmpSetupConfigurationTree(__int64 a1, void *a2, BOOL a3, unsigned int a4)
{
  unsigned __int16 i; // cx
  unsigned __int64 v9; // rax
  NTSTATUS result; // eax
  __int64 v11; // rcx
  int v12; // r14d
  HANDLE Handle; // [rsp+40h] [rbp-B8h] BYREF
  _WORD v14[48]; // [rsp+50h] [rbp-A8h] BYREF

  Handle = 0LL;
  for ( i = 0; i < 0x2Au; ++i )
  {
    v9 = i;
    if ( v9 >= 42 )
      _report_rangecheckfailure();
    v14[v9] = 0;
  }
  while ( 1 )
  {
    if ( !a1 )
      return 0;
    if ( *(_DWORD *)(a1 + 24) == 3 && !*(_DWORD *)(*(_QWORD *)a1 + 24LL) && *(_DWORD *)(a1 + 28) == 12 )
    {
      a4 = 0;
      a3 = stricmp(*(const char **)(a1 + 56), "ISA") == 0;
    }
    result = CmpInitializeRegistryNode(a1, a2, &Handle, a3, a4, (__int64)v14);
    if ( result < 0 )
      return result;
    v11 = *(_QWORD *)(a1 + 8);
    if ( v11 )
    {
      v12 = CmpSetupConfigurationTree(v11, Handle, a3, a4);
      if ( v12 < 0 )
        break;
    }
    ZwClose(Handle);
    a1 = *(_QWORD *)(a1 + 16);
  }
  ZwClose(Handle);
  return v12;
}
