/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C
 * Callers:
 *     xxxMNCompute @ 0x1C0238860 (xxxMNCompute.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C002E520 (GreExtGetObjectW.c)
 *     GetDPIMETRICSForDpi @ 0x1C0041198 (GetDPIMETRICSForDpi.c)
 *     MNGetpItemIndex @ 0x1C0064060 (MNGetpItemIndex.c)
 *     GetDPIServerInfoForDpi @ 0x1C008A410 (GetDPIServerInfoForDpi.c)
 *     GetOemBitmapInfoForDpi @ 0x1C009A53C (GetOemBitmapInfoForDpi.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
 *     GetDpiDependentMetric @ 0x1C00F0DA0 (GetDpiDependentMetric.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     MNIsUAHMenu @ 0x1C0216918 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0234ACC (MNIsOwnerDrawItem.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0237C90 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     FindCharPosition @ 0x1C024C8B0 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C024EEC0 (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C02D7CB4 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02D7D98 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(
        __int64 **a1,
        ULONG_PTR a2,
        unsigned int a3,
        HDC a4,
        __int64 a5,
        int a6,
        unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  bool v22; // zf
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v35; // rcx
  __int64 v37; // [rsp+30h] [rbp-58h]
  _DWORD v38[10]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v39; // [rsp+B8h] [rbp+30h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  memset(v38, 0, 32);
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26, a3);
  v37 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    v14 = *(_QWORD *)(GetDPIMETRICSForDpi() + 48);
    if ( v14 )
    {
      v37 = GreSelectFontInternal((__int64)a4, v14, 1);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3);
      GetDPIMETRICSForDpi();
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v15 = (__int64)a1[2];
  if ( !v15 )
    v15 = **a1;
  v16 = MNIsOwnerDrawItem(v15, (_DWORD **)a5);
  v39 = v16;
  if ( !*(_QWORD *)(*(_QWORD *)a5 + 96LL) )
    goto LABEL_55;
  v17 = (__int64)a1[2];
  if ( !v17 )
    v17 = **a1;
  if ( (unsigned int)MNIsUAHMenu(v17) )
  {
    v18 = *(_DWORD *)(*(_QWORD *)a5 + 96LL);
    if ( v18 > 7 )
    {
      v24 = v18 - 8;
      if ( !v24 )
        goto LABEL_55;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_55;
      v23 = v25 - 1;
      v22 = v23 == 0;
    }
    else
    {
      if ( v18 == 7 )
        goto LABEL_55;
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_55;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_55;
      v21 = v20 - 1;
      if ( !v21 )
        goto LABEL_55;
      v23 = v21 - 2;
      v22 = v23 == 0;
    }
    if ( !v22 && v23 != 1 )
      goto LABEL_24;
LABEL_55:
    if ( !v16 )
    {
LABEL_49:
      if ( *(_QWORD *)(a5 + 24) )
      {
        if ( v7 && DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
          DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi() + 28);
        FindCharPosition(*(_QWORD *)(a5 + 24), 9LL);
        xxxPSMGetTextExtent(a4);
        if ( v9 )
          v9 += 2;
        else
          v9 = 0;
      }
      if ( v7 )
      {
        v33 = **a1;
        if ( (*(_DWORD *)(*(_QWORD *)(v33 + 40) + 40LL) & 0x4000000) != 0
          || (v33 = **a1, *(int *)(*(_QWORD *)(v33 + 40) + 40LL) >= 0) )
        {
          DpiForSystem = GetDpiForSystem(v33);
          v9 += *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
        }
        v9 += 6;
        DpiDependentMetric += 2;
      }
LABEL_71:
      v35 = (__int64)a1[2];
      if ( !v35 )
        v35 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v35, a5) != -1 && (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
      {
        if ( v37 )
          GreSelectFontInternal((__int64)a4, v37, 1);
        else
          GreSetTextCharacterExtra(a4);
      }
      goto LABEL_78;
    }
    xxxMNGetBitmapSize(a1, a5, a2, a3, (__int64)a4);
    v31 = (__int64)a1[2];
    if ( !v31 )
      v31 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v31, a5) != -1 )
    {
      v9 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
        v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      }
      else
      {
        v32 = (__int64)a1[2];
        if ( !v32 )
          v32 = **a1;
        if ( (unsigned int)MNIsUAHMenu(v32) )
          DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
      }
      goto LABEL_71;
    }
    goto LABEL_78;
  }
LABEL_24:
  v26 = *(_DWORD **)a5;
  if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) != -1LL )
  {
    if ( v26[26] != -1 )
      goto LABEL_41;
    if ( (v26[1] & 0x20000000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25, a3);
      *(_DWORD *)(*(_QWORD *)a5 + 108LL) = GetDpiDependentMetric(26, a3);
      if ( *(_QWORD *)(*(_QWORD *)a5 + 96LL) == 1LL )
        *(_DWORD *)(*(_QWORD *)a5 + 104LL) += 2;
      goto LABEL_40;
    }
    v28 = (__int64)a1[2];
    if ( !v28 )
      v28 = **a1;
    if ( !(unsigned int)MNIsUAHMenu(v28) )
    {
      if ( (unsigned int)GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)a5 + 96LL), 32LL, (__int64)v38) )
      {
        *(_DWORD *)(*(_QWORD *)a5 + 104LL) = v38[1];
        v29 = v38[2];
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a5 + 104LL) = GetDpiDependentMetric(25, a3);
        v29 = GetDpiDependentMetric(26, a3);
      }
      *(_DWORD *)(*(_QWORD *)a5 + 108LL) = v29;
LABEL_40:
      v16 = v39;
LABEL_41:
      v9 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
      if ( *(_DWORD *)(**a1 + 72) <= v9 )
        v30 = *(_DWORD *)(*(_QWORD *)a5 + 104LL);
      else
        v30 = *(_DWORD *)(**a1 + 72);
      *(_DWORD *)(**a1 + 72) = v30;
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
      }
      else if ( *(_DWORD *)(*(_QWORD *)a5 + 108LL) > DpiDependentMetric )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)a5 + 108LL);
      }
      if ( v16 )
        goto LABEL_71;
      goto LABEL_49;
    }
  }
  xxxMNGetBitmapSize(a1, a5, a2, a3, (__int64)a4);
  v27 = (__int64)a1[2];
  if ( !v27 )
    v27 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v27, a5) != -1 )
    goto LABEL_40;
LABEL_78:
  a7[1] = DpiDependentMetric;
  *a7 = v9;
  return v39;
}
