__int64 __fastcall VidSchiCreateNodeSchedulingLog(struct _VIDSCH_NODE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // esi
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // eax
  void *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  __int128 v22; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  _QWORD v25[4]; // [rsp+58h] [rbp-28h] BYREF
  __int16 v26; // [rsp+78h] [rbp-8h]
  unsigned __int64 v27; // [rsp+C0h] [rbp+40h] BYREF
  PVOID P; // [rsp+D0h] [rbp+50h] BYREF
  void *v29; // [rsp+D8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  v3 = a2;
  v24 = 0LL;
  v4 = *((unsigned __int16 *)a1 + 2);
  v22 = 0LL;
  P = 0LL;
  v23 = 0LL;
  v6 = *(_QWORD *)(v2 + 632);
  v29 = 0LL;
  v27 = 0LL;
  if ( (unsigned int)v4 < *(_DWORD *)(v2 + 704) )
    v6 += 8 * v4;
  v8 = VIDMM_SCH_LOG::CreateSchLog(
         *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v2 + 8) + 768LL),
         *(unsigned __int16 *)(*(_QWORD *)v6 + 6LL),
         32 * (a2 + 1),
         (struct VIDMM_SCH_LOG **)&P,
         &v29,
         &v27);
  if ( v8 < 0 )
    goto LABEL_15;
  v9 = v29;
  *((_QWORD *)v29 + 1) = v3;
  v10 = *((unsigned __int16 *)a1 + 2);
  v11 = *(_QWORD *)(v2 + 632);
  if ( (unsigned int)v10 < *(_DWORD *)(v2 + 704) )
    v11 += 8 * v10;
  DWORD1(v22) = *(unsigned __int16 *)(*(_QWORD *)v11 + 6LL);
  v12 = *(_QWORD *)(v2 + 632);
  if ( (unsigned int)v10 < *(_DWORD *)(v2 + 704) )
    v12 += 8 * v10;
  v13 = *(unsigned __int16 *)(*(_QWORD *)v12 + 8LL);
  LODWORD(v24) = (unsigned int)(3 * v3) >> 2;
  *((_QWORD *)&v23 + 1) = v27;
  LODWORD(v22) = v13;
  DWORD2(v22) = v3;
  *(_QWORD *)&v23 = v9;
  v14 = DxgCoreInterface[20](
          *(ADAPTER_DISPLAY **)(v2 + 8),
          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v22);
  v8 = v14;
  if ( v14 == -1073741822 || v14 >= 0 )
  {
    v26 = 0;
    v25[0] = v2 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v25);
    v15 = (void *)*((_QWORD *)a1 + 1396);
    v16 = *((_QWORD *)a1 + 1401);
    v17 = *((_QWORD *)a1 + 1402);
    v18 = *((_QWORD *)a1 + 1403);
    v29 = (void *)*((_QWORD *)a1 + 1404);
    *((_QWORD *)a1 + 1396) = P;
    v19 = v27;
    *((_DWORD *)a1 + 2794) = v3;
    *((_QWORD *)a1 + 1399) = v19;
    *((_QWORD *)a1 + 1398) = v9;
    *((_QWORD *)a1 + 1404) = 0LL;
    *((_QWORD *)a1 + 1402) = 0LL;
    *((_QWORD *)a1 + 1403) = 0LL;
    *((_QWORD *)a1 + 1401) = 0LL;
    *((_QWORD *)a1 + 1400) = 0LL;
    VidSchiCalibrateHwClock(a1);
    AcquireSpinLock::Release((AcquireSpinLock *)v25);
    if ( v15 )
    {
      if ( (byte_1C00769C3 & 2) != 0 )
        VidSchiSerializeSchedulingLog((_DWORD)a1, (_DWORD)v15, v16, v17, v18, (__int64)v29);
      VIDMM_SCH_LOG::`scalar deleting destructor'(v15, v20);
    }
    return 0LL;
  }
  else
  {
LABEL_15:
    if ( P )
      VIDMM_SCH_LOG::`scalar deleting destructor'(P, v7);
    return (unsigned int)v8;
  }
}
