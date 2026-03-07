char __fastcall IsHDRSourceModeAvailableForPinnedSourceMode(
        const struct DXGADAPTER *a1,
        const struct DMMVIDPNSOURCEMODESET *a2)
{
  int PreferredHdrPixelFormat; // eax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rbx
  const struct DMMVIDPNSOURCEMODESET *v7; // r8
  const struct DMMVIDPNSOURCEMODE *NextMode; // rcx

  PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*((_QWORD *)a1 + 365));
  v4 = *((_QWORD *)a2 + 18);
  v5 = PreferredHdrPixelFormat;
  if ( !v4 )
    return 0;
  v6 = *(_QWORD *)(v4 + 76);
  v7 = (const struct DMMVIDPNSOURCEMODESET *)*((_QWORD *)a2 + 6);
  if ( v7 == (const struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 48) )
    return 0;
  NextMode = (const struct DMMVIDPNSOURCEMODESET *)((char *)v7 - 8);
  if ( v7 == (const struct DMMVIDPNSOURCEMODESET *)8 )
    return 0;
  while ( (*((_DWORD *)NextMode + 18) != 1
        || v6 != *(_QWORD *)((char *)NextMode + 76)
        || v5 != 2
        || *((_DWORD *)NextMode + 24) != 113)
       && (v5 != 1 || *((_DWORD *)NextMode + 24) != 35) )
  {
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(a2, NextMode);
    if ( !NextMode )
      return 0;
  }
  return 1;
}
