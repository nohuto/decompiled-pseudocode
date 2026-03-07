__int64 __fastcall GrePolyPatBltInternal(
        struct XDCOBJ *this,
        int a2,
        struct _POLYPATBLT *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // ebx
  struct _POLYPATBLT *v10; // r14
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  int v18; // r15d
  int v19; // r12d
  int v20; // edx
  int v21; // r9d
  __int64 v22; // r13
  int v23; // r8d
  int v24; // ecx
  unsigned __int64 v25; // rdx
  unsigned int locked; // eax
  __int64 v28; // rcx
  int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // [rsp+70h] [rbp-108h]
  int v33; // [rsp+74h] [rbp-104h]
  int v34; // [rsp+78h] [rbp-100h]
  unsigned __int64 v35; // [rsp+80h] [rbp-F8h] BYREF
  int v36; // [rsp+88h] [rbp-F0h]
  int v37; // [rsp+8Ch] [rbp-ECh]
  __int64 v38; // [rsp+90h] [rbp-E8h]
  int v39; // [rsp+98h] [rbp-E0h]
  int v40; // [rsp+9Ch] [rbp-DCh]
  int v41; // [rsp+A0h] [rbp-D8h]
  int v42; // [rsp+A4h] [rbp-D4h]
  struct SURFACE *v43; // [rsp+A8h] [rbp-D0h]
  __int64 v44; // [rsp+B0h] [rbp-C8h]
  struct XDCOBJ *v45; // [rsp+B8h] [rbp-C0h]
  __int64 v46; // [rsp+C0h] [rbp-B8h]
  __int64 v47; // [rsp+C8h] [rbp-B0h]
  _BYTE v48[80]; // [rsp+D0h] [rbp-A8h] BYREF
  int v49; // [rsp+120h] [rbp-58h] BYREF
  int v50; // [rsp+124h] [rbp-54h]
  int v51; // [rsp+128h] [rbp-50h]
  unsigned int v52; // [rsp+12Ch] [rbp-4Ch]

  v9 = a4;
  v10 = a3;
  v45 = this;
  v32 = 1;
  if ( !a4 || !a3 || a5 )
    return a4 == 0;
  v12 = (BYTE2(a2) << 8) | BYTE2(a2);
  if ( ((BYTE2(a2) ^ (unsigned __int8)(4 * BYTE2(a2))) & 0xCC) != 0 )
    return 0LL;
  v13 = *(_QWORD *)this;
  if ( !v13 )
    return 0LL;
  v14 = *(_QWORD *)(v13 + 976);
  v15 = *(_QWORD *)(v14 + 160);
  v46 = v15;
  v44 = v15;
  if ( (*(_DWORD *)(v14 + 152) & 0x1000) != 0 )
    GreDCSelectBrush(v13, v15);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v48);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v48, this, 0) )
  {
    v16 = *(_QWORD *)this;
    v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 208LL);
    v37 = *(_DWORD *)(*(_QWORD *)(v16 + 976) + 108LL) & 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v16 + 976) + 340LL) & 0x1E000) != 0 )
      EXFORMOBJ::vInit((EXFORMOBJ *)&v35, this, 0x204u, 0);
    else
      v35 = v16 + 320;
    v43 = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
    while ( 1 )
    {
      if ( !v9-- )
      {
        v15 = v46;
        goto LABEL_37;
      }
      v38 = 0LL;
      v18 = *(_DWORD *)v10;
      v39 = *(_DWORD *)v10;
      v19 = *((_DWORD *)v10 + 1);
      v40 = v19;
      v20 = *((_DWORD *)v10 + 2);
      v33 = v20;
      v41 = v20;
      v21 = *((_DWORD *)v10 + 3);
      v34 = v21;
      v42 = v21;
      v47 = *((_QWORD *)v10 + 2);
      v22 = v47;
      if ( v47 )
      {
        v38 = GreDCSelectBrush(*(_QWORD *)this, v47);
        v20 = v33;
        v21 = v34;
      }
      v23 = *(_DWORD *)(v35 + 32);
      if ( (v23 & 1) == 0 )
        break;
      v49 = v18;
      v50 = v19;
      v24 = v20 + v18;
      v51 = v20 + v18;
      v25 = (unsigned int)(v21 + v19);
      v52 = v21 + v19;
      if ( (v23 & 0x43) != 0x43 )
      {
        bCvtPts1(v35, &v49, 2LL);
        v25 = v52;
        v24 = v51;
        v19 = v50;
        v18 = v49;
      }
      if ( v37 )
      {
        v49 = ++v18;
        v51 = ++v24;
      }
      if ( v18 > v24 )
      {
        v30 = v18;
        v18 = v24;
        v49 = v24;
        v24 = v30;
        v51 = v30;
      }
      if ( v19 > (int)v25 )
      {
        v31 = v19;
        v19 = v25;
        v50 = v25;
        v25 = v31;
        v52 = v31;
      }
      if ( v18 != v24 && v19 != (_DWORD)v25 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulate(this, (struct ERECTL *)&v49);
        if ( v43 )
        {
          locked = GrePatBltLockedDC(this, (struct EXFORMOBJ *)v25, (struct ERECTL *)&v49, v12, v43, a6, a7, a8, a9);
LABEL_32:
          v32 = locked;
        }
      }
      if ( v22 )
        GreDCSelectBrush(*(_QWORD *)this, v38);
      DEVLOCKOBJ::bTightBoundsToRegion((DEVLOCKOBJ *)v48);
      v10 = (struct _POLYPATBLT *)((char *)v10 + 24);
    }
    locked = GreMaskBlt(**(HDC **)this, v18, v19, v20, v21, 0LL, 0, 0, 0LL, 0, 0, v12 << 16, 0);
    goto LABEL_32;
  }
  v32 = XDCOBJ::bFullScreen(this);
LABEL_37:
  v28 = *(_QWORD *)(*(_QWORD *)this + 976LL);
  if ( *(_QWORD *)(v28 + 160) != v15 )
  {
    *(_QWORD *)(v28 + 160) = v15;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) |= 0x1000u;
  }
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v48);
  return v32;
}
