/*
 * XREFs of xxxMNCanClose @ 0x1C0068094
 * Callers:
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0066D38 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C901C (xxxDCETrackCaptionButton.c)
 *     xxxCalcCaptionButton @ 0x1C0242FA8 (xxxCalcCaptionButton.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxGetSysMenuPtr @ 0x1C0067210 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNLookUpItem @ 0x1C0067EE0 (MNLookUpItem.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C0068450 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00684A0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 */

__int64 __fastcall xxxMNCanClose(_QWORD *a1)
{
  char v2; // bl
  __int64 v3; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 SysMenuPtr; // rsi
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rbx
  char v11; // si
  __int64 v12; // rbx
  __int64 *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // r12
  __int64 v17; // rbx
  __int64 *v18; // rax
  int v19; // ecx
  _QWORD *v20; // r14
  int v21; // r15d
  __int64 v22; // r10
  int v23; // ecx
  _QWORD *v24; // rbx
  __int64 v25; // rbx
  __int64 *v26; // rax
  _QWORD *v27; // rcx
  __int64 v29; // rbx
  __int64 *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 *v34; // [rsp+20h] [rbp-50h] BYREF
  __int64 v35; // [rsp+28h] [rbp-48h] BYREF
  __int64 v36; // [rsp+30h] [rbp-40h]
  __int64 v37; // [rsp+38h] [rbp-38h] BYREF
  __int64 v38; // [rsp+40h] [rbp-30h] BYREF
  __int64 v39; // [rsp+48h] [rbp-28h]
  __int64 *v40; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v41[3]; // [rsp+58h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v3 = *ThreadWin32Thread;
  v34 = (__int64 *)gSmartObjNullRef;
  v35 = *(_QWORD *)(v3 + 1472);
  *(_QWORD *)(v3 + 1472) = &v35;
  v36 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(a1[17] + 8LL) + 9LL) & 2) != 0 )
    goto LABEL_52;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v36 = 0LL;
  v6 = 1;
  if ( SysMenuPtr != *v34 )
  {
    if ( v34 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v34 + 2) )
    {
      if ( *((_BYTE *)v34 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v34);
    }
    if ( SysMenuPtr )
    {
      v34 = *(__int64 **)(SysMenuPtr + 152);
      ++*((_DWORD *)v34 + 2);
    }
    else
    {
      v34 = (__int64 *)gSmartObjNullRef;
    }
  }
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v34) )
    goto LABEL_53;
  v7 = 0LL;
  v8 = *v34;
  v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v9 )
    v7 = *v9;
  v40 = (__int64 *)gSmartObjNullRef;
  if ( v8 )
  {
    v40 = *(__int64 **)(v8 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v8 + 152) + 8LL);
  }
  v41[0] = *(_QWORD *)(v7 + 1472);
  *(_QWORD *)(v7 + 1472) = v41;
  v41[1] = v36;
  v10 = *v40;
  if ( *v40 != *v34 )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v34);
    if ( v10 )
    {
      v34 = *(__int64 **)(v10 + 152);
      ++*((_DWORD *)v34 + 2);
    }
    else
    {
      v34 = (__int64 *)gSmartObjNullRef;
    }
  }
  v2 = 1;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v34) )
    v11 = 0;
  else
LABEL_53:
    v11 = 1;
  if ( (v2 & 1) != 0 )
  {
    v12 = 0LL;
    v13 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v13 )
      v12 = *v13;
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v40);
    v14 = *(_QWORD **)(v12 + 1472);
    if ( v14 )
      *(_QWORD *)(v12 + 1472) = *v14;
  }
  if ( v11 )
    goto LABEL_52;
  v15 = v36;
  if ( !v36 )
    v15 = *v34;
  v16 = 0LL;
  v17 = 0LL;
  v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v18 )
    v17 = *v18;
  v37 = gSmartObjNullRef;
  v38 = *(_QWORD *)(v17 + 1472);
  *(_QWORD *)(v17 + 1472) = &v38;
  v39 = 0LL;
  if ( v15 && (v19 = *(_DWORD *)(*(_QWORD *)(v15 + 40) + 44LL)) != 0 )
  {
    v20 = *(_QWORD **)(v15 + 88);
    v21 = 0;
    if ( v19 > 0 )
    {
      do
      {
        v22 = v20[2];
        v23 = *(_DWORD *)(*v20 + 8LL);
        if ( v22 )
        {
          if ( v23 == 61536 )
          {
            v39 = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=((__int64)&v37, v15);
            v22 = v20[2];
            v16 = v20;
          }
          v24 = MNLookUpItem(v22, 0xF060u, 0, 0LL);
          if ( v24 )
            goto LABEL_33;
        }
        else if ( v23 == 61536 )
        {
          v24 = v20;
          goto LABEL_33;
        }
        ++v21;
        v20 += 12;
      }
      while ( v21 < *(_DWORD *)(*(_QWORD *)(v15 + 40) + 44LL) );
    }
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)&v37) )
    {
      v29 = 0LL;
      v30 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v30 )
        v29 = *v30;
      SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v37);
      v31 = *(_QWORD **)(v29 + 1472);
      if ( v31 )
        *(_QWORD *)(v29 + 1472) = *v31;
      goto LABEL_46;
    }
    v24 = v16;
  }
  else
  {
    v24 = 0LL;
  }
LABEL_33:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v37);
  if ( v24 )
    goto LABEL_34;
LABEL_46:
  v32 = v36;
  if ( !v36 )
    v32 = *v34;
  v24 = MNLookUpItem(v32, 0x8060u, 0, 0LL);
  if ( v24 )
    goto LABEL_34;
  v33 = v36;
  if ( !v36 )
    v33 = *v34;
  v24 = MNLookUpItem(v33, 0xC070u, 0, 0LL);
  if ( v24 )
  {
LABEL_34:
    if ( (*(_DWORD *)(*v24 + 4LL) & 3) == 0 )
      goto LABEL_35;
  }
LABEL_52:
  v6 = 0;
LABEL_35:
  v25 = 0LL;
  v26 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v26 )
    v25 = *v26;
  SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v34);
  v27 = *(_QWORD **)(v25 + 1472);
  if ( v27 )
    *(_QWORD *)(v25 + 1472) = *v27;
  return v6;
}
