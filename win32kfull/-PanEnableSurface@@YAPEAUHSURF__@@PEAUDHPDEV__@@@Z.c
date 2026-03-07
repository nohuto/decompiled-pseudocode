HSURF __fastcall PanEnableSurface(SIZEL *a1)
{
  LONG cx; // r8d
  LONG cy; // edx
  int v4; // eax
  int v5; // ecx
  LONG v6; // eax
  HSEMAPHORE v7; // rcx
  HSURF v8; // rax
  SURFOBJ *v9; // rax
  SURFOBJ *v10; // rsi
  struct DHPDEV__ *v11; // rdx
  LONG v12; // r14d
  ULONG v13; // r8d
  HSURF DeviceSurface; // rax
  HSURF v15; // rdi
  HDEV v16; // rdx
  HBITMAP Bitmap; // r14
  SURFOBJ *v18; // rax
  SURFOBJ *v19; // r15
  HDEV v20; // rdx
  SIZEL sizl; // [rsp+80h] [rbp+38h] BYREF
  SIZEL v23; // [rsp+88h] [rbp+40h] BYREF
  SIZEL v24; // [rsp+90h] [rbp+48h] BYREF
  HSEMAPHORE v25; // [rsp+98h] [rbp+50h] BYREF

  cx = a1->cx;
  cy = a1->cy;
  v4 = a1[1].cx - a1->cx;
  sizl = 0LL;
  v4 >>= 1;
  a1[2].cx = v4;
  v5 = a1[1].cy - cy;
  a1[3].cx = cx + v4;
  v5 >>= 1;
  a1[2].cy = v5;
  v6 = v5 + cy;
  v25 = (HSEMAPHORE)a1[14];
  v7 = v25;
  a1[3].cy = v6;
  EngAcquireSemaphore(v7);
  v8 = (HSURF)((__int64 (__fastcall *)(_QWORD))a1[102])(*(_QWORD *)&a1[4]);
  if ( !v8 )
    goto LABEL_16;
  v9 = EngLockSurface(v8);
  v10 = v9;
  if ( !v9 )
  {
LABEL_15:
    PANDEVLOCK::vUnLock((PANDEVLOCK *)&v25);
    ((void (__fastcall *)(_QWORD))a1[103])(*(_QWORD *)&a1[4]);
LABEL_16:
    v15 = 0LL;
    goto LABEL_17;
  }
  LODWORD(v9[1].hsurf) &= ~0x1000u;
  v11 = (struct DHPDEV__ *)a1[4];
  a1[9] = (SIZEL)v9;
  SURFACE::dhpdev((SURFACE *)&v9[-1].pvScan0, v11);
  v12 = a1[1].cx;
  v13 = a1[5].cx;
  sizl.cy = a1[1].cy;
  sizl.cx = v12;
  DeviceSurface = EngCreateDeviceSurface(0LL, sizl, v13);
  v15 = DeviceSurface;
  if ( !DeviceSurface )
  {
LABEL_14:
    EngUnlockSurface(v10);
    goto LABEL_15;
  }
  v16 = (HDEV)a1[6];
  a1[7] = (SIZEL)DeviceSurface;
  if ( !EngModifySurface(DeviceSurface, v16, 0x394ABu, 3u, (DHSURF)&a1[7], 0LL, 0, 0LL) )
  {
LABEL_13:
    EngDeleteSurface(v15);
    goto LABEL_14;
  }
  Bitmap = EngCreateBitmap(sizl, v12, a1[5].cx, 1u, 0LL);
  v18 = EngLockSurface((HSURF)Bitmap);
  v19 = v18;
  if ( !v18 || (v20 = (HDEV)a1[6], a1[8] = (SIZEL)v18, !EngAssociateSurface((HSURF)Bitmap, v20, 0)) )
  {
LABEL_12:
    EngUnlockSurface(v19);
    EngDeleteSurface((HSURF)Bitmap);
    goto LABEL_13;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v23);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&sizl);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v24);
  if ( !*(_QWORD *)&sizl || !*(_QWORD *)&v23 || !*(_QWORD *)&v24 )
  {
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&sizl);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
    goto LABEL_12;
  }
  RGNOBJ::vSet((RGNOBJ *)&v23);
  RGNOBJ::vSet((RGNOBJ *)&sizl);
  a1[10] = v23;
  a1[11] = sizl;
  a1[12] = v24;
  PanSynchronize((struct DHPDEV__ *)a1, 0LL);
LABEL_17:
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v25);
  return v15;
}
