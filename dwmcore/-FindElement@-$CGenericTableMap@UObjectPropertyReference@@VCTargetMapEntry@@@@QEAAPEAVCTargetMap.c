PVOID __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
        struct _RTL_GENERIC_TABLE *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  PVOID v3; // rbx
  __int128 v5; // [rsp+20h] [rbp-38h]
  __int128 Buffer; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  v7 = 0LL;
  *(_QWORD *)&v5 = v2;
  DWORD2(v5) = *((_DWORD *)a2 + 2);
  Buffer = v5;
  v3 = RtlLookupElementGenericTable(a1, &Buffer);
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&Buffer);
  return v3;
}
