/*
 * XREFs of ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x140001D78
 * Callers:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x140001620 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x14000191C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140001A64 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x140001C78 (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 * Callees:
 *     memcpy_s @ 0x140002A9C (memcpy_s.c)
 */

bool __fastcall wil::details_abi::UsageIndexProperty::Read(
        wil::details_abi::UsageIndexProperty *this,
        unsigned __int8 **a2,
        unsigned __int8 *a3)
{
  char *v4; // r8
  __int16 v7; // ax
  unsigned __int8 *v8; // rcx
  bool result; // al
  char *v10; // rbp
  char *v11; // rbp
  unsigned __int16 Destination; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)*a2;
  if ( *((_BYTE *)this + 2) == 1 )
  {
    v10 = v4 + 2;
    if ( v4 + 2 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s(&Destination, 2uLL, v4, 2uLL);
    *((_DWORD *)this + 1) = Destination;
    goto LABEL_8;
  }
  if ( *((_BYTE *)this + 2) == 2 )
  {
    v10 = v4 + 4;
    if ( v4 + 4 > (char *)a3 )
      return 0;
    *((_QWORD *)this + 2) = v4;
    memcpy_s((char *)this + 4, 4uLL, v4, 4uLL);
LABEL_8:
    v4 = v10;
  }
  v7 = *(_WORD *)this;
  *((_WORD *)this + 4) = *(_WORD *)this;
  if ( !v7 )
  {
    v11 = v4 + 2;
    if ( v4 + 2 > (char *)a3 )
      return 0;
    memcpy_s((char *)this + 8, 2uLL, v4, 2uLL);
    v4 = v11;
  }
  v8 = (unsigned __int8 *)&v4[*((unsigned __int16 *)this + 4)];
  if ( v8 <= a3 )
  {
    *((_QWORD *)this + 3) = v4;
    result = 1;
    *a2 = v8;
    return result;
  }
  return 0;
}
