/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0065824
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0068A60 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     CalcVisRgn @ 0x1C00535C0 (CalcVisRgn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  __int64 v2; // rax
  char v4; // cl
  struct tagWND *v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int128 *v11; // rsi
  __int64 v12; // r12
  __int64 v13; // xmm1_8
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *Prop; // rsi
  __int64 v17; // rdx
  int v19; // r15d
  tagObjLock **v20; // rsi
  HRGN v21; // [rsp+20h] [rbp-60h] BYREF
  __int128 v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  char v25; // [rsp+48h] [rbp-38h]
  __int128 v26; // [rsp+50h] [rbp-30h] BYREF
  char v27; // [rsp+60h] [rbp-20h]
  char v28; // [rsp+68h] [rbp-18h]

  v2 = *((_QWORD *)a1 + 5);
  v21 = a2;
  v4 = *(_BYTE *)(v2 + 31);
  if ( (v4 & 0x10) != 0 )
  {
    v5 = a1;
    v6 = (4 * (v4 & 4)) | 1;
    do
    {
      v7 = *(unsigned int *)(*((_QWORD *)v5 + 5) + 24LL);
      if ( (v7 & 0x80000) != 0 )
        break;
      if ( (v7 & 0x20000000) != 0 )
        break;
      v5 = (struct tagWND *)*((_QWORD *)v5 + 13);
    }
    while ( v5 );
    if ( v5 )
    {
      if ( v5 != a1 )
      {
        v8 = *((_QWORD *)v5 + 3);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          if ( v9 )
          {
            if ( v5 == *(struct tagWND **)(v9 + 24) )
              goto LABEL_24;
          }
        }
      }
    }
    v10 = v6;
    if ( !v5 || !_bittest((const signed __int32 *)(*((_QWORD *)v5 + 5) + 24LL), 0x1Du) )
      return CalcVisRgn(&v21, a1, a1, v10);
    v11 = (__int128 *)*((_QWORD *)v5 + 18);
    v12 = (unsigned __int16)atomLayer;
    v24 = gDomainDummyLock;
    v25 = 0;
    v26 = 0LL;
    v27 = 0;
    v13 = *((_QWORD *)v11 + 2);
    v22 = *v11;
    v28 = 0;
    v23 = v13;
    v14 = SGDGetUserSessionState(v7);
    if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v14 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v15) )
    {
      v28 = 1;
      if ( v11 == (__int128 *)gObjDummyLock )
        v11 = 0LL;
      *(_QWORD *)&v26 = v11;
      v19 = 0;
      v20 = (tagObjLock **)&v26;
      do
      {
        if ( *v20 )
          tagObjLock::LockExclusive(*v20);
        ++v19;
        ++v20;
      }
      while ( !v19 );
      v27 = 1;
    }
    Prop = (_QWORD *)RealGetProp(*((_QWORD *)v5 + 18), v12, 1LL);
    if ( v28 && v27 )
    {
      if ( (_QWORD)v26 )
        tagObjLock::UnLockExclusive((tagObjLock *)v26);
      v27 = 0;
    }
    if ( !Prop
      || !*Prop
      || (v17 = *((_QWORD *)v5 + 5), (*(_BYTE *)(v17 + 31) & 0x20) != 0)
      && *(_DWORD *)(v17 + 88) == -32000
      && *(_DWORD *)(v17 + 92) == -32000
      && *(_DWORD *)(v17 + 112) == *(_DWORD *)(v17 + 104)
      && *(_DWORD *)(v17 + 116) == *(_DWORD *)(v17 + 108) )
    {
LABEL_24:
      v10 = v6;
    }
    else
    {
      v10 = v6 | 0x4000;
    }
    return CalcVisRgn(&v21, a1, a1, v10);
  }
  return 0LL;
}
