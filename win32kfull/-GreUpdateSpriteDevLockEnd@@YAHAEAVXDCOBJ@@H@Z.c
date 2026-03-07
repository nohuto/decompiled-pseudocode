__int64 __fastcall GreUpdateSpriteDevLockEnd(struct tagSIZE **a1, int a2)
{
  unsigned int updated; // r15d
  HDEV HDEV; // r12
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // r13
  Gre::Base *v8; // rcx
  struct tagSIZE *v10; // r10
  struct tagSIZE v11; // rax
  struct tagSIZE *v12; // rax
  HDC v13; // rdi
  HWND v14; // r14
  __int64 v15; // r10
  struct tagRECT v16; // xmm0
  LONG x; // r14d
  HDEV v18; // r13
  unsigned int v19; // r12d
  int v20; // r14d
  LONG *v21; // rdi
  unsigned int left; // eax
  __int64 v23; // r9
  LONG v24; // r10d
  LONG top; // eax
  LONG v26; // r8d
  LONG right; // eax
  LONG v28; // edx
  LONG bottom; // eax
  struct tagSIZE *v30; // rax
  int v31; // eax
  NTSTATUS v32; // eax
  struct tagPOINT v33; // [rsp+80h] [rbp-80h] BYREF
  struct tagSIZE v34; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+90h] [rbp-70h]
  struct REGION *v36; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v37; // [rsp+A0h] [rbp-60h] BYREF
  HDEV v38; // [rsp+A8h] [rbp-58h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v39; // [rsp+B0h] [rbp-50h]
  struct tagRECT v40; // [rsp+B8h] [rbp-48h] BYREF
  __m256i Parameter; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-10h]
  struct tagSIZE *v43; // [rsp+F8h] [rbp-8h]
  HDC v44; // [rsp+100h] [rbp+0h]
  struct tagPOINT *v45; // [rsp+108h] [rbp+8h]
  __int64 v46; // [rsp+110h] [rbp+10h]
  struct tagRECT *v47; // [rsp+118h] [rbp+18h]
  __int64 v48; // [rsp+120h] [rbp+20h]
  int v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+12Ch] [rbp+2Ch]
  int v51; // [rsp+130h] [rbp+30h]
  int v52; // [rsp+134h] [rbp+34h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+160h] [rbp+60h]
  unsigned int v56; // [rsp+170h] [rbp+70h] BYREF
  _OWORD v57[20]; // [rsp+174h] [rbp+74h] BYREF

  v35 = a2;
  updated = 0;
  HDEV = (HDEV)UserGetHDEV();
  v38 = HDEV;
  v39 = Gre::Base::Globals(v6);
  v7 = v39;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v38) )
  {
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v7 + 14));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v7 + 14));
  }
  if ( *((_QWORD *)Gre::Base::Globals(v8) + 38) )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GreGetBounds)(**a1, &v40, 4LL) )
    {
      v10 = *a1;
      v11 = (*a1)[64];
      v34 = v11;
      v36 = (struct REGION *)v10[148];
      if ( !v36 )
      {
        EtwDevLockEndUpdate(
          *(_QWORD *)&v10[59],
          (unsigned int)v11.cx,
          (unsigned int)v34.cy,
          (unsigned int)v40.left,
          v40.top,
          v40.right,
          v40.bottom);
        v12 = *a1;
        v33 = 0LL;
        v13 = (HDC)*v12;
        v14 = (HWND)v12[59];
        if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
        {
          v44 = v13;
          v43 = &v34;
          v42 = 0LL;
          v45 = &v33;
          Parameter.m256i_i64[0] = (__int64)HDEV;
          v47 = &v40;
          v52 = v35;
          Parameter.m256i_i64[1] = (__int64)v14;
          *(_OWORD *)&Parameter.m256i_u64[2] = 0LL;
          v46 = 0LL;
          v48 = 0LL;
          v49 = 0;
          v50 = 1075838976;
          v51 = 1;
          v53 = 0LL;
          v32 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000uLL, 1u, 0LL);
          updated = HIDWORD(v53);
          if ( v32 < 0 )
            updated = 0;
        }
        else
        {
          updated = GreUpdateSpriteInternal(
                      HDEV,
                      v14,
                      0LL,
                      0LL,
                      0LL,
                      &v34,
                      v13,
                      &v33,
                      0,
                      0LL,
                      0x40200000u,
                      &v40,
                      0LL,
                      1,
                      a2,
                      0);
        }
        goto LABEL_5;
      }
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v36) != 1 )
      {
        RGNOBJ::bOffset((RGNOBJ *)&v36, (struct _POINTL *)(v15 + 1016 + 8 * (*(_DWORD *)(v15 + 40) & 1LL)));
        v48 = 0LL;
        v49 = 0;
        v54 = 1;
        v55 = 0LL;
        v45 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&Parameter, v36, (struct ERECTL *)&v40, 1);
        memset_0(&v56, 0, 0x144uLL);
        if ( !Parameter.m256i_i8[20] )
        {
          v16 = v40;
          goto LABEL_17;
        }
        if ( Parameter.m256i_u8[20] == 1 )
        {
          v16 = *(struct tagRECT *)((char *)Parameter.m256i_i64 + 4);
LABEL_17:
          x = 0;
          v56 = 1;
          v57[0] = v16;
          v33.x = 0;
LABEL_18:
          updated = 1;
          v18 = HDEV;
          if ( x )
            goto LABEL_35;
          while ( 1 )
          {
            v19 = 0;
            if ( v56 )
            {
              v20 = v35;
              do
              {
                v21 = (LONG *)&v57[v19];
                left = v40.left;
                v23 = (unsigned int)*v21;
                if ( (int)v23 < v40.left )
                {
                  *v21 = v40.left;
                  v23 = left;
                }
                v24 = v21[1];
                top = v40.top;
                if ( v24 < v40.top )
                {
                  v21[1] = v40.top;
                  v24 = top;
                }
                v26 = v21[2];
                right = v40.right;
                if ( v26 > v40.right )
                {
                  v21[2] = v40.right;
                  v26 = right;
                }
                v28 = v21[3];
                bottom = v40.bottom;
                if ( v28 > v40.bottom )
                {
                  v21[3] = v40.bottom;
                  v28 = bottom;
                }
                EtwDevLockEndTightUpdate(
                  *(_QWORD *)&(*a1)[59],
                  (unsigned int)v34.cx,
                  (unsigned int)v34.cy,
                  v23,
                  v24,
                  v26,
                  v28);
                v30 = *a1;
                v37 = 0LL;
                v31 = GreUpdateSprite(
                        v18,
                        *(HWND *)&v30[59],
                        0LL,
                        0LL,
                        0LL,
                        &v34,
                        *(HDC *)v30,
                        &v37,
                        0,
                        0LL,
                        0x40200000u,
                        (struct tagRECT *)&v57[v19++],
                        0LL,
                        1,
                        v20,
                        0);
                updated &= -(v31 != 0);
              }
              while ( v19 < v56 );
              x = v33.x;
            }
            if ( !x )
              break;
LABEL_35:
            x = XCLIPOBJ::bEnum((XCLIPOBJ *)&Parameter, 0x144u, (char *)&v56, 0LL);
            v33.x = x;
          }
          v7 = v39;
          goto LABEL_5;
        }
        if ( Parameter.m256i_u8[20] == 3 )
        {
          v33.x = 1;
          x = 1;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)&Parameter, 0, 0, 4u, 0x14u);
          goto LABEL_18;
        }
      }
    }
LABEL_5:
    REGION::vDeleteREGION(*(REGION **)&(*a1)[148]);
    (*a1)[148] = 0LL;
    goto LABEL_6;
  }
  GdiUpdateSpriteDevLockEnd((struct XDCOBJ *)a1);
LABEL_6:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v38) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 14));
  }
  return updated;
}
