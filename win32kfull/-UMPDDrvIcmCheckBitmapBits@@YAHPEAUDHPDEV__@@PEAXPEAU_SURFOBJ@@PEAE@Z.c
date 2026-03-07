__int64 __fastcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, char *a4)
{
  int v5; // r14d
  UMPDOBJ *v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned int v12; // eax
  unsigned int v13; // edi
  size_t Size; // [rsp+20h] [rbp-69h]
  unsigned int v16; // [rsp+40h] [rbp-49h] BYREF
  int v17; // [rsp+44h] [rbp-45h] BYREF
  int v18; // [rsp+48h] [rbp-41h] BYREF
  void *v19; // [rsp+50h] [rbp-39h] BYREF
  void *v20; // [rsp+58h] [rbp-31h] BYREF
  UMPDOBJ *v21; // [rsp+60h] [rbp-29h] BYREF
  _DWORD v22[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v23; // [rsp+70h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-11h]
  struct DHPDEV__ *v25; // [rsp+80h] [rbp-9h]
  void *v26; // [rsp+88h] [rbp-1h]
  struct _SURFOBJ *v27; // [rsp+90h] [rbp+7h] BYREF
  char *v28; // [rsp+98h] [rbp+Fh]

  v23 = 0LL;
  v18 = 0;
  v5 = 0;
  v16 = 1;
  v17 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v21);
  v19 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v9 = v21;
  if ( !v21 )
    goto LABEL_15;
  v22[0] = 56;
  v22[1] = 66;
  v10 = *(_QWORD *)v21;
  v26 = a2;
  v11 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  v24 = v10;
  v25 = a1;
  v27 = a3;
  v28 = a4;
  if ( !*((_DWORD *)v21 + 106) )
  {
LABEL_6:
    if ( !(unsigned int)UMPDOBJ::pso(v9, (UMPDOBJ *)((char *)v9 + 64), &v27)
      || (v13 = 1, (v28 = UMPDOBJ::_AllocUserMem(v9, v11, 1)) == 0LL)
      || (LODWORD(Size) = 4, (unsigned int)UMPDOBJ::Thunk(v9, v22, 0x38u, &v16, Size) == -1)
      || !v16 )
    {
      v13 = 0;
    }
    goto LABEL_11;
  }
  if ( v11 + 7 < v11 || ((v11 + 7) & 0xFFFFFFF8) + 64 < 0x40 )
  {
LABEL_15:
    v13 = 0;
    goto LABEL_16;
  }
  v16 = ((v11 + 7) & 0xFFFFFFF8) + 64;
  v12 = UMPDOBJ::bThunkLargeBitmap(v21, a3, &v19, &v20, &v18, &v17, &v16);
  v5 = v17;
  v13 = v12;
  v16 = v12;
  if ( v12 )
    goto LABEL_6;
LABEL_11:
  if ( v18 )
  {
    if ( v5 )
      UMPDOBJ::bDeleteLargeBitmaps(v9, a3, 0LL, 0LL);
    a3->pvBits = v19;
    a3->pvScan0 = v20;
  }
LABEL_16:
  XUMPDOBJ::~XUMPDOBJ(&v21);
  return v13;
}
