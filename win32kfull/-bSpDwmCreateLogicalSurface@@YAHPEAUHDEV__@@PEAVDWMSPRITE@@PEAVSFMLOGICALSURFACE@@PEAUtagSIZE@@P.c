__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *this,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  unsigned int v5; // esi
  struct SFMLOGICALSURFACE *v7; // rbp
  int v10; // r12d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  struct SFMLOGICALSURFACE **v15; // rdi
  HLSURF v16; // rax
  HDEV v17; // rdx
  struct SFMLOGICALSURFACE *v18; // rbx
  HDEV v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  SURFACE *v24; // rbx
  __int64 v25; // rcx
  struct _EPROCESS *HwndProcess; // rax
  struct SFMLOGICALSURFACE **v27; // rbx
  HLSURF HLSURFClone; // rax
  HDEV v29; // rdx
  HDEV v30; // rdx
  float v31; // xmm2_4
  LONG cy; // ebx
  unsigned int v33; // r8d
  struct SFMLOGICALSURFACE *v34; // [rsp+30h] [rbp-38h] BYREF
  int v35; // [rsp+38h] [rbp-30h]
  SURFACE *v36; // [rsp+70h] [rbp+8h] BYREF

  v5 = 0;
  v34 = 0LL;
  v7 = a3;
  v35 = 0;
  v10 = 1;
  if ( a4 )
  {
    v11 = *((_QWORD *)a3 + 23);
    if ( v11 || (*((_DWORD *)a3 + 61) & 1) != 0 )
    {
      v12 = 0;
      v13 = 0;
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 36);
        v13 = *(_DWORD *)(v11 + 32);
      }
      if ( a4->cx == v13 && a4->cy == v12 )
        goto LABEL_7;
      v27 = a5;
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = *((_DWORD *)this + 15);
      if ( *v27 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v34, HLSURFClone);
        v7 = v34;
        if ( !v34 )
          goto LABEL_8;
        DWMSPRITE::SetLogicalSurface(this, v29, 0LL);
        DWMSPRITE::SetLogicalSurface(this, v30, v7);
        *v27 = v7;
      }
      else
      {
        v7 = *v27;
      }
    }
    else if ( *a5 != a3 )
    {
      v7 = *a5;
    }
    DWMSPRITE::vUpdateDpiScaling(this, 0LL);
    if ( (*((_DWORD *)this + 35) & 0x20) != 0 )
    {
      v31 = *((float *)this + 34);
      cy = a4->cy;
      bFToL((float)a4->cx * *((float *)this + 33), (int *)a4, 6u);
      bFToL((float)cy * v31, &a4->cy, v33);
    }
    SpCreateSurface(&v36, a1, a4);
    v24 = v36;
    if ( v36 )
    {
      SFMLOGICALSURFACE::SetShape(v7, a1, (struct _SURFOBJ *)((char *)v36 + 24));
      *((_DWORD *)v7 + 63) |= 8u;
      v25 = *((_QWORD *)this + 5);
      *((_DWORD *)this + 16) = a4->cx + *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = a4->cy + *((_DWORD *)this + 15);
      HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(v25);
      SURFACE::vAppContainerOwner(v24, HwndProcess);
    }
    else
    {
      v10 = 0;
    }
    if ( v24 )
      DEC_SHARE_REF_CNT(v24);
  }
  else
  {
    v15 = a5;
    if ( *a5 == a3 )
    {
      v16 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v34, v16);
      v18 = v34;
      if ( !v34 )
        goto LABEL_8;
      DWMSPRITE::SetLogicalSurface(this, v17, 0LL);
      DWMSPRITE::SetLogicalSurface(this, v19, v18);
      v20 = *((_QWORD *)v7 + 23);
      v21 = v20 - 24;
      v22 = -v20;
      v23 = v21 & -(__int64)(v22 != 0);
      if ( v23 )
      {
        INC_SHARE_REF_CNT(v21 & -(__int64)(v22 != 0));
        SFMLOGICALSURFACE::SetShape(v7, a1, 0LL);
        SFMLOGICALSURFACE::SetShape(v18, a1, (struct _SURFOBJ *)(v23 + 24));
        *((_DWORD *)v18 + 63) |= 8u;
        DEC_SHARE_REF_CNT(v23);
      }
      *v15 = v18;
    }
  }
LABEL_7:
  v5 = v10;
LABEL_8:
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(&v34);
  return v5;
}
