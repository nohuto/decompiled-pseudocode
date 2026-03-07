char __fastcall BiIsObjectAliased(_QWORD *a1, _DWORD *a2)
{
  char result; // al
  bool v3; // zf
  __int64 v4; // r8
  __int64 v6; // rcx

  result = 0;
  v4 = *a1 - *(_QWORD *)&GUID_CURRENT_BOOT_ENTRY.Data1;
  v3 = *a1 == *(_QWORD *)&GUID_CURRENT_BOOT_ENTRY.Data1;
  *a2 = 0;
  if ( v3 )
    v4 = a1[1] - *(_QWORD *)GUID_CURRENT_BOOT_ENTRY.Data4;
  if ( !v4 )
  {
    *a2 = 1;
    return 1;
  }
  v6 = *a1 - *(_QWORD *)&GUID_DEFAULT_BOOT_ENTRY.Data1;
  if ( !v6 )
    v6 = a1[1] - *(_QWORD *)GUID_DEFAULT_BOOT_ENTRY.Data4;
  if ( !v6 )
  {
    *a2 = 2;
    return 1;
  }
  return result;
}
