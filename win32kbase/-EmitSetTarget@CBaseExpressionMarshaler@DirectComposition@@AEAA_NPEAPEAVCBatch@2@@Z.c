/*
 * XREFs of ?EmitSetTarget@CBaseExpressionMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063848
 * Callers:
 *     ?EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0062D70 (-EmitUpdateCommands@CBaseExpressionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0063350 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005DE78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C005EE20 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::EmitSetTarget(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // si
  struct DirectComposition::CBatch **v5; // rcx
  __int64 v6; // rbx
  struct DirectComposition::CBatch *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v16; // rax
  void *v17; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
  {
    v5 = *a2;
    v6 = 0LL;
    v17 = 0LL;
    v7 = v5[17];
    v8 = *((_QWORD *)v7 + 5);
    if ( (unsigned __int64)(4096 - v8) >= 0x34
      && (v9 = *((_QWORD *)v7 + 7), *((_QWORD *)v7 + 5) = v8 + 52, (v10 = (char *)(v8 + v9)) != 0LL) )
    {
      v5[19] = (struct DirectComposition::CBatch *)((char *)v5[19] + 52);
    }
    else
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
        return 0;
      if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x34uLL, &v17) )
        KeBugCheck(0xC000000D);
      v10 = (char *)v17;
    }
    *(_DWORD *)v10 = 52;
    *(_OWORD *)(v10 + 4) = 0LL;
    *(_OWORD *)(v10 + 20) = 0LL;
    *(_OWORD *)(v10 + 36) = 0LL;
    *((_DWORD *)v10 + 1) = 24;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 8);
    if ( (*((_BYTE *)this + 120) & 1) != 0 && (v11 = *((_QWORD *)this + 9)) != 0 && (v12 = *(_QWORD *)(v11 + 16)) != 0 )
    {
      *((_DWORD *)v10 + 4) = *(_DWORD *)(v12 + 32);
      v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 16LL) + 36LL);
    }
    else
    {
      *((_DWORD *)v10 + 4) = 0;
      v13 = 0;
    }
    *((_DWORD *)v10 + 3) = v13;
    *((_DWORD *)v10 + 5) = *((_DWORD *)this + 20);
    *((_DWORD *)v10 + 10) = *((_DWORD *)this + 16);
    v10[44] = (*((_BYTE *)this + 120) & 0x10) != 0;
    v14 = *((_QWORD *)this + 11);
    if ( v14 )
    {
      *((_WORD *)v10 + 18) = *(unsigned __int8 *)(v14 + 4);
      *((_WORD *)v10 + 19) = **((_WORD **)this + 11);
      v16 = *((_QWORD *)this + 11);
      if ( *(_DWORD *)v16 == 1 )
      {
        v6 = *(unsigned __int8 *)(v16 + 8);
      }
      else if ( *(_DWORD *)v16 == 2 )
      {
        v6 = *(_QWORD *)(v16 + 8);
      }
    }
    else
    {
      *((_DWORD *)v10 + 9) = 0;
    }
    *(_QWORD *)(v10 + 28) = v6;
    *((_DWORD *)this + 4) |= 0x40u;
  }
  return v4;
}
