/*
 * XREFs of DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0051140
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0051250 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0051390 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0055118 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00F5BEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ_bPrepareTrgDcoWrap(DEVLOCKOBJ *this, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rax
  DC *v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  bool v12; // zf
  __int64 v13; // rax

  v4 = 1;
  if ( !a2 )
    goto LABEL_2;
  v6 = *a2;
  if ( (*(_DWORD *)(v6 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v7 = *(_QWORD *)(v6 + 48);
  XDCOBJ::vLockIgnoreAttributes((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)v6);
  v8 = *((_QWORD *)this + 4);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 44) & 2) == 0 )
    {
      v12 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKOBJ *)((char *)this + 32)) == 0;
      v13 = *((_QWORD *)this + 4);
      if ( v12 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v13 + 12));
        *((_QWORD *)this + 4) = 0LL;
        goto LABEL_9;
      }
      *(_DWORD *)(v13 + 44) |= 2u;
      *((_DWORD *)this + 10) = 1;
    }
    v9 = (DC *)*((_QWORD *)this + 4);
    if ( (*((_DWORD *)v9 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v9);
  }
LABEL_9:
  v10 = *(_QWORD *)(v7 + 1400);
  if ( !*((_QWORD *)this + 4) || !*((_BYTE *)this + 49) )
    goto LABEL_20;
  v11 = *(_DWORD *)(*a2 + 36);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && v10 && !*((_QWORD *)this + 7) )
  {
    *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) |= 0x4000u;
    DC::pSurface(*((DC **)this + 4), (struct SURFACE *)(v10 - 24));
    *((_DWORD *)this + 6) |= 0x10u;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && !(unsigned int)DEVLOCKOBJ::bMapTrgSurfaceView(this) )
  {
    DEVLOCKOBJ::vClearRenderState(this);
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
LABEL_20:
    v4 = 0;
LABEL_2:
    *((_QWORD *)this + 4) = 0LL;
  }
  return v4;
}
