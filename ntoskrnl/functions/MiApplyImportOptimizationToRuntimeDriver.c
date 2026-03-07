__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  char v7; // r8
  __int64 v8; // rbx
  int v9; // ebx
  __int64 v11; // rax
  unsigned int v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( !MiIsImportOptimizationEnabled() )
    return 0;
  if ( !MiDoesControlAreaRequireRetpolineFixups(v5) )
    return 0;
  v8 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(*(_QWORD *)v6 + 32LL) != v8 || (v7 & 1) != 0 )
    return 0;
  if ( (MiFlags & 0x8000) != 0 )
  {
    v12 = 0;
    LOBYTE(v6) = 1;
    v11 = RtlImageDirectoryEntryToData(v8, v6, 12, (int)&v12);
    if ( v11 )
    {
      v9 = VslCaptureSecureImageIat(v8, v11, v12);
      if ( v9 < 0 )
        return (unsigned int)v9;
    }
  }
  else
  {
    v4 = (__int64 *)MiReservePtes((__int64)&qword_140C695C0, 1u);
    if ( !v4 )
      return (unsigned int)-1073741670;
    v9 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v9 < 0 )
      goto LABEL_11;
  }
  MiWalkEntireImage(a2, (ULONG_PTR)v4, 0x10u, 0xFFFFFFFF);
  if ( (MiFlags & 0x8000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (unsigned __int64)v4);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v9 = 0;
  if ( v4 )
LABEL_11:
    MiReleasePtes((__int64)&qword_140C695C0, v4, 1u);
  return (unsigned int)v9;
}
