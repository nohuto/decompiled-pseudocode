/*
 * XREFs of IoBuildPoDeviceNotifyList @ 0x140A9B078
 * Callers:
 *     PopBuildDeviceNotifyList @ 0x140AA3FCC (PopBuildDeviceNotifyList.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1402FAAFC (IoGetLowerDeviceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PnpLockDeviceActionQueue @ 0x1403BDF7C (PnpLockDeviceActionQueue.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpPowerStateTransitionWatchdogPopRecord @ 0x140954B24 (PnpPowerStateTransitionWatchdogPopRecord.c)
 *     PnpPowerStateTransitionWatchdogPushRecord @ 0x140954B3C (PnpPowerStateTransitionWatchdogPushRecord.c)
 *     IopCaptureObjectName @ 0x140A9B740 (IopCaptureObjectName.c)
 *     IopCheckDeviceFlags @ 0x140A9B7F0 (IopCheckDeviceFlags.c)
 *     IopFreePoDeviceNotifyListHead @ 0x140A9B874 (IopFreePoDeviceNotifyListHead.c)
 *     IopIsNotifyInBroadcast @ 0x140A9B8F4 (IopIsNotifyInBroadcast.c)
 */

__int64 *__fastcall IoBuildPoDeviceNotifyList(char *a1, int a2)
{
  int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  char *v8; // rbx
  char *i; // rax
  __int64 ***v10; // rdi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  void *v15; // rcx
  char *v16; // rcx
  _QWORD *v17; // rax
  char *j; // rax
  __int64 *v19; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rdx
  __int64 *v22; // rax
  __int64 *k; // rcx
  __int64 *v24; // rcx
  _QWORD *v25; // rdx
  char v26; // r10
  _QWORD *m; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  _QWORD *n; // rax
  _QWORD *v34; // rdi
  _QWORD *ii; // rax
  __int64 v36; // r9
  char v37; // dl
  _QWORD *v38; // rax
  _QWORD *jj; // rax
  char v40; // al
  _DWORD *v41; // rsi
  _DWORD *LowerDeviceObjectWithTag; // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // r9
  _QWORD *v45; // rax
  char v46; // r10
  _BYTE *v47; // rcx
  unsigned __int8 v48; // dl
  _QWORD *kk; // rax
  _QWORD *v50; // rax
  _QWORD *mm; // rcx
  _QWORD *nn; // rcx
  __int64 v53; // r8
  unsigned __int8 v54; // r9
  _QWORD *v55; // rcx
  _QWORD *i1; // rax
  __int64 v57; // r9
  __int64 v58; // r10
  __int64 *v59; // rax
  __int64 v60; // rdi
  char *v61; // rdx
  __int64 v62; // rbx
  __int64 i2; // r11
  __int64 *v64; // r11
  __int64 v65; // rbx
  __int64 i3; // r11
  __int64 *v67; // r11
  char *v68; // rax
  char **v69; // rcx
  _QWORD *i4; // rax
  __int64 *result; // rax
  __int64 *v72; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v73; // [rsp+28h] [rbp-18h]
  __int64 v74; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v75; // [rsp+38h] [rbp-8h]

  v73 = &v72;
  v72 = (__int64 *)&v72;
  v75 = &v74;
  v74 = (__int64)&v74;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      v4 = PnpPowerStateTransitionWatchdogPushRecord();
      PnpLockDeviceActionQueue();
      if ( v4 >= 0 )
        PnpPowerStateTransitionWatchdogPopRecord();
    }
    else
    {
      PnpLockDeviceActionQueue();
    }
  }
  memset(a1, 0, 0x180uLL);
  v5 = a1 + 48;
  *((_DWORD *)a1 + 94) = a2;
  v6 = 5LL;
  do
  {
    *(v5 - 2) = v5 - 3;
    *(v5 - 3) = v5 - 3;
    *v5 = v5 - 1;
    *(v5 - 1) = v5 - 1;
    v5[2] = v5 + 1;
    v5[1] = v5 + 1;
    v7 = v5 + 3;
    v5[4] = v5 + 3;
    v5 += 9;
    *v7 = v7;
    --v6;
  }
  while ( v6 );
  v8 = (char *)IopRootDeviceNode;
  for ( i = (char *)*((_QWORD *)IopRootDeviceNode + 1); i; i = (char *)*((_QWORD *)i + 1) )
    v8 = i;
  while ( v8 != IopRootDeviceNode )
  {
    v10 = (__int64 ***)(v8 + 160);
    *((_DWORD *)v8 + 62) = 0;
    *((_DWORD *)v8 + 63) = 0;
    *((_DWORD *)v8 + 64) = 0;
    *((_DWORD *)v8 + 65) = 0;
    v8[216] = 0;
    *((_QWORD *)v8 + 28) = *((_QWORD *)v8 + 4);
    AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)v8 + 4));
    *((_QWORD *)v8 + 26) = AttachedDeviceReference;
    v12 = IopCaptureObjectName(AttachedDeviceReference->DriverObject);
    v13 = *((_QWORD *)v8 + 26);
    *((_QWORD *)v8 + 30) = v12;
    v14 = IopCaptureObjectName(v13);
    v15 = (void *)*((_QWORD *)v8 + 28);
    *((_QWORD *)v8 + 29) = v14;
    ObfReferenceObject(v15);
    v8[216] = 0;
    if ( (unsigned __int8)IopCheckDeviceFlags(v8 + 160, 0x2000LL) )
      v8[216] |= 2u;
    v16 = (char *)*((_QWORD *)v8 + 2);
    if ( v16 == IopRootDeviceNode && *((_DWORD *)v8 + 112) && (*((_DWORD *)v8 + 99) & 4) == 0 )
    {
      v17 = v73;
      if ( *v73 != (__int64 *)&v72 )
LABEL_149:
        __fastfail(3u);
      *((_QWORD *)v8 + 21) = v73;
      *v10 = &v72;
      *v17 = v10;
      v73 = (__int64 **)(v8 + 160);
      v16 = (char *)*((_QWORD *)v8 + 2);
    }
    v8 = *(char **)v8;
    if ( v8 )
    {
      for ( j = (char *)*((_QWORD *)v8 + 1); j; j = (char *)*((_QWORD *)j + 1) )
        v8 = j;
    }
    else
    {
      v8 = v16;
    }
  }
  while ( 1 )
  {
    v19 = v72;
    if ( v72 == (__int64 *)&v72 )
      break;
    if ( (__int64 **)v72[1] != &v72 )
      goto LABEL_149;
    v20 = (__int64 *)*v72;
    if ( *(__int64 **)(*v72 + 8) != v72 )
      goto LABEL_149;
    v72 = (__int64 *)*v72;
    v20[1] = (__int64)&v72;
    v21 = v19 - 20;
    *((_BYTE *)v19 + 56) |= 1u;
    v22 = v21;
    for ( k = (__int64 *)v21[1]; k; k = (__int64 *)k[1] )
      v22 = k;
    while ( v22 != v21 )
    {
      *((_BYTE *)v22 + 216) |= 1u;
      v24 = (__int64 *)*v22;
      if ( *v22 )
      {
        do
        {
          v22 = v24;
          v24 = (__int64 *)v24[1];
        }
        while ( v24 );
      }
      else
      {
        v22 = (__int64 *)v22[2];
      }
    }
  }
  do
  {
    v25 = IopRootDeviceNode;
    v26 = 0;
    for ( m = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); m; m = (_QWORD *)m[1] )
      v25 = m;
    while ( 1 )
    {
      v32 = IopRootDeviceNode;
      if ( v25 == IopRootDeviceNode )
        break;
      if ( (v25[27] & 2) != 0 )
      {
        v28 = (_QWORD *)v25[1];
        v29 = v25;
        while ( v28 )
        {
          v29 = v28;
          v28 = (_QWORD *)v28[1];
        }
        while ( v29 != v25 )
        {
          *((_BYTE *)v29 + 216) |= 2u;
          v30 = (_QWORD *)*v29;
          if ( *v29 )
          {
            do
            {
              v29 = v30;
              v30 = (_QWORD *)v30[1];
            }
            while ( v30 );
          }
          else
          {
            v29 = (_QWORD *)v29[2];
          }
        }
      }
      v31 = (_QWORD *)*v25;
      if ( *v25 )
      {
        do
        {
          v25 = v31;
          v31 = (_QWORD *)v31[1];
        }
        while ( v31 );
      }
      else
      {
        v25 = (_QWORD *)v25[2];
      }
    }
    for ( n = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); n; n = (_QWORD *)n[1] )
      v32 = n;
    v34 = IopRootDeviceNode;
    if ( v32 == IopRootDeviceNode )
      break;
    do
    {
      if ( (v32[27] & 2) != 0 )
      {
        for ( ii = (_QWORD *)v32[22]; ii != v32 + 22; ii = (_QWORD *)*ii )
        {
          v36 = *(ii - 1);
          v37 = *(_BYTE *)(v36 + 56);
          if ( (v37 & 2) == 0 )
          {
            v26 = 1;
            *(_BYTE *)(v36 + 56) = v37 | 2;
          }
        }
      }
      v38 = (_QWORD *)*v32;
      if ( *v32 )
      {
        do
        {
          v32 = v38;
          v38 = (_QWORD *)v38[1];
        }
        while ( v38 );
      }
      else
      {
        v32 = (_QWORD *)v32[2];
      }
      v34 = IopRootDeviceNode;
    }
    while ( v32 != IopRootDeviceNode );
  }
  while ( v26 );
  for ( jj = (_QWORD *)v34[1]; jj; jj = (_QWORD *)jj[1] )
    v34 = jj;
  while ( 1 )
  {
    v44 = IopRootDeviceNode;
    if ( v34 == IopRootDeviceNode )
      break;
    v40 = *((_BYTE *)v34 + 216);
    if ( (v40 & 2) != 0 )
    {
      v41 = (_DWORD *)v34[26];
      *((_BYTE *)v34 + 216) = v40 + 1;
      ObfReferenceObjectWithTag(v41, 0x70506F50u);
      if ( v41 )
      {
        while ( v41[18] != 7 )
        {
          LowerDeviceObjectWithTag = IoGetLowerDeviceObjectWithTag((__int64)v41, 0x70506F50u);
          ObfDereferenceObjectWithTag(v41, 0x70506F50u);
          v41 = LowerDeviceObjectWithTag;
          if ( !LowerDeviceObjectWithTag )
            goto LABEL_85;
        }
        ObfDereferenceObjectWithTag(v41, 0x70506F50u);
        if ( (unsigned __int8)IopCheckDeviceFlags(v34 + 20, 256LL) )
          *((_BYTE *)v34 + 216) = 2;
      }
    }
LABEL_85:
    v43 = (_QWORD *)*v34;
    if ( *v34 )
    {
      do
      {
        v34 = v43;
        v43 = (_QWORD *)v43[1];
      }
      while ( v43 );
    }
    else
    {
      v34 = (_QWORD *)v34[2];
    }
  }
  do
  {
    v45 = (_QWORD *)v44[1];
    v46 = 0;
    while ( v45 )
    {
      v44 = v45;
      v45 = (_QWORD *)v45[1];
    }
    while ( 1 )
    {
      v50 = IopRootDeviceNode;
      if ( v44 == IopRootDeviceNode )
        break;
      v47 = (_BYTE *)v44[2];
      if ( v47 != IopRootDeviceNode )
      {
        v48 = *((_BYTE *)v44 + 216);
        if ( v47[216] > v48 )
        {
          v47[216] = v48;
          v47 = (_BYTE *)v44[2];
        }
      }
      v44 = (_QWORD *)*v44;
      if ( v44 )
      {
        for ( kk = (_QWORD *)v44[1]; kk; kk = (_QWORD *)kk[1] )
          v44 = kk;
      }
      else
      {
        v44 = v47;
      }
    }
    for ( mm = (_QWORD *)*((_QWORD *)IopRootDeviceNode + 1); mm; mm = (_QWORD *)mm[1] )
      v50 = mm;
    v44 = IopRootDeviceNode;
    if ( v50 == IopRootDeviceNode )
      break;
    do
    {
      for ( nn = (_QWORD *)v50[24]; nn != v50 + 24; nn = (_QWORD *)*nn )
      {
        v53 = nn[5];
        v54 = *((_BYTE *)v50 + 216);
        if ( *(_BYTE *)(v53 + 56) > v54 )
        {
          v46 = 1;
          *(_BYTE *)(v53 + 56) = v54;
        }
      }
      v55 = (_QWORD *)*v50;
      if ( *v50 )
      {
        do
        {
          v50 = v55;
          v55 = (_QWORD *)v55[1];
        }
        while ( v55 );
      }
      else
      {
        v50 = (_QWORD *)v50[2];
      }
      v44 = IopRootDeviceNode;
    }
    while ( v50 != IopRootDeviceNode );
  }
  while ( v46 );
  for ( i1 = (_QWORD *)v44[1]; i1; i1 = (_QWORD *)i1[1] )
    v44 = i1;
  while ( v44 != IopRootDeviceNode )
  {
    if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), v44 + 20) )
    {
      v60 = v57 + 16;
      ++*(_DWORD *)&a1[72 * *(unsigned __int8 *)(v58 + 56) + 16];
      v61 = *(char **)(v57 + 16);
      if ( v61 != IopRootDeviceNode && (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), v61 + 160) )
      {
        ++*(_DWORD *)(v58 + 96);
        ++*(_DWORD *)(*(_QWORD *)v60 + 248LL);
      }
      v62 = v58 + 32;
      for ( i2 = *(_QWORD *)(v58 + 32); i2 != v62; i2 = *v64 )
      {
        if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), *(_QWORD *)(i2 + 40)) )
          ++*(_DWORD *)(v58 + 96);
      }
      v65 = v58 + 16;
      for ( i3 = *(_QWORD *)(v58 + 16); i3 != v65; i3 = *v67 )
      {
        if ( (unsigned __int8)IopIsNotifyInBroadcast(*((unsigned int *)a1 + 94), *(_QWORD *)(i3 - 8)) )
          ++*(_DWORD *)(v58 + 88);
      }
      v68 = &a1[64 * *(unsigned __int8 *)(v58 + 56) + 24 + 8 * *(unsigned __int8 *)(v58 + 56)];
      v69 = (char **)*((_QWORD *)v68 + 1);
      if ( *v69 != v68 )
        goto LABEL_149;
      *(_QWORD *)v58 = v68;
      *(_QWORD *)(v58 + 8) = v69;
      *v69 = (char *)v58;
      *((_QWORD *)v68 + 1) = v58;
    }
    else
    {
      v59 = v75;
      if ( (__int64 *)*v75 != &v74 )
        goto LABEL_149;
      *(_QWORD *)(v58 + 8) = v75;
      *(_QWORD *)v58 = &v74;
      v60 = v57 + 16;
      *v59 = v58;
      v75 = (__int64 *)v58;
    }
    v44 = *(_QWORD **)v57;
    if ( v44 )
    {
      for ( i4 = (_QWORD *)v44[1]; i4; i4 = (_QWORD *)i4[1] )
        v44 = i4;
    }
    else
    {
      v44 = *(_QWORD **)v60;
    }
  }
  IopFreePoDeviceNotifyListHead(&v74);
  result = &IopWarmEjectPdo;
  *((_QWORD *)a1 + 1) = &IopWarmEjectPdo;
  *a1 = 1;
  return result;
}
