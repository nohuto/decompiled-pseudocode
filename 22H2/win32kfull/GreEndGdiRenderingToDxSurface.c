/*
 * XREFs of GreEndGdiRenderingToDxSurface @ 0x1C001813C
 * Callers:
 *     NtGdiEndGdiRendering @ 0x1C0018100 (NtGdiEndGdiRendering.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018B60 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018E8C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreEndGdiRenderingToDxSurface(HSURF a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, __int64); // rax
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  _BYTE v15[32]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  char v17; // [rsp+90h] [rbp+18h] BYREF

  v6 = a2;
  if ( a3 )
  {
    LOBYTE(a2) = 1;
    GreDxgkEnableUnorderedWaitsForDevice((unsigned int)a3, a2);
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v17);
  SURFREF::SURFREF((SURFREF *)v15, a1);
  v9 = v16;
  v10 = 0;
  if ( v16 )
  {
    if ( ((unsigned int)a1 & 0x800000) == 0 )
    {
      if ( (unsigned int)GreGetObjectOwner(a1, 5LL) )
      {
        v9 = v16;
        if ( !v16 )
          goto LABEL_15;
        v11 = *(_QWORD *)(v16 + 48);
        v8 = *(_DWORD *)(v16 + 116) & 8;
        if ( (*(_DWORD *)(v16 + 116) & 8) == 0 && !*(_QWORD *)(v16 + 224) )
          goto LABEL_13;
        v10 = 1;
        *(_WORD *)(v16 + 102) |= 0x200u;
        if ( (_DWORD)v8 )
        {
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(v11 + 3488);
          v10 = 0;
          if ( v12 )
            v10 = v12(v9 + 24, v6, a4, a3);
        }
      }
      v9 = v16;
    }
LABEL_13:
    if ( v9 )
      DEC_SHARE_REF_CNT(v9, v8);
  }
LABEL_15:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
  return v10;
}
