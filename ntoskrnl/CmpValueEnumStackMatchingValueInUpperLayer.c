__int64 __fastcall CmpValueEnumStackMatchingValueInUpperLayer(__int64 a1, __int16 a2, unsigned __int16 *a3, char *a4)
{
  unsigned __int16 v8; // bp
  int v9; // ebp
  char v10; // bl
  __int64 EntryAtLayerHeight; // rax
  __int64 result; // rax
  UNICODE_STRING v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v13 = 0LL;
  RtlInitUnicodeString(&v13, 0LL);
  v8 = a3[8];
  v13.Buffer = a3 + 10;
  v9 = (v8 & 1) << 16;
  v13.Length = a3[1];
  v10 = 0;
  v13.MaximumLength = v13.Length;
  while ( ++a2 <= *(__int16 *)(a1 + 12) )
  {
    EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, a2);
    result = CmpFindNameInListCellWithStatus(
               *(_QWORD *)EntryAtLayerHeight,
               *(unsigned int **)(EntryAtLayerHeight + 8),
               *(_DWORD *)(EntryAtLayerHeight + 24),
               (__int64)&v13,
               v9,
               0LL,
               &v14);
    if ( (int)result >= 0 )
    {
      v10 = 1;
      break;
    }
    if ( (_DWORD)result != -1073741772 )
      return result;
  }
  *a4 = v10;
  return 0LL;
}
