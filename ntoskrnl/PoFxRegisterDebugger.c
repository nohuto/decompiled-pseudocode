/*
 * XREFs of PoFxRegisterDebugger @ 0x140B5E498
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     PoFxActivateComponent @ 0x140305CE0 (PoFxActivateComponent.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     PoFxStartDevicePowerManagement @ 0x140393C70 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PoFxRegisterCoreDevice @ 0x140836AB0 (PoFxRegisterCoreDevice.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PoFxRegisterDebugger()
{
  wchar_t *v0; // r14
  unsigned int v1; // ebx
  _DWORD *Pool2; // rdi
  unsigned int v3; // r12d
  _DWORD *v4; // rbx
  int v5; // r15d
  wchar_t *v6; // rdx
  ULONG_PTR v7; // rsi
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // ecx
  ULONG_PTR v11; // rsi
  wchar_t *v12; // rax
  __int64 v13; // [rsp+28h] [rbp-E0h]
  __int64 v14; // [rsp+30h] [rbp-D8h]
  __int64 v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h] BYREF
  __int64 DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v20[10]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v21; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-30h]
  wchar_t pszDest[24]; // [rsp+E0h] [rbp-28h] BYREF

  v22 = 0LL;
  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  BugCheckParameter2 = 0LL;
  LODWORD(v16) = 0;
  v0 = 0LL;
  DestinationString_8 = 0LL;
  if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))off_140C020E8[0])(33LL, 0LL, 0LL, &v16) == -2147483643 )
  {
    v1 = v16;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)v16, 0x4D584650u);
    if ( Pool2 )
    {
      if ( ((int (__fastcall *)(__int64, _QWORD, _DWORD *, __int64 *))off_140C020E8[0])(33LL, v1, Pool2, &v16) >= 0
        && (unsigned int)v16 <= v1 )
      {
        v3 = 0;
        v4 = Pool2 + 1;
        v5 = 0;
        if ( *Pool2 )
        {
          while ( 1 )
          {
            v4 = (_DWORD *)((char *)v4 + v3);
            v3 = v4[1];
            if ( *v4 == 1 )
            {
              v10 = v4[2];
              if ( v10 )
                break;
            }
            if ( !*v4 )
            {
              LODWORD(v15) = (v4[4] >> 5) & 7;
              LODWORD(v14) = v4[4] & 0x1F;
              LODWORD(v13) = v4[3];
              RtlStringCbPrintfW(
                pszDest,
                0x30uLL,
                L"PCI_DEBUG_%04X_%02X_%02X_%02X",
                *((unsigned __int16 *)v4 + 4),
                v13,
                v14,
                v15);
              v6 = pszDest;
LABEL_9:
              RtlInitUnicodeString(&DestinationString_8, v6);
              v22 = 0LL;
              v21 = 0LL;
              memset(v20, 0, sizeof(v20));
              v20[0] = 0x100000001LL;
              v20[9] = &v21;
              v20[3] = PopFxDebuggerPowerCriticalTransitionCallback;
              LODWORD(v20[8]) = 1;
              if ( (int)PoFxRegisterCoreDevice((__int64)&DestinationString_8, (__int64)v20, &BugCheckParameter2) < 0 )
                goto LABEL_14;
              v7 = BugCheckParameter2;
              v8 = *(_DWORD *)(BugCheckParameter2 + 824) | 2;
              DestinationString = 0LL;
              *(_DWORD *)(BugCheckParameter2 + 824) = v8;
              v9 = *(_QWORD *)(v7 + 64);
              if ( v9 )
              {
                DestinationString = *(_QWORD *)(v7 + 72);
                (*(void (__fastcall **)(__int64, __int64 *))(v9 + 96))(21LL, &DestinationString);
              }
              PoFxActivateComponent(v7, 0LL, 1);
              PoFxStartDevicePowerManagement(v7);
            }
            if ( (unsigned int)++v5 >= *Pool2 )
              goto LABEL_14;
          }
          if ( KeGetCurrentPrcb()->CpuVendor == 2 )
          {
            v11 = (unsigned int)(2 * v10 + 22);
            v12 = (wchar_t *)ExAllocatePool2(64LL, v11, 0x4D584650u);
            v0 = v12;
            if ( !v12 )
              goto LABEL_14;
            RtlStringCbPrintfW(v12, (unsigned int)v11, L"ACPI\\DEBUG%ws", v4 + 3);
            v6 = v0;
          }
          else
          {
            v6 = (wchar_t *)(v4 + 3);
          }
          goto LABEL_9;
        }
      }
LABEL_14:
      ExFreePoolWithTag(Pool2, 0x4D584650u);
      if ( v0 )
        ExFreePoolWithTag(v0, 0x4D584650u);
    }
  }
}
