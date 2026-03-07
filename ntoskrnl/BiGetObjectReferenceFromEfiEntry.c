__int64 __fastcall BiGetObjectReferenceFromEfiEntry(__int64 a1, GUID *a2)
{
  bool v2; // cf
  unsigned int v5; // ebx
  unsigned int v7; // ebx
  size_t v8; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v10; // rsi
  wchar_t *v11; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v14; // [rsp+40h] [rbp-19h]
  __int128 v15; // [rsp+50h] [rbp-9h]
  __int128 v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+17h]
  int v18; // [rsp+78h] [rbp+1Fh]
  __int16 v19; // [rsp+7Ch] [rbp+23h]

  v2 = *(_DWORD *)(a1 + 4) < 0x1Cu;
  DestinationString = 0LL;
  if ( v2 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)(a1 + 24) < 0x14u )
    return (unsigned int)-1073741811;
  if ( strncmp((const char *)(a1 + 28), "WINDOWS", 7uLL) )
    return (unsigned int)-1073741811;
  v7 = *(_DWORD *)(a1 + 40);
  if ( v7 < 0x14 || !*(_DWORD *)(a1 + 36) || (unsigned int)wcsnlen((const wchar_t *)(a1 + 48), v7 - 20) == v7 - 20 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
    Pool2 = (wchar_t *)ExAllocatePool2(258LL, v8, 1262764866LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, (const void *)(a1 + 48), v8);
      wcsupr(v10);
      v11 = wcsstr(v10, L"BCDOBJECT=");
      if ( v11 && (unsigned __int64)v10 + v8 - (_QWORD)(v11 + 10) >= 0x4E )
      {
        *(_OWORD *)SourceString = *(_OWORD *)(v11 + 10);
        v14 = *(_OWORD *)(v11 + 18);
        v15 = *(_OWORD *)(v11 + 26);
        v16 = *(_OWORD *)(v11 + 34);
        v17 = *(_QWORD *)(v11 + 42);
        v18 = *((_DWORD *)v11 + 23);
        v19 = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v5 = RtlGUIDFromString(&DestinationString, a2);
      }
      else
      {
        v5 = -1073741275;
      }
      ExFreePoolWithTag(v10, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v5;
}
