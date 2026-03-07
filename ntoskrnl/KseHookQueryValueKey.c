__int64 __fastcall KseHookQueryValueKey(__int64 a1, const UNICODE_STRING *a2, int a3, _DWORD *a4)
{
  unsigned int v7; // ebp
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx

  v7 = ((__int64 (__fastcall *)(__int64, const UNICODE_STRING *))qword_140C070C8)(a1, a2);
  if ( (v7 & 0x80000000) != 0 )
    return v7;
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
LABEL_6:
      if ( a4[1] == 4 && a4[2] == 4 && RtlEqualUnicodeString(&KseUseVtHardware, a2, 1u) )
        a4[3] = 0;
      return v7;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        return v7;
      goto LABEL_6;
    }
  }
  if ( a4[1] == 4 && a4[3] == 4 && RtlEqualUnicodeString(&KseUseVtHardware, a2, 1u) )
    *(_DWORD *)((char *)a4 + (unsigned int)a4[2]) = 0;
  return v7;
}
