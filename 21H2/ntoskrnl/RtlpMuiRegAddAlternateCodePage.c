/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x1403A8404
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x14078F3EC (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x1405DE4B0 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryValueKey @ 0x14078F4AC (LdrpQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  __int64 v4; // r14
  PSLIST_ENTRY result; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  ULONG_PTR v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // esi
  const wchar_t *v12; // rdi
  _WORD *v13; // r15
  __int64 v14; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  int v18; // [rsp+A8h] [rbp+58h]

  v18 = 7;
  v4 = 0LL;
  LODWORD(v17) = 0;
  Value = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = (PSLIST_ENTRY)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17);
  if ( (_DWORD)result != -1073741772 )
  {
    v6 = v17;
    if ( (_DWORD)v17 )
    {
      if ( (_DWORD)result == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          v8 = v7;
          result = (PSLIST_ENTRY)ExAllocatePoolWithTag(PagedPool, v7, 0x72746C6Du);
          v9 = (ULONG_PTR)result;
          if ( result )
            result = (PSLIST_ENTRY)memset(result, 0, v8);
        }
        else
        {
          v9 = 0LL;
        }
        if ( v9 )
        {
          if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17) && (v18 == 1 || v18 == 7) )
          {
            v10 = 0;
            v11 = (unsigned int)v17 >> 1;
            v12 = (const wchar_t *)v9;
            if ( (unsigned int)v17 >> 1 )
            {
              v13 = (_WORD *)(a1 + 20);
              while ( v12 && *v12 )
              {
                if ( !wcsicmp(v12, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  return ExFreeHeapPool(v9);
                }
                RtlInitUnicodeString(&DestinationString, v12);
                if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value) || (++v4, *v13 = Value, ++v13, v4 < 4) )
                {
                  v14 = -1LL;
                  do
                    ++v14;
                  while ( v12[v14] );
                  v10 += v14 + 1;
                  v12 += (unsigned int)(v14 + 1);
                  if ( v10 < v11 )
                    continue;
                }
                return ExFreeHeapPool(v9);
              }
            }
          }
          return ExFreeHeapPool(v9);
        }
      }
    }
  }
  return result;
}
