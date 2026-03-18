/*
 * XREFs of ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00720D0 (xxxSimpleDoSyncPaint.c)
 *     ?xxxHungAppDaemon@@YAXXZ @ 0x1C00765A0 (-xxxHungAppDaemon@@YAXXZ.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210104 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C004A600 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     IsHungWindow @ 0x1C0076670 (IsHungWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     xxxInternalPaintDesktop @ 0x1C0110D3C (xxxInternalPaintDesktop.c)
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C029DF48 (GreWatchVisRgnChange.c)
 */

void __fastcall xxxRedrawHungWindow(struct tagWND *a1, HRGN a2)
{
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 EmptyRgn; // rdi
  HDC DCEx; // rax
  HDC v9; // r14
  __int16 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  struct tagWND *i; // r14
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r8
  HDC v20; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  RECT v26; // xmm0
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  unsigned __int64 v30; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE v37[8]; // [rsp+20h] [rbp-39h] BYREF
  HRGN v38; // [rsp+28h] [rbp-31h] BYREF
  __int128 v39; // [rsp+30h] [rbp-29h] BYREF
  __int128 v40; // [rsp+40h] [rbp-19h] BYREF
  __int64 v41; // [rsp+50h] [rbp-9h]
  __int128 v42; // [rsp+58h] [rbp-1h] BYREF
  __int64 v43; // [rsp+68h] [rbp+Fh]
  RECT v44; // [rsp+70h] [rbp+17h] BYREF

  v41 = 0LL;
  v43 = 0LL;
  v3 = *((_QWORD *)a1 + 5);
  v44 = 0LL;
  v40 = 0LL;
  v42 = 0LL;
  if ( *(_QWORD *)(v3 + 136) && (*(_BYTE *)(v3 + 31) & 0x10) != 0 )
  {
    if ( !a2 || (unsigned int)IsHungWindow(a1) )
    {
      ProcessHungWindow(a1);
      return;
    }
    if ( !GetStyleWindow((__int64)a1, 2568) )
    {
      v6 = *((_QWORD *)a1 + 5);
      if ( *(_QWORD *)(v6 + 136) <= 1uLL )
      {
        v44 = *(RECT *)(v6 + 88);
        EmptyRgn = GreCreateRectRgnIndirect(&v44);
        if ( EmptyRgn )
          goto LABEL_22;
      }
      else
      {
        EmptyRgn = CreateEmptyRgn(v5);
        if ( EmptyRgn )
        {
          if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
          {
            GreDeleteObject(EmptyRgn);
            EmptyRgn = 1LL;
          }
LABEL_22:
          if ( EmptyRgn != 1 && (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1LL) == 1 )
          {
            GreDeleteObject(EmptyRgn);
            return;
          }
LABEL_12:
          ThreadLock((__int64)a1, (__int64 *)&v40);
          if ( gihmodUserApiHook < 0 )
          {
            DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
            v9 = DCEx;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
              || (v10 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
            {
              v10 = 0x2000;
            }
            xxxDrawWindowFrame(a1, DCEx, v10);
            _ReleaseDC(v9);
          }
          xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
          v44 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
          xxxCalcClientRect(a1, &v44, 1);
          SetRectRgnIndirect(ghrgnInv2, &v44);
          if ( EmptyRgn > 1 )
          {
            v11 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
            if ( v11 )
            {
              if ( v11 == 1 )
              {
                GreDeleteObject(EmptyRgn);
                EmptyRgn = 0LL;
LABEL_40:
                v19 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
                  v19 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
                v20 = (HDC)_GetDCEx(a1, EmptyRgn, v19);
                GreWatchVisRgnChange(v20);
                if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
                {
                  DesktopWindow = GetDesktopWindow((__int64)a1);
                  ThreadLock(DesktopWindow, (__int64 *)&v42);
                  xxxInternalPaintDesktop(DesktopWindow, v20, 1);
                  ThreadUnlock1(v23, v22, v24);
                }
                else
                {
                  v25 = *((_QWORD *)a1 + 5);
                  v44 = *(RECT *)(v25 + 88);
                  v26 = v44;
                  v27 = *(_DWORD *)(v25 + 92);
                  v28 = -*(_DWORD *)(v25 + 88);
                  v44.right -= *(_DWORD *)(v25 + 88);
                  v29 = -v27;
                  v44.bottom += v29;
                  v44.top += v29;
                  v44.left = v28 + _mm_cvtsi128_si32((__m128i)v26);
                  v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
                  if ( v30 )
                  {
                    if ( v30 <= 0x1F )
                      v30 = *(_QWORD *)(gpsi + 8 * v30 + 4688);
                  }
                  else if ( (*(_BYTE *)(v25 + 18) & 1) != 0 && (*(_BYTE *)(v25 + 21) & 2) != 0 )
                  {
                    v30 = *(_QWORD *)(gpsi + 4816LL);
                  }
                  else
                  {
                    v30 = *(_QWORD *)(gpsi + 4736LL);
                  }
                  ObjectOwner = GreGetObjectOwner(v30, 16LL);
                  if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
                  {
                    v33 = (HBRUSH)v30;
                  }
                  else
                  {
                    BrushColor = GreGetBrushColor(v30);
                    if ( BrushColor == -1 )
                      BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
                    GreSetSolidBrush(ghbrHungApp, BrushColor);
                    v33 = (HBRUSH)ghbrHungApp;
                  }
                  FillRect(v20, &v44, v33);
                }
                GreWatchVisRgnChange(v20);
                _ReleaseDC(v20);
                SetOrClrWF(1, a1, 0x108u, 1);
                SetOrClrWF(1, a1, 0x102u, 1);
                SetOrClrWF(1, a1, 0x120u, 1);
                ThreadUnlock1(v35, v34, v36);
                return;
              }
            }
            else
            {
              GreDeleteObject(EmptyRgn);
              EmptyRgn = 1LL;
            }
          }
          v12 = *((_QWORD *)a1 + 5);
          if ( (*(_BYTE *)(v12 + 31) & 2) != 0 )
            goto LABEL_40;
          v13 = *(_QWORD *)(v12 + 136);
          v39 = 0LL;
          if ( v13 != 1 )
          {
            if ( (unsigned int)GreGetRgnBox(v13, &v44) )
              goto LABEL_31;
            v12 = *((_QWORD *)a1 + 5);
          }
          v44 = *(RECT *)(v12 + 88);
LABEL_31:
          for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
          {
            v15 = *((_QWORD *)i + 5);
            if ( (*(_BYTE *)(v15 + 31) & 0x10) != 0 && ((*(_BYTE *)(v15 + 20) & 4) != 0 || !*(_QWORD *)(v15 + 136)) )
            {
              if ( (unsigned int)IntersectRect(&v39, &v44.left, (int *)(v15 + 88)) )
              {
                v38 = (HRGN)EmptyRgn;
                v16 = PhysicalToLogicalInPlaceRgn((__int64)i, (__int64)&v38);
                AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v37);
                xxxInternalInvalidate(i, v38, 0x485u);
                AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v37, v17, v18);
                if ( v16 )
                  GreDeleteObject(v38);
              }
            }
          }
          goto LABEL_40;
        }
      }
      EmptyRgn = 1LL;
      goto LABEL_12;
    }
  }
}
