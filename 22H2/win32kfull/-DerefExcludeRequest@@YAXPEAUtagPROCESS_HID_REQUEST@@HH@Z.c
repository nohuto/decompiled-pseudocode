/*
 * XREFs of ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01D4824
 * Callers:
 *     FreeHidProcessRequest @ 0x1C010790C (FreeHidProcessRequest.c)
 *     ?RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x1C01D4B6C (-RemoveProcRequest@@YAXPEAUtagPROCESSINFO@@PEAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     FreeHidTLCInfo @ 0x1C01D5000 (FreeHidTLCInfo.c)
 */

void __fastcall DerefExcludeRequest(struct tagPROCESS_HID_REQUEST *a1, int a2, int a3)
{
  __int64 v3; // rax
  bool v4; // zf

  if ( !a2 )
  {
    if ( (*((_DWORD *)a1 + 5) & 8) != 0 )
      --*(_DWORD *)(*((_QWORD *)a1 + 3) + 40LL);
    v3 = *((_QWORD *)a1 + 3);
    v4 = (*(_DWORD *)(v3 + 36))-- == 1;
    if ( v4
      && a3
      && !(*(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 24LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 32LL) | *(_DWORD *)(*((_QWORD *)a1 + 3) + 36LL)) )
    {
      FreeHidTLCInfo();
    }
  }
}
