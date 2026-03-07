void __fastcall xxxRedrawHungWindow(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 EmptyRgn; // rdi
  HDC DCEx; // rax
  HDC v10; // r14
  __int16 v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  struct tagWND *i; // r14
  __int64 v16; // r8
  int v17; // ebx
  __int64 v18; // r8
  HDC v19; // rdi
  __int64 DesktopWindow; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r8
  RECT v25; // xmm0
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  unsigned __int64 v29; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _BYTE v36[8]; // [rsp+20h] [rbp-49h] BYREF
  HRGN v37; // [rsp+28h] [rbp-41h] BYREF
  __int128 v38; // [rsp+30h] [rbp-39h] BYREF
  __int128 v39; // [rsp+40h] [rbp-29h] BYREF
  __int64 v40; // [rsp+50h] [rbp-19h]
  __int128 v41; // [rsp+58h] [rbp-11h] BYREF
  __int64 v42; // [rsp+68h] [rbp-1h]
  RECT v43; // [rsp+70h] [rbp+7h] BYREF

  v40 = 0LL;
  v43 = 0LL;
  v42 = 0LL;
  v39 = 0LL;
  v41 = 0LL;
  if ( *((_QWORD *)PtiCurrentShared((__int64)a1) + 57) )
  {
    v5 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v5) + 57) + 8LL);
    if ( (*(_DWORD *)(v5 + 64) & 1) != 0 )
    {
      LODWORD(v37) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2159);
    }
  }
  v6 = *((_QWORD *)a1 + 5);
  v7 = *(_QWORD *)(v6 + 136);
  if ( v7 && (*(_BYTE *)(v6 + 31) & 0x10) != 0 && (!a2 || !GetStyleWindow((__int64)a1, 2568)) )
  {
    if ( v7 <= 1 )
    {
      v43 = *(RECT *)(v6 + 88);
      EmptyRgn = GreCreateRectRgnIndirect(&v43);
      if ( !EmptyRgn )
        EmptyRgn = 1LL;
    }
    else
    {
      EmptyRgn = CreateEmptyRgn(v5, v4);
      if ( !EmptyRgn )
      {
LABEL_12:
        EmptyRgn = 1LL;
        goto LABEL_15;
      }
      if ( !(unsigned int)GreCombineRgn(EmptyRgn, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      {
        GreDeleteObject(EmptyRgn);
        goto LABEL_12;
      }
    }
LABEL_15:
    if ( a2 && EmptyRgn != 1 && (unsigned int)GreCombineRgn(EmptyRgn, EmptyRgn, a2, 1LL) == 1 )
    {
      GreDeleteObject(EmptyRgn);
      return;
    }
    ThreadLock(a1, &v39);
    if ( gihmodUserApiHook < 0 )
    {
      DCEx = (HDC)_GetDCEx(a1, EmptyRgn, 328833LL);
      v10 = DCEx;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0
        || (v11 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground) )
      {
        v11 = 0x2000;
      }
      xxxDrawWindowFrame(a1, DCEx, v11);
      _ReleaseDC(v10);
    }
    xxxInternalInvalidate(a1, (HRGN)EmptyRgn, 0x485u);
    v43 = *(RECT *)(*((_QWORD *)a1 + 5) + 88LL);
    xxxCalcClientRect((__int64 *)a1, &v43, 1);
    SetRectRgnIndirect(ghrgnInv2, &v43);
    if ( EmptyRgn > 1 )
    {
      v12 = GreCombineRgn(EmptyRgn, EmptyRgn, ghrgnInv2, 1LL);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          GreDeleteObject(EmptyRgn);
          EmptyRgn = 0LL;
LABEL_43:
          v18 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x8Bu;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) == 0 )
            v18 = (4 * (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 4)) | 0x83u;
          v19 = (HDC)_GetDCEx(a1, EmptyRgn, v18);
          GreWatchVisRgnChange(v19);
          if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 184LL) )
          {
            DesktopWindow = GetDesktopWindow((__int64)a1);
            ThreadLock(DesktopWindow, &v41);
            xxxInternalPaintDesktop(DesktopWindow, v19, 1);
            ThreadUnlock1(v22, v21, v23);
          }
          else
          {
            v24 = *((_QWORD *)a1 + 5);
            v43 = *(RECT *)(v24 + 88);
            v25 = v43;
            v26 = *(_DWORD *)(v24 + 92);
            v27 = -*(_DWORD *)(v24 + 88);
            v43.right -= *(_DWORD *)(v24 + 88);
            v28 = -v26;
            v43.bottom += v28;
            v43.top += v28;
            v43.left = v27 + _mm_cvtsi128_si32((__m128i)v25);
            v29 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 72LL);
            if ( v29 )
            {
              if ( v29 <= 0x1F )
                v29 = *(_QWORD *)(gpsi + 8 * v29 + 4688);
            }
            else if ( (*(_BYTE *)(v24 + 18) & 1) != 0 && (*(_BYTE *)(v24 + 21) & 2) != 0 )
            {
              v29 = *(_QWORD *)(gpsi + 4816LL);
            }
            else
            {
              v29 = *(_QWORD *)(gpsi + 4736LL);
            }
            ObjectOwner = GreGetObjectOwner(v29, 16LL);
            if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
            {
              v32 = (HBRUSH)v29;
            }
            else
            {
              BrushColor = GreGetBrushColor(v29);
              if ( BrushColor == -1 )
                BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4736LL));
              GreSetSolidBrush(ghbrHungApp, BrushColor);
              v32 = (HBRUSH)ghbrHungApp;
            }
            FillRect(v19, &v43, v32);
          }
          GreWatchVisRgnChange(v19);
          _ReleaseDC(v19);
          SetOrClrWF(1, (__int64 *)a1, 0x108u, 1);
          SetOrClrWF(1, (__int64 *)a1, 0x102u, 1);
          SetOrClrWF(1, (__int64 *)a1, 0x120u, 1);
          ThreadUnlock1(v34, v33, v35);
          return;
        }
      }
      else
      {
        GreDeleteObject(EmptyRgn);
        EmptyRgn = 1LL;
      }
    }
    v13 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v13 + 31) & 2) != 0 )
      goto LABEL_43;
    v14 = *(_QWORD *)(v13 + 136);
    v38 = 0LL;
    if ( v14 != 1 )
    {
      if ( (unsigned int)GreGetRgnBox(v14, &v43) )
        goto LABEL_34;
      v13 = *((_QWORD *)a1 + 5);
    }
    v43 = *(RECT *)(v13 + 88);
LABEL_34:
    for ( i = (struct tagWND *)*((_QWORD *)a1 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      v16 = *((_QWORD *)i + 5);
      if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0 && ((*(_BYTE *)(v16 + 20) & 4) != 0 || !*(_QWORD *)(v16 + 136)) )
      {
        if ( (unsigned int)IntersectRect(&v38, &v43.left, (int *)(v16 + 88)) )
        {
          v37 = (HRGN)EmptyRgn;
          v17 = PhysicalToLogicalInPlaceRgn((__int64)i, (__int64)&v37);
          AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v36);
          xxxInternalInvalidate(i, v37, 0x485u);
          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v36);
          if ( v17 )
            GreDeleteObject(v37);
        }
      }
    }
    goto LABEL_43;
  }
}
