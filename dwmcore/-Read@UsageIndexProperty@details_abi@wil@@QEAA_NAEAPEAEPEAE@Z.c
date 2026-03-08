/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180195F18
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18019503C (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x1801956FC (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x18019589C (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1801965A0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x180196F90 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800F951C (memcpy_s.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char *v4; // r8
  char *v7; // rbp
  __int16 v8; // ax
  char *v9; // rbp
  unsigned __int8 *v10; // rcx
  bool result; // al
  unsigned __int16 v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v7 = v4 + 2;
    if ( v4 + 2 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s(&v12, 2uLL, v4, 2uLL);
    *((_DWORD *)this + 1) = v12;
  }
  else
  {
    if ( *((_BYTE *)this + 2) != 2 )
      goto LABEL_8;
    v7 = v4 + 4;
    if ( v4 + 4 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s((char *)this + 4, 4uLL, v4, 4uLL);
  }
  v4 = v7;
LABEL_8:
  v8 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( v8 )
    goto LABEL_11;
  v9 = v4 + 2;
  if ( v4 + 2 > (char *)a3 )
    return 0;
  memcpy_s((char *)this + 8, 2uLL, v4, 2uLL);
  v4 = v9;
LABEL_11:
  v10 = (unsigned __int8 *)&v4[*((unsigned __int16 *)this + 4)];
  if ( v10 > a3 )
    return 0;
  *((_QWORD *)this + 3) = v4;
  result = 1;
  *a2 = v10;
  return result;
}
