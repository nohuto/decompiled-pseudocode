/*
 * XREFs of ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02C0634
 * Callers:
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026AF54 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0277E60 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XDCOBJ::bAddRemoteFont(XDCOBJ *this, struct PFF *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  v4 = 0;
  v5 = (_QWORD *)Win32AllocPoolZInit(16LL, 1684300103LL);
  if ( v5 )
  {
    v4 = 1;
    v5[1] = *(_QWORD *)(*(_QWORD *)this + 2072LL);
    *(_QWORD *)(*(_QWORD *)this + 2072LL) = v5;
    *v5 = a2;
    ++*((_DWORD *)a2 + 16);
  }
  return v4;
}
