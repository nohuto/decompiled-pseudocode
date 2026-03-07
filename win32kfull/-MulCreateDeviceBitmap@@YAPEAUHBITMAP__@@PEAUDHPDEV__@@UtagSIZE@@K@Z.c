HBITMAP __fastcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL sizl, ULONG iFormat)
{
  __int64 **v3; // rsi
  struct _MDSURF *v4; // rdi
  HBITMAP Bitmap; // rbp
  SIZEL v7; // rbx
  __int64 *v9; // rcx
  __int64 (__fastcall *v10)(__int64, SIZEL, _QWORD); // rax
  HSURF v11; // rax
  HSURF v12; // r12
  SURFOBJ *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 *v18; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(__int64 ***)a1;
  v4 = 0LL;
  Bitmap = 0LL;
  v7 = sizl;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v9 = v3[6];
      v18 = v9;
      if ( (v9[224] & 0x8000000) != 0 )
      {
        v10 = (__int64 (__fastcall *)(__int64, SIZEL, _QWORD))v9[343];
        if ( v10 )
        {
          v11 = (HSURF)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v10)(v9[221], v7, iFormat);
          v12 = v11;
          if ( v11 )
          {
            v13 = EngLockSurface(v11);
            if ( v13 )
            {
              if ( !v4 )
              {
                v4 = pAllocateAndInitializeMDSURF((struct _VDEV *)a1);
                if ( !v4 )
                  goto LABEL_16;
                Bitmap = EngCreateBitmap(v7, 0, iFormat, 1u, 0LL);
                if ( !Bitmap )
                {
                  EngFreeMem(v4);
LABEL_16:
                  EngUnlockSurface(v13);
                  EngDeleteSurface(v12);
                  return 0LL;
                }
              }
              v14 = *((_QWORD *)v4 + 1);
              *(_QWORD *)v4 = a1;
              *(_QWORD *)(v14 + 8LL * *((unsigned int *)v3 + 4)) = v13;
              LODWORD(v13[1].hsurf) |= 0x80000u;
              *(_QWORD *)&v13[1].cjBits = Bitmap;
              vSetupDevBitmap((struct PDEVOBJ *)&v18, (struct SURFACE *)&v13[-1].pvScan0);
            }
          }
        }
      }
      v3 = (__int64 **)*v3;
    }
    while ( v3 );
    if ( v4 )
    {
      LOBYTE(sizl.cx) = 5;
      v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD))HmgShareLockCheck)(Bitmap, sizl);
      v16 = v15;
      if ( v15 )
      {
        *(_DWORD *)(v15 + 112) |= 0x400000u;
        *(_QWORD *)(v15 + 24) = v4;
        *(_WORD *)(v15 + 100) = 3;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 17));
        DEC_SHARE_REF_CNT(v16);
      }
    }
  }
  return Bitmap;
}
