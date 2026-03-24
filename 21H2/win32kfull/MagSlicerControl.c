/*
 * XREFs of MagSlicerControl @ 0x1C01CDFF4
 * Callers:
 *     NtUserSlicerControl @ 0x1C0203810 (NtUserSlicerControl.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C004C5F0 (IsDesktopWindow.c)
 *     MagpFindThreadContext @ 0x1C007C568 (MagpFindThreadContext.c)
 *     IsMessageOnlyWindow @ 0x1C00D7730 (IsMessageOnlyWindow.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC74C (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C01CC9FC (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01CCB00 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C02749BC (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C0274E44 (DwmAsyncMagnSetWindowSlicer.c)
 */

__int64 __fastcall MagSlicerControl(_QWORD *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, unsigned int a6)
{
  unsigned int LensContextInformation; // ebx
  __int64 v10; // r13
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // r9
  _DWORD *v14; // rdx
  _QWORD *ThreadContext; // rax
  __int64 *LensContext; // r10
  __int64 v17; // r11
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // r8d
  __int64 v22; // rdx
  void *v23; // rax
  unsigned int *v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r11
  __int64 *v29; // r14
  void *v30; // rax
  void *v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r8d
  int i; // edx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // ecx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  _OWORD v43[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v44; // [rsp+60h] [rbp-20h]
  __int64 v45; // [rsp+70h] [rbp-10h]
  int v46; // [rsp+C8h] [rbp+48h] BYREF

  LensContextInformation = -1073741811;
  v10 = 0LL;
  if ( !a4 )
  {
    LOBYTE(v39) = IsDesktopWindow(a3);
    if ( v39 )
      return LensContextInformation;
    LOBYTE(v41) = IsMessageOnlyWindow(v40);
    if ( v41 )
      return LensContextInformation;
    LensContextInformation = MagControl(a1, a2, 0, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagSetLensContextInformation(a1, a2, a3, 1, 0, 0LL);
  }
  v11 = a4 - 1;
  if ( !v11 )
  {
    LensContextInformation = MagSetLensContextInformation(a1, a2, a3, 1, 1, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagControl(a1, a2, 1, 0LL);
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = (unsigned int)(v12 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 && a6 >= 0x20 )
      {
        v46 = 56;
        v45 = 0LL;
        memset(v43, 0, sizeof(v43));
        v44 = 0LL;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, v13, 8, (__int64)v43, &v46);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v14 = a5;
          *a5 = v43[0];
          v14[1] = DWORD2(v43[0]);
          v14[2] = DWORD1(v44);
          *((_QWORD *)v14 + 2) = *((_QWORD *)&v44 + 1);
          v14[6] = v45;
        }
      }
      return LensContextInformation;
    }
    if ( a6 < 0x18 )
      return LensContextInformation;
    ThreadContext = MagpFindThreadContext(a1, a2);
    if ( !ThreadContext )
      return (unsigned int)-1073741661;
    LensContext = MagpFindLensContext((__int64)ThreadContext, a3, 1);
    if ( !LensContext )
      return LensContextInformation;
    v18 = a5[2];
    if ( v18 <= *a5 )
      return LensContextInformation;
    v19 = a5[3];
    v20 = a5[1];
    if ( v19 <= v20 )
      return LensContextInformation;
    v21 = v18 - *a5;
    HIDWORD(v22) = 0;
    if ( a5[4] > *((_DWORD *)LensContext + 62) / v21 * (*((_DWORD *)LensContext + 63) / (unsigned int)(v19 - v20)) )
      return LensContextInformation;
    LODWORD(v22) = *((_DWORD *)LensContext + 62) % v21;
    v23 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 456LL) + 8LL), v22);
    return (unsigned int)DwmAsyncMagnSetWindowSlicer(v23);
  }
  if ( a6 < 0x10 )
    return LensContextInformation;
  v25 = a5;
  if ( *a5 > 6u || a6 < 32 * *a5 + 16 )
    return LensContextInformation;
  v26 = MagpFindThreadContext(a1, a2);
  if ( !v26 )
    return (unsigned int)-1073741661;
  v29 = MagpFindLensContext((__int64)v26, a3, 1);
  if ( v29 )
  {
    v30 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v28 + 16) + 456LL) + 8LL), v27);
    LensContextInformation = DwmAsyncMagnSetSlicerDestinationTextures(v30);
    if ( (LensContextInformation & 0x80000000) == 0 )
    {
      v31 = (void *)v29[32];
      if ( v31 )
      {
        Win32FreePool(v31);
        v29[32] = 0LL;
      }
      v32 = *v25;
      if ( !(_DWORD)v32 || (v10 = Win32AllocPool(24 * v32, 1735226197LL)) != 0 )
      {
        v33 = 0;
        *((_DWORD *)v29 + 60) = *v25;
        *((_DWORD *)v29 + 61) = v25[1];
        *((_DWORD *)v29 + 62) = v25[2];
        *((_DWORD *)v29 + 63) = v25[3];
        v29[32] = v10;
        for ( i = *v25; v33 < *v25; i = *v25 )
        {
          v35 = v33;
          v36 = v33++;
          v36 *= 32LL;
          v37 = 3 * v35;
          *(_QWORD *)(v10 + 8 * v37) = *(_QWORD *)((char *)v25 + v36 + 16);
          *(_QWORD *)(v10 + 8 * v37 + 8) = *(_QWORD *)((char *)v25 + v36 + 24);
          *(_QWORD *)(v10 + 8 * v37 + 16) = *(_QWORD *)((char *)v25 + v36 + 32);
        }
        v38 = *((_DWORD *)v29 + 4) | 0x10;
        if ( !i )
          v38 = v29[2] & 0xFFFFFFEF;
        *((_DWORD *)v29 + 4) = v38;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return LensContextInformation;
}
