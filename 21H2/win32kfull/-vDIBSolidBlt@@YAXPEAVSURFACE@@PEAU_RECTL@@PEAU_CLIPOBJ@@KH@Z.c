/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C000710C
 * Callers:
 *     EngEraseSurface @ 0x1C0005B60 (EngEraseSurface.c)
 *     EngBitBlt @ 0x1C0005C00 (EngBitBlt.c)
 *     EngTextOut @ 0x1C0006070 (EngTextOut.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0009AF4 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // rdi
  unsigned int v11; // ecx
  void (__fastcall *v12)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // rsi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  unsigned __int8 *v16; // r14
  int v17; // r11d
  unsigned int i; // edi
  struct _RECTL *v19; // rcx
  LONG left; // r10d
  LONG v21; // eax
  LONG right; // r9d
  LONG v23; // eax
  LONG top; // edx
  LONG v25; // eax
  LONG bottom; // eax
  LONG v27; // r8d
  unsigned int v28; // [rsp+40h] [rbp-1E8h]
  int v29; // [rsp+44h] [rbp-1E4h]
  _DWORD v32[84]; // [rsp+90h] [rbp-198h] BYREF

  v8 = 0;
  v9 = 0;
  memset(v32, 0, 0x144uLL);
  v10 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v10 - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\patblt.cxx:%d:vDIBSolidBlt:Invalid surface format.\n",
        88);
    return;
  }
  v11 = aulShiftFormat[v10];
  v28 = v11;
  if ( a5 )
  {
    v12 = vSolidXorRect24;
    if ( (_DWORD)v10 != 5 )
      v12 = vSolidXorRect1;
  }
  else
  {
    v12 = vSolidFillRect1;
    if ( (_DWORD)v10 == 5 )
      v12 = vSolidFillRect24;
  }
  v13 = v10 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
          goto LABEL_9;
        goto LABEL_45;
      }
    }
    else
    {
      LOBYTE(a4) = (16 * (a4 & 0xF)) | a4 & 0xF;
    }
    LOWORD(a4) = ((unsigned __int8)a4 << 8) | (unsigned __int8)a4;
LABEL_45:
    a4 = ((unsigned __int16)a4 << 16) | (unsigned __int16)a4;
    goto LABEL_9;
  }
  a4 &= 1u;
  if ( a4 )
    a4 = -1;
LABEL_9:
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v9 = 1;
      v32[0] = 1;
      *(RECTL *)&v32[1] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v9 = 1;
      v8 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
    }
    v11 = v28;
  }
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v17 = *((_DWORD *)a1 + 22);
  v29 = v17;
  if ( *((_QWORD *)a1 + 79) )
  {
    v12 = vSolidFillRectWithCallback;
    v16 = (unsigned __int8 *)*((_QWORD *)a1 + 79);
  }
  if ( v9 )
  {
    if ( v8 )
      goto LABEL_35;
    while ( 1 )
    {
      for ( i = 0; i < v32[0]; ++i )
      {
        v19 = (struct _RECTL *)&v32[4 * i + 1];
        left = v19->left;
        v21 = a2->left;
        if ( v19->left < a2->left )
        {
          v19->left = v21;
          left = v21;
        }
        right = v19->right;
        v23 = a2->right;
        if ( right > v23 )
        {
          v19->right = v23;
          right = v23;
        }
        top = v19->top;
        v25 = a2->top;
        if ( top < v25 )
        {
          v19->top = v25;
          top = v25;
        }
        bottom = v19->bottom;
        v27 = a2->bottom;
        if ( bottom > v27 )
        {
          v19->bottom = v27;
          bottom = v27;
        }
        if ( left < right && top < bottom )
        {
          v12(v19, 1u, v16, v17, a4, v28);
          v17 = v29;
        }
      }
      if ( !v8 )
        break;
LABEL_35:
      v8 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, v32, 0LL);
      v17 = v29;
    }
  }
  else
  {
    v12(a2, 1u, v16, v17, a4, v11);
  }
}
