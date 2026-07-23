/*
 * XREFs of LdrpResolveProcedureAddress @ 0x1800303F4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800881BC (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlReleasePath @ 0x180011F80 (RtlReleasePath.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x18001427C (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpLoadForwardedDll @ 0x180016C08 (LdrpLoadForwardedDll.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlGuardCheckImageBase @ 0x180075B68 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x180076AC4 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     LdrpCheckRedirection @ 0x1800D4F10 (LdrpCheckRedirection.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5, __int64 *a6)
{
  WCHAR *v6; // rbx
  __int64 v7; // rsi
  PVOID *v9; // rdi
  unsigned int v10; // r12d
  char ShouldModuleImportBeRedirected; // al
  __int64 v12; // rax
  int ProcedureAddress; // eax
  int ForwardedDll; // ebx
  unsigned int v15; // eax
  PVOID v17; // rdi
  int v18; // eax
  char v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  _QWORD *v24; // [rsp+50h] [rbp-B0h]
  __int128 v25; // [rsp+58h] [rbp-A8h] BYREF
  PWSTR Path[16]; // [rsp+70h] [rbp-90h] BYREF

  v6 = (WCHAR *)a2[10];
  v7 = a3;
  v24 = a2;
  v9 = (PVOID *)a2;
  v23 = a1;
  v22 = a3;
  BaseAddress = a2;
  v20 = a4;
  v10 = 0;
  memset(Path, 0, sizeof(Path));
  Path[4] = v6;
  ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(a1);
  v19 = ShouldModuleImportBeRedirected;
  while ( 1 )
  {
    if ( ShouldModuleImportBeRedirected )
    {
      if ( v7 )
      {
        v12 = LdrpCheckRedirection(v23, v9, v7);
        if ( v12 != -4530927 )
        {
          *a6 = v12;
          return 0LL;
        }
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(v9[6]);
    ForwardedDll = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v15 = v10++;
    if ( v15 >= 0x20 || (a5 & 2) != 0 )
    {
      ForwardedDll = -1073741701;
      goto LABEL_13;
    }
    ForwardedDll = LdrpParseForwarderDescription(*a6, &v25, &v22, &v20);
    if ( ForwardedDll < 0 )
      goto LABEL_13;
    LODWORD(Path[3]) = *((_DWORD *)v9 + 68);
    ForwardedDll = LdrpLoadForwardedDll(
                     (__int64)&v25,
                     (__int64)Path,
                     (__int64)v24,
                     (__int64)v9,
                     2,
                     (__int64)&BaseAddress);
    if ( ForwardedDll < 0 )
      goto LABEL_13;
    v9 = (PVOID *)BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
    ShouldModuleImportBeRedirected = v19;
    v7 = v22;
  }
  if ( (a5 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      RtlGuardCheckImageBase(v9[23]);
    }
    else
    {
      v17 = v9[6];
      LOBYTE(v18) = LdrControlFlowGuardEnforced();
      if ( v18 )
      {
        if ( (unsigned __int64)v17 < *((_QWORD *)&xmmword_180181510 + 1)
          || (unsigned __int64)v17 >= *((_QWORD *)&xmmword_180181510 + 1)
                                    + (unsigned __int64)(unsigned int)qword_180181520 )
        {
          RtlpxLookupFunctionTable(v17);
        }
        else
        {
          v25 = xmmword_180181510;
        }
        if ( *((PVOID *)&v25 + 1) != v17 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_13:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( ForwardedDll < 0 )
    *a6 = 0LL;
  return (unsigned int)ForwardedDll;
}
