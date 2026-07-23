/*
 * XREFs of RtlpGetNormalization @ 0x14091B980
 * Callers:
 *     RtlIsNormalizedString @ 0x140918F50 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x140918FE0 (RtlNormalizeString.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1403FC4C0 (ZwGetNlsSectionPtr.c)
 *     NormalizationListEntry_Alloc @ 0x14059454C (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x140594574 (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x1405945A8 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x1405945D8 (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x140594608 (NormalizationList__Unlock.c)
 *     Normalization__LoadTables @ 0x1409183B0 (Normalization__LoadTables.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, char **a2)
{
  __int64 result; // rax
  int v5; // ecx
  char *v6; // rsi
  char *v7; // rax
  NTSTATUS NlsSectionPtr; // ebx
  char *v9; // rax
  _DWORD *v10; // rbx
  int Tables; // ebp
  unsigned __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock();
  v6 = NormalizationList__Lookup(a1);
  if ( !v6 )
  {
    SectionPointer = 0LL;
    SectionSize = 0LL;
    v7 = NormalizationList__Lookup(v5 ^ 0x100u);
    if ( v7 )
    {
      SectionPointer = (PVOID)*((_QWORD *)v7 + 1);
      SectionSize = *((_QWORD *)v7 + 2);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v9 = (char *)NormalizationListEntry_Alloc();
    v10 = v9;
    if ( !v9 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock();
      return (unsigned int)NlsSectionPtr;
    }
    v6 = v9 + 24;
    Tables = Normalization__LoadTables(a1, (unsigned __int16 *)SectionPointer, SectionSize, (_DWORD *)v9 + 6);
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v10, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v10[4] = a1;
    NormalizationList__InsertTail((__int64)v10);
  }
  NormalizationList__Unlock();
  result = 0LL;
  *a2 = v6;
  return result;
}
