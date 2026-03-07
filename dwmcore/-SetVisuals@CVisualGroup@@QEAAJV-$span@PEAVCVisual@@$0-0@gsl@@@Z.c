__int64 __fastcall CVisualGroup::SetVisuals(__int64 a1, __int128 *a2)
{
  __int128 v4; // xmm0
  int appended; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  std::_Destroy_range<std::allocator<std::unique_ptr<CExcludeVisualReference>>>(
    *(CExcludeVisualReference ***)(a1 + 64),
    *(CExcludeVisualReference ***)(a1 + 72));
  v4 = *a2;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a1 + 64);
  *(_OWORD *)v8 = v4;
  appended = CVisualGroup::AppendVisuals(a1, v8);
  v6 = appended;
  if ( appended >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
    (const char *)(unsigned int)appended);
  return v6;
}
