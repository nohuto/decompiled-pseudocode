/*
 * XREFs of ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C02B925C
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C03380B0 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0040BB0 (-IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C01AFC34 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsInVirtualMode(ADAPTER_DISPLAY *this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax

  v4 = 0;
  if ( !*((_DWORD *)this + 24) )
    return 0;
  while ( 1 )
  {
    if ( ((a2 + 3) & 0xFFFFFFFD) == 0 || v4 == a2 )
    {
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(this, v4, a3, a4);
      if ( SessionViewOwner )
      {
        if ( *((_DWORD *)SessionViewOwner + 10) > 1u || !ADAPTER_DISPLAY::IsIdenticalMode(this, v4) )
          break;
      }
    }
    if ( ++v4 >= *((_DWORD *)this + 24) )
      return 0;
  }
  return 1;
}
