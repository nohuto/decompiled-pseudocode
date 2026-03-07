__int64 __fastcall xxxMNItemSize(
        __int64 **a1,
        struct tagWND *a2,
        int a3,
        HDC a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  _DWORD *v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rcx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  bool v25; // zf
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  _DWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  int v33; // edx
  unsigned int CharPosition; // eax
  __int64 v35; // r10
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int DpiForSystem; // eax
  __int64 v40; // rcx
  unsigned int *v41; // rax
  __int64 v43; // [rsp+30h] [rbp-58h]
  _DWORD v44[10]; // [rsp+38h] [rbp-50h] BYREF

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  memset(v44, 0, 32);
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26, a3);
  v14 = a5;
  v43 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    v15 = *(_QWORD *)(GetDPIMETRICSForDpi() + 48);
    if ( v15 )
    {
      v43 = GreSelectFontInternal((__int64)a4, v15, 1);
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
  v16 = (__int64)a1[2];
  if ( !v16 )
    v16 = **a1;
  v17 = MNIsOwnerDrawItem(v16, (_DWORD **)v14);
  v18 = *(_DWORD **)v14;
  v19 = v17;
  a6 = v17;
  if ( !*((_QWORD *)v18 + 12) )
    goto LABEL_55;
  v20 = (__int64)a1[2];
  if ( !v20 )
    v20 = **a1;
  if ( (unsigned int)MNIsUAHMenu(v20) )
  {
    v21 = *(_DWORD *)(*(_QWORD *)v14 + 96LL);
    if ( v21 > 7 )
    {
      v27 = v21 - 8;
      if ( !v27 )
        goto LABEL_55;
      v28 = v27 - 1;
      if ( !v28 )
        goto LABEL_55;
      v26 = v28 - 1;
      v25 = v26 == 0;
    }
    else
    {
      if ( v21 == 7 )
        goto LABEL_55;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_55;
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_55;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_55;
      v26 = v24 - 2;
      v25 = v26 == 0;
    }
    if ( !v25 && v26 != 1 )
      goto LABEL_24;
LABEL_55:
    if ( !v19 )
    {
LABEL_49:
      if ( *(_QWORD *)(v14 + 24) )
      {
        a5 = 0LL;
        if ( v7 && DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
          DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi() + 28);
        CharPosition = FindCharPosition(*(_QWORD *)(v14 + 24), 9LL);
        xxxPSMGetTextExtent(a4, v35, CharPosition, &a5);
        if ( v9 )
          v9 += a5 + 2;
        else
          v9 = a5;
      }
      if ( v7 )
      {
        v38 = **a1;
        if ( (*(_DWORD *)(*(_QWORD *)(v38 + 40) + 40LL) & 0x4000000) != 0
          || (v38 = **a1, *(int *)(*(_QWORD *)(v38 + 40) + 40LL) >= 0) )
        {
          DpiForSystem = GetDpiForSystem(v38);
          v9 += *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2);
        }
        v9 += 6;
        DpiDependentMetric += 2;
      }
LABEL_71:
      v40 = (__int64)a1[2];
      if ( !v40 )
        v40 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v40, v14) != -1 && (*(_DWORD *)(*(_QWORD *)v14 + 4LL) & 0x1000) != 0 )
      {
        if ( v43 )
          GreSelectFontInternal((__int64)a4, v43, 1);
        else
          GreSetTextCharacterExtra(a4);
      }
      goto LABEL_78;
    }
    xxxMNGetBitmapSize(a1, v14, a2, a3, (__int64)a4);
    v36 = (__int64)a1[2];
    if ( !v36 )
      v36 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v36, v14) != -1 )
    {
      v9 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
        v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi() + 8);
      }
      else
      {
        v37 = (__int64)a1[2];
        if ( !v37 )
          v37 = **a1;
        if ( (unsigned int)MNIsUAHMenu(v37) )
          DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
      }
      goto LABEL_71;
    }
    goto LABEL_78;
  }
LABEL_24:
  v29 = *(_DWORD **)v14;
  if ( *(_QWORD *)(*(_QWORD *)v14 + 96LL) != -1LL )
  {
    if ( v29[26] != -1 )
      goto LABEL_41;
    if ( (v29[1] & 0x20000000) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)v14 + 104LL) = GetDpiDependentMetric(25, a3);
      *(_DWORD *)(*(_QWORD *)v14 + 108LL) = GetDpiDependentMetric(26, a3);
      if ( *(_QWORD *)(*(_QWORD *)v14 + 96LL) == 1LL )
        *(_DWORD *)(*(_QWORD *)v14 + 104LL) += 2;
      goto LABEL_40;
    }
    v31 = (__int64)a1[2];
    if ( !v31 )
      v31 = **a1;
    if ( !(unsigned int)MNIsUAHMenu(v31) )
    {
      if ( (unsigned int)GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v14 + 96LL), 32LL, v44) )
      {
        *(_DWORD *)(*(_QWORD *)v14 + 104LL) = v44[1];
        v32 = v44[2];
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)v14 + 104LL) = GetDpiDependentMetric(25, a3);
        v32 = GetDpiDependentMetric(26, a3);
      }
      *(_DWORD *)(*(_QWORD *)v14 + 108LL) = v32;
LABEL_40:
      v19 = a6;
LABEL_41:
      v9 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
      if ( *(_DWORD *)(**a1 + 72) <= v9 )
        v33 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
      else
        v33 = *(_DWORD *)(**a1 + 72);
      *(_DWORD *)(**a1 + 72) = v33;
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
      }
      else if ( *(_DWORD *)(*(_QWORD *)v14 + 108LL) > DpiDependentMetric )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
      }
      if ( v19 )
        goto LABEL_71;
      goto LABEL_49;
    }
  }
  xxxMNGetBitmapSize(a1, v14, a2, a3, (__int64)a4);
  v30 = (__int64)a1[2];
  if ( !v30 )
    v30 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v30, v14) != -1 )
    goto LABEL_40;
LABEL_78:
  v41 = a7;
  a7[1] = DpiDependentMetric;
  *v41 = v9;
  return a6;
}
