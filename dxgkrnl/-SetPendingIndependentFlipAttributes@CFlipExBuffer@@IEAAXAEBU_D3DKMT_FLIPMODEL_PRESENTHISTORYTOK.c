/*
 * XREFs of ?SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C007DBD4
 * Callers:
 *     ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C007CE48 (-CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SetPendingIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  bool v2; // zf
  _DWORD *v5; // rcx
  __int64 v6; // r10
  signed __int64 v7; // rdx
  UINT v8; // ecx
  int v9; // edx

  v2 = *((_BYTE *)this + 624) == 0;
  *(RECT *)((char *)this + 444) = a2->SourceRect;
  if ( v2 )
  {
    v5 = (_DWORD *)((char *)this + 464);
    v6 = 6LL;
    v7 = (char *)a2 - (char *)this;
    do
    {
      *v5 = *(_DWORD *)((char *)v5 + v7 + 300);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    *((_OWORD *)this + 32) = a2->TargetRect;
    *((_DWORD *)this + 126) = a2->DestWidth;
    *((_DWORD *)this + 127) = a2->DestHeight;
  }
  v8 = *((_DWORD *)this + 132) ^ (*((_DWORD *)this + 132) ^ (a2->Flags.Value >> 1)) & 1;
  *((_DWORD *)this + 132) = v8;
  *((_DWORD *)this + 115) = a2->Rotation;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 4;
  *((_DWORD *)this + 132) = v9;
  *((_DWORD *)this + 107) = a2->CustomDuration;
  *((_DWORD *)this + 98) = (a2->Flags.Value >> 7) & 3;
  *((_DWORD *)this + 132) = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
  *((_DWORD *)this + 103) = LODWORD(a2->RevealColor[0]);
  *((_DWORD *)this + 104) = LODWORD(a2->RevealColor[1]);
  *((_DWORD *)this + 105) = LODWORD(a2->RevealColor[2]);
  *((_DWORD *)this + 106) = LODWORD(a2->RevealColor[3]);
  *((_DWORD *)this + 110) = a2->ColorSpace;
  *((_BYTE *)this + 628) = 1;
}
