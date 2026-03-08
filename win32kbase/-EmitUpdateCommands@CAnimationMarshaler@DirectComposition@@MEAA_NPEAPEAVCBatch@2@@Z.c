/*
 * XREFs of ?EmitUpdateCommands@CAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0064740 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2F90 (-EmitClearTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B2FB8 (-EmitAddTimeEvents@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B300C (-EmitSetInstance@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B307C (-EmitSetPaused@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B30F0 (-EmitSetSeek@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00B3178 (-EmitSetPrimitives@CAnimationMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CAnimationMarshaler::EmitUpdateCommands(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v2; // eax
  DirectComposition::CAnimationMarshaler *v3; // rsi
  char v6; // r14
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // rdx
  char *v11; // rcx
  __int64 v12; // rax
  void *v13; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = (DirectComposition::CAnimationMarshaler *)((char *)this - 16);
  if ( (v2 & 0x20000) != 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v8 = (char *)v13;
    *(_DWORD *)v13 = 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 4;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v8 + 3) = *((_DWORD *)this + 52);
    *((_DWORD *)this + 4) &= ~0x20000u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( *((_QWORD *)this + 11) && *((_QWORD *)this + 12) && (v2 & 0x80u) == 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v13) )
      return 0;
    v9 = (char *)v13;
    *(_DWORD *)v13 = 28;
    *(_OWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *((_DWORD *)v9 + 1) = 11;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *(_QWORD *)(v9 + 12) = *((_QWORD *)this + 12);
    *((_DWORD *)this + 4) |= 0x80u;
    v2 = *((_DWORD *)this + 4);
  }
  if ( *((_QWORD *)this + 16) && (v2 & 0x400) == 0 )
  {
    v13 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v13) )
      return 0;
    v10 = (char *)v13;
    *(_DWORD *)v13 = 16;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 1) = 7;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v10 + 3) = *(_DWORD *)(*((_QWORD *)this + 16) + 32LL);
    *((_DWORD *)this + 4) |= 0x400u;
  }
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPrimitives(v3, (struct DirectComposition::CBatch **)a2) )
    return 0;
  v6 = 1;
  if ( !*((_DWORD *)this + 35) || (*((_DWORD *)this + 4) & 0x800) != 0 )
    goto LABEL_7;
  v13 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x3CuLL, &v13) )
    return 0;
  v11 = (char *)v13;
  *(_DWORD *)v13 = 60;
  *(_OWORD *)(v11 + 4) = 0LL;
  *(_OWORD *)(v11 + 20) = 0LL;
  *(_OWORD *)(v11 + 36) = 0LL;
  *(_QWORD *)(v11 + 52) = 0LL;
  *((_DWORD *)v11 + 1) = 5;
  *((_DWORD *)v11 + 2) = *((_DWORD *)this + 8);
  *((_DWORD *)v11 + 3) = *((_DWORD *)this + 35);
  *(_QWORD *)(v11 + 20) = *((_QWORD *)this + 18);
  v12 = *((_QWORD *)this + 19);
  if ( v12 )
    LODWORD(v12) = *(_DWORD *)(v12 + 48);
  *((_DWORD *)v11 + 7) = v12;
  *((_DWORD *)v11 + 8) = *((_DWORD *)this + 40);
  v11[36] = *((_BYTE *)this + 184) & 1;
  *(_QWORD *)(v11 + 44) = *((_QWORD *)this + 21);
  *(_QWORD *)(v11 + 52) = *((_QWORD *)this + 22);
  *((_DWORD *)this + 4) |= 0x800u;
LABEL_7:
  if ( !DirectComposition::CAnimationMarshaler::EmitSetPaused(v3, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetSeek(v3, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitSetInstance(v3, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitClearTimeEvents(v3, (struct DirectComposition::CBatch **)a2)
    || !DirectComposition::CAnimationMarshaler::EmitAddTimeEvents(v3, (struct DirectComposition::CBatch **)a2) )
  {
    return 0;
  }
  return v6;
}
