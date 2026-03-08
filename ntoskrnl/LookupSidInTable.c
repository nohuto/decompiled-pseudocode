/*
 * XREFs of LookupSidInTable @ 0x1406999A0
 * Callers:
 *     SeConvertStringSidToSid @ 0x1402C0AD0 (SeConvertStringSidToSid.c)
 *     LocalGetStringForSid @ 0x14074FCB0 (LocalGetStringForSid.c)
 *     LocalConvertAclToString @ 0x14074FD70 (LocalConvertAclToString.c)
 *     LocalGetSidForString @ 0x140750A70 (LocalGetSidForString.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     RtlSubAuthorityCountSid @ 0x1402BE730 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 */

__int64 __fastcall LookupSidInTable(
        wchar_t *Str1,
        PSID Sid1,
        __int64 a3,
        __int64 a4,
        wchar_t *Str2,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  BOOL v10; // esi
  unsigned int v11; // r13d
  int v12; // ecx
  ULONG v13; // ecx
  int v14; // edx
  unsigned int v15; // ebp
  PSID *v16; // r14
  __int64 v17; // rax
  __int64 v19; // rbp
  void *v20; // rcx
  ULONG v21; // r14d
  void *v22; // rsi
  PUCHAR v23; // rax
  int v24; // [rsp+60h] [rbp+8h]
  char v26; // [rsp+78h] [rbp+20h]
  wchar_t *Str2a; // [rsp+80h] [rbp+28h]

  v7 = 0LL;
  v26 = 0;
  v24 = 0;
  if ( __PAIR128__((unsigned __int64)Str1, (unsigned __int64)Sid1) == 0 )
    return 0LL;
  v10 = 0;
  v11 = 65;
  *a7 = 0LL;
  if ( !Str1 )
  {
    v26 = 1;
    v12 = *RtlSubAuthorityCountSid(Sid1);
    if ( !(_BYTE)v12 )
      goto LABEL_7;
    v13 = *RtlSubAuthoritySid(Sid1, v12 - 1);
    if ( v13 - 498 > 0x1D )
      goto LABEL_7;
    v14 = 540016641;
    if ( !_bittest(&v14, v13 - 498) )
      goto LABEL_7;
    v10 = 1;
    if ( v13 != 518 )
      goto LABEL_7;
    goto LABEL_28;
  }
  if ( !wcsnicmp(Str1, L"EA", 2uLL) )
    goto LABEL_24;
  if ( !wcsnicmp(Str1, L"SA", 2uLL) )
  {
    v10 = 1;
LABEL_28:
    v24 = 1;
    goto LABEL_7;
  }
  if ( wcsnicmp(Str1, L"RO", 2uLL) )
    v10 = wcsnicmp(Str1, L"EK", 2uLL) == 0;
  else
LABEL_24:
    v10 = 1;
LABEL_7:
  v15 = 0;
  v16 = (PSID *)&unk_140C09A40;
  do
  {
    if ( v26 )
    {
      if ( RtlEqualSid(Sid1, *v16) )
        break;
      goto LABEL_10;
    }
    Str2a = (wchar_t *)((char *)&unk_140C09A30 + 104 * v15 + 2);
    if ( !wcsnicmp(Str1, Str2a, *((unsigned int *)v16 - 1)) )
      break;
    if ( v10 && a6 && !a3 && *((_BYTE *)v16 - 16) && *v16 && !wcsnicmp(L"DA", Str2a, *((unsigned int *)v16 - 1)) )
      v11 = v15;
LABEL_10:
    ++v15;
    v16 += 13;
  }
  while ( v15 < 0x41 );
  if ( v15 < 0x41 )
  {
    v17 = v15;
    return (__int64)&unk_140C09A30 + 104 * v17;
  }
  if ( v10 && a6 && !a3 && v11 < 0x41 )
  {
    if ( v24 )
    {
      if ( v26 )
      {
        *a7 = Sid1;
      }
      else
      {
        v19 = 104LL * v11;
        v20 = *(void **)((char *)&unk_140C09A30 + v19 + 16);
        if ( v20 )
        {
          v21 = RtlLengthSid(v20);
          v22 = (void *)SddlpAlloc(v21 + 1);
          *a7 = v22;
          if ( v22 )
          {
            _mm_lfence();
            memmove(v22, *(const void **)((char *)&unk_140C09A30 + v19 + 16), v21);
            v23 = RtlSubAuthorityCountSid(*(PSID *)((char *)&unk_140C09A30 + v19 + 16));
            *RtlSubAuthoritySid(v22, (unsigned int)*v23 - 1) = 518;
          }
        }
      }
    }
    else
    {
      v17 = v11;
      return (__int64)&unk_140C09A30 + 104 * v17;
    }
  }
  return v7;
}
