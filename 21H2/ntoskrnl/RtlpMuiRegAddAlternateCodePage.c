/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x1403ACD90
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x14079364C (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     _wcsicmp @ 0x1403D20D0 (_wcsicmp.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x140684670 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryValueKey @ 0x14079370C (LdrpQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  __int64 v4; // r14
  PSLIST_ENTRY result; // rax
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edi
  ULONG_PTR v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned int v13; // r13d
  unsigned int v14; // esi
  const wchar_t *v15; // rdi
  _WORD *v16; // r15
  NTSTATUS v17; // eax
  __int64 v18; // rax
  ULONG Value; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  int v22; // [rsp+A8h] [rbp+58h]

  v22 = 7;
  v4 = 0LL;
  LODWORD(v21) = 0;
  Value = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"AlternateCodePage");
  result = (PSLIST_ENTRY)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v21);
  if ( (_DWORD)result != -1073741772 )
  {
    v6 = v21;
    if ( (_DWORD)v21 )
    {
      if ( (_DWORD)result == -2147483643 )
      {
        LODWORD(v21) = v21 + 2;
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
          if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v21) && (v22 == 1 || v22 == 7) )
          {
            v13 = 0;
            v14 = (unsigned int)v21 >> 1;
            v15 = (const wchar_t *)v9;
            if ( (unsigned int)v21 >> 1 )
            {
              v16 = (_WORD *)(a1 + 20);
              v10 = 0LL;
              while ( v15 && *v15 )
              {
                if ( !wcsicmp(v15, L"*") )
                {
                  *(_WORD *)(a1 + 20) = -1;
                  return ExFreeHeapPool(v9, v10, v11, v12);
                }
                RtlInitUnicodeString(&DestinationString, v15);
                v17 = RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
                v10 = 0LL;
                if ( v17 || (++v4, *v16 = Value, ++v16, v4 < 4) )
                {
                  v18 = -1LL;
                  do
                    ++v18;
                  while ( v15[v18] );
                  v13 += v18 + 1;
                  v15 += (unsigned int)(v18 + 1);
                  if ( v13 < v14 )
                    continue;
                }
                return ExFreeHeapPool(v9, v10, v11, v12);
              }
            }
          }
          return ExFreeHeapPool(v9, v10, v11, v12);
        }
      }
    }
  }
  return result;
}
