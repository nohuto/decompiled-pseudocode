__int64 __fastcall bSpDwmUpdateSpriteShape(
        Gre::Base *a1,
        struct DWMSPRITE *a2,
        struct SFMLOGICALSURFACE *a3,
        struct _SURFOBJ *a4,
        struct _RECTL *a5,
        struct PALETTE *a6,
        unsigned int *a7,
        struct _RECTL *a8,
        struct SFMLOGICALSURFACE **a9)
{
  struct Gre::Base::SESSION_GLOBALS *v12; // r12
  unsigned int v13; // edi
  LONG left; // ecx
  int top; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  struct SFMLOGICALSURFACE *v18; // rbx
  struct _SURFOBJ *v19; // rdx
  LONG v20; // r14d
  LONG v21; // r15d
  struct tagSIZE v22; // rdx
  __int64 v23; // rcx
  XLATEOBJ *v24; // r15
  __int64 v25; // rax
  unsigned int inited; // eax
  unsigned int v27; // eax
  unsigned int v29; // eax
  struct _POINTL v30; // [rsp+60h] [rbp-79h] BYREF
  struct tagSIZE v31; // [rsp+68h] [rbp-71h] BYREF
  Gre::Base *v32; // [rsp+70h] [rbp-69h] BYREF
  Gre::Base *v33; // [rsp+78h] [rbp-61h]
  __int64 v34; // [rsp+80h] [rbp-59h] BYREF
  _QWORD v35[2]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v36[3]; // [rsp+98h] [rbp-41h] BYREF
  struct tagRECT v37; // [rsp+B0h] [rbp-29h] BYREF
  struct tagRECT v38; // [rsp+C0h] [rbp-19h] BYREF

  v30 = (struct _POINTL)a3;
  v33 = a1;
  v32 = a1;
  v12 = Gre::Base::Globals(a1);
  v13 = 1;
  if ( a4 )
  {
    left = a5->left;
    if ( a5->left >= 0 )
    {
      top = a5->top;
      if ( top >= 0 )
      {
        right = a5->right;
        if ( right <= a4->sizlBitmap.cx )
        {
          bottom = a5->bottom;
          if ( bottom <= a4->sizlBitmap.cy && top <= bottom && left <= right )
          {
            v36[0] = 0LL;
            v37.left = left;
            v31.cx = right - left;
            v37.top = top;
            v37.right = right;
            v31.cy = bottom - top;
            v37.bottom = bottom;
            SURFREFVIEW::bMap((SURFREFVIEW *)v36, a4);
            if ( !v36[0] )
              goto LABEL_25;
            v13 = bSpDwmCreateLogicalSurface((HDEV)a1, a2, *(struct SFMLOGICALSURFACE **)&v30, &v31, a9);
            if ( !v13 )
              goto LABEL_25;
            v18 = *a9;
            v19 = (struct _SURFOBJ *)*((_QWORD *)*a9 + 23);
            v35[0] = 0LL;
            SURFREFVIEW::bMap((SURFREFVIEW *)v35, v19);
            if ( !v35[0] )
              goto LABEL_24;
            v20 = v37.left;
            v21 = v37.top;
            v30.x = v37.left;
            v30.y = v37.top;
            if ( a8 )
            {
              ERECTL::bOffsetSubtract((ERECTL *)&v37, &v30, 0);
              ERECTL::operator*=(&v37.left, &a8->left);
              v30.x = v20 + v37.left;
              v30.y = v21 + v37.top;
            }
            else
            {
              v37.right -= v37.left;
              v37.bottom -= v37.top;
              *(_QWORD *)&v37.left = 0LL;
            }
            if ( ERECTL::bEmpty((ERECTL *)&v37) )
            {
LABEL_24:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v35);
LABEL_25:
              SURFREFVIEW::bUnMap((SURFREFVIEW *)v36);
              return v13;
            }
            v23 = *((_QWORD *)v12 + 751);
            v24 = (XLATEOBJ *)((char *)v12 + 6896);
            v25 = *((_QWORD *)v12 + 750);
            v31 = v22;
            if ( !a6
              || (inited = EXLATEOBJ::bInitXlateObj((Gre::Base *)&v31, 0LL, 0, (__int64)a6, v23, v25, v25, 0, 0, 0, 0),
                  v24 = (XLATEOBJ *)v31,
                  (v13 = inited) != 0) )
            {
              if ( (*((_DWORD *)a2 + 35) & 0x20) != 0 )
              {
                v38 = v37;
                ERECTL::vScale((ERECTL *)&v37, (struct DWMSPRITE *)((char *)a2 + 132));
                if ( (HIDWORD(a4[1].hsurf) & 0x800) != 0 )
                {
                  v34 = *(_QWORD *)&a4[7].iType;
                  ERECTL::vScale((ERECTL *)&v38, (const struct POINTFL *)&v34);
                }
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v29 = RedirStretchBlt(
                          *((struct _SURFOBJ **)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v24,
                          0LL,
                          0LL,
                          (RECTL *)&v37,
                          (RECTL *)&v38,
                          0LL,
                          3);
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) & 2) != 0 )
                {
                  v29 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))v33
                         + 353))(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v24,
                          0LL,
                          0LL,
                          &v37,
                          &v38,
                          0LL,
                          3);
                }
                else
                {
                  v29 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, _QWORD, XLATEOBJ *, _QWORD, _QWORD, struct tagRECT *, struct tagRECT *, _QWORD, int))EngStretchBlt)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          0LL,
                          v24,
                          0LL,
                          0LL,
                          &v37,
                          &v38,
                          0LL,
                          3);
                }
                v13 = v29;
                if ( !v29 )
                  goto LABEL_23;
              }
              else
              {
                if ( (unsigned int)bNeedRenderHint((struct PDEVOBJ *)&v32) )
                {
                  v27 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct _POINTL *))RedirCopyBits)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v24,
                          &v37,
                          &v30);
                }
                else if ( (*(_DWORD *)(*((_QWORD *)v18 + 23) + 88LL) & 0x400) != 0 )
                {
                  v27 = (*((__int64 (__fastcall **)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct _POINTL *))v33
                         + 352))(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v24,
                          &v37,
                          &v30);
                }
                else
                {
                  v27 = ((__int64 (__fastcall *)(_QWORD, struct _SURFOBJ *, _QWORD, XLATEOBJ *, struct tagRECT *, struct _POINTL *))EngCopyBits)(
                          *((_QWORD *)v18 + 23),
                          a4,
                          0LL,
                          v24,
                          &v37,
                          &v30);
                }
                v13 = v27;
                if ( !v27 )
                  goto LABEL_23;
                vSpUpdateDirtyRgn(a2, v18, 0LL, (const struct _RECTL *)&v37, a7, 0);
              }
              vSpUpdateDirtyRgn(a2, v18, 0LL, (const struct _RECTL *)&v37, a7, 0);
            }
LABEL_23:
            EXLATEOBJ::vAltUnlock((Gre::Base **)&v31);
            goto LABEL_24;
          }
        }
      }
    }
  }
  return v13;
}
