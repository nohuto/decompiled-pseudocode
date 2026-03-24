/*
 * XREFs of RtlpGetNormalization @ 0x14091B870
 * Callers:
 *     RtlIsNormalizedString @ 0x140918E40 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x140918ED0 (RtlNormalizeString.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1403FB960 (ZwGetNlsSectionPtr.c)
 *     NormalizationListEntry_Alloc @ 0x14059425C (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x140594284 (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x1405942B8 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x1405942E8 (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x140594318 (NormalizationList__Unlock.c)
 *     Normalization__LoadTables @ 0x1409182A0 (Normalization__LoadTables.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, char **a2)
{
  __int64 result; // rax
  int v5; // ecx
  char *v6; // rsi
  char *v7; // rax
  __int64 v8; // rdx
  int NlsSectionPtr; // ebx
  char *v10; // rax
  _DWORD *v11; // rbx
  int Tables; // ebp
  unsigned __int64 v13; // [rsp+58h] [rbp+10h]
  unsigned __int16 *v14; // [rsp+60h] [rbp+18h]

  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock();
  v6 = NormalizationList__Lookup(a1);
  if ( !v6 )
  {
    v14 = 0LL;
    v13 = 0LL;
    v7 = NormalizationList__Lookup(v5 ^ 0x100u);
    if ( v7 )
    {
      v14 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
      v13 = *((_QWORD *)v7 + 2);
    }
    else
    {
      v8 = a1;
      LODWORD(v8) = a1 & 0xFFFFFEFF;
      NlsSectionPtr = ZwGetNlsSectionPtr(12LL, v8);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v10 = (char *)NormalizationListEntry_Alloc();
    v11 = v10;
    if ( !v10 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v6 = v10 + 24;
    Tables = Normalization__LoadTables(a1, v14, v13, (_DWORD *)v10 + 6);
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v11, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v11[4] = a1;
    NormalizationList__InsertTail((__int64)v11);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v6;
  return result;
}
