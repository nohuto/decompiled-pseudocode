/*
 * XREFs of GreBeginGdiRenderingToDxSurface @ 0x1C0017F88
 * Callers:
 *     NtGdiBeginGdiRendering @ 0x1C0017F70 (NtGdiBeginGdiRendering.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bReset@DC@@QEAAHXZ @ 0x1C0019094 (-bReset@DC@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016A21C (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreBeginGdiRenderingToDxSurface(HSURF a1, unsigned int a2, __int64 a3)
{
  HDC v7; // rdx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  unsigned int v12; // eax
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  _BYTE v14[32]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h]
  DC *v16[2]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v17[40]; // [rsp+58h] [rbp-40h] BYREF
  char v18; // [rsp+B0h] [rbp+18h] BYREF

  if ( a3 && (int)GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, 0LL) < 0 )
    return 0LL;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v18);
  SURFREF::SURFREF((SURFREF *)v14, a1);
  v8 = v15;
  v9 = 0;
  if ( v15 )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
      goto LABEL_18;
    if ( !(unsigned int)GreGetObjectOwner(a1, 5LL) )
    {
LABEL_17:
      v8 = v15;
LABEL_18:
      if ( v8 )
        DEC_SHARE_REF_CNT(v8, v7);
      goto LABEL_20;
    }
    v8 = v15;
    if ( v15 )
    {
      v10 = *(_QWORD *)(v15 + 48);
      if ( (*(_DWORD *)(v15 + 116) & 8) == 0 && !*(_QWORD *)(v15 + 224) )
        goto LABEL_18;
      v7 = *(HDC *)(v15 + 160);
      *(_WORD *)(v15 + 102) &= ~0x200u;
      if ( v7 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v16, v7);
        if ( v16[0] )
          v9 = DC::bReset(v16[0]);
        MDCOBJ::~MDCOBJ((MDCOBJ *)v16);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
        if ( v9 )
        {
          if ( (*(_DWORD *)(v8 + 116) & 8) != 0 )
          {
            v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v10 + 3480);
            v9 = 0;
            if ( v11 )
            {
              v12 = v11(v8 + 24, a2, a3);
              *(_DWORD *)(v8 + 116) |= 0x200u;
              v9 = v12;
            }
          }
        }
      }
      goto LABEL_17;
    }
  }
LABEL_20:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v14);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  return v9;
}
