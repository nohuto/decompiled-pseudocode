/*
 * XREFs of ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0067758
 * Callers:
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C03AAFC4 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AB064 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??0DMMVIDPNSOURCEMODE@@QEAA@I@Z @ 0x1C0066F58 (--0DMMVIDPNSOURCEMODE@@QEAA@I@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0067804 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0068AE0 (-Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SO.c)
 */

char __fastcall DMMVIDPNSOURCEMODE::operator==(__int64 a1, __int64 a2)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bl
  __int64 v11; // rbp
  __int64 v12; // rax
  _BYTE v13[112]; // [rsp+20h] [rbp-98h] BYREF

  if ( *(_DWORD *)(a1 + 72) != *(_DWORD *)(a2 + 4) )
    return 0;
  DMMVIDPNSOURCEMODE::DMMVIDPNSOURCEMODE((DMMVIDPNSOURCEMODE *)v13, 0);
  v5 = DMMVIDPNSOURCEMODE::Initialize(
         (DMMVIDPNSOURCEMODE *)v13,
         (const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(a2 + 8),
         *(enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE *)(a2 + 4));
  v10 = 0;
  v11 = v5;
  if ( v5 >= 0 )
    return DMMVIDPNSOURCEMODE::operator==(a1, v13);
  v12 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v12 + 24) = a2;
  *(_QWORD *)(v12 + 32) = v11;
  return v10;
}
