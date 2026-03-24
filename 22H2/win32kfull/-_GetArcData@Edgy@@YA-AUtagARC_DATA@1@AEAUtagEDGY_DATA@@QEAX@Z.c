/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C0207628
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C02081BC (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     _GetPointerDeviceType @ 0x1C01EEF68 (_GetPointerDeviceType.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0207B7C (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C0207D7C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0208060 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 */

__int64 __fastcall Edgy::_GetArcData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  const struct tagPOINTER_INFO *v7; // r14
  int v8; // ebp
  int v9; // r13d
  unsigned int v10; // ebx
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  int v15; // r13d
  BOOL v16; // r15d
  int PointerDeviceType; // ebx
  int IsLegacyDevice; // eax
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  const struct Edgy::tagARC_DATA *v26; // r8
  __int64 v27; // rax
  int v28; // r11d
  int v29; // r12d
  int v30; // r8d
  int v31; // edx
  int v32; // r9d
  int v33; // r10d
  int v34; // eax
  int v35; // ecx
  __int64 Instance; // rbx
  unsigned int v37; // eax
  __int64 Inertia; // rbx
  float v39; // xmm1_4
  float v40; // xmm1_4
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  int v51; // [rsp+30h] [rbp-88h]
  __int128 v52; // [rsp+38h] [rbp-80h]
  char v53[104]; // [rsp+50h] [rbp-68h] BYREF
  int v54; // [rsp+C0h] [rbp+8h]
  unsigned int v55; // [rsp+C8h] [rbp+10h]
  int v56; // [rsp+D0h] [rbp+18h]
  unsigned int DisambiguationArcData; // [rsp+D8h] [rbp+20h]

  v3 = *(_DWORD *)(a3 + 48);
  *(_OWORD *)a1 = 0LL;
  v55 = 0;
  v54 = 0;
  v7 = 0LL;
  v8 = 1;
  v9 = 0;
  v10 = 0;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)a1 = a3;
  if ( v3 )
  {
    do
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, v10);
      v12 = PointerInfo;
      if ( PointerInfo )
      {
        ++v55;
        v13 = *((_DWORD *)PointerInfo + 3);
        if ( (v13 & 4) != 0 )
        {
          ++v9;
          if ( (v13 & 0x2000) != 0 )
          {
            v7 = v12;
            *(_QWORD *)(a1 + 40) = *((_QWORD *)v12 + 7);
            *(_DWORD *)(a1 + 48) = *((_DWORD *)v12 + 16);
          }
        }
        v14 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)v12 - 2) > 1 )
          v8 = 0;
        if ( v14 && *((_QWORD *)v12 + 2) != v14 )
          v8 = 0;
      }
      ++v10;
    }
    while ( v10 < v3 );
    v54 = v9;
  }
  v15 = 0;
  v56 = 0;
  v16 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v8 && v7 && v54 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v7 + 2));
    if ( ((PointerDeviceType - 1) & 0xFFFFFFFD) != 0 )
      v8 = 0;
    if ( v8 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v7 + 2), 0LL);
      v19 = (__int64 *)Edgy::_HitTestEdgyRegion(
                         v53,
                         a2,
                         *((_QWORD *)v7 + 2),
                         *((_QWORD *)v7 + 7),
                         PointerDeviceType,
                         IsLegacyDevice);
      v20 = *v19;
      v52 = *(_OWORD *)v19;
      if ( *v19 )
      {
        v15 = 1;
        *(_DWORD *)(a1 + 24) = v19[2];
        *(_QWORD *)(a1 + 16) = v20;
        v21 = *(_QWORD *)(v20 + 8);
        *(_QWORD *)(a1 + 32) = *((_QWORD *)&v52 + 1);
        v56 = *(_DWORD *)(*((_QWORD *)&v52 + 1) + 4LL);
        v22 = ValidateHwnd(v21);
        v16 = 1;
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 40);
          if ( *(char *)(v23 + 19) >= 0 && *(char *)(v23 + 20) >= 0 )
            v16 = 0;
        }
      }
      else
      {
        v15 = 0;
      }
    }
  }
  DisambiguationArcData = 0;
  if ( v8 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v24 = *(_QWORD *)(a2 + 184);
    if ( v24
      && (v25 = ValidateHwnd(*(_QWORD *)(v24 + 8))) != 0
      && (v27 = *(_QWORD *)(v25 + 40), *(char *)(v27 + 19) >= 0)
      && *(char *)(v27 + 20) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v26);
    }
    else
    {
      v16 = 1;
    }
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 208);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 216);
  }
  v28 = *(_DWORD *)(a2 + 16);
  v29 = 0;
  if ( !v28
    && (unsigned int)(*(_DWORD *)(a1 + 48) - *(_DWORD *)(a2 + 248)) < *(_DWORD *)(a2 + 252)
    && v7
    && *(_QWORD *)(a2 + 240) == *((_QWORD *)v7 + 2) )
  {
    v30 = *(_DWORD *)(a1 + 40);
    v31 = *(_DWORD *)(a2 + 256);
    v32 = *(_DWORD *)(a1 + 44);
    v33 = *(_DWORD *)(a2 + 260);
    v34 = v30 - v31;
    if ( v30 <= v31 )
      v34 = *(_DWORD *)(a2 + 256) - v30;
    if ( v34 < *(_DWORD *)(a2 + 264) )
    {
      v35 = v32 - v33;
      if ( v32 <= v33 )
        v35 = v33 - v32;
      if ( v35 < *(_DWORD *)(a2 + 268) )
        v29 = 1;
    }
  }
  v51 = 0;
  if ( !v28 )
  {
    if ( v15 )
    {
      if ( (unsigned int)(*(_DWORD *)v7 - 2) <= 1 )
      {
        Instance = CInertiaManager::GetInstance();
        v37 = CInertiaManager::InertiaSourceFromPointerType(*(unsigned int *)v7);
        Inertia = CInertiaManager::QueryInertia(Instance, *((_QWORD *)v7 + 6), v37);
        if ( Inertia )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(Inertia + 176)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v39 = *(float *)(Inertia + 16), v39 > 0.0) && !*(_DWORD *)(a1 + 24)
              || v39 < 0.0 && *(_DWORD *)(a1 + 24) == 2
              || (v40 = *(float *)(Inertia + 20), v40 > 0.0) && *(_DWORD *)(a1 + 24) == 1
              || v40 < 0.0 && *(_DWORD *)(a1 + 24) == 3 )
            {
              v51 = 1;
            }
          }
        }
      }
    }
  }
  v41 = (v54 == 0) | 2;
  if ( !v7 )
    v41 = v54 == 0;
  v42 = v41 | 4;
  if ( v55 <= 1 )
    v42 = v41;
  v43 = v42 | 8;
  if ( !v8 )
    v43 = v42;
  v44 = v43 | 0x10;
  if ( !v15 )
    v44 = v43;
  v45 = v44 | 0x80;
  if ( !v56 )
    v45 = v44;
  v46 = v45 | 0x1000;
  if ( !v16 )
    v46 = v45;
  v47 = DisambiguationArcData | v46;
  v48 = v47 | 0x40;
  if ( !v29 )
    v48 = v47;
  v49 = v48 | 0x20;
  if ( !v51 )
    v49 = v48;
  *(_DWORD *)(a1 + 8) = v49;
  return a1;
}
