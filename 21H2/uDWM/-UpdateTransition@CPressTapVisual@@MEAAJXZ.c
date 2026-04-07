/*
 * XREFs of ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800A74B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18003B580 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x18003BA20 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003E240 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003F33C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180040CD0 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Stop@CPressTapVisual@@UEAAXXZ @ 0x1800A73F0 (-Stop@CPressTapVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPressTapVisual::UpdateTransition(CPressTapVisual *this)
{
  float v1; // xmm0_4
  float v3; // xmm6_4
  float v4; // xmm1_4
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  float v8; // xmm6_4
  float v9; // xmm2_4
  int v10; // ebp
  LONG v11; // edi
  int v12; // r14d
  int v13; // r14d
  LONG v14; // esi
  CVisual *v15; // rcx
  float v16; // xmm7_4
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm8_4
  LONG v20; // edi
  LONG v21; // esi
  struct tagSIZE v23; // [rsp+70h] [rbp+8h] BYREF

  v1 = *((float *)this + 91);
  v3 = *(double *)(*((_QWORD *)this + 50) + 48LL);
  if ( v1 < v3 )
  {
    v17 = (float)(v3 - v1) / *((float *)this + 92);
    v18 = (float)((float)(*((float *)this + 94) - *((float *)this + 93)) * v17) + *((float *)this + 93);
    v19 = (float)(1.0 - *((float *)this + 98)) * v17;
    v20 = (int)(float)((float)*((int *)this + 83) * v18);
    v21 = (int)(float)((float)*((int *)this + 82) * v18);
    v23.cy = v20;
    v23.cx = v21;
    if ( v21 < 1 )
    {
      v23.cx = 1;
      v21 = 1;
    }
    if ( v20 < 1 )
    {
      v23.cy = 1;
      v20 = 1;
    }
    CVisual::SetSize(*((CVisual **)this + 43), &v23);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 43), *((_DWORD *)this + 76) - v21 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 43), *((_DWORD *)this + 77) - v20 / 2);
    CVisual::Hide(*((CVisual **)this + 44));
    v15 = (CVisual *)*((_QWORD *)this + 43);
    v16 = 1.0 - v19;
  }
  else
  {
    v4 = *((float *)this + 95);
    v5 = *((_DWORD *)this + 78);
    v6 = *((_DWORD *)this + 80);
    v7 = *((_DWORD *)this + 79);
    v8 = v3 / v1;
    v9 = (float)((float)(*((float *)this + 96) - v4) * v8) + v4;
    v10 = v5 + (int)(float)((float)(v6 - v5) * v8);
    v11 = (int)(float)((float)*((int *)this + 85) * v9);
    v12 = (int)(float)((float)(*((_DWORD *)this + 81) - v7) * v8);
    v23.cy = v11;
    v13 = v7 + v12;
    v14 = (int)(float)((float)*((int *)this + 84) * v9);
    v23.cx = v14;
    if ( v14 < 1 )
    {
      v23.cx = 1;
      v14 = 1;
    }
    if ( v11 < 1 )
    {
      v23.cy = 1;
      v11 = 1;
    }
    CVisual::SetSize(*((CVisual **)this + 44), &v23);
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), v10 - v14 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), v13 - v11 / 2);
    v15 = (CVisual *)*((_QWORD *)this + 44);
    v16 = 1.0 - (float)((float)(1.0 - *((float *)this + 97)) * v8);
  }
  CVisual::SendSetOpacity(v15, v16);
  if ( *(_BYTE *)(*((_QWORD *)this + 50) + 72LL) )
    CPressTapVisual::Stop(this);
  return 0LL;
}
