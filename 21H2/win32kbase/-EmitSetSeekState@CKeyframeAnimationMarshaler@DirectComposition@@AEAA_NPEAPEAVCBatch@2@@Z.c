/*
 * XREFs of ?EmitSetSeekState@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F29C
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F130 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetSeekState(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rcx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x2000) == 0 && *((_QWORD *)this + 25) )
  {
    v6 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x24uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 36;
      *(_OWORD *)(v4 + 4) = 0LL;
      *(_OWORD *)(v4 + 20) = 0LL;
      *((_DWORD *)v4 + 1) = 225;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 8);
      *(_QWORD *)(v4 + 12) = *((_QWORD *)this + 25);
      *(_QWORD *)(v4 + 20) = *((_QWORD *)this + 26);
      v4[28] = (*((_BYTE *)this + 316) & 4) == 0;
      *((_DWORD *)this + 4) |= 0x2000u;
      *((_BYTE *)this + 316) |= 4u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
