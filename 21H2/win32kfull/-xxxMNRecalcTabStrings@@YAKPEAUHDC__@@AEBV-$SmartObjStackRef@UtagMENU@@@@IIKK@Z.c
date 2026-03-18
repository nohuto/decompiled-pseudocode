/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0249BAC
 * Callers:
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     GetDPIMetrics @ 0x1C00BE974 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C00BF45C (MNIsOwnerDrawItem.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     FindCharPosition @ 0x1C025AE7C (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  unsigned int v8; // ebp
  __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r11d
  int v18; // r9d
  __int64 v19; // r12
  int CharPosition; // r15d
  int v21; // r10d
  __int64 ThreadWin32Thread; // rax
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r10
  WCHAR *v26; // rdx
  int v27; // r8d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 DPIMetrics; // rax
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // r8d
  unsigned int v34; // r8d
  int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  unsigned int v43; // [rsp+30h] [rbp-48h]
  struct _POINTL v44; // [rsp+38h] [rbp-40h] BYREF
  int v47; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v8 = 0;
  v47 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v11 = 0;
    v43 = a3;
    if ( !v10 )
      v10 = **(_QWORD **)a2;
    v14 = MNGetpItemFromIndex(v10, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v14 )
        {
LABEL_22:
          v6 = a3;
          goto LABEL_23;
        }
        v15 = *(_QWORD *)(a2 + 16);
        if ( !v15 )
          v15 = **(_QWORD **)a2;
        v16 = MNIsOwnerDrawItem(v15, (_DWORD **)v14);
        v17 = 0;
        *(_DWORD *)(*(_QWORD *)v14 + 80LL) = v18;
        v19 = *(_QWORD *)(v14 + 24);
        if ( v19 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v14 + 48LL) )
            break;
        }
        if ( v16 )
          goto LABEL_28;
LABEL_17:
        v31 = v17 + v47;
        v32 = *(_QWORD *)(a2 + 16);
        if ( v17 + v47 <= (int)v8 )
          v31 = v8;
        v33 = ++v43;
        v8 = v31;
        if ( !v32 )
          v32 = **(_QWORD **)a2;
        v14 = MNGetpItemFromIndex(v32, v33);
        if ( v34 >= a4 )
          goto LABEL_22;
      }
      if ( !v16 )
      {
        v44 = 0LL;
        CharPosition = FindCharPosition(v19, 9LL);
        if ( CharPosition < v21 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v23 = CALL_LPK(ThreadWin32Thread);
          v26 = (WCHAR *)(v25 + 2);
          v27 = *(_DWORD *)(v24 + 48) - CharPosition - 1;
          if ( v23 )
            xxxClientGetTextExtentPointW(a1, v26, v27, &v44);
          else
            GreGetTextExtentW(a1, v26, v27, (struct tagSIZE *)&v44, 1u);
          DPIMetrics = GetDPIMetrics(v29, v28);
          v17 = *(_DWORD *)(DPIMetrics + 8) + v44.x;
        }
        goto LABEL_17;
      }
LABEL_28:
      ++v11;
      goto LABEL_17;
    }
LABEL_23:
    if ( v11 != a4 - v6 )
    {
      DpiForSystem = GetDpiForSystem(v13, v12);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
      v8 += *(_DWORD *)(GetDPIMetrics(v38, v37) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v39 = *(_QWORD *)(a2 + 16);
    if ( !v39 )
      v39 = **(_QWORD **)a2;
    while ( 1 )
    {
      v40 = MNGetpItemFromIndex(v39, v6);
      if ( v6 >= a4 || !v40 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v40 + 72LL) = v41;
      v39 = *(_QWORD *)(a2 + 16);
      if ( !v39 )
        v39 = **(_QWORD **)a2;
    }
  }
  return v8;
}
