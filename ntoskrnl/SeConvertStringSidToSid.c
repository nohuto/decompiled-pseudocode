/*
 * XREFs of SeConvertStringSidToSid @ 0x1402C0AD0
 * Callers:
 *     ExWnfHiveUnloaded @ 0x14074B598 (ExWnfHiveUnloaded.c)
 * Callees:
 *     SddlpFree @ 0x1406800D8 (SddlpFree.c)
 *     LookupSidInTable @ 0x1406999A0 (LookupSidInTable.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     LocalpConvertStringSidToSid @ 0x14074CCC8 (LocalpConvertStringSidToSid.c)
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 */

__int64 __fastcall SeConvertStringSidToSid(wchar_t *Str1, __int64 *a2)
{
  NTSTATUS v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG v13; // ebx
  void *v14; // rax
  wchar_t *v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( !Str1 || !a2 )
    return (unsigned int)-1073741811;
  v4 = LocalpConvertStringSidToSid(Str1, a2, &v16);
  if ( v4 < 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Str1[v9] );
    if ( (unsigned int)((v16 - (__int64)Str1) >> 1) != v9 )
    {
      v4 = -1073741704;
      SddlpFree(*a2);
      *a2 = 0LL;
      return (unsigned int)v4;
    }
    return 0;
  }
  v5 = LookupSidInTable(Str1, 0LL, v15, 0, (__int64)&v17);
  v6 = v17;
  v7 = v5;
  if ( v5 )
  {
    v11 = *(_QWORD *)(v5 + 16);
    if ( v11 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( Str1[v12] );
      if ( v12 == *(_DWORD *)(v5 + 12) )
      {
        v13 = 4 * *(unsigned __int8 *)(v11 + 1) + 8;
        v14 = (void *)SddlpAlloc(v13);
        *a2 = (__int64)v14;
        if ( v14 )
        {
          v4 = RtlCopySid(v13, v14, *(PSID *)(v7 + 16));
          if ( v4 < 0 )
          {
            SddlpFree(*a2);
            *a2 = 0LL;
          }
        }
        else
        {
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741704;
      }
      goto LABEL_25;
    }
  }
  if ( !v17 )
    return (unsigned int)v4;
  v10 = -1LL;
  do
    ++v10;
  while ( Str1[v10] );
  if ( v10 == 2 )
  {
    *a2 = v17;
    return 0;
  }
LABEL_25:
  if ( v6 )
    SddlpFree(v6);
  return (unsigned int)v4;
}
