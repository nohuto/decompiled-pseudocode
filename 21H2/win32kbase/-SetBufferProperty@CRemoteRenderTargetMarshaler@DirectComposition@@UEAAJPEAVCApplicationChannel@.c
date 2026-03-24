/*
 * XREFs of ?SetBufferProperty@CRemoteRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00C4830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidRect@@YA_NAEBUtagRECT@@@Z @ 0x1C00AB4CC (-IsValidRect@@YA_NAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DirectComposition::CRemoteRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CRemoteRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct tagRECT *a4,
        unsigned __int64 a5,
        bool *a6)
{
  bool *v6; // r11
  unsigned int v7; // edx
  int v8; // r8d
  struct tagRECT v9; // xmm6
  __int64 v10; // r10
  __int64 v12; // rax
  struct tagRECT v13; // [rsp+20h] [rbp-28h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  v8 = a3 - 2;
  if ( !v8 )
  {
    if ( a5 == 8 && !*((_DWORD *)this + 14) && !*((_DWORD *)this + 15) )
    {
      v12 = *(_QWORD *)&a4->left;
      *((_DWORD *)this + 4) |= 0x20u;
      *((_QWORD *)this + 7) = v12;
      goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  if ( v8 != 1 )
    return (unsigned int)-1073741811;
  if ( a5 != 16 )
    return (unsigned int)-1073741811;
  v9 = *a4;
  v13 = *a4;
  if ( !IsValidRect(&v13) )
    return (unsigned int)-1073741811;
  *(_DWORD *)(v10 + 16) |= 0x80u;
  *(struct tagRECT *)(v10 + 72) = v9;
LABEL_6:
  *v6 = 1;
  return v7;
}
