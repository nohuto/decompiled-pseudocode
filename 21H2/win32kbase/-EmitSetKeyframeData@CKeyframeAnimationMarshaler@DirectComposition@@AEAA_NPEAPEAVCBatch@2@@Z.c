/*
 * XREFs of ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F3F8
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F130 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0011E08 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v5; // rax
  char *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 && *((_QWORD *)this + 17) && *((_QWORD *)this + 28) )
  {
    v10 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v10) )
    {
      v5 = (char *)v10;
      *(_DWORD *)v10 = 76;
      v6 = v5 + 4;
      memset(v5 + 4, 0, 0x48uLL);
      *(_DWORD *)v6 = 220;
      *((_DWORD *)v6 + 1) = *((_DWORD *)this + 8);
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 62);
      *((_DWORD *)v6 + 3) = *(_DWORD *)(*((_QWORD *)this + 17) + 32LL);
      *((_DWORD *)v6 + 4) = *((_DWORD *)this + 54);
      *((_DWORD *)v6 + 5) = *((_DWORD *)this + 56);
      *((_DWORD *)v6 + 6) = *((_DWORD *)this + 67);
      *((_DWORD *)v6 + 7) = *((_DWORD *)this + 68);
      *((_DWORD *)v6 + 8) = *((_DWORD *)this + 71);
      *((_DWORD *)v6 + 16) = *((_DWORD *)this + 73);
      *((_DWORD *)v6 + 9) = *((_DWORD *)this + 74);
      *((_DWORD *)v6 + 10) = *((_DWORD *)this + 76);
      v7 = *((_QWORD *)this + 21);
      if ( v7 )
        LODWORD(v7) = *(_DWORD *)(v7 + 48);
      *((_DWORD *)v6 + 11) = v7;
      v8 = *((_QWORD *)this + 18);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 32);
      else
        v9 = 0;
      *((_DWORD *)v6 + 12) = v9;
      *((_DWORD *)v6 + 13) = *((_DWORD *)this + 60);
      *((_DWORD *)v6 + 14) = *((_DWORD *)this + 58);
      *((_DWORD *)v6 + 15) = *((_DWORD *)this + 78);
      v6[68] = *((_BYTE *)this + 316) & 1;
      *((_DWORD *)this + 78) = 0;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
