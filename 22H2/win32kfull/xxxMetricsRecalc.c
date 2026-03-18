/*
 * XREFs of xxxMetricsRecalc @ 0x1C01C88FC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00B8F40 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C83EC (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     _GetDesktopWindow @ 0x1C00ECDE0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 *     Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage @ 0x1C013BA9C (Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage.c)
 */

void __fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // di
  int v8; // r14d
  __int64 v9; // rsi
  struct tagBWL *v10; // rax
  struct tagBWL *v11; // r13
  _QWORD *v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rax
  struct tagWND *v15; // rbx
  __int64 v16; // r9
  int v17; // r12d
  __int64 v18; // rcx
  unsigned int v19; // r14d
  unsigned __int32 v20; // r15d
  int v21; // esi
  int v22; // edi
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  _DWORD *Prop; // rax
  int v28; // ecx
  int v29; // r9d
  __int64 DesktopWindow; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // edi
  int v34; // esi
  __int64 v35; // rax
  char v36; // dl
  int v37; // edi
  int v38; // esi
  BOOL v39; // edx
  int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // eax
  int v44; // ecx
  int v45; // edi
  _QWORD *v46; // [rsp+50h] [rbp-88h]
  struct tagBWL *v47; // [rsp+60h] [rbp-78h]
  __m128i v48; // [rsp+68h] [rbp-70h]
  __int128 v49; // [rsp+68h] [rbp-70h]
  __int128 v50; // [rsp+78h] [rbp-60h] BYREF
  __int64 v51; // [rsp+88h] [rbp-50h]

  v7 = a1;
  v8 = a4;
  v50 = 0LL;
  v51 = 0LL;
  v9 = gptiCurrent;
  v10 = BuildHwndList(
          *(ShellWindowManagement **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL),
          (const struct tagWND *)3,
          0LL,
          1LL);
  v47 = v10;
  v11 = v10;
  if ( !v10 )
    return;
  v12 = (_QWORD *)((char *)v10 + 32);
  v46 = (_QWORD *)((char *)v10 + 32);
  v13 = (*((_QWORD *)v10 + 1) - (_QWORD)v10 - 32LL) >> 3;
  if ( (int)v13 <= 0 )
    goto LABEL_58;
  do
  {
    v14 = HMValidateHandleNoSecure(*v12, 1);
    v15 = (struct tagWND *)v14;
    if ( !v14
      || !IsNonImmersiveBand(v14)
      || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 424LL) + 816LL) & 0x30) == 0x10 )
    {
      goto LABEL_56;
    }
    *(_QWORD *)&v50 = *(_QWORD *)(v9 + 416);
    *(_QWORD *)(v9 + 416) = &v50;
    *((_QWORD *)&v50 + 1) = v15;
    HMLockObject(v15);
    v17 = 0;
    if ( (v7 & 4) != 0 )
    {
      v18 = *((_QWORD *)v15 + 5);
      if ( (*(_BYTE *)(v18 + 31) & 0x20) != 0 )
      {
        v48 = *(__m128i *)(v18 + 88);
        v19 = HIDWORD(*(_QWORD *)(v18 + 88));
        v20 = v48.m128i_i32[0];
        v21 = a2 + _mm_cvtsi128_si32(_mm_srli_si128(v48, 8));
        v22 = a3 + v48.m128i_i32[3];
LABEL_29:
        v17 = 1;
        DesktopWindow = GetDesktopWindow((__int64)v15);
        if ( v31 != DesktopWindow )
        {
          v32 = *(_QWORD *)(v31 + 40);
          v22 -= *(_DWORD *)(v32 + 108);
          v20 -= *(_DWORD *)(v32 + 104);
          v21 -= *(_DWORD *)(v32 + 104);
          v19 -= *(_DWORD *)(v32 + 108);
        }
        v33 = v22 - v19;
        v34 = v21 - v20;
        if ( (unsigned int)Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage() )
          xxxSetWindowPos(v15, 0LL, v20, v19, v34, v33, 16700);
        else
          xxxSetWindowPos(v15, 0LL, v20, v19, v34, v33, 316);
        v7 = a1;
        v12 = v46;
        v8 = a4;
        goto LABEL_35;
      }
    }
    v23 = *((_QWORD *)v15 + 5);
    v24 = *(unsigned int *)(v23 + 28);
    v26 = 0;
    if ( (*(_DWORD *)(v23 + 28) & 0xC00000) == 12582912 || (v24 & 0x40000) != 0 )
    {
      v25 = *((_QWORD *)v15 + 2);
      if ( *(_DWORD *)(v25 + 632) > 0x9900u || (*(_DWORD *)(v25 + 648) & 0x30000000) == 0 )
        v26 = 1;
    }
    if ( (v7 & 1) != 0 && ((*(_BYTE *)(v23 + 30) & 4) != 0 || (_DWORD)v26) )
    {
      Prop = (_DWORD *)GetProp((__int64)v15, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, v16);
      v28 = a6;
      if ( (*(_BYTE *)(*((_QWORD *)v15 + 5) + 30LL) & 4) == 0 )
        v28 = a7;
      v24 = (unsigned int)(v28 + a2);
      v29 = v28 + a3;
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v24;
        Prop[11] -= v29;
      }
      v26 = *((_QWORD *)v15 + 5);
      if ( (*(_BYTE *)(v26 + 31) & 0x20) != 0 )
      {
        if ( Prop )
        {
          *Prop -= v24;
          Prop[2] += v24;
          Prop[1] -= v29;
          Prop[3] += v29;
        }
        goto LABEL_35;
      }
      v20 = *(_DWORD *)(v26 + 88) - v24;
      v21 = v24 + *(_DWORD *)(v26 + 96);
      v19 = *(_DWORD *)(v26 + 92) - v29;
      v22 = v29 + *(_DWORD *)(v26 + 100) + a4;
      if ( (*(_BYTE *)(v26 + 16) & 8) == 0 )
        v22 = v29 + *(_DWORD *)(v26 + 100);
      if ( (*(_BYTE *)(v26 + 16) & 1) != 0 )
        v22 += a5;
      goto LABEL_29;
    }
LABEL_35:
    if ( (v7 & 2) != 0 )
    {
      if ( v8 )
      {
        if ( (unsigned int)Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage() )
        {
          xxxSendNotifyMessage(v15, 0x80u, 3uLL, 0LL, 1);
        }
        else
        {
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout((unsigned __int64 *)v15, 0x80u, 3LL, 0LL, 0, 0, 0LL, 1, 1);
        }
      }
      v35 = *((_QWORD *)v15 + 5);
      LOBYTE(v26) = *(_BYTE *)(v35 + 31);
      if ( (v26 & 0x20) == 0 && !v17 )
      {
        v36 = *(_BYTE *)(v35 + 16);
        v49 = *(_OWORD *)(v35 + 88);
        if ( (v36 & 1) != 0 )
          v37 = a5 + HIDWORD(v49);
        else
          v37 = HIDWORD(*(_OWORD *)(v35 + 88));
        if ( (v36 & 8) != 0
          && (v38 = v37 + v8, v37 += v8, (v26 & 0x41) == 0x41)
          && (*(_WORD *)(*(_QWORD *)(*((_QWORD *)v15 + 13) + 40LL) + 42LL) & 0x2FFF) == 0x2A7 )
        {
          v39 = Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage() != 0;
          v40 = v38 - DWORD1(v49);
          v41 = *(_QWORD *)(*((_QWORD *)v15 + 13) + 40LL);
          v42 = (unsigned int)(v49 - *(_DWORD *)(v41 + 88));
          v43 = *(_DWORD *)(v41 + 92);
          v44 = 16444;
          if ( !v39 )
            v44 = 60;
          xxxSetWindowPos(v15, 0LL, v42, (unsigned int)(DWORD1(v49) - v43 - v8), DWORD2(v49) - v49, v40, v44);
        }
        else
        {
          v45 = v37 - DWORD1(v49);
          if ( (unsigned int)Feature_AsyncSpiSetNonClientMetrics_BackportNi__private_IsEnabledDeviceUsage() )
            xxxSetWindowPos(v15, 0LL, 0LL, 0LL, DWORD2(v49) - v49, v45, 16702);
          else
            xxxSetWindowPos(v15, 0LL, 0LL, 0LL, DWORD2(v49) - v49, v45, 318);
        }
        v7 = a1;
      }
    }
    ThreadUnlock1(v26, v24, v23);
    v9 = gptiCurrent;
LABEL_56:
    ++v12;
    LODWORD(v13) = v13 - 1;
    v46 = v12;
  }
  while ( (int)v13 > 0 );
  v11 = v47;
LABEL_58:
  FreeHwndList(v11);
}
