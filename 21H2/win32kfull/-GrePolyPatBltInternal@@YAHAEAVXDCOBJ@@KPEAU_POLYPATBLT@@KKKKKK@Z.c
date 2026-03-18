/*
 * XREFs of ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0042444
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0034690 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPolyPatBlt @ 0x1C0043A80 (NtGdiPolyPatBlt.c)
 *     GrePolyPatBlt @ 0x1C00C1D4C (GrePolyPatBlt.c)
 * Callees:
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C61C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002CE30 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C003FD30 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0042838 (-bTightBoundsToRegion@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C0043168 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     bCvtPts1 @ 0x1C0089370 (bCvtPts1.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPatBltInternal(
        struct XDCOBJ *a1,
        int a2,
        struct _POLYPATBLT *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // esi
  struct _POLYPATBLT *v10; // r13
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rdx
  int v19; // esi
  int v20; // r14d
  int v21; // eax
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // ecx
  unsigned __int64 v26; // rdx
  unsigned int locked; // eax
  __int64 v28; // rcx
  unsigned int v30; // eax
  int v31; // eax
  int v32; // [rsp+70h] [rbp-128h]
  int v33; // [rsp+74h] [rbp-124h]
  int v34; // [rsp+78h] [rbp-120h]
  __int64 v35; // [rsp+80h] [rbp-118h] BYREF
  int v36; // [rsp+88h] [rbp-110h]
  int v37; // [rsp+8Ch] [rbp-10Ch]
  __int64 v38; // [rsp+90h] [rbp-108h]
  int v39; // [rsp+98h] [rbp-100h]
  int v40; // [rsp+9Ch] [rbp-FCh]
  int v41; // [rsp+A0h] [rbp-F8h]
  int v42; // [rsp+A4h] [rbp-F4h]
  struct SURFACE *v43; // [rsp+A8h] [rbp-F0h]
  __int64 v44; // [rsp+B0h] [rbp-E8h]
  __int64 v45; // [rsp+B8h] [rbp-E0h]
  struct XDCOBJ *v46; // [rsp+C0h] [rbp-D8h]
  __int64 v47; // [rsp+C8h] [rbp-D0h]
  _BYTE v48[112]; // [rsp+D0h] [rbp-C8h] BYREF
  int v49; // [rsp+140h] [rbp-58h] BYREF
  int v50; // [rsp+144h] [rbp-54h]
  int v51; // [rsp+148h] [rbp-50h]
  unsigned int v52; // [rsp+14Ch] [rbp-4Ch]

  v9 = a4;
  v10 = a3;
  v46 = a1;
  v12 = 1;
  v13 = a4 == 0;
  if ( !a4 )
  {
LABEL_43:
    if ( !v13 )
      return 0;
    return v12;
  }
  if ( !a3 || a5 )
  {
    v13 = a4 == 0;
    goto LABEL_43;
  }
  v14 = (BYTE2(a2) << 8) | BYTE2(a2);
  if ( ((BYTE2(a2) ^ (unsigned __int8)(4 * BYTE2(a2))) & 0xCC) != 0 )
    return 0;
  v15 = *(_QWORD *)a1;
  if ( !v15 )
  {
    return 0;
  }
  else
  {
    v16 = *(_QWORD *)(v15 + 976);
    v17 = *(_QWORD *)(v16 + 160);
    v45 = v17;
    if ( (*(_DWORD *)(v16 + 152) & 0x1000) != 0 )
      GreDCSelectBrush(v15, v17);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v48);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v48, a1, 0) )
    {
      v18 = *(_QWORD *)a1;
      v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL);
      v37 = *(_DWORD *)(*(_QWORD *)(v18 + 976) + 108LL) & 1;
      if ( (*(_DWORD *)(*(_QWORD *)(v18 + 976) + 340LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v35, a1, 0x204u, 0);
        v18 = *(_QWORD *)a1;
      }
      else
      {
        v35 = v18 + 320;
      }
      v43 = *(struct SURFACE **)(v18 + 496);
      while ( 1 )
      {
        v34 = v9 - 1;
        if ( !v9 )
          goto LABEL_34;
        v38 = 0LL;
        v19 = *(_DWORD *)v10;
        v39 = *(_DWORD *)v10;
        v20 = *((_DWORD *)v10 + 1);
        v40 = v20;
        v21 = *((_DWORD *)v10 + 2);
        v32 = v21;
        v41 = v21;
        v22 = *((_DWORD *)v10 + 3);
        v33 = v22;
        v42 = v22;
        v23 = *((_QWORD *)v10 + 2);
        v44 = v23;
        v47 = v23;
        if ( v23 )
        {
          v38 = GreDCSelectBrush(*(_QWORD *)a1, v23);
          v21 = v32;
          v22 = v33;
        }
        v24 = *(_DWORD *)(v35 + 32);
        if ( (v24 & 1) == 0 )
          break;
        v49 = v19;
        v50 = v20;
        v25 = v21 + v19;
        v51 = v21 + v19;
        v26 = (unsigned int)(v20 + v22);
        v52 = v26;
        if ( (v24 & 0x43) != 0x43 )
        {
          bCvtPts1(v35, &v49, 2LL);
          v26 = v52;
          v25 = v51;
          v20 = v50;
          v19 = v49;
        }
        if ( v37 )
        {
          v49 = ++v19;
          v51 = ++v25;
        }
        if ( v19 > v25 )
        {
          v31 = v19;
          v19 = v25;
          v49 = v25;
          v25 = v31;
          v51 = v31;
        }
        if ( v20 > (int)v26 )
        {
          v30 = v20;
          v20 = v26;
          v50 = v26;
          v26 = v30;
          v52 = v30;
        }
        if ( v19 != v25 && v20 != (_DWORD)v26 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
            XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v49);
          if ( v43 )
          {
            locked = GrePatBltLockedDC(a1, (struct EXFORMOBJ *)v26, (struct ERECTL *)&v49, v14, v43, a6, a7, a8, a9);
LABEL_30:
            v12 = locked;
          }
        }
        if ( v44 )
          GreDCSelectBrush(*(_QWORD *)a1, v38);
        DEVLOCKOBJ::bTightBoundsToRegion((DEVLOCKOBJ *)v48);
        v10 = (struct _POLYPATBLT *)((char *)v10 + 24);
        v9 = v34;
      }
      locked = GreMaskBlt(**(HDC **)a1, v22, 0LL, 0, 0, 0LL, 0, 0, v14 << 16, 0);
      goto LABEL_30;
    }
    v12 = XDCOBJ::bFullScreen(a1);
LABEL_34:
    v28 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    if ( *(_QWORD *)(v28 + 160) != v17 )
    {
      *(_QWORD *)(v28 + 160) = v17;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) |= 0x1000u;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v48);
  }
  return v12;
}
