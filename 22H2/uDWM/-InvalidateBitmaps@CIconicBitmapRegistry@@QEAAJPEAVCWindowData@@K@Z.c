/*
 * XREFs of ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x18000727C
 * Callers:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800071C0 (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001437C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800146EC (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x180045780 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::InvalidateBitmaps(CIconicBitmapRegistry *this, HWND *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  int v9; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]
  DWORD v12; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( !GetWindowThreadProcessId(a2[5], &v12) || a3 != v12 )
  {
    v6 = -2147024809;
    v11 = 841;
    v10 = -2147024809;
    goto LABEL_17;
  }
  if ( a2[47] && CIconicBitmapRegistry::CanAcceptBitmap(this, (struct CWindowData *)a2) )
  {
    *((_BYTE *)a2 + 610) &= 0xD7u;
    if ( a2[53] )
    {
      v9 = CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)a2, 1);
      v6 = v9;
      if ( v9 < 0 )
      {
        v11 = 852;
LABEL_10:
        v10 = v9;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CBFE0, 1LL, v10, v11);
        return v6;
      }
    }
    else
    {
      CIconicBitmapRegistry::ClearBitmap(this, (struct CWindowData *)a2);
    }
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    if ( *(HWND **)(v7 + 72) == a2 && !*((_BYTE *)this + 89) )
    {
      *((_BYTE *)this + 90) = 0;
      v9 = CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 1);
      v6 = v9;
      if ( v9 < 0 )
      {
        v11 = 864;
        goto LABEL_10;
      }
    }
  }
  return v6;
}
