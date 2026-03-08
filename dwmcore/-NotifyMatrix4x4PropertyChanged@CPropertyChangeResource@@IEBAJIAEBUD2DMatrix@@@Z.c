/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180097C48
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800967C4 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180097B98 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DMatrix *a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // ecx
  _QWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 76) )
    {
      if ( *((_DWORD *)this + 16) )
      {
        v6 = *((_DWORD *)this + 18);
        if ( _bittest(&v6, a2) )
        {
          v8 = *((_QWORD *)this + 2);
          v9 = *((_OWORD *)a3 + 1);
          v17[0] = *(_OWORD *)a3;
          v10 = *(_QWORD *)(v8 + 1240);
          v11 = *((_OWORD *)a3 + 2);
          v16[0] = *(unsigned int *)(v3 + 76);
          v12 = *(_QWORD *)(v10 + 40);
          v16[1] = *((unsigned int *)this + 16);
          v17[1] = v9;
          v13 = *((_OWORD *)a3 + 3);
          v17[2] = v11;
          v17[3] = v13;
          v14 = CoreUICallSend(v12, v16, 2LL, 14LL, 8, &unk_180339491, a2, v17);
          v4 = v14;
          if ( v14 == -2018375675 )
          {
            return 0;
          }
          else if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x228u, 0LL);
          }
        }
      }
    }
  }
  return v4;
}
