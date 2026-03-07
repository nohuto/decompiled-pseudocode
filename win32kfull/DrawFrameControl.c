_BOOL8 __fastcall DrawFrameControl(HDC a1, struct tagRECT *a2, int a3, int a4)
{
  RECT v4; // xmm0
  struct tagRECT *v5; // rbx
  int v9; // r15d
  int v10; // esi
  DC *v11; // rcx
  int v12; // r8d
  struct _DC_ATTR *UserAttr; // rax
  struct _DC_ATTR *v14; // rax
  __int64 v15; // rbx
  int v16; // ecx
  unsigned int v17; // esi
  __int16 v18; // r9
  int v19; // r13d
  DC *v20; // rcx
  struct _DC_ATTR *v21; // rax
  int v22; // r8d
  __int64 v23; // rax
  DC *v24; // rcx
  struct _DC_ATTR *v25; // rax
  __int64 v26; // rbx
  int v27; // ebx
  unsigned int v28; // r13d
  volatile signed __int32 *Object; // rax
  volatile signed __int32 *v30; // rbx
  Gre::Base *v31; // rcx
  struct HOBJ__ *inserted; // r12
  __int64 v33; // rbx
  unsigned __int16 CaptionChar; // ax
  BOOL v35; // esi
  LONG top; // edx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // [rsp+20h] [rbp-E0h]
  DC *v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h]
  DC *v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  int v48; // [rsp+60h] [rbp-A0h]
  int TextAlign; // [rsp+64h] [rbp-9Ch]
  int v50; // [rsp+68h] [rbp-98h]
  RECT v51; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v52; // [rsp+80h] [rbp-80h]
  _DWORD v53[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h]
  _DWORD v55[5]; // [rsp+A0h] [rbp-60h] BYREF
  char v56; // [rsp+B7h] [rbp-49h]
  __int128 v57; // [rsp+BCh] [rbp-44h]
  _BYTE Src[12]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v59; // [rsp+10Ch] [rbp+Ch]
  char v60[324]; // [rsp+11Ch] [rbp+1Ch] BYREF
  unsigned int v61; // [rsp+260h] [rbp+160h]

  v4 = *a2;
  v52 = a2;
  v5 = a2;
  v48 = 0;
  TextAlign = 0;
  v44 = 0LL;
  v51 = v4;
  v45 = 0LL;
  v9 = 0;
  LOBYTE(v10) = -1;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v44, a1);
  v11 = v44;
  v12 = 0;
  if ( !v44 )
    goto LABEL_21;
  if ( (*((_DWORD *)v44 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v45) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v44);
      v12 = 0;
      if ( UserAttr )
      {
        v40 = DC::SaveAttributes(v44, UserAttr);
        v12 = 0;
        if ( !v40 )
        {
          v11 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v44 + 3);
          v44 = 0LL;
LABEL_11:
          if ( v11 )
          {
            if ( (_DWORD)v45 != v12 && (*((_DWORD *)v11 + 11) & 2) != 0 )
            {
              if ( HIDWORD(v45) == v12 )
              {
                v14 = XDCOBJ::GetUserAttr((XDCOBJ *)&v44);
                v11 = v44;
                v12 = 0;
                if ( v14 )
                {
                  DC::RestoreAttributes(v44, v14);
                  v11 = v44;
                  v12 = 0;
                }
              }
              *((_DWORD *)v11 + 11) &= ~2u;
              v11 = v44;
              LODWORD(v45) = v12;
            }
            v46 = v12;
            v15 = *(_QWORD *)v11;
            HmgDecrementExclusiveReferenceCountEx(v11, HIDWORD(v45), &v46);
            if ( v46 )
              GrepDeleteDC(v15, 0x2000000LL);
            v5 = v52;
          }
          goto LABEL_21;
        }
      }
      v11 = v44;
    }
    *((_DWORD *)v11 + 11) |= 2u;
    v11 = v44;
    LODWORD(v45) = 1;
  }
  if ( (*((_DWORD *)v11 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v11);
    v11 = v44;
  }
  if ( v11 )
  {
    v10 = *(_DWORD *)(*((_QWORD *)v11 + 122) + 108LL);
    goto LABEL_11;
  }
LABEL_21:
  if ( (v10 & 1) != 0 )
  {
    v9 = GreSetGraphicsMode(a1);
    if ( v9 )
    {
      TextAlign = GreGetTextAlign(a1);
      if ( (TextAlign & 6) != 6 )
        GreSetTextAlign(a1);
    }
  }
  v16 = a4 | 0x8000;
  if ( *(_WORD *)(gpsi + 6996LL) != 1 )
    v16 = a4;
  v17 = v16 | 0x4000;
  if ( (v16 & 0x8000) == 0 )
    v17 = v16;
  if ( a3 != 2 && a3 != 5 && (a3 != 4 || (v17 & 0x10) != 0) && (a3 != 3 || (v17 & 0x18) == 0) )
  {
    v18 = 12288;
    if ( a3 == 3 )
      v18 = 0x2000;
    DrawPushButton(a1, &v51, v17, v17 & 0xC000 | v18);
    if ( (v17 & 0x2000) != 0 )
      *v5 = v51;
    v48 = 1;
  }
  v50 = 0;
  v19 = 0;
  v42 = 0LL;
  v43 = 0LL;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v42, a1);
  v20 = v42;
  if ( v42 )
  {
    if ( (*((_DWORD *)v42 + 11) & 2) != 0 )
    {
      v22 = 1;
    }
    else
    {
      if ( !HIDWORD(v43) )
      {
        v21 = XDCOBJ::GetUserAttr((XDCOBJ *)&v42);
        if ( v21 && !DC::SaveAttributes(v42, v21) )
        {
          v24 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v42 + 3);
          v42 = 0LL;
LABEL_45:
          if ( v24 )
          {
            if ( (_DWORD)v43 && (*((_DWORD *)v24 + 11) & 2) != 0 )
            {
              if ( !HIDWORD(v43) )
              {
                v25 = XDCOBJ::GetUserAttr((XDCOBJ *)&v42);
                v24 = v42;
                if ( v25 )
                {
                  DC::RestoreAttributes(v42, v25);
                  v24 = v42;
                }
              }
              *((_DWORD *)v24 + 11) &= ~2u;
              v24 = v42;
              LODWORD(v43) = 0;
            }
            v47 = 0;
            v26 = *(_QWORD *)v24;
            HmgDecrementExclusiveReferenceCountEx(v24, HIDWORD(v43), &v47);
            if ( v47 )
              GrepDeleteDC(v26, 0x2000000LL);
          }
          goto LABEL_54;
        }
        v20 = v42;
      }
      *((_DWORD *)v20 + 11) |= 2u;
      v22 = 1;
      v20 = v42;
      LODWORD(v43) = 1;
    }
    if ( (*((_DWORD *)v20 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v20);
      v20 = v42;
    }
    if ( v20 )
    {
      v23 = *((_QWORD *)v20 + 122);
      v19 = *(_DWORD *)(v23 + 224);
      *(_DWORD *)(v23 + 224) = v22;
      v50 = v19;
      *(_BYTE *)(*((_QWORD *)v42 + 122) + 213LL) = v22;
      v24 = v42;
      goto LABEL_45;
    }
  }
LABEL_54:
  if ( v19 )
  {
    v27 = v51.right - v51.left;
    if ( v51.right - v51.left >= v51.bottom - v51.top )
      v27 = v51.bottom - v51.top;
    if ( v27 > 0 )
    {
      memset_0(v55, 0, 0x5CuLL);
      v55[0] = v27;
      v55[4] = 400;
      v56 = 2;
      v57 = *(_OWORD *)L"Marlett";
      memset_0(Src, 0, 0x1A4uLL);
      vConvertLogFontW(Src, v55);
      if ( v61 <= 0x10 )
      {
        v28 = 4 * v61 + 356;
        Object = (volatile signed __int32 *)AllocateObject(4 * v61 + 632, 10LL);
        v30 = Object;
        if ( Object )
        {
          *((_DWORD *)Object + 6) = 0;
          *((_DWORD *)Object + 7) = 0;
          *((_DWORD *)Object + 68) = v28;
          memmove((void *)(Object + 69), Src, v28);
          *((_DWORD *)v30 + 8) = 0;
          *((_DWORD *)v30 + 9) = *(_DWORD *)(*((_QWORD *)Gre::Base::Globals(v31) + 241) + 1573016LL);
          cCapString(v30 + 52, v60, 32LL);
          v59 = lNormAngle(v59);
          inserted = HmgInsertObjectInternal((void *)v30, 1u, 0xAu);
          if ( inserted )
          {
            *(_QWORD *)(HmgPentryFromPobj(v30) + 16) = 0LL;
            _InterlockedDecrement(v30 + 3);
            goto LABEL_62;
          }
          FreeObject(v30, 10LL);
        }
      }
      inserted = 0LL;
LABEL_62:
      v33 = GreSelectFontInternal(a1, inserted, 1LL);
      if ( v48 )
      {
        if ( a3 == 1 )
        {
          CaptionChar = GetCaptionChar(v17);
          DrawIt(a1, &v51, v17, CaptionChar);
        }
        else
        {
          if ( a3 != 3 )
          {
            v35 = a3 == 4;
            goto LABEL_66;
          }
          DrawScrollArrow(a1, &v51, v17);
        }
      }
      else if ( a3 == 2 || a3 == 5 )
      {
        if ( (v17 & 0x18) != 0 )
        {
          if ( (v17 & 0x800) == 0 )
          {
            top = v52->top;
            v38 = v52->right - v52->left;
            v53[0] = v52->left;
            v53[2] = v38;
            v39 = v52->bottom - top;
            v53[1] = top;
            v53[3] = v39;
            v54 = *(_QWORD *)(gpsi + 4728LL);
            GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v53, 1u, v41);
          }
          DrawScrollArrow(a1, &v51, ((v17 >> 3) & 1) == 0);
          v35 = 1;
          goto LABEL_66;
        }
        DrawMenuMark(a1, &v51, a3, v17);
      }
      else if ( a3 == 4 )
      {
        DrawBox(a1, &v51, v17);
      }
      else
      {
        DrawGrip(a1, v52, v17);
      }
      v35 = 1;
LABEL_66:
      if ( v9 )
      {
        GreSetGraphicsMode(a1);
        GreSetTextAlign(a1);
      }
      GreSetBkMode(a1);
      GreSelectFontInternal(a1, v33, 1LL);
      GreDeleteObject(inserted);
      return v35;
    }
  }
  if ( v9 )
  {
    GreSetGraphicsMode(a1);
    GreSetTextAlign(a1);
  }
  return 0LL;
}
