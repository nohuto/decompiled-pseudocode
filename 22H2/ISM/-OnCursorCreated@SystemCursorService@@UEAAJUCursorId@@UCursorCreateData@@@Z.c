/*
 * XREFs of ?OnCursorCreated@SystemCursorService@@UEAAJUCursorId@@UCursorCreateData@@@Z @ 0x1801400D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@QEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x180102A30 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 */

__int64 __fastcall SystemCursorService::OnCursorCreated(__int64 a1, unsigned int a2, __int64 a3)
{
  int v5; // eax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _OWORD *i; // rax
  size_t v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // ebx
  __int128 v15; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *(_DWORD *)a3 == 2 )
  {
    DWORD2(v15) = 0;
  }
  else
  {
    if ( *(_DWORD *)a3 != 16 )
      return 0LL;
    DWORD2(v15) = 1;
  }
  v5 = *(_DWORD *)(a3 + 4);
  v6 = *(_QWORD **)(a1 + 104);
  v7 = a2;
  v8 = *(_QWORD **)(a1 + 112);
  *(_QWORD *)&v15 = v7;
  HIDWORD(v15) = v5;
  while ( v6 != v8 && *v6 != v7 )
    v6 += 2;
  if ( v6 != v8 )
  {
    for ( i = v6 + 2; i != (_OWORD *)v8; ++i )
    {
      if ( *(_QWORD *)i != v7 )
      {
        *(_OWORD *)v6 = *i;
        v6 += 2;
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 112) - (_QWORD)v8;
  memmove_0(v6, v8, v10);
  *(_QWORD *)(a1 + 112) = (char *)v6 + v10;
  if ( *(_QWORD **)(a1 + 120) == (_QWORD *)((char *)v6 + v10) )
  {
    std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(
      (const void **)(a1 + 104),
      *(_BYTE **)(a1 + 112),
      &v15);
  }
  else
  {
    *(_OWORD *)((char *)v6 + v10) = v15;
    *(_QWORD *)(a1 + 112) += 16LL;
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 64LL);
  if ( v11
    && (v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)(v11 + 8) + 24LL))(
                v11 + 8,
                &v15,
                *(_QWORD *)(a3 + 8),
                *(_QWORD *)(a3 + 16)),
        v13 = v12,
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorcontroller.cpp",
      (const char *)(unsigned int)v12);
  }
  else
  {
    v13 = 0;
  }
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  return 0LL;
}
