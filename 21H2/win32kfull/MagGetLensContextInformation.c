/*
 * XREFs of MagGetLensContextInformation @ 0x1C01CCB00
 * Callers:
 *     MagSlicerControl @ 0x1C01CDFF4 (MagSlicerControl.c)
 *     NtUserMagGetContextInformation @ 0x1C01FE9B0 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C007C568 (MagpFindThreadContext.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC74C (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     _GetMagnificationInputTransform @ 0x1C02140B8 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C02759A0 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int *a7)
{
  unsigned int updated; // ebx
  _QWORD *ThreadContext; // rax
  int v10; // r9d
  __int64 v11; // r14
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  int v16; // r11d
  __int64 *v17; // rbp
  unsigned int v18; // eax
  int v19; // ebx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rcx
  __int64 v22; // r13
  void *v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  void *v27; // rdi
  void *v28; // rcx
  unsigned int *v29; // rax
  unsigned int *v30; // r11
  int v31; // ecx
  __int64 v32; // r8
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // r8
  int v39; // edx
  int v40; // ecx
  int v41; // eax
  int v42; // r9d
  __int64 v43; // r10
  __int64 v44; // rdx
  __int64 *v45; // rax
  int v46; // eax
  __int64 *v47; // rax
  __int64 *LensContext; // rax
  __int64 v49; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v50[3]; // [rsp+58h] [rbp-40h] BYREF

  v50[2] = 0LL;
  updated = -1073741811;
  ThreadContext = MagpFindThreadContext(a1, a2);
  v11 = (__int64)ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  switch ( a5 )
  {
    case 2:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (LensContext = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL)) == 0LL )
      {
        LensContext = MagpFindLensContext(v11, a3, v10);
        if ( !LensContext )
          return updated;
      }
      *(_OWORD *)a6 = *(_OWORD *)(LensContext + 9);
      return 0;
    case 3:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v47 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 224LL)) == 0LL )
      {
        v47 = MagpFindLensContext(v11, a3, v10);
        if ( !v47 )
          return updated;
      }
      if ( (v47[2] & 2) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v47 + 11);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v47 + 13);
      }
      else
      {
        *(_OWORD *)a6 = gMagOutTransformIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0333F18;
      }
      return 0;
    case 4:
      return (unsigned int)GetMagnificationInputTransform(a6) == 0 ? 0xC0000001 : 0;
    case 5:
      if ( !a3 )
        return updated;
      if ( a3 != -1 || (v45 = *(__int64 **)(*(_QWORD *)(ThreadContext[2] + 456LL) + 232LL)) == 0LL )
      {
        v45 = MagpFindLensContext(v11, a3, v10);
        if ( !v45 )
          return updated;
      }
      if ( (v45[2] & 4) != 0 )
      {
        *(_OWORD *)a6 = *(_OWORD *)(v45 + 15);
        *(_OWORD *)(a6 + 16) = *(_OWORD *)(v45 + 17);
        *(_OWORD *)(a6 + 32) = *(_OWORD *)(v45 + 19);
        *(_OWORD *)(a6 + 48) = *(_OWORD *)(v45 + 21);
        *(_OWORD *)(a6 + 64) = *(_OWORD *)(v45 + 23);
        *(_OWORD *)(a6 + 80) = *(_OWORD *)(v45 + 25);
        v46 = *((_DWORD *)v45 + 54);
      }
      else
      {
        *(_OWORD *)a6 = gMagEffectIdentity;
        *(_OWORD *)(a6 + 16) = xmmword_1C0333F40;
        *(_OWORD *)(a6 + 32) = xmmword_1C0333F50;
        *(_OWORD *)(a6 + 48) = xmmword_1C0333F60;
        *(_OWORD *)(a6 + 64) = xmmword_1C0333F70;
        *(_OWORD *)(a6 + 80) = xmmword_1C0333F80;
        v46 = dword_1C0333F90;
      }
      *(_DWORD *)(a6 + 96) = v46;
      return 0;
    case 6:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v37 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v38 = v37;
      if ( !v37 )
        return updated;
      v39 = *a7;
      if ( (unsigned int)*a7 >= 8 )
      {
        v40 = *((_DWORD *)v37 + 56);
        *(_DWORD *)a6 = v40;
        v41 = *((_DWORD *)v37 + 57);
        *(_DWORD *)(a6 + 4) = v41;
        v42 = v41 + v40;
        v43 = (unsigned int)(v41 + v40);
        if ( (unsigned int)(v39 - 8) >= (unsigned __int64)(8 * v43) )
        {
          if ( v42 )
          {
            v44 = 0LL;
            do
            {
              *(_QWORD *)(v44 + a6 + 8) = *(_QWORD *)(v44 + v38[29]);
              v44 += 8LL;
              --v43;
            }
            while ( v43 );
          }
          *a7 = 8 * v42 + 8;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
    case 7:
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v29 = (unsigned int *)MagpFindLensContext((__int64)ThreadContext, a3, v10);
      v30 = v29;
      if ( !v29 )
        return updated;
      v31 = *a7;
      if ( (unsigned int)*a7 >= 0x10 )
      {
        v32 = v29[60];
        *(_DWORD *)a6 = v32;
        *(_DWORD *)(a6 + 4) = v29[61];
        *(_DWORD *)(a6 + 8) = v29[62];
        *(_DWORD *)(a6 + 12) = v29[63];
        if ( (unsigned int)(v31 - 16) >= (unsigned __int64)(24 * v32) )
        {
          v33 = 0;
          if ( (_DWORD)v32 )
          {
            do
            {
              v34 = v33++;
              v35 = 3 * v34;
              v36 = *((_QWORD *)v30 + 32);
              *(_OWORD *)(a6 + 8 * v35 + 16) = *(_OWORD *)(v36 + 8 * v35);
              *(_QWORD *)(a6 + 8 * v35 + 32) = *(_QWORD *)(v36 + 8 * v35 + 16);
              LODWORD(v32) = *(_DWORD *)a6;
            }
            while ( v33 < *(_DWORD *)a6 );
          }
          *a7 = 24 * v32 + 16;
          return 0;
        }
      }
      return (unsigned int)-1073741820;
  }
  if ( a5 != 8 )
  {
    if ( a5 == 9 )
    {
      if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v14 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v14 )
        return updated;
      *(_DWORD *)a6 = 0;
      *(_DWORD *)a6 = (v14[2] & 0x40) != 0;
    }
    else
    {
      if ( a5 != 10 )
        return updated;
      if ( !a3 )
        return updated;
      v13 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
      if ( !v13 )
        return updated;
      *(_DWORD *)a6 = *((_DWORD *)v13 + 66);
    }
    return 0;
  }
  LODWORD(v49) = 0;
  if ( (unsigned __int64)(a3 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v15 = MagpFindLensContext((__int64)ThreadContext, a3, v10);
  v17 = v15;
  if ( !v15 )
    return updated;
  v18 = *((_DWORD *)v15 + 4);
  v19 = (v18 >> 6) & 1;
  if ( (v18 & 0x20) != 0 || !*((_DWORD *)v17 + 60) )
  {
    v25 = a6;
    *(_DWORD *)a6 = 0;
    *(_DWORD *)(a6 + 8) = 0;
    *(_QWORD *)(a6 + 40) = 0LL;
    *(_DWORD *)(a6 + 4) = *((_DWORD *)v17 + 60);
    *(_DWORD *)(a6 + 12) = *((_DWORD *)v17 + 61);
    *(_DWORD *)(a6 + 16) = *((_DWORD *)v17 + 62);
    *(_DWORD *)(a6 + 20) = *((_DWORD *)v17 + 63);
LABEL_44:
    if ( (*((_DWORD *)v17 + 4) & 0x80u) != 0 )
      *(_DWORD *)(v25 + 48) = v16;
    return 0;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v50[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v50;
  v50[1] = a3;
  HMLockObject(a3);
  v22 = ReferenceDwmProcess();
  if ( gdwInAtomicOperation )
  {
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v23 = (void *)ReferenceDwmApiPort(v21, gdwInAtomicOperation);
  UserSessionSwitchLeaveCrit(v24);
  v25 = a6;
  if ( v23 && v22 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(
                v23,
                (__int64)(v17 + 4),
                *(_QWORD *)(a6 + 24),
                v19,
                (*((_DWORD *)v17 + 4) >> 7) & 1,
                a6,
                (__int64)&v49);
  }
  else
  {
    DereferenceDwmApiPort(v23);
    updated = -1073741823;
  }
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v26);
  DereferenceDwmProcess(v22);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a6 < 0 )
    goto LABEL_38;
  if ( *(_DWORD *)(a6 + 4) != *((_DWORD *)v17 + 60)
    || *(_DWORD *)(a6 + 12) != *((_DWORD *)v17 + 61)
    || *(_DWORD *)(a6 + 16) != *((_DWORD *)v17 + 62)
    || *(_DWORD *)(a6 + 20) != *((_DWORD *)v17 + 63) )
  {
    v28 = *(void **)(a6 + 40);
    if ( v28 )
    {
      ObfDereferenceObject(v28);
      *(_QWORD *)(a6 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a6 + 8)
    || (v27 = *(void **)(a6 + 40)) == 0LL
    || (*(_QWORD *)(a6 + 40) = 0LL,
        updated = ObOpenObjectByPointer(v27, 0x80u, 0LL, 4u, MmSectionObjectType, 1, (PHANDLE)(a6 + 40)),
        ObfDereferenceObject(v27),
        (updated & 0x80000000) == 0) )
  {
LABEL_38:
    if ( (unsigned int)*a7 >= 0x30 )
    {
      v16 = v49;
      goto LABEL_44;
    }
    return (unsigned int)-1073741820;
  }
  return updated;
}
