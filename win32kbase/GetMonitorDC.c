__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  __int128 v9; // xmm0
  HDC v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int *v16; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // r15
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // r8
  int v30; // ecx
  int v31; // eax
  HRGN RectRgnIndirect; // rax
  __int128 v33; // [rsp+30h] [rbp-20h] BYREF
  __int128 v34; // [rsp+40h] [rbp-10h] BYREF

  v33 = 0LL;
  while ( 2 )
  {
    for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 3); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02D6C68 )
          qword_1C02D6C68(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 2147483650LL, 0LL, 0LL) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          *((_DWORD *)i + 16) = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          v7 = *(_QWORD *)(a1 + 40);
          if ( v7 > 1 )
          {
            RectRgnIndirect = (HRGN)GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, RectRgnIndirect, *(HRGN *)(a1 + 40));
          }
          else
          {
            i[5] = v7;
          }
          v8 = 0LL;
          if ( (i[8] & 0x4000) != 0
            && (int)IsGetStyleWindowSupported() >= 0
            && qword_1C02D6C38
            && (v18 = qword_1C02D6C38(i[2], 2848LL), (v8 = (_QWORD *)v18) != 0LL) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              v19 = qword_1C02D6C18 ? qword_1C02D6C18(v8) : 0LL;
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
              {
                v20 = i[1];
                if ( !qword_1C02D6010 || (v21 = qword_1C02D6010(v20, v19), v20 = i[1], !v21) )
                  GreSelectVisRgn(v20, 0LL, 1LL);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC);
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(v23, v22, v24);
            MonitorRegionForDpi = (HRGN)CreateMonitorRegionForDpi((__int64)a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreDeleteObject((HPALETTE)MonitorRegionForDpi);
            GreOffsetRgn(ghrgnGDC);
            GreSelectVisRgn(i[1], ghrgnGDC, 2LL);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v27 = v8[5];
              v28 = *(_DWORD *)(v27 + 92);
              LODWORD(v27) = 2 * *(_DWORD *)(v27 + 88);
              LODWORD(v33) = v27 + v33;
              DWORD2(v33) += v27;
              HIDWORD(v33) += 2 * v28;
              DWORD1(v33) += 2 * v28;
              v34 = *(_OWORD *)GetMonitorRect(&v34, a2);
              IntersectRect(&v33, (int *)&v33, (int *)&v34);
              v29 = v8[5];
              v30 = -*(_DWORD *)(v29 + 92);
              v31 = -*(_DWORD *)(v29 + 88);
              DWORD2(v33) -= *(_DWORD *)(v29 + 88);
              HIDWORD(v33) += v30;
              LODWORD(v33) = v31 + v33;
              DWORD1(v33) += v30;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds(i[1], 0LL, 5LL);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn(i[1], ghrgnGDC, 2LL);
            v9 = *(_OWORD *)GetMonitorRect(&v34, a2);
            v34 = v9;
            if ( a3 )
              v33 = v9;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v33) -= DWORD1(v34);
            DWORD2(v33) -= v34;
            v10 = (HDC)i[1];
            LODWORD(v33) = v33 - v34;
            DWORD1(v33) -= DWORD1(v34);
            GreSetDCOrg(v10);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 && qword_1C02D6030 )
            qword_1C02D6030(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v8 && (*(_BYTE *)(v8[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 && qword_1C02D6030 )
            qword_1C02D6030(
              i[1],
              *(_QWORD *)i[2],
              *v8,
              (*(_BYTE *)(v8[5] + 27LL) & 2) == 0,
              (*(_WORD *)(v8[5] + 42LL) & 0x2FFF) == 669);
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
            if ( CurrentProcessWin32Process )
            {
              v13 = -*(_QWORD *)CurrentProcessWin32Process;
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            }
            i[10] = CurrentProcessWin32Process;
            v14 = PsGetCurrentProcessWin32Process(v13);
            if ( v14 )
              v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
            *(_DWORD *)(v14 + 12) |= 0x200u;
          }
          v15 = i[9];
          if ( v15 )
            v16 = *(unsigned int **)(v15 + 424);
          else
            v16 = (unsigned int *)i[10];
          UpdateDCEInUseCount(1, v16);
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    break;
  }
  return 0LL;
}
