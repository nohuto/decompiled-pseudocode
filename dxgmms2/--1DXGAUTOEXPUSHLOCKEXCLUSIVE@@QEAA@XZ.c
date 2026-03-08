/*
 * XREFs of ??1DXGAUTOEXPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C002D7E0
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z @ 0x1C00BB7F0 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@KI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOEXPUSHLOCKEXCLUSIVE::~DXGAUTOEXPUSHLOCKEXCLUSIVE(DXGAUTOEXPUSHLOCKEXCLUSIVE *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockSharedEx(*((_QWORD *)this + 1), 0LL);
  }
  else if ( v1 == 2 )
  {
    *((_DWORD *)this + 4) = 0;
    ExReleasePushLockExclusiveEx(*((_QWORD *)this + 1), 0LL);
  }
}
