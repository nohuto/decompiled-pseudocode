/*
 * XREFs of ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00902E0
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00AF240 (GreSetDIBitsToDeviceInternal.c)
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00FEEB4 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0273044 (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00907A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00B297C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     GreUpdateSprite @ 0x1C00BE800 (GreUpdateSprite.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CE400 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C0165014 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall GreUpdateSpriteDevLockEnd(HDC **a1, int a2)
{
  int v3; // r13d
  unsigned int updated; // edi
  HDEV v6; // rsi
  HDC *v7; // r10
  struct tagSIZE v8; // rax
  HDC v9; // rdi
  HWND v10; // r12
  __int64 v12; // r10
  __int64 v13; // rcx
  struct tagRECT v14; // xmm0
  unsigned int v15; // r12d
  unsigned int left; // eax
  struct tagRECT *v17; // r13
  __int64 v18; // r9
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // eax
  LONG v22; // ecx
  NTSTATUS v23; // eax
  int v24; // [rsp+88h] [rbp-80h]
  struct tagSIZE v25; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v26; // [rsp+98h] [rbp-70h] BYREF
  __int64 HDEV; // [rsp+A0h] [rbp-68h] BYREF
  struct tagRECT v28; // [rsp+A8h] [rbp-60h] BYREF
  __m256i Parameter; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v30; // [rsp+D8h] [rbp-30h]
  struct tagSIZE *v31; // [rsp+E0h] [rbp-28h]
  HDC v32; // [rsp+E8h] [rbp-20h]
  POINTL *v33; // [rsp+F0h] [rbp-18h]
  __int64 v34; // [rsp+F8h] [rbp-10h]
  struct tagRECT *v35; // [rsp+100h] [rbp-8h]
  __int64 v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+110h] [rbp+8h]
  int v38; // [rsp+114h] [rbp+Ch]
  int v39; // [rsp+118h] [rbp+10h]
  int v40; // [rsp+11Ch] [rbp+14h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  int v42; // [rsp+138h] [rbp+30h]
  __int64 v43; // [rsp+148h] [rbp+40h]
  _DWORD v44[84]; // [rsp+158h] [rbp+50h] BYREF

  v3 = 0;
  updated = 0;
  HDEV = UserGetHDEV();
  v6 = (HDEV)HDEV;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  }
  if ( g_pDwmState )
  {
    if ( (unsigned int)GreGetBounds(**a1, &v28, 4LL) )
    {
      v7 = *a1;
      v8 = (struct tagSIZE)(*a1)[64];
      v25 = v8;
      v26 = (struct REGION *)v7[149];
      if ( !v26 )
      {
        EtwDevLockEndUpdate(
          v7[59],
          (unsigned int)v8.cx,
          (unsigned int)v25.cy,
          (unsigned int)v28.left,
          v28.top,
          v28.right,
          v28.bottom);
        v9 = **a1;
        v10 = (HWND)(*a1)[59];
        if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
        {
          Parameter.m256i_i64[0] = (__int64)v6;
          v31 = &v25;
          Parameter.m256i_i64[1] = (__int64)v10;
          v35 = &v28;
          v30 = 0LL;
          v41 = 0LL;
          *(_OWORD *)&Parameter.m256i_u64[2] = 0LL;
          v32 = v9;
          v33 = &gptlZero;
          v34 = 0LL;
          v36 = 0LL;
          v37 = 0;
          v38 = 1075838976;
          v39 = 1;
          v40 = a2;
          v23 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, &Parameter, 0x2000uLL, 1u, 0LL);
          updated = v41;
          if ( v23 < 0 )
            updated = 0;
        }
        else
        {
          updated = GreUpdateSpriteInternal(
                      v6,
                      v10,
                      0LL,
                      0LL,
                      0LL,
                      &v25,
                      v9,
                      (struct tagPOINT *)&gptlZero,
                      0,
                      0LL,
                      0x40200000u,
                      &v28,
                      0LL,
                      1,
                      a2);
        }
        goto LABEL_8;
      }
      if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v26) != 1 )
      {
        v13 = 1016LL;
        if ( (*(_DWORD *)(v12 + 40) & 1) != 0 )
          v13 = 1024LL;
        RGNOBJ::bOffset((RGNOBJ *)&v26, (struct _POINTL *)(v12 + v13));
        v36 = 0LL;
        v37 = 0;
        v42 = 1;
        v43 = 0LL;
        v33 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&Parameter, v26, (struct ERECTL *)&v28, 1);
        memset(v44, 0, 0x144uLL);
        switch ( Parameter.m256i_i8[20] )
        {
          case 1:
            v14 = *(struct tagRECT *)((char *)Parameter.m256i_i64 + 4);
LABEL_17:
            *(struct tagRECT *)&v44[1] = v14;
            v44[0] = 1;
            v24 = 0;
LABEL_18:
            updated = 1;
            if ( v3 )
              goto LABEL_38;
            while ( 1 )
            {
              v15 = 0;
              if ( v44[0] )
              {
                do
                {
                  left = v28.left;
                  v17 = (struct tagRECT *)&v44[4 * v15 + 1];
                  v18 = (unsigned int)v17->left;
                  if ( (int)v18 < v28.left )
                  {
                    v17->left = v28.left;
                    v18 = left;
                  }
                  top = v17->top;
                  if ( top < v28.top )
                  {
                    v17->top = v28.top;
                    top = v44[4 * v15 + 2];
                  }
                  right = v17->right;
                  if ( right > v28.right )
                  {
                    v17->right = v28.right;
                    right = v44[4 * v15 + 3];
                  }
                  bottom = v17->bottom;
                  v22 = v28.bottom;
                  if ( bottom > v28.bottom )
                  {
                    v17->bottom = v28.bottom;
                    bottom = v22;
                  }
                  EtwDevLockEndTightUpdate(
                    (*a1)[59],
                    (unsigned int)v25.cx,
                    (unsigned int)v25.cy,
                    v18,
                    top,
                    right,
                    bottom);
                  if ( !(unsigned int)GreUpdateSprite(
                                        v6,
                                        (HWND)(*a1)[59],
                                        0LL,
                                        0LL,
                                        0LL,
                                        &v25,
                                        **a1,
                                        (struct tagPOINT *)&gptlZero,
                                        0,
                                        0LL,
                                        0x40200000u,
                                        v17,
                                        0LL,
                                        1,
                                        a2) )
                    updated = 0;
                  ++v15;
                }
                while ( v15 < v44[0] );
                v3 = v24;
              }
              if ( !v3 )
                break;
LABEL_38:
              v3 = XCLIPOBJ::bEnum((XCLIPOBJ *)&Parameter, 0x144u, v44, 0LL);
              v24 = v3;
            }
            break;
          case 0:
            v14 = v28;
            goto LABEL_17;
          case 3:
            v3 = 1;
            v24 = 1;
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)&Parameter, 0, 0, 4u, 0x14u);
            goto LABEL_18;
        }
      }
    }
LABEL_8:
    REGION::vDeleteREGION((REGION *)(*a1)[149]);
    (*a1)[149] = 0LL;
    goto LABEL_9;
  }
  GdiUpdateSpriteDevLockEnd((struct XDCOBJ *)a1);
LABEL_9:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&HDEV) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return updated;
}
