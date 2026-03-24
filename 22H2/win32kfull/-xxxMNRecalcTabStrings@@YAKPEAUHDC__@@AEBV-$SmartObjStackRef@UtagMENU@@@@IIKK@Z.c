/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C024E300
 * Callers:
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0048BB8 (MNIsOwnerDrawItem.c)
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     GetDPIMetrics @ 0x1C00E0A9C (GetDPIMetrics.c)
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 *     GetOemBitmapInfoForDpi @ 0x1C010710C (GetOemBitmapInfoForDpi.c)
 *     CALL_LPK @ 0x1C0158EEC (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 *     FindCharPosition @ 0x1C025DC8C (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  int v8; // r15d
  unsigned int v9; // ebp
  __int64 v11; // rcx
  int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r11d
  int v20; // r9d
  __int64 v21; // rcx
  int v22; // r10d
  __int64 ThreadWin32Thread; // rax
  int v24; // eax
  unsigned int v25; // r8d
  __int64 v26; // r10
  WCHAR *v27; // rdx
  __int64 v28; // rcx
  __int64 DPIMetrics; // rax
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d
  struct _POINTL v39; // [rsp+30h] [rbp-48h] BYREF
  __int64 v40; // [rsp+38h] [rbp-40h]
  int CharPosition; // [rsp+88h] [rbp+10h]

  v6 = a3;
  v8 = a6 + a5;
  v9 = 0;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = 0;
    v13 = a3;
    if ( !v11 )
      v11 = **(_QWORD **)a2;
    v15 = MNGetpItemFromIndex(v11, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v15 )
        {
LABEL_22:
          v6 = a3;
          goto LABEL_23;
        }
        v17 = *(_QWORD *)(a2 + 16);
        if ( !v17 )
          v17 = **(_QWORD **)a2;
        v18 = MNIsOwnerDrawItem(v17, (_DWORD **)v15, v16);
        v19 = 0;
        *(_DWORD *)(*(_QWORD *)v15 + 80LL) = v20;
        v21 = *(_QWORD *)(v15 + 24);
        v40 = v21;
        if ( v21 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v15 + 48LL) )
            break;
        }
        if ( v18 )
          goto LABEL_28;
LABEL_17:
        v30 = *(_QWORD *)(a2 + 16);
        v31 = v19 + v8;
        if ( v19 + v8 <= (int)v9 )
          v31 = v9;
        ++v13;
        v9 = v31;
        if ( !v30 )
          v30 = **(_QWORD **)a2;
        v15 = MNGetpItemFromIndex(v30, v13);
        if ( v13 >= a4 )
          goto LABEL_22;
      }
      if ( !v18 )
      {
        v39 = 0LL;
        CharPosition = FindCharPosition(v21, 9LL);
        if ( CharPosition < v22 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v24 = CALL_LPK(ThreadWin32Thread);
          v27 = (WCHAR *)(v26 + 2);
          if ( v24 )
            xxxClientGetTextExtentPointW(a1, v27, v25, &v39);
          else
            GreGetTextExtentW(a1, v27, v25, (struct tagSIZE *)&v39, 1);
          DPIMetrics = GetDPIMetrics(v28);
          v19 = *(_DWORD *)(DPIMetrics + 8) + v39.x;
        }
        goto LABEL_17;
      }
LABEL_28:
      ++v12;
      goto LABEL_17;
    }
LABEL_23:
    if ( v12 != a4 - v6 )
    {
      DpiForSystem = GetDpiForSystem(v14);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
      v9 += *(_DWORD *)(GetDPIMetrics(v34) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v35 = *(_QWORD *)(a2 + 16);
    if ( !v35 )
      v35 = **(_QWORD **)a2;
    while ( 1 )
    {
      v36 = MNGetpItemFromIndex(v35, v6);
      if ( v6 >= a4 || !v36 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v36 + 72LL) = v37;
      v35 = *(_QWORD *)(a2 + 16);
      if ( !v35 )
        v35 = **(_QWORD **)a2;
    }
  }
  return v9;
}
