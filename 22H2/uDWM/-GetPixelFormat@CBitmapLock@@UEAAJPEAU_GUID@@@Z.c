/*
 * XREFs of ?GetPixelFormat@CBitmapLock@@UEAAJPEAU_GUID@@@Z @ 0x1800C0ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180050C1C (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800526D4 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  unsigned int v3; // esi
  char *v4; // rcx
  int v6; // eax
  GUID v7; // xmm0
  char *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (char *)this - 64;
  v9 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  v6 = DXGIFormatToPixelFormat(*((_DWORD *)this + 9), *((_DWORD *)this + 10) == 1);
  if ( v6 > 31 )
  {
    switch ( v6 )
    {
      case ',':
        v7 = GUID_WICPixelFormat40bppCMYKAlpha;
        break;
      case '-':
        v7 = GUID_WICPixelFormat80bppCMYKAlpha;
        break;
      case 'C':
        v7 = GUID_WICPixelFormat8bppAlpha;
        break;
      case 'D':
        v7 = GUID_WICPixelFormat32bppRGBA;
        break;
      case 'E':
        v7 = GUID_WICPixelFormat32bppPRGBA;
        break;
      case 'H':
        v7 = GUID_WICPixelFormat64bppBGRA;
        break;
      case 'I':
        v7 = GUID_WICPixelFormat64bppPBGRA;
        break;
      case 'G':
        v7 = GUID_WICPixelFormat48bppBGR;
        break;
      case 'F':
        v7 = GUID_WICPixelFormat16bppBGRA5551;
        break;
      case 'J':
        v7 = GUID_WICPixelFormat48bppBGRFixedPoint;
        break;
      case 'K':
        v7 = GUID_WICPixelFormat64bppBGRAFixedPoint;
        break;
      case 'L':
        v7 = GUID_WICPixelFormat96bppRGBFloat;
        break;
      case 'M':
        v7 = GUID_WICPixelFormat32bppRGB;
        break;
      case 'N':
        v7 = GUID_WICPixelFormat64bppRGB;
        break;
      case 'O':
        v7 = GUID_WICPixelFormat8bppY;
        break;
      case 'P':
        v7 = GUID_WICPixelFormat8bppCb;
        break;
      case 'Q':
        v7 = GUID_WICPixelFormat8bppCr;
        break;
      case 'R':
        v7 = GUID_WICPixelFormat16bppCbCr;
        break;
      case ' ':
        v7 = GUID_WICPixelFormat32bppR10G10B10A2;
        break;
      case '!':
        v7 = GUID_WICPixelFormat32bppR10G10B10A2HDR10;
        break;
      default:
        v3 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0xC8u);
        goto LABEL_47;
    }
    *a2 = v7;
  }
  else
  {
    *a2 = GUID_WICPixelFormatDontCare;
    a2->Data4[7] = v6;
  }
LABEL_47:
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v9);
  return v3;
}
