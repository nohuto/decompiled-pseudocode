/*
 * XREFs of PipProcessPendingObjects @ 0x140B91F00
 * Callers:
 *     PipProcessPendingServices @ 0x140B5AF8C (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x140B5B018 (PipProcessPendingOsExtensionResources.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _PnpCtxRegOpenKey @ 0x14081D410 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKey @ 0x14081D44C (_PnpCtxRegEnumKey.c)
 *     _PnpCtxRegQueryValue @ 0x14086617C (_PnpCtxRegQueryValue.c)
 *     PnpCheckDriverDependencies @ 0x140955668 (PnpCheckDriverDependencies.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipProcessPendingObjects(
        void *a1,
        __int64 (__fastcall *a2)(_BYTE *, void *, _QWORD, char *),
        __int64 a3,
        int (__fastcall *a4)(_BYTE *, void *, void *, _QWORD))
{
  _WORD *Pool2; // rbx
  unsigned int v5; // esi
  int v9; // eax
  int i; // r14d
  __int64 v11; // rcx
  int v12; // edi
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[3]; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v19; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  void *v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[528]; // [rsp+50h] [rbp-B0h] BYREF

  v19 = 260;
  Pool2 = 0LL;
  v17 = 0;
  v5 = 0;
  v21 = 0LL;
  v20 = 0;
  v9 = PnpCtxRegEnumKey((__int64)a1, a1);
  for ( i = 1; ; ++i )
  {
    v12 = v9;
    if ( v9 == -2147483622 || v9 == -1073741444 )
      break;
    if ( v9 < 0 )
      goto LABEL_29;
    if ( (int)PnpCtxRegOpenKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, (__int64)v22, 0, 1u, (__int64)&v21) >= 0 )
    {
      if ( !a2 )
        goto LABEL_8;
      v17 = 0;
      v12 = a2(v22, v21, 0LL, &v17);
      if ( v12 < 0 )
        goto LABEL_29;
      if ( !v17 )
      {
LABEL_8:
        v19 = v5;
        v13 = PnpCtxRegQueryValue(v11, v21, L"DependOnFirmware", &v20, Pool2, &v19);
        if ( v13 == -1073741789 || v13 == -2147483643 )
        {
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x42706E50u);
          v5 = v19;
          Pool2 = (_WORD *)ExAllocatePool2(256LL, v19, 0x42706E50u);
          if ( !Pool2 )
            return (unsigned int)-1073741670;
          v13 = PnpCtxRegQueryValue(v15, v21, L"DependOnFirmware", &v20, Pool2, &v19);
        }
        if ( v13 == -1073741772 )
        {
          if ( Pool2 && v5 >= 2 )
          {
            *Pool2 = 0;
LABEL_21:
            if ( *Pool2 )
            {
              v18[0] = 0;
              if ( (int)PnpCheckDriverDependencies(Pool2, v18, v14) < 0 || !v18[0] )
                goto LABEL_26;
            }
          }
        }
        else
        {
          if ( v13 < 0 )
            goto LABEL_26;
          if ( Pool2 && v5 >= 2 )
            goto LABEL_21;
        }
        if ( a4(v22, a1, v21, 0LL) >= 0 )
          --i;
      }
    }
LABEL_26:
    v19 = 260;
    v9 = PnpCtxRegEnumKey(v11, a1);
  }
  v12 = 0;
LABEL_29:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x42706E50u);
  return (unsigned int)v12;
}
