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
  __int64 v19; // rcx
  int CharPosition; // r15d
  int v21; // r10d
  struct tagTHREADINFO *v22; // rax
  int v23; // eax
  int v24; // r8d
  __int64 v25; // r10
  WCHAR *v26; // rdx
  int v27; // r8d
  __int64 v28; // rcx
  __int64 DPIMetrics; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r8d
  unsigned int v41; // [rsp+30h] [rbp-48h]
  struct tagSIZE v42[8]; // [rsp+38h] [rbp-40h] BYREF
  int v45; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v8 = 0;
  v45 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v11 = 0;
    v41 = a3;
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
        v30 = v16 + v45;
        v31 = *(_QWORD *)(a2 + 16);
        if ( v16 + v45 <= (int)v8 )
          v30 = v8;
        v32 = ++v41;
        v8 = v30;
        if ( !v31 )
          v31 = **(_QWORD **)a2;
        v13 = MNGetpItemFromIndex(v31, v32);
        if ( v33 >= a4 )
          goto LABEL_22;
      }
      if ( !v15 )
      {
        v42[0] = 0LL;
        CharPosition = FindCharPosition(v18, 9LL);
        if ( CharPosition < v21 )
        {
          v22 = PtiCurrentShared(v19);
          v23 = CALL_LPK((__int64)v22);
          v26 = (WCHAR *)(v25 + 2);
          v27 = v24 - CharPosition - 1;
          if ( v23 )
            xxxClientGetTextExtentPointW(a1, v26, v27, v42);
          else
            GreGetTextExtentW((HDC)a1, v26, v27, v42);
          DPIMetrics = GetDPIMetrics(v28);
          v16 = *(_DWORD *)(DPIMetrics + 8) + v42[0].cx;
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
      v8 += *(_DWORD *)(GetDPIMetrics(v36) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v37 = *(_QWORD *)(a2 + 16);
    if ( !v37 )
      v37 = **(_QWORD **)a2;
    while ( 1 )
    {
      v38 = MNGetpItemFromIndex(v37, v6);
      if ( v6 >= a4 || !v38 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v38 + 72LL) = v39;
      v37 = *(_QWORD *)(a2 + 16);
      if ( !v37 )
        v37 = **(_QWORD **)a2;
    }
  }
  return v8;
}
