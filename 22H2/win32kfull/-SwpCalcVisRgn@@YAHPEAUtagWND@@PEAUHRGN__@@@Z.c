/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F40C0
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00F7B60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2, __int64 a3)
{
  __int64 v3; // rax
  char v5; // cl
  struct tagWND *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  __int128 *v13; // rsi
  __int64 v14; // r12
  __int64 v15; // xmm1_8
  PERESOURCE *v16; // rax
  int v17; // r15d
  tagObjLock **v18; // rsi
  _QWORD *Prop; // rsi
  __int64 v20; // rdx
  HRGN v21; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  char v25; // [rsp+48h] [rbp-38h]
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  char v27; // [rsp+60h] [rbp-20h]
  char v28; // [rsp+68h] [rbp-18h]

  v3 = *((_QWORD *)a1 + 5);
  v21 = a2;
  v5 = *(_BYTE *)(v3 + 31);
  if ( (v5 & 0x10) == 0 )
    return 0LL;
  v7 = a1;
  v8 = (4 * (v5 & 4)) | 1;
  do
  {
    v9 = *(unsigned int *)(*((_QWORD *)v7 + 5) + 24LL);
    if ( (v9 & 0x80000) != 0 )
      break;
    if ( (v9 & 0x20000000) != 0 )
      break;
    v7 = (struct tagWND *)*((_QWORD *)v7 + 13);
  }
  while ( v7 );
  if ( v7 )
  {
    if ( v7 != a1 )
    {
      v10 = *((_QWORD *)v7 + 3);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( v11 )
        {
          if ( v7 == *(struct tagWND **)(v11 + 24) )
            goto LABEL_38;
        }
      }
    }
  }
  v12 = v8;
  if ( !v7 || !_bittest((const signed __int32 *)(*((_QWORD *)v7 + 5) + 24LL), 0x1Du) )
    return CalcVisRgn(&v21, a1, a1, v12);
  v13 = (__int128 *)*((_QWORD *)v7 + 18);
  v14 = (unsigned __int16)atomLayer;
  v24 = gDomainDummyLock;
  v25 = 0;
  v26 = 0LL;
  v27 = 0;
  v15 = *((_QWORD *)v13 + 2);
  v22 = *v13;
  v28 = 0;
  v23 = v15;
  v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v9, a2, a3, v8);
  if ( ExIsResourceAcquiredExclusiveLite(*v16) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v28 = 1;
    if ( v13 == (__int128 *)gObjDummyLock )
      v13 = 0LL;
    *(_QWORD *)&v26 = v13;
    v17 = 0;
    v18 = (tagObjLock **)&v26;
    do
    {
      if ( *v18 )
        tagObjLock::LockExclusive(*v18);
      ++v17;
      ++v18;
    }
    while ( !v17 );
    v27 = 1;
  }
  Prop = (_QWORD *)RealGetProp(*((_QWORD *)v7 + 18), v14, 1LL);
  if ( v28 && v27 )
  {
    if ( (_QWORD)v26 )
      tagObjLock::UnLockExclusive((tagObjLock *)v26);
    v27 = 0;
  }
  if ( !Prop
    || !*Prop
    || (v20 = *((_QWORD *)v7 + 5), (*(_BYTE *)(v20 + 31) & 0x20) != 0)
    && *(_DWORD *)(v20 + 88) == -32000
    && *(_DWORD *)(v20 + 92) == -32000
    && *(_DWORD *)(v20 + 112) == *(_DWORD *)(v20 + 104)
    && *(_DWORD *)(v20 + 116) == *(_DWORD *)(v20 + 108) )
  {
LABEL_38:
    v12 = v8;
  }
  else
  {
    v12 = v8;
    LODWORD(v12) = v8 | 0x4000;
  }
  return CalcVisRgn(&v21, a1, a1, v12);
}
