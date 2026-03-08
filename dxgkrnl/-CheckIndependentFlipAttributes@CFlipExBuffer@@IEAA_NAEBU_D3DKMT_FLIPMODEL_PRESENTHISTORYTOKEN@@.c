/*
 * XREFs of ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C007CE48
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x1C007D930 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@.c)
 * Callees:
 *     ?CalcTransformChange@CCompositionBuffer@@SA?AW4TransformComparison@1@PEBM0@Z @ 0x1C007C8E4 (-CalcTransformChange@CCompositionBuffer@@SA-AW4TransformComparison@1@PEBM0@Z.c)
 *     ?SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DBD4 (-SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

bool __fastcall CFlipExBuffer::CheckIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3)
{
  const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v4; // r9
  CFlipExBuffer *v5; // r11
  char v6; // cl
  char v7; // r14
  LONG left; // ebp
  __int64 v9; // r8
  unsigned int v10; // esi
  _DWORD *v11; // rbx
  _DWORD *v12; // rdi
  bool v13; // zf
  int v15; // eax
  float *v16; // rdx
  float *v17; // rcx
  _DWORD *v18; // r10
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // ecx
  int v20; // edx

  *a3 = 0;
  v4 = a2;
  v5 = this;
  if ( *((int *)this + 96) >= 1 )
  {
    v6 = *((_BYTE *)this + 628);
    v7 = 0;
    left = a2->SourceRect.left;
    v9 = (-(__int64)(v6 != 0) & 0x158) + 48;
    v10 = *(_DWORD *)((char *)v5 + v9 + 52);
    if ( __PAIR64__(*(_DWORD *)((char *)v5 + v9 + 56), v10) != *(_QWORD *)&a2->SourceRect.left
      || (v11 = (_DWORD *)((char *)v5 + v9 + 60), *v11 != a2->SourceRect.right)
      || (v12 = (_DWORD *)((char *)v5 + v9 + 64), *v12 != a2->SourceRect.bottom) )
    {
      v7 = 1;
      v11 = (_DWORD *)((char *)v5 + (-(__int64)(v6 != 0) & 0x158) + 108);
      v12 = (_DWORD *)((char *)v5 + (-(__int64)(v6 != 0) & 0x158) + 112);
    }
    if ( *((_BYTE *)v5 + 624) )
    {
      if ( *(_DWORD *)((char *)v5 + v9 + 120) != a2->TargetRect.left
        || *(_DWORD *)((char *)v5 + v9 + 124) != a2->TargetRect.top
        || *(_DWORD *)((char *)v5 + v9 + 128) != a2->TargetRect.right
        || *(_DWORD *)((char *)v5 + v9 + 132) != a2->TargetRect.bottom
        || *(_DWORD *)((char *)v5 + v9 + 112) != a2->DestWidth )
      {
        goto LABEL_14;
      }
      v13 = *(_DWORD *)((char *)v5 + v9 + 116) == a2->DestHeight;
      goto LABEL_13;
    }
    v15 = CCompositionBuffer::CalcTransformChange((float *)((char *)v5 + v9 + 72), a2->Transform);
    if ( v15 == 1 )
    {
      if ( v7 )
      {
        if ( *v11 - v10 != v4->SourceRect.right - left )
          goto LABEL_14;
        v13 = *v12 - *v18 == v4->SourceRect.bottom - v4->SourceRect.top;
LABEL_13:
        if ( !v13 )
          goto LABEL_14;
      }
    }
    else if ( *(_DWORD *)((char *)v5 + v9 + 68) != 1
           || v15 != 2
           || COERCE_INT((float)((float)(int)(*v11 - v10) * *v17) + 0.5) != COERCE_INT(
                                                                              (float)((float)(v4->SourceRect.right - left)
                                                                                    * *v16)
                                                                            + 0.5)
           || COERCE_INT((float)((float)(*v12 - *v18) * *(float *)((char *)v5 + v9 + 84)) + 0.5) != COERCE_INT((float)((float)(v4->SourceRect.bottom - v4->SourceRect.top) * v4->Transform[3]) + 0.5) )
    {
      goto LABEL_14;
    }
    Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v4->Flags.Value;
    v20 = *(_DWORD *)((char *)v5 + v9 + 136);
    if ( (((unsigned __int8)v20 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 1) == 0
      && *(_DWORD *)((char *)v5 + v9 + 68) == v4->Rotation
      && (((unsigned __int8)v20 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 4) == 0
      && *(_DWORD *)((char *)v5 + v9 + 36) == v4->CustomDuration
      && *(_DWORD *)((char *)v5 + v9) == ((*(unsigned int *)&Value >> 7) & 3)
      && (((unsigned __int8)v20 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 8) == 0 )
    {
      if ( v7
        || *(float *)((char *)v5 + v9 + 20) != v4->RevealColor[0]
        || *(float *)((char *)v5 + v9 + 24) != v4->RevealColor[1]
        || *(float *)((char *)v5 + v9 + 28) != v4->RevealColor[2]
        || *(float *)((char *)v5 + v9 + 32) != v4->RevealColor[3]
        || *(_DWORD *)((char *)v5 + v9 + 48) != v4->ColorSpace )
      {
        *a3 = 1;
      }
      goto LABEL_15;
    }
LABEL_14:
    *((_DWORD *)v5 + 96) = -1;
LABEL_15:
    CFlipExBuffer::SetPendingIndependentFlipAttributes(v5, v4);
  }
  return *((_DWORD *)v5 + 96) >= 1;
}
