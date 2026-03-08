/*
 * XREFs of ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01AABF8
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00D5E84 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00D6420 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01AA764 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     ?DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z @ 0x1C01AA7F4 (-DerefPageOnlyRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@H@Z.c)
 */

void __fastcall RemoveProcRequest(struct tagPROCESS_HID_TABLE **a1, struct tagPROCESS_HID_REQUEST *a2, int a3, int a4)
{
  int v8; // edi
  int v9; // edi
  __int64 v10; // rcx
  struct tagPROCESS_HID_REQUEST **v11; // rax

  HMAssignmentUnlock((char *)a2 + 32);
  v8 = a3 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
        DerefExcludeRequest(a2, a4, 0);
    }
    else
    {
      DerefPageOnlyRequest(a2, a1[103], 0);
    }
  }
  else
  {
    DerefIncludeRequest(a2, a1[103], a4, 0);
  }
  v10 = *(_QWORD *)a2;
  if ( *(struct tagPROCESS_HID_REQUEST **)(*(_QWORD *)a2 + 8LL) != a2
    || (v11 = (struct tagPROCESS_HID_REQUEST **)*((_QWORD *)a2 + 1), *v11 != a2) )
  {
    __fastfail(3u);
  }
  *v11 = (struct tagPROCESS_HID_REQUEST *)v10;
  *(_QWORD *)(v10 + 8) = v11;
}
