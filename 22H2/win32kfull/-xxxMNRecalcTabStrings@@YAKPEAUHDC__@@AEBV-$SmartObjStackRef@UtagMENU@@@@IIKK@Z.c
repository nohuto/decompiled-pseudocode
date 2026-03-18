/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C02382DC
 * Callers:
 *     xxxMNCompute @ 0x1C0238860 (xxxMNCompute.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0041140 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00652C8 (MNGetpItemFromIndex.c)
 *     GreGetTextExtentW @ 0x1C007A468 (GreGetTextExtentW.c)
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0225FD4 (CALL_LPK.c)
 *     MNIsOwnerDrawItem @ 0x1C0234ACC (MNIsOwnerDrawItem.c)
 *     FindCharPosition @ 0x1C024C8B0 (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(Gre::Base *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  unsigned int v8; // ebp
  __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r11d
  int v17; // r9d
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int CharPosition; // r15d
  int v24; // r10d
  struct tagTHREADINFO *v25; // rax
  int v26; // eax
  int v27; // r8d
  __int64 v28; // r10
  const WCHAR *v29; // rdx
  int v30; // r8d
  __int64 v31; // rcx
  __int64 DPIMetrics; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // r8d
  unsigned int v36; // r8d
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r8d
  unsigned int v44; // [rsp+30h] [rbp-48h]
  _QWORD v45[8]; // [rsp+38h] [rbp-40h] BYREF
  int v48; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v8 = 0;
  v48 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v11 = 0;
    v44 = a3;
    if ( !v10 )
      v10 = **(_QWORD **)a2;
    v13 = MNGetpItemFromIndex(v10, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v13 )
        {
LABEL_22:
          v6 = a3;
          goto LABEL_23;
        }
        v14 = *(_QWORD *)(a2 + 16);
        if ( !v14 )
          v14 = **(_QWORD **)a2;
        v15 = MNIsOwnerDrawItem(v14, (_DWORD **)v13);
        v16 = 0;
        *(_DWORD *)(*(_QWORD *)v13 + 80LL) = v17;
        v18 = *(_QWORD *)(v13 + 24);
        if ( v18 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v13 + 48LL) )
            break;
        }
        if ( v15 )
          goto LABEL_28;
LABEL_17:
        v33 = v16 + v48;
        v34 = *(_QWORD *)(a2 + 16);
        if ( v16 + v48 <= (int)v8 )
          v33 = v8;
        v35 = ++v44;
        v8 = v33;
        if ( !v34 )
          v34 = **(_QWORD **)a2;
        v13 = MNGetpItemFromIndex(v34, v35);
        if ( v36 >= a4 )
          goto LABEL_22;
      }
      if ( !v15 )
      {
        v45[0] = 0LL;
        CharPosition = FindCharPosition(v18, 9LL);
        if ( CharPosition < v24 )
        {
          v25 = PtiCurrentShared(v20, v19, v21, v22);
          v26 = CALL_LPK((__int64)v25);
          v29 = (const WCHAR *)(v28 + 2);
          v30 = v27 - CharPosition - 1;
          if ( v26 )
            xxxClientGetTextExtentPointW(a1, v29, v30, v45);
          else
            GreGetTextExtentW((__int64)a1, (__int64)v29, v30, (__int64)v45);
          DPIMetrics = GetDPIMetrics(v31);
          v16 = *(_DWORD *)(DPIMetrics + 8) + LODWORD(v45[0]);
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
      DpiForSystem = GetDpiForSystem(v12);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
      v8 += *(_DWORD *)(GetDPIMetrics(v39) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v40 = *(_QWORD *)(a2 + 16);
    if ( !v40 )
      v40 = **(_QWORD **)a2;
    while ( 1 )
    {
      v41 = MNGetpItemFromIndex(v40, v6);
      if ( v6 >= a4 || !v41 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v41 + 72LL) = v42;
      v40 = *(_QWORD *)(a2 + 16);
      if ( !v40 )
        v40 = **(_QWORD **)a2;
    }
  }
  return v8;
}
