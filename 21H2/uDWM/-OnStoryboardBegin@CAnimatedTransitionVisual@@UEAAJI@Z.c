/*
 * XREFs of ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x18000CC10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000F228 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180016970 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer @ 0x1800A9098 (McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::OnStoryboardBegin(CAnimatedTransitionVisual *this, char a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // esi
  __int64 v10; // rax

  v4 = CAnimatedTransitionVisual::EnsureResources(this);
  LOBYTE(v7) = 0;
  v8 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x94u);
  }
  else
  {
    if ( !*((_BYTE *)this + 960) && *((float *)this + 233) == 0.0 )
    {
      *((_DWORD *)this + 184) = *((_DWORD *)this + 230);
      *((_QWORD *)this + 93) = 0LL;
      *((_DWORD *)this + 188) = 0;
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x2000u);
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v10 = *((_QWORD *)this + 3);
      if ( v10 )
        v7 = *(_DWORD *)(*(_QWORD *)(v10 + 16) + 24LL);
      McTemplateU0ddddddddddffffqqq_EtwEventWriteTransfer(
        v6,
        v5,
        *((_DWORD *)this + 182),
        *((_DWORD *)this + 183),
        *((_DWORD *)this + 212),
        *((_DWORD *)this + 213),
        *((_DWORD *)this + 214),
        *((_DWORD *)this + 215),
        *((_DWORD *)this + 216),
        *((_DWORD *)this + 217),
        *((_DWORD *)this + 218),
        *((_DWORD *)this + 219),
        *((_DWORD *)this + 230),
        *((_DWORD *)this + 231),
        *((_DWORD *)this + 228),
        *((_DWORD *)this + 229),
        v7,
        *((_DWORD *)this + 238),
        a2);
    }
    *((_BYTE *)this + 977) = 1;
  }
  return v8;
}
