/*
 * XREFs of ?OnCursorGlyphChanged@SystemCursorService@@UEAAJUCursorId@@UCursorGlyphData@@@Z @ 0x180140350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$unordered_map@_KV?$shared_ptr@VSystemCursor@@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@_N@1@AEB_K@Z @ 0x18013B158 (--$_Try_emplace@AEB_K$$V@-$unordered_map@_KV-$shared_ptr@VSystemCursor@@@std@@U-$hash@_K@2@U-$eq.c)
 *     ?CursorExists@SystemCursorService@@QEAA_N_K@Z @ 0x18013C3D8 (-CursorExists@SystemCursorService@@QEAA_N_K@Z.c)
 *     ?SetShape@SystemCursor@@QEAAJ_K@Z @ 0x180140748 (-SetShape@SystemCursor@@QEAAJ_K@Z.c)
 */

__int64 __fastcall SystemCursorService::OnCursorGlyphChanged(
        SystemCursorService *a1,
        unsigned int a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // r11
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = a2;
  if ( !SystemCursorService::CursorExists(a1, a2) )
    return 0LL;
  v11 = v3;
  std::unordered_map<unsigned __int64,std::shared_ptr<SystemCursor>>::_Try_emplace<unsigned __int64 const &,>(
    v5 + 40,
    (__int64)v9,
    (const unsigned __int8 *)&v11);
  v6 = SystemCursor::SetShape(*(SystemCursor **)(v9[0] + 24LL), a3);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x148,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
