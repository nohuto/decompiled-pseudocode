/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x1800EEFA8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180047A9C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        const struct FastRegion::Internal::CRgnData **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v5; // edx
  const struct FastRegion::Internal::CRgnData **v8; // rbx
  char v9; // di
  int v10; // esi
  bool v11; // al
  float *v12; // rdx
  int *v13; // rax
  int v14; // r9d
  int v15; // r10d
  int v16; // edx
  int v17; // eax
  _DWORD *v19; // [rsp+38h] [rbp-41h] BYREF
  _DWORD v20[3]; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v21[2]; // [rsp+4Ch] [rbp-2Dh] BYREF
  _DWORD v22[9]; // [rsp+54h] [rbp-25h] BYREF
  _BYTE v23[15]; // [rsp+79h] [rbp+0h] BYREF
  int v24[4]; // [rsp+88h] [rbp+Fh] BYREF
  void *retaddr; // [rsp+D0h] [rbp+57h]

  v5 = *((_DWORD *)a3 + 2);
  v8 = this;
  v9 = 1;
  if ( v5
    && (this = (const struct FastRegion::Internal::CRgnData **)(16LL * v5),
        (const struct FastRegion::Internal::CRgnData **)a5 == this) )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = 0;
      v12 = (float *)&a4[16 * v10];
      if ( *v12 >= -16777216.0 && v12[1] >= -16777216.0 && v12[2] <= 16777216.0 )
        v11 = v12[3] <= 16777216.0;
      if ( !v11 )
        break;
      v20[0] = 0;
      v19 = v20;
      v13 = PixelAlign(v24, v12);
      v14 = v13[2];
      v15 = *v13;
      v16 = v13[3];
      if ( *v13 < v14 && v13[1] < v16 )
      {
        v21[0] = v13[1];
        v20[0] = 2;
        v20[1] = v15;
        v20[2] = v14;
        v21[1] = (unsigned int)v23 - 29 - (unsigned int)v21;
        v22[2] = v15;
        v22[3] = v14;
        v22[1] = (unsigned int)v23 - 29 - (unsigned int)v22 + 8;
        v22[0] = v16;
      }
      v17 = FastRegion::CRegion::Union(v8 + 69, (const struct FastRegion::Internal::CRgnData **)&v19);
      if ( v17 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v17, retaddr);
      FastRegion::CRegion::FreeMemory((void **)&v19);
      if ( (unsigned int)++v10 >= *((_DWORD *)a3 + 2) )
      {
        (*((void (__fastcall **)(const struct FastRegion::Internal::CRgnData **, __int64, const struct FastRegion::Internal::CRgnData **))*v8
         + 9))(
          v8,
          1LL,
          v8);
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x196u, 0LL);
  }
  *(_DWORD *)v8[69] = 0;
  if ( v9 )
    (*((void (__fastcall **)(const struct FastRegion::Internal::CRgnData **, _QWORD, _QWORD))*v8 + 9))(v8, 0LL, 0LL);
  return 0LL;
}
