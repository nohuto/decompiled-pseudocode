/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00CC7C4
 * Callers:
 *     EngEraseSurface @ 0x1C00CB1C0 (EngEraseSurface.c)
 *     EngBitBlt @ 0x1C00CB280 (EngBitBlt.c)
 *     EngTextOut @ 0x1C00CB720 (EngTextOut.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE400 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CF858 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  int v8; // r14d
  int v9; // r13d
  __int64 v10; // rdi
  int v11; // ecx
  void (__fastcall *v12)(struct _RECTL *, int, unsigned __int8 *, int, unsigned int, char); // rsi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  unsigned __int8 *v16; // rax
  int v17; // r11d
  unsigned __int8 *v18; // r12
  unsigned int i; // edi
  struct _RECTL *v20; // rcx
  LONG left; // r10d
  LONG v22; // eax
  LONG right; // r9d
  LONG v24; // eax
  LONG top; // edx
  LONG v26; // eax
  LONG bottom; // eax
  LONG v28; // r8d
  int v29; // [rsp+40h] [rbp-1E8h]
  int v30; // [rsp+44h] [rbp-1E4h]
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
  v29 = v11;
  if ( a5 )
  {
    v12 = (void (__fastcall *)(struct _RECTL *, int, unsigned __int8 *, int, unsigned int, char))vSolidXorRect24;
    if ( (_DWORD)v10 != 5 )
      v12 = (void (__fastcall *)(struct _RECTL *, int, unsigned __int8 *, int, unsigned int, char))vSolidXorRect1;
  }
  else
  {
    v12 = vSolidFillRect1;
    if ( (_DWORD)v10 == 5 )
      v12 = (void (__fastcall *)(struct _RECTL *, int, unsigned __int8 *, int, unsigned int, char))vSolidFillRect24;
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
        goto LABEL_46;
      }
    }
    else
    {
      LOBYTE(a4) = (16 * (a4 & 0xF)) | a4 & 0xF;
    }
    LOWORD(a4) = ((unsigned __int8)a4 << 8) | (unsigned __int8)a4;
LABEL_46:
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
    v11 = v29;
  }
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v17 = *((_DWORD *)a1 + 22);
  v30 = v17;
  v18 = (unsigned __int8 *)*((_QWORD *)a1 + 79);
  if ( v18 )
    v12 = (void (__fastcall *)(struct _RECTL *, int, unsigned __int8 *, int, unsigned int, char))vSolidFillRectWithCallback;
  else
    v18 = v16;
  if ( v9 )
  {
    if ( v8 )
      goto LABEL_36;
    while ( 1 )
    {
      for ( i = 0; i < v32[0]; ++i )
      {
        v20 = (struct _RECTL *)&v32[4 * i + 1];
        left = v20->left;
        v22 = a2->left;
        if ( v20->left < a2->left )
        {
          v20->left = v22;
          left = v22;
        }
        right = v20->right;
        v24 = a2->right;
        if ( right > v24 )
        {
          v20->right = v24;
          right = v24;
        }
        top = v20->top;
        v26 = a2->top;
        if ( top < v26 )
        {
          v20->top = v26;
          top = v26;
        }
        bottom = v20->bottom;
        v28 = a2->bottom;
        if ( bottom > v28 )
        {
          v20->bottom = v28;
          bottom = v28;
        }
        if ( left < right && top < bottom )
        {
          v12(v20, 1, v18, v17, a4, v29);
          v17 = v30;
        }
      }
      if ( !v8 )
        break;
LABEL_36:
      v8 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, v32, 0LL);
      v17 = v30;
    }
  }
  else
  {
    v12(a2, 1, v18, v17, a4, v11);
  }
}
