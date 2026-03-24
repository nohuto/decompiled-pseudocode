/*
 * XREFs of xxxRedrawHungWindow @ 0x1C02412D4
 * Callers:
 *     xxxHungAppDemon @ 0x1C0041780 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D840 (xxxSimpleDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210FCC (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 *     IsHungWindow @ 0x1C00418B0 (IsHungWindow.c)
 *     FillRect @ 0x1C0045734 (FillRect.c)
 *     xxxCalcClientRect @ 0x1C004A8A0 (xxxCalcClientRect.c)
 *     xxxDrawWindowFrame @ 0x1C004BB1C (xxxDrawWindowFrame.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C00704C0 (_GetDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0071560 (GetStyleWindow.c)
 *     xxxInternalInvalidate @ 0x1C0072580 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0073088 (PhysicalToLogicalInPlaceRgn.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxInternalPaintDesktop @ 0x1C012D140 (xxxInternalPaintDesktop.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C029F640 (GreWatchVisRgnChange.c)
 */

char __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 StyleWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 EmptyRgn; // rdi
  __int64 ThreadWin32Thread; // rax
  HDC DCEx; // rax
  HDC v12; // rbx
  __int16 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 i; // r14
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // r8
  HDC v21; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  RECT v26; // xmm0
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  unsigned __int64 v30; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v33; // r8
  __int64 v34; // rcx
  HRGN v36; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v37[8]; // [rsp+28h] [rbp-31h] BYREF
  __int128 v38; // [rsp+30h] [rbp-29h] BYREF
  __int64 v39; // [rsp+40h] [rbp-19h]
  _QWORD v40[3]; // [rsp+48h] [rbp-11h] BYREF
  __int128 v41; // [rsp+60h] [rbp+7h] BYREF
  RECT v42; // [rsp+70h] [rbp+17h] BYREF

  v40[2] = 0LL;
  v39 = 0LL;
  StyleWindow = *((_QWORD *)a1 + 5);
  v42 = 0LL;
  v38 = 0LL;
  if ( *(_QWORD *)(StyleWindow + 136) )
  {
    LOBYTE(StyleWindow) = *(_BYTE *)(StyleWindow + 31);
    if ( (StyleWindow & 0x10) != 0 )
    {
      if ( !a2 || (unsigned int)IsHungWindow((__int64)a1) )
      {
        LOBYTE(StyleWindow) = ProcessHungWindow();
        return StyleWindow;
      }
      StyleWindow = GetStyleWindow((__int64)a1, 2568);
      if ( !StyleWindow )
      {
        v8 = *((_QWORD *)a1 + 5);
        if ( *(_QWORD *)(v8 + 136) <= 1uLL )
        {
          v42 = *(RECT *)(v8 + 88);
          EmptyRgn = GreCreateRectRgnIndirect(&v42);
          if ( !EmptyRgn )
            EmptyRgn = 1LL;
        }
        else
        {
          EmptyRgn = CreateEmptyRgn(v6, v5, v7);
          if ( !EmptyRgn )
          {
            EmptyRgn = 1LL;
            goto LABEL_9;
          }
          if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
          {
            GreDeleteObject(EmptyRgn);
            EmptyRgn = 1LL;
          }
        }
        if ( EmptyRgn != 1 && (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1LL) == 1 )
        {
          LOBYTE(StyleWindow) = GreDeleteObject(EmptyRgn);
          return StyleWindow;
        }
LABEL_9:
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v40[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v40;
        v40[1] = a1;
        HMLockObject(a1);
        if ( gihmodUserApiHook < 0 )
        {
          DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
          v12 = DCEx;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
            || (v13 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
          {
            v13 = 0x2000;
          }
          xxxDrawWindowFrame((__int64)a1, DCEx, v13);
          _ReleaseDC(v12);
        }
        xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
        v42 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
        xxxCalcClientRect(a1, &v42, 1);
        SetRectRgnIndirect(ghrgnInv2, &v42);
        if ( EmptyRgn > 1 )
        {
          v14 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
          if ( v14 )
          {
            if ( v14 == 1 )
            {
              GreDeleteObject(EmptyRgn);
              EmptyRgn = 0LL;
LABEL_39:
              v20 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
                v20 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
              v21 = (HDC)_GetDCEx(a1, EmptyRgn, v20);
              GreWatchVisRgnChange(v21);
              if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
              {
                DesktopWindow = GetDesktopWindow((__int64)a1);
                v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v38 = *(_QWORD *)(v23 + 416);
                *(_QWORD *)(v23 + 416) = &v38;
                *((_QWORD *)&v38 + 1) = DesktopWindow;
                if ( DesktopWindow )
                  HMLockObject(DesktopWindow);
                xxxInternalPaintDesktop(DesktopWindow, v21, 1);
                ThreadUnlock1(v24);
              }
              else
              {
                v25 = *((_QWORD *)a1 + 5);
                v42 = *(RECT *)(v25 + 88);
                v26 = v42;
                v27 = *(_DWORD *)(v25 + 92);
                v28 = -*(_DWORD *)(v25 + 88);
                v42.right -= *(_DWORD *)(v25 + 88);
                v29 = -v27;
                v42.bottom += v29;
                v42.top += v29;
                v42.left = v28 + _mm_cvtsi128_si32((__m128i)v26);
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
                FillRect(v21, &v42, v33);
              }
              GreWatchVisRgnChange(v21);
              _ReleaseDC(v21);
              SetOrClrWF(1, (__int64)a1, 0x108u, 1);
              SetOrClrWF(1, (__int64)a1, 0x102u, 1);
              SetOrClrWF(1, (__int64)a1, 0x120u, 1);
              LOBYTE(StyleWindow) = ThreadUnlock1(v34);
              return StyleWindow;
            }
          }
          else
          {
            GreDeleteObject(EmptyRgn);
            EmptyRgn = 1LL;
          }
        }
        v15 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v15 + 31) & 2) == 0 )
        {
          v16 = *(_QWORD *)(v15 + 136);
          v41 = 0LL;
          if ( v16 == 1 || !(unsigned int)GreGetRgnBox(v16, &v42) )
            v42 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
          for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
          {
            v18 = *(_QWORD *)(i + 40);
            if ( (*(_BYTE *)(v18 + 31) & 0x10) != 0 && ((*(_BYTE *)(v18 + 20) & 4) != 0 || !*(_QWORD *)(v18 + 136)) )
            {
              if ( (unsigned int)IntersectRect(&v41, &v42.left, (int *)(v18 + 88)) )
              {
                v36 = (HRGN)EmptyRgn;
                v19 = PhysicalToLogicalInPlaceRgn(i, (__int64)&v36);
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v37);
                xxxInternalInvalidate((struct tagWND *)i, v36, 0x485u);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v37);
                if ( v19 )
                  GreDeleteObject(v36);
              }
            }
          }
        }
        goto LABEL_39;
      }
    }
  }
  return StyleWindow;
}
