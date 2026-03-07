void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4, int a5)
{
  unsigned __int16 v5; // r14
  int v8; // r13d
  __int64 v9; // rbx
  unsigned int v10; // r15d
  void (__fastcall *v11)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // rsi
  unsigned __int8 *v12; // rbx
  int v13; // r14d
  unsigned int i; // edi
  struct _RECTL *v15; // rcx
  LONG left; // edx
  LONG v17; // eax
  LONG right; // r9d
  LONG v19; // eax
  LONG top; // r8d
  LONG v21; // eax
  LONG bottom; // eax
  LONG v23; // r10d
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // [rsp+40h] [rbp-1E8h]
  int v28; // [rsp+50h] [rbp-1D8h]
  unsigned int v30; // [rsp+90h] [rbp-198h] BYREF
  _OWORD v31[20]; // [rsp+94h] [rbp-194h] BYREF

  v5 = a4;
  v27 = a4;
  v28 = 0;
  v8 = 0;
  memset_0(&v30, 0, 0x144uLL);
  v9 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v9 - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
    return;
  v10 = aulShiftFormat[v9];
  if ( a5 )
  {
    if ( (_DWORD)v9 == 5 )
      v11 = vSolidXorRect24;
    else
      v11 = vSolidXorRect1;
  }
  else if ( (_DWORD)v9 == 5 )
  {
    v11 = vSolidFillRect24;
  }
  else
  {
    v11 = vSolidFillRect1;
  }
  if ( (unsigned int)v9 <= 4 )
  {
    v24 = v9 - 1;
    if ( !v24 )
    {
      v27 = v5 & 1;
      if ( (v5 & 1) != 0 )
        v27 = -1;
      goto LABEL_6;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
          goto LABEL_6;
LABEL_48:
        v27 = (v5 << 16) | v5;
        goto LABEL_6;
      }
    }
    else
    {
      LOBYTE(v5) = (16 * (v5 & 0xF)) | v5 & 0xF;
    }
    v5 = ((unsigned __int8)v5 << 8) | (unsigned __int8)v5;
    goto LABEL_48;
  }
LABEL_6:
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v8 = 1;
      v30 = 1;
      v31[0] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v8 = 1;
      v28 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
    }
  }
  v12 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v13 = *((_DWORD *)a1 + 22);
  if ( *((_QWORD *)a1 + 79) )
  {
    v11 = vSolidFillRectWithCallback;
    v12 = (unsigned __int8 *)*((_QWORD *)a1 + 79);
  }
  if ( v8 )
  {
    if ( v28 )
      goto LABEL_30;
    while ( 1 )
    {
      for ( i = 0; i < v30; ++i )
      {
        v15 = (struct _RECTL *)&v31[i];
        left = v15->left;
        v17 = a2->left;
        if ( v15->left < a2->left )
        {
          v15->left = v17;
          left = v17;
        }
        right = v15->right;
        v19 = a2->right;
        if ( right > v19 )
        {
          v15->right = v19;
          right = v19;
        }
        top = v15->top;
        v21 = a2->top;
        if ( top < v21 )
        {
          v15->top = v21;
          top = v21;
        }
        bottom = v15->bottom;
        v23 = a2->bottom;
        if ( bottom > v23 )
        {
          v15->bottom = v23;
          bottom = v23;
        }
        if ( top < bottom && left < right )
          v11(v15, 1u, v12, v13, v27, v10);
      }
      if ( !v28 )
        break;
LABEL_30:
      v28 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)&v30, 0LL);
    }
  }
  else
  {
    v11(a2, 1u, v12, v13, v27, v10);
  }
}
