/*
 * XREFs of RtlpMuiRegAddAlternateCodePage @ 0x14039C354
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1408437B0 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     RtlUnicodeStringToInteger @ 0x140751D60 (RtlUnicodeStringToInteger.c)
 *     LdrpQueryValueKey @ 0x1408446D0 (LdrpQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpMuiRegAddAlternateCodePage(__int64 a1, void *a2)
{
  __int64 v4; // r14
  int v5; // eax
  int v6; // ecx
  unsigned int v7; // ecx
  __int64 Pool2; // rax
  const wchar_t *v9; // rbx
  void *v10; // rdi
  unsigned int v11; // r13d
  unsigned int v12; // esi
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
  v5 = LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17);
  if ( v5 != -1073741772 )
  {
    v6 = v17;
    if ( (_DWORD)v17 )
    {
      if ( v5 == -2147483643 )
      {
        LODWORD(v17) = v17 + 2;
        v7 = (v6 + 5) & 0xFFFFFFFC;
        if ( v7 )
        {
          Pool2 = ExAllocatePool2(256LL, v7, 1920232557LL);
          v9 = (const wchar_t *)Pool2;
          if ( Pool2 )
          {
            v10 = (void *)Pool2;
            if ( !(unsigned int)LdrpQueryValueKey(a2, &DestinationString, (__int64)&v17) && (v18 == 1 || v18 == 7) )
            {
              v11 = 0;
              v12 = (unsigned int)v17 >> 1;
              v10 = (void *)v9;
              if ( (unsigned int)v17 >> 1 )
              {
                v13 = (_WORD *)(a1 + 20);
                while ( v9 && *v9 )
                {
                  if ( !wcsicmp(v9, L"*") )
                  {
                    *(_WORD *)(a1 + 20) = -1;
                    break;
                  }
                  RtlInitUnicodeString(&DestinationString, v9);
                  if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value)
                    || (++v4, *v13 = Value, ++v13, v4 < 4) )
                  {
                    v14 = -1LL;
                    do
                      ++v14;
                    while ( v9[v14] );
                    v11 += v14 + 1;
                    v9 += (unsigned int)(v14 + 1);
                    if ( v11 < v12 )
                      continue;
                  }
                  break;
                }
              }
            }
            ExFreePoolWithTag(v10, 0);
          }
        }
      }
    }
  }
}
