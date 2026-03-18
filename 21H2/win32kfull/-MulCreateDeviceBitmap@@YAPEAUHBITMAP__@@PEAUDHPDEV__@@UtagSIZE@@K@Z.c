/*
 * XREFs of ?MulCreateDeviceBitmap@@YAPEAUHBITMAP__@@PEAUDHPDEV__@@UtagSIZE@@K@Z @ 0x1C016F950
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0028338 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z @ 0x1C02A4998 (-pAllocateAndInitializeMDSURF@@YAPEAU_MDSURF@@PEAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02A4CB4 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 */

HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL sizl, ULONG iFormat)
{
  __int64 **v3; // rsi
  struct _MDSURF *v4; // rdi
  HBITMAP Bitmap; // rbp
  __int64 *v9; // rax
  HSURF v10; // rax
  HSURF v11; // r12
  SURFOBJ *v12; // r14
  __int64 v13; // rcx
  _BYTE v15[32]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h]
  __int64 *v17; // [rsp+90h] [rbp+8h] BYREF

  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v9 = v3[6];
      v17 = v9;
      if ( (v9[224] & 0x8000000) != 0 )
      {
        if ( v9[343] )
        {
          v10 = (HSURF)((__int64 (__fastcall *)(__int64, SIZEL, _QWORD))v9[343])(v9[221], sizl, iFormat);
          v11 = v10;
          if ( v10 )
          {
            v12 = EngLockSurface(v10);
            if ( v12 )
            {
              if ( !v4 )
              {
                v4 = pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
                if ( !v4 )
                  goto LABEL_18;
                Bitmap = EngCreateBitmap(sizl, 0, iFormat, 1u, 0LL);
                if ( !Bitmap )
                {
                  EngFreeMem(v4);
LABEL_18:
                  EngUnlockSurface(v12);
                  EngDeleteSurface(v11);
                  return 0LL;
                }
              }
              v13 = *((_QWORD *)v4 + 1);
              *(_QWORD *)v4 = a1;
              *(_QWORD *)(v13 + 8LL * *((unsigned int *)v3 + 4)) = v12;
              LODWORD(v12[1].hsurf) |= 0x80000u;
              *(_QWORD *)&v12[1].cjBits = Bitmap;
              vSetupDevBitmap((struct PDEVOBJ *)&v17, (struct SURFACE *)&v12[-1].pvScan0);
            }
          }
        }
      }
      v3 = (__int64 **)*v3;
    }
    while ( v3 );
    if ( v4 )
    {
      SURFREF::SURFREF((SURFREF *)v15, (HSURF)Bitmap);
      if ( v16 )
      {
        *(_DWORD *)(v16 + 112) |= 0x400000u;
        *(_WORD *)(v16 + 100) = 3;
        *(_QWORD *)(v16 + 24) = v4;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
        if ( v16 )
          DEC_SHARE_REF_CNT(v16);
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v15);
    }
  }
  return Bitmap;
}
