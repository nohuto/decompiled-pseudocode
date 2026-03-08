/*
 * XREFs of SepGetCachedHandlesEntry @ 0x1407397EC
 * Callers:
 *     SepSetTokenCachedHandles @ 0x140739630 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     RtlInsertEntryHashTable @ 0x1402989F0 (RtlInsertEntryHashTable.c)
 *     RtlLookupEntryHashTable @ 0x1402B7DA0 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x1402CC980 (RtlGetNextEntryHashTable.c)
 *     RtlHashUnicodeString @ 0x140680AE0 (RtlHashUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x140739C2C (SepAllocateAndInitializeCachedHandleEntry.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepGetCachedHandlesEntry(__int64 a1, int *a2, _BYTE *a3, _QWORD *a4)
{
  struct _RTL_DYNAMIC_HASH_TABLE *v4; // r12
  unsigned int v5; // ebx
  int v6; // ecx
  ULONG_PTR v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v14; // r15
  char v15; // si
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  __int64 v17; // rdx
  __int64 result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v19; // rdi
  int v20; // ecx
  struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-58h] BYREF
  ULONG HashValue; // [rsp+80h] [rbp+8h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+88h] [rbp+10h] BYREF

  v4 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(a1 + 8);
  v5 = 0;
  v6 = *a2;
  Entry = 0LL;
  HashValue = 0;
  v10 = 0LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      RtlHashUnicodeString((PCUNICODE_STRING)(a2 + 2), 1u, 0, &HashValue);
      v10 = HashValue;
    }
  }
  else
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = (unsigned int)*(unsigned __int8 *)(v11 + 1) - 1;
    v13 = *(unsigned int *)(v11 + 4 * v12 + 8);
    v10 = v13 + 1;
    if ( (_DWORD)v13 )
      v10 = *(unsigned int *)(v11 + 4 * v12 + 8);
  }
  *a3 = 0;
  v14 = 0LL;
  memset(&Context, 0, sizeof(Context));
  v15 = 0;
  for ( i = RtlLookupEntryHashTable(v4, v10, &Context); i; i = RtlGetNextEntryHashTable(v4, &Context) )
  {
    v20 = *a2;
    v14 = i;
    if ( *a2 == LODWORD(i[1].Linkage.Blink) )
    {
      if ( v20 )
      {
        if ( v20 == 1 && RtlEqualUnicodeString((PCUNICODE_STRING)(a2 + 2), (PCUNICODE_STRING)&i[1].Signature, 1u) )
          v15 = 1;
      }
      else if ( RtlEqualSid(*((PSID *)a2 + 1), (PSID)i[1].Signature) )
      {
        v15 = 1;
        break;
      }
      if ( v15 )
        break;
    }
  }
  v17 = (unsigned __int64)v14 & -(__int64)(v15 != 0);
  if ( v17 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v17 + 24)) <= 1 )
      __fastfail(0xEu);
    *a3 = 1;
    result = 0LL;
    *a4 = v17;
  }
  else
  {
    result = SepAllocateAndInitializeCachedHandleEntry(a2, &Entry);
    if ( (int)result >= 0 )
    {
      v19 = Entry;
      if ( RtlInsertEntryHashTable(v4, Entry, v10, 0LL) )
      {
        *a4 = v19;
      }
      else
      {
        ExFreePoolWithTag(v19, 0);
        return (unsigned int)-1073741670;
      }
      return v5;
    }
  }
  return result;
}
