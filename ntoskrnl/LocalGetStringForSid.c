/*
 * XREFs of LocalGetStringForSid @ 0x14074FCB0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x14074F708 (LocalConvertSDToStringSD_Rev1.c)
 *     GetPrintableOperandValue @ 0x1409D117C (GetPrintableOperandValue.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D2E2C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     RtlNtStatusToDosError @ 0x140755BE0 (RtlNtStatusToDosError.c)
 *     LocalConvertSidToStringSidW @ 0x1408368E8 (LocalConvertSidToStringSidW.c)
 */

__int64 __fastcall LocalGetStringForSid(PSID Sid1, wchar_t **a2, __int64 a3, __int64 a4, int a5, char a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  size_t v12; // rdi
  wchar_t *v13; // rax
  const wchar_t *v14; // r8
  NTSTATUS v16; // eax
  wchar_t *v17; // [rsp+20h] [rbp-28h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v18 = 0LL;
  if ( Sid1 && a2 )
  {
    v9 = LookupSidInTable(0LL, Sid1, a3, a4, v17, a6, &v18);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(unsigned int *)(v9 + 12);
    }
    else
    {
      if ( !v18 )
      {
        v16 = LocalConvertSidToStringSidW(Sid1);
        if ( v16 < 0 )
          return RtlNtStatusToDosError(v16);
        return v6;
      }
      v11 = 2LL;
    }
    v12 = 2 * v11 + 2;
    v13 = (wchar_t *)SddlpAlloc(v12);
    *a2 = v13;
    if ( v13 )
    {
      v14 = (const wchar_t *)(v10 + 2);
      if ( !v10 )
        v14 = L"SA";
      wcscpy_s(v13, v12 >> 1, v14);
    }
    else
    {
      return 8;
    }
    return v6;
  }
  return 87LL;
}
