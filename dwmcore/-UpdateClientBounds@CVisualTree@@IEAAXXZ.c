/*
 * XREFs of ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x1800C659C
 * Callers:
 *     ?EnsureClientInfo@CDesktopTree@@MEAAXXZ @ 0x1800C63C0 (-EnsureClientInfo@CDesktopTree@@MEAAXXZ.c)
 *     ?EnsureClientInfo@CVisualTree@@MEAAXXZ @ 0x1800C6560 (-EnsureClientInfo@CVisualTree@@MEAAXXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CVisualTree::UpdateClientBounds(CVisualTree *this)
{
  float *v1; // rsi
  const struct FastRegion::Internal::CRgnData **v2; // r13
  _DWORD *v3; // rax
  char v5; // r15
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  unsigned __int8 (__fastcall ***v8)(_QWORD, __int128 *); // rdi
  int *v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  __int128 v14; // [rsp+28h] [rbp-59h] BYREF
  __int128 v15; // [rsp+38h] [rbp-49h] BYREF
  const struct FastRegion::Internal::CRgnData *v16; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v17[3]; // [rsp+50h] [rbp-31h] BYREF
  _DWORD v18[2]; // [rsp+5Ch] [rbp-25h] BYREF
  _DWORD v19[7]; // [rsp+64h] [rbp-1Dh] BYREF
  _BYTE v20[23]; // [rsp+81h] [rbp+0h] BYREF
  int v21[4]; // [rsp+98h] [rbp+17h] BYREF
  void *retaddr; // [rsp+E0h] [rbp+5Fh]

  v1 = (float *)((char *)this + 4592);
  *((_QWORD *)this + 575) = 0LL;
  v2 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 4608);
  v3 = (_DWORD *)*((_QWORD *)this + 576);
  *((_QWORD *)this + 574) = 0LL;
  v5 = 0;
  *v3 = 0;
  *((_BYTE *)this + 4714) = 0;
  v6 = (_QWORD *)*((_QWORD *)this + 568);
  v7 = (_QWORD *)*((_QWORD *)this + 567);
  if ( !(v6 - v7) )
    goto LABEL_2;
  while ( v7 != v6 )
  {
    v8 = (unsigned __int8 (__fastcall ***)(_QWORD, __int128 *))*v7;
    *((_BYTE *)this + 4714) |= (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    if ( (**v8)(v8, &v15) )
    {
      v17[0] = 0;
      v16 = (const struct FastRegion::Internal::CRgnData *)v17;
      v9 = PixelAlign(v21, (float *)&v15);
      v10 = v9[2];
      v11 = *v9;
      v12 = v9[3];
      if ( *v9 < v10 && v9[1] < v12 )
      {
        v18[0] = v9[1];
        v17[0] = 2;
        v17[1] = v11;
        v17[2] = v10;
        v18[1] = (unsigned int)v20 - 21 - (unsigned int)v18;
        v19[2] = v11;
        v19[3] = v10;
        v19[1] = (unsigned int)v20 - 21 - (unsigned int)v19 + 8;
        v19[0] = v12;
      }
      v14 = v15;
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v1, (float *)&v14);
      v13 = FastRegion::CRegion::Union(v2, &v16);
      if ( v13 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v16);
    }
    else
    {
      v5 = 1;
    }
    ++v7;
  }
  if ( v5 )
LABEL_2:
    *(_OWORD *)v1 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
}
