/*
 * XREFs of ?IsPlaceModeEnabled@@YA_NXZ @ 0x1802CF954
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1802CDC80 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     _Init_thread_footer @ 0x1800910E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180091150 (_Init_thread_header.c)
 */

bool IsPlaceModeEnabled(void)
{
  int v0; // eax
  DWORD pcbData; // [rsp+50h] [rbp+8h] BYREF
  int pvData; // [rsp+58h] [rbp+10h] BYREF

  if ( dword_180653398 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180653398);
    if ( dword_180653398 == -1 )
    {
      dword_18065339C = IsPPIEdition() + 1;
      Init_thread_footer(&dword_180653398);
    }
  }
  v0 = dword_180652C58;
  if ( !dword_180652C58 )
  {
    pcbData = 4;
    if ( RegGetValueW(
           HKEY_CURRENT_USER,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\WindowArrangement\\PlaceMode",
           L"Enabled",
           0x10u,
           0LL,
           &pvData,
           &pcbData) )
    {
      v0 = dword_18065339C;
    }
    else
    {
      v0 = 2 - (pvData != 0);
    }
    dword_180652C58 = v0;
  }
  return v0 == 1;
}
