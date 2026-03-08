/*
 * XREFs of ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x1800F326C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessUpdateFlags(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATEFLAGS *a3)
{
  char v5; // dl
  char v6; // r8
  char v7; // dl
  char v8; // cl
  char v9; // dl
  char v10; // cl
  int v11; // eax

  v5 = *((_BYTE *)this + 192) & 0xFE | (*((_BYTE *)a3 + 8) != 0);
  *((_BYTE *)this + 192) = v5;
  v6 = v5 & 0xFB | (*((_BYTE *)a3 + 9) != 0 ? 4 : 0);
  *((_BYTE *)this + 192) = v6;
  v7 = v6 & 0xF7 | (*((_BYTE *)a3 + 10) != 0 ? 8 : 0);
  *((_BYTE *)this + 192) = v7;
  v8 = v7 & 0xEF | (*((_BYTE *)a3 + 11) != 0 ? 0x10 : 0);
  v9 = v8 ^ (v8 ^ (2 * v8)) & 0x20;
  *((_BYTE *)this + 192) = v9;
  *((_BYTE *)this + 192) = v9 & 0xBF | (*((_BYTE *)a3 + 12) != 0 ? 0x40 : 0);
  v10 = *((_BYTE *)this + 1616) & 0xFB | (*((_BYTE *)a3 + 13) != 0 ? 4 : 0);
  *((_BYTE *)this + 1616) = v10;
  v11 = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 49) = v11;
  *((_DWORD *)this + 424) = v11;
  *((_BYTE *)this + 1616) = v10 & 0xF7 | (v11 != 2 ? 0 : 8);
  return 0LL;
}
