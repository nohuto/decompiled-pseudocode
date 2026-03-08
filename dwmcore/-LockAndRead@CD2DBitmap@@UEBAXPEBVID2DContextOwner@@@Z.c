/*
 * XREFs of ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x18029C30C
 * Callers:
 *     ?LockAndRead@CD2DBitmap@@$4PPPPPPPM@A@EBAXPEBVID2DContextOwner@@@Z @ 0x18011C0F0 (-LockAndRead@CD2DBitmap@@$4PPPPPPPM@A@EBAXPEBVID2DContextOwner@@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@$4PPPPPPPM@CI@EBAXPEBVID2DContextOwner@@@Z @ 0x18011C3D0 (-LockAndRead@CD2DBitmap@@$4PPPPPPPM@CI@EBAXPEBVID2DContextOwner@@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@$4PPPPPPPM@FI@EBAXPEBVID2DContextOwner@@@Z @ 0x18011F650 (-LockAndRead@CD2DBitmap@@$4PPPPPPPM@FI@EBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18001A140 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18026F7F8 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 */

void __fastcall CD2DBitmap::LockAndRead(CD2DBitmap *this, const struct ID2DContextOwner *a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  struct ID3D11Texture2D *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    v4 = (char *)this + *(int *)(*((_QWORD *)this - 38) + 8LL) - 304;
    v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = CD2DContext::FlushD2D((CD2DContext *)(v5 + 16), a2);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xA1u, 0LL);
  }
  v8 = (struct ID3D11Texture2D *)*((_QWORD *)this - 25);
  if ( v8 )
  {
    v9 = DebugInspectTexture(v8, *((_DWORD *)this - 20));
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xA6u, 0LL);
  }
}
