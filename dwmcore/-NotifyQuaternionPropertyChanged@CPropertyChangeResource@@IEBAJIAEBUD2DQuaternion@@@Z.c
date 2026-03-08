/*
 * XREFs of ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x180217D98
 * Callers:
 *     ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180023AC0 (-SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097B98 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x180098408 (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyQuaternionPropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DQuaternion *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // r10d
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r11
  unsigned int v10; // ecx
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-38h]
  _QWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v17; // [rsp+50h] [rbp-18h]

  v4 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v7 = *(unsigned int *)(v5 + 64);
    v8 = *(_QWORD *)(v5 + 48);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 1240LL) + 40LL);
    if ( v8 )
      v10 = *(_DWORD *)(v8 + 76);
    else
      v10 = 0;
    v11 = *(_OWORD *)a3;
    v16[0] = v10;
    LODWORD(v15) = v6;
    v16[1] = v7;
    v17 = v11;
    v12 = CoreUICallSend(v9, v16, 2LL, 14LL, 6, &unk_180339485, v15);
    v4 = v12;
    if ( v12 == -2018375675 )
    {
      return 0;
    }
    else if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1CEu, 0LL);
    }
  }
  return v4;
}
