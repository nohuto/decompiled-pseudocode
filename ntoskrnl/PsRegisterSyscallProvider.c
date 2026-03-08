/*
 * XREFs of PsRegisterSyscallProvider @ 0x1409B15C0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspInitializeSyscallProvider @ 0x1405A27E0 (PspInitializeSyscallProvider.c)
 *     VslPublishSyscallProviderServiceTables @ 0x14093FD38 (VslPublishSyscallProviderServiceTables.c)
 *     PspInsertSyscallProvider @ 0x1409B1D44 (PspInsertSyscallProvider.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsRegisterSyscallProvider(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // rax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // esi
  int inserted; // edi
  int v12[4]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v13[14]; // [rsp+30h] [rbp-98h] BYREF

  v12[0] = -1;
  if ( !PspSyscallProvidersEnabled )
    return 3221225629LL;
  if ( *(_BYTE *)a2 != 1 )
    return 3221225561LL;
  Pool2 = ExAllocatePool2(256LL, 96LL, 1666413392LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  PspInitializeSyscallProvider(Pool2, a1, (__int128 *)(a2 + 4), *(_QWORD *)(a2 + 24));
  v9 = VslPublishSyscallProviderServiceTables(a1[3], v12);
  v10 = v12[0];
  inserted = v9;
  if ( v9 < 0 || (*(_DWORD *)(v8 + 92) = v12[0], inserted = PspInsertSyscallProvider(v8), inserted < 0) )
  {
    if ( v10 != -1 )
    {
      memset(v13, 0, 0x68uLL);
      v13[1] = a1[3];
      VslpEnterIumSecureMode(2u, 87, 0, (__int64)v13);
    }
    ObfDereferenceObjectWithTag(*(PVOID *)(v8 + 32), 0x63537350u);
    ExFreePoolWithTag((PVOID)v8, 0x63537350u);
  }
  else
  {
    *a3 = v8;
    return 0;
  }
  return (unsigned int)inserted;
}
