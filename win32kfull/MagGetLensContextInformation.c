/*
 * XREFs of MagGetLensContextInformation @ 0x1C01A43C0
 * Callers:
 *     NtUserMagGetContextInformation @ 0x1C01D7910 (NtUserMagGetContextInformation.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C0141978 (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z @ 0x1C01A4024 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@@Z.c)
 *     _GetMagnificationInputTransform @ 0x1C01F7EE8 (_GetMagnificationInputTransform.c)
 *     DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0270C10 (DwmSyncMagnUpdateWindowSharedTextures.c)
 */

__int64 __fastcall MagGetLensContextInformation(
        _QWORD *a1,
        __int64 a2,
        struct tagWND *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  unsigned int updated; // ebx
  struct _MAG_THREAD_CONTEXT *ThreadContext; // rax
  int v9; // r9d
  struct _MAG_THREAD_CONTEXT *v10; // rsi
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  struct _MAG_LENS_CONTEXT *v20; // rax
  struct _MAG_LENS_CONTEXT *v21; // rax
  struct _MAG_LENS_CONTEXT *v22; // rax
  struct _MAG_LENS_CONTEXT *v23; // r14
  unsigned int v24; // eax
  _DWORD *v25; // r12
  int v26; // ebx
  __int64 v27; // r13
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  void **Handle; // rbp
  void *v34; // rdi
  void *v35; // rcx
  unsigned int *v36; // rax
  unsigned int *v37; // r10
  int v38; // ecx
  __int64 v39; // r8
  unsigned int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  struct _MAG_LENS_CONTEXT *v44; // rax
  struct _MAG_LENS_CONTEXT *v45; // r8
  int v46; // edx
  int v47; // ecx
  int v48; // eax
  __int64 v49; // r9
  __int64 v50; // r11
  __int64 v51; // rdx
  struct _MAG_LENS_CONTEXT *v52; // rax
  int v53; // eax
  struct _MAG_LENS_CONTEXT *v54; // rax
  struct _MAG_LENS_CONTEXT *LensContext; // rax
  PVOID Object; // [rsp+40h] [rbp-48h]
  __int128 v57; // [rsp+48h] [rbp-40h] BYREF
  __int64 v58; // [rsp+58h] [rbp-30h]

  v57 = 0LL;
  v58 = 0LL;
  updated = -1073741811;
  ThreadContext = (struct _MAG_THREAD_CONTEXT *)MagpFindThreadContext(a1, a2);
  v10 = ThreadContext;
  if ( !ThreadContext )
    return 3221225635LL;
  v12 = v9 - 2;
  if ( !v12 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (LensContext = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 224LL)) == 0LL )
    {
      LensContext = MagpFindLensContext(v10, a3);
      if ( !LensContext )
        return updated;
    }
    *(_OWORD *)a5 = *(_OWORD *)((char *)LensContext + 72);
    return 0;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v54 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 224LL)) == 0LL )
    {
      v54 = MagpFindLensContext(v10, a3);
      if ( !v54 )
        return updated;
    }
    if ( (*((_DWORD *)v54 + 4) & 2) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v54 + 88);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v54 + 104);
    }
    else
    {
      *(_OWORD *)a5 = gMagOutTransformIdentity;
      *(_OWORD *)(a5 + 16) = xmmword_1C035D218;
    }
    return 0;
  }
  v14 = v13 - 1;
  if ( !v14 )
    return (unsigned int)GetMagnificationInputTransform(a5) == 0 ? 0xC0000001 : 0;
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( !a3 )
      return updated;
    if ( a3 != (struct tagWND *)-1LL
      || (v52 = *(struct _MAG_LENS_CONTEXT **)(*(_QWORD *)(*((_QWORD *)ThreadContext + 2) + 456LL) + 232LL)) == 0LL )
    {
      v52 = MagpFindLensContext(v10, a3);
      if ( !v52 )
        return updated;
    }
    if ( (*((_DWORD *)v52 + 4) & 4) != 0 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v52 + 120);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)((char *)v52 + 136);
      *(_OWORD *)(a5 + 32) = *(_OWORD *)((char *)v52 + 152);
      *(_OWORD *)(a5 + 48) = *(_OWORD *)((char *)v52 + 168);
      *(_OWORD *)(a5 + 64) = *(_OWORD *)((char *)v52 + 184);
      *(_OWORD *)(a5 + 80) = *(_OWORD *)((char *)v52 + 200);
      v53 = *((_DWORD *)v52 + 54);
    }
    else
    {
      *(_OWORD *)a5 = gMagEffectIdentity;
      *(_OWORD *)(a5 + 16) = xmmword_1C035D240;
      *(_OWORD *)(a5 + 32) = xmmword_1C035D250;
      *(_OWORD *)(a5 + 48) = xmmword_1C035D260;
      *(_OWORD *)(a5 + 64) = xmmword_1C035D270;
      *(_OWORD *)(a5 + 80) = xmmword_1C035D280;
      v53 = dword_1C035D290;
    }
    *(_DWORD *)(a5 + 96) = v53;
    return 0;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v44 = MagpFindLensContext(ThreadContext, a3);
    v45 = v44;
    if ( !v44 )
      return updated;
    v46 = *a6;
    if ( (unsigned int)*a6 >= 8 )
    {
      v47 = *((_DWORD *)v44 + 56);
      *(_DWORD *)a5 = v47;
      v48 = *((_DWORD *)v44 + 57);
      *(_DWORD *)(a5 + 4) = v48;
      v49 = (unsigned int)(v48 + v47);
      v50 = (unsigned int)v49;
      if ( (unsigned int)(v46 - 8) >= (unsigned __int64)(8 * v49) )
      {
        if ( (_DWORD)v49 )
        {
          v51 = 0LL;
          do
          {
            *(_QWORD *)(a5 + v51 + 8) = *(_QWORD *)(v51 + *((_QWORD *)v45 + 29));
            v51 += 8LL;
            --v50;
          }
          while ( v50 );
        }
        *a6 = 8 * v49 + 8;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      return updated;
    v36 = (unsigned int *)MagpFindLensContext(ThreadContext, a3);
    v37 = v36;
    if ( !v36 )
      return updated;
    v38 = *a6;
    if ( (unsigned int)*a6 >= 0x10 )
    {
      v39 = v36[60];
      *(_DWORD *)a5 = v39;
      *(_DWORD *)(a5 + 4) = v36[61];
      *(_DWORD *)(a5 + 8) = v36[62];
      *(_DWORD *)(a5 + 12) = v36[63];
      if ( (unsigned int)(v38 - 16) >= (unsigned __int64)(24 * v39) )
      {
        v40 = 0;
        if ( (_DWORD)v39 )
        {
          do
          {
            v41 = v40++;
            v42 = 3 * v41;
            v43 = *((_QWORD *)v37 + 32);
            *(_OWORD *)(a5 + 8 * v42 + 16) = *(_OWORD *)(v43 + 8 * v42);
            *(_QWORD *)(a5 + 8 * v42 + 32) = *(_QWORD *)(v43 + 8 * v42 + 16);
            LODWORD(v39) = *(_DWORD *)a5;
          }
          while ( v40 < *(_DWORD *)a5 );
        }
        *a6 = 24 * v39 + 16;
        return 0;
      }
    }
    return (unsigned int)-1073741820;
  }
  v18 = v17 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
        return updated;
      if ( !a3 )
        return updated;
      v20 = MagpFindLensContext(ThreadContext, a3);
      if ( !v20 )
        return updated;
      *(_DWORD *)a5 = *((_DWORD *)v20 + 66);
    }
    else
    {
      if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
        return updated;
      v21 = MagpFindLensContext(ThreadContext, a3);
      if ( !v21 )
        return updated;
      *(_DWORD *)a5 = 0;
      *(_DWORD *)a5 = (*((_BYTE *)v21 + 16) & 0x40) != 0;
    }
    return 0;
  }
  if ( (unsigned __int64)a3 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return updated;
  v22 = MagpFindLensContext(ThreadContext, a3);
  v23 = v22;
  if ( !v22 )
    return updated;
  v24 = *((_DWORD *)v22 + 4);
  v25 = (_DWORD *)((char *)v23 + 240);
  v26 = (v24 >> 6) & 1;
  if ( (v24 & 0x20) != 0 || !*v25 )
  {
    *(_DWORD *)a5 = 0;
    *(_DWORD *)(a5 + 8) = 0;
    *(_QWORD *)(a5 + 40) = 0LL;
    *(_DWORD *)(a5 + 4) = *v25;
    *(_DWORD *)(a5 + 12) = *((_DWORD *)v23 + 61);
    *(_DWORD *)(a5 + 16) = *((_DWORD *)v23 + 62);
    *(_DWORD *)(a5 + 20) = *((_DWORD *)v23 + 63);
    return 0;
  }
  ThreadLock(a3, &v57);
  v27 = ReferenceDwmProcess();
  Object = (PVOID)ReferenceDwmApiPort(v28);
  UserSessionSwitchLeaveCrit(v29);
  if ( Object && v27 )
  {
    updated = DwmSyncMagnUpdateWindowSharedTextures(Object, (__int64)v23 + 32, *(_QWORD *)(a5 + 24), v26, a5);
  }
  else
  {
    DereferenceDwmApiPort(Object);
    updated = -1073741823;
  }
  EnterCrit(1LL, 0LL);
  ThreadUnlock1(v31, v30, v32);
  DereferenceDwmProcess(v27);
  if ( (updated & 0x80000000) != 0 )
    return updated;
  if ( *(int *)a5 < 0 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  if ( *(_DWORD *)(a5 + 4) != *v25
    || *(_DWORD *)(a5 + 12) != *((_DWORD *)v23 + 61)
    || *(_DWORD *)(a5 + 16) != *((_DWORD *)v23 + 62)
    || *(_DWORD *)(a5 + 20) != *((_DWORD *)v23 + 63) )
  {
    v35 = *(void **)(a5 + 40);
    if ( v35 )
    {
      ObfDereferenceObject(v35);
      *(_QWORD *)(a5 + 40) = 0LL;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_DWORD *)(a5 + 8) )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  Handle = (void **)(a5 + 40);
  v34 = *(void **)(a5 + 40);
  if ( !v34 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  *Handle = 0LL;
  updated = ObOpenObjectByPointer(v34, 0x80u, 0LL, 4u, MmSectionObjectType, 1, Handle);
  ObfDereferenceObject(v34);
  if ( (updated & 0x80000000) == 0 )
    return (unsigned int)*a6 < 0x30 ? 0xC0000004 : 0;
  return updated;
}
