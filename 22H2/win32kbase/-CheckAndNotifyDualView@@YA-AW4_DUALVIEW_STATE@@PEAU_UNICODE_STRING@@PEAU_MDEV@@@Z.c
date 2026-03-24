/*
 * XREFs of ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00126BC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013A90 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0013860 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0022870 (DrvGetDeviceFromName.c)
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002C278 (PALLOCMEM2.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00B3B44 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 */

__int64 __fastcall CheckAndNotifyDualView(const UNICODE_STRING *a1, __int64 a2)
{
  wchar_t *v2; // r8
  int v5; // ecx
  int v6; // r12d
  int v7; // r13d
  int v8; // ebx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rsi
  wchar_t *i; // rdi
  unsigned int v13; // ebp
  unsigned __int16 v14; // ax
  int v15; // edx
  unsigned int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  BOOL v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  _DWORD *v23; // rcx
  __int64 v24; // rdx
  int v26; // eax
  unsigned int v27; // eax
  wchar_t **v28; // rcx
  unsigned int *v29; // r14
  __int64 v30; // r15
  unsigned int v31; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+28h] [rbp-40h]
  unsigned int v33; // [rsp+80h] [rbp+18h] BYREF
  int v34; // [rsp+88h] [rbp+20h]

  v2 = gpGraphicsDeviceList;
  v31 = 0;
  v5 = 0;
  v33 = 0;
  v6 = 0;
  v34 = 0;
  v7 = 0;
  v8 = 1;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    v9 = (*((_DWORD *)v2 + 40) & 0x20800000) == 0;
    v10 = v5 + 1;
    v2 = (wchar_t *)*((_QWORD *)v2 + 16);
    if ( v9 )
      v10 = v5;
    v5 = v10;
  }
  while ( v2 );
  if ( !v10 )
    return 0LL;
  v32 = PALLOCMEM2((unsigned int)(16 * v10));
  v11 = v32;
  if ( !v32 )
    return 3LL;
  i = gpGraphicsDeviceList;
  v13 = 0;
  if ( gpGraphicsDeviceList )
  {
    do
    {
      v14 = -1;
      if ( !gForceDisconnect )
        v14 = gProtocolType;
      if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)i, v14, &v31, &v33) )
      {
        v22 = 3;
        goto LABEL_39;
      }
      v15 = 0;
      if ( v33 )
        v8 = 0;
      if ( a2 )
      {
        v16 = *(_DWORD *)(a2 + 20);
        if ( v16 )
        {
          v17 = (__int64 *)(a2 + 40);
          v18 = v16;
          do
          {
            v19 = *v17;
            v17 += 7;
            if ( *(wchar_t **)(v19 + 2576) == i )
              v15 = 1;
            --v18;
          }
          while ( v18 );
        }
        v20 = v33 && !v15;
        v34 |= v20;
      }
      if ( (*((_DWORD *)i + 40) & 0x2800008) == 0x800000 )
      {
        v21 = 2LL * v13;
        *(_QWORD *)(v11 + 8 * v21) = i;
        *(_DWORD *)(v11 + 8 * v21 + 12) = v33 != 0;
        ++v13;
        *(_DWORD *)(v11 + 8 * v21 + 8) = v15 != 0;
      }
      i = (wchar_t *)*((_QWORD *)i + 16);
    }
    while ( i );
    if ( v8 )
      goto LABEL_49;
  }
  else
  {
LABEL_49:
    for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
    {
      v26 = *((_DWORD *)i + 40);
      if ( (v26 & 0x2000008) == 0 )
      {
        if ( (v26 & 0x800000) == 0 )
          break;
        v22 = 1;
        *(_DWORD *)(v11 + 12) = 1;
        goto LABEL_27;
      }
    }
  }
  v22 = 1;
LABEL_27:
  if ( a1 )
  {
    i = (wchar_t *)DrvGetDeviceFromName(a1);
    if ( !i )
      goto LABEL_34;
    v27 = 0;
    if ( !v13 )
      goto LABEL_34;
    v28 = (wchar_t **)v11;
    while ( i != *v28 )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= v13 )
        goto LABEL_34;
    }
    if ( *(_DWORD *)(v11 + 16LL * v27 + 8) == *(_DWORD *)(v11 + 16LL * v27 + 12) && a2 )
      goto LABEL_34;
    v6 = 1;
    v7 = 1;
  }
  else
  {
    if ( !v13 )
    {
LABEL_34:
      v22 = 0;
      goto LABEL_35;
    }
    v23 = (_DWORD *)(v11 + 8);
    v24 = v13;
    do
    {
      if ( *v23 != v23[1] || !a2 )
        v6 = 1;
      v23 += 4;
      --v24;
    }
    while ( v24 );
  }
  if ( !v6 )
    goto LABEL_34;
  if ( v7 )
  {
    v22 = 3;
    if ( a2 )
    {
      v29 = (unsigned int *)(v11 + 8);
      v30 = v13;
      do
      {
        DrvUpdateAttachFlag((struct tagGRAPHICS_DEVICE *)i, *v29);
        v29 += 4;
        --v30;
      }
      while ( v30 );
      v11 = v32;
    }
  }
LABEL_35:
  if ( v13 )
  {
    if ( v6 || v34 )
      v22 = 1;
    else
      v22 = 2;
  }
LABEL_39:
  Win32FreePool(v11);
  return v22;
}
