/*
 * XREFs of ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18002A92C
 * Callers:
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18002ADC8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18002D968 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x18002DBE4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromFragment(
        CRenderingTechnique *this,
        struct CRenderingTechniqueFragment *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  bool v9; // zf
  unsigned int i; // esi
  __int64 v11; // r9
  unsigned int v12; // r8d
  const struct CBrushRenderingGraph *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // r9d
  unsigned int j; // r8d
  __int64 v18; // xmm0_8
  __int64 v19; // rcx
  int v20; // eax
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 4);
  v4 = 0;
  v6 = (*((_QWORD *)a2 + 5) - v3) >> 4;
  if ( (_DWORD)v6 )
  {
    v7 = (_QWORD *)(v3 + 8);
    v8 = (unsigned int)v6;
    do
    {
      v9 = *v7 == 0LL;
      v7 += 2;
      if ( v9 )
        ++v4;
      --v8;
    }
    while ( v8 );
  }
  for ( i = 0; i < v4; ++i )
  {
    v11 = *((_QWORD *)a2 + 4);
    v12 = 0;
    LODWORD(v13) = i;
    v14 = (*((_QWORD *)a2 + 5) - v11) >> 4;
    if ( (_DWORD)v14 )
    {
      while ( 1 )
      {
        if ( !*(_QWORD *)(v11 + 16LL * v12 + 8) )
        {
          v15 = (int)v13;
          v13 = (const struct CBrushRenderingGraph *)(unsigned int)((_DWORD)v13 - 1);
          if ( !v15 )
            break;
        }
        if ( ++v12 >= (unsigned int)v14 )
          goto LABEL_11;
      }
      CRenderingTechniqueFragment::GetSurfaceDescription(
        a2,
        v13,
        v12,
        (struct CRenderingTechniqueFragment::SurfaceDescription *)&v22);
    }
LABEL_11:
    if ( BYTE4(v22) )
      goto LABEL_16;
    v16 = *((_DWORD *)this + 19);
    for ( j = 0; j < v16; ++j )
    {
      if ( (unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(
                              &v22,
                              (char *)this + 44 * j + 84) )
        break;
    }
    if ( j >= v16 )
    {
LABEL_16:
      v18 = v22;
      v19 = 44LL * (unsigned int)(*((_DWORD *)this + 19))++;
      v20 = v23;
      *(_QWORD *)((char *)this + v19 + 84) = v18;
      *(_DWORD *)((char *)this + v19 + 92) = v20;
    }
    else
    {
      *((_WORD *)this + 22 * j + 47) |= HIWORD(v23);
    }
  }
  *((_DWORD *)this + 20) |= *((_DWORD *)a2 + 7);
  v21 = *((_DWORD *)a2 + 5);
  if ( (v21 & 0xF) != 0 )
    v21 = v21 - (*((_DWORD *)a2 + 5) & 0xF) + 16;
  *((_DWORD *)this + 18) += v21;
}
