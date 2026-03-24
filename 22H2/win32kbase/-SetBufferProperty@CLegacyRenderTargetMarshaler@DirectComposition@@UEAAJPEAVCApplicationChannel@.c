/*
 * XREFs of ?SetBufferProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00AB910
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidRect@@YA_NAEBUtagRECT@@@Z @ 0x1C00AB9CC (-IsValidRect@@YA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct tagRECT *a4,
        unsigned __int64 a5,
        bool *a6)
{
  bool *v6; // r11
  unsigned int v7; // edx
  int v8; // r8d
  int v9; // r8d
  struct tagRECT v10; // xmm6
  __int64 v11; // r10
  struct tagRECT v13; // xmm6
  __int64 v14; // rax
  struct tagRECT v15; // [rsp+20h] [rbp-28h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v8 = a3 - 2;
  if ( !v8 )
  {
    if ( a5 == 8 && !*((_DWORD *)this + 14) && !*((_DWORD *)this + 15) )
    {
      v14 = *(_QWORD *)&a4->left;
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 7) = v14;
      goto LABEL_7;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 4;
  if ( v9 )
  {
    if ( v9 == 1 && a5 == 16 )
    {
      v13 = *a4;
      v15 = *a4;
      if ( IsValidRect(&v15) )
      {
        *(struct tagRECT *)(v11 + 104) = v13;
        goto LABEL_6;
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v10 = *a4;
  v15 = *a4;
  if ( !IsValidRect(&v15) )
    return (unsigned int)-1073741811;
  *(struct tagRECT *)(v11 + 88) = v10;
LABEL_6:
  *(_DWORD *)(v11 + 16) |= 0x80u;
LABEL_7:
  *v6 = 1;
  return v7;
}
