/*
 * XREFs of LocalGetSidForString @ 0x140750A70
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14074E300 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14074F18C (LocalGetAclForString.c)
 *     GetOperandValue @ 0x1409D07DC (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x1409D2214 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     LocalpConvertStringSidToSid @ 0x14074CCC8 (LocalpConvertStringSidToSid.c)
 *     RtlNtStatusToDosError @ 0x140755BE0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall LocalGetSidForString(wchar_t *a1, __int64 *a2, wchar_t **a3, _BYTE *a4)
{
  ULONG v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  NTSTATUS v12; // eax
  wchar_t *v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = 0LL;
  v8 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a4 = 0;
  if ( *a1 && a1[1] )
  {
    *a3 = a1 + 2;
    v9 = LookupSidInTable(a1, 0LL, 0LL, (__int64)a4, v13, 0, &v14);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      v10 = v14;
      if ( !v14 )
      {
        *a3 -= 2;
        v12 = LocalpConvertStringSidToSid(a1, a2, a3);
        if ( v12 >= 0 || (v8 = RtlNtStatusToDosError(v12)) == 0 )
        {
          if ( *a2 )
            *a4 = 1;
        }
        return v8;
      }
      *a4 = 1;
    }
    *a2 = v10;
    return v8;
  }
  return 1332LL;
}
