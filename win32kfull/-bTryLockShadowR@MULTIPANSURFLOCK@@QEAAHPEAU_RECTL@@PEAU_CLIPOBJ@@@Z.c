__int64 __fastcall MULTIPANSURFLOCK::bTryLockShadowR(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // r15
  int v17; // eax
  int v18; // r14d
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rdi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  char *v25; // r15
  __int64 v26; // r12
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 result; // rax
  __int64 v33; // rsi
  _BYTE *v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rcx
  struct _PANDEV *v37; // rcx
  signed __int32 v38[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v39; // [rsp+30h] [rbp-20h] BYREF
  int v40[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v41; // [rsp+90h] [rbp+40h]
  __int64 v42; // [rsp+A0h] [rbp+50h]

  v39 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v39);
  v4 = *((_QWORD *)this + 4);
  v5 = v4;
  if ( !v4 )
    v5 = *((_QWORD *)this + 5);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 64) + 36LL);
  v7 = *((_QWORD *)this + 4);
  if ( !v4 )
    v7 = *((_QWORD *)this + 5);
  v8 = *(_QWORD *)(v7 + 64);
  v40[0] = 0;
  v40[1] = 0;
  v40[3] = v6;
  v40[2] = *(_DWORD *)(v8 + 32);
  ERECTL::operator*=((int *)&v39, v40);
  if ( ERECTL::bEmpty((ERECTL *)&v39) )
    return 1LL;
  v9 = v4;
  if ( !v4 )
    v9 = *((_QWORD *)this + 5);
  v10 = (unsigned int)v39 / *(_DWORD *)(v9 + 768);
  v11 = v4;
  v12 = v10;
  if ( !v4 )
    v11 = *((_QWORD *)this + 5);
  v13 = DWORD2(v39) / *(_DWORD *)(v11 + 768);
  v14 = v4;
  v15 = v13;
  if ( !v4 )
    v14 = *((_QWORD *)this + 5);
  v16 = DWORD1(v39) / *(_DWORD *)(v14 + 772);
  if ( !v4 )
    v4 = *((_QWORD *)this + 5);
  v17 = HIDWORD(v39) / *(_DWORD *)(v4 + 772);
  *((_BYTE *)this + 48) = 1;
  v18 = v17 + 1;
  memset_0((char *)this + 50, 0, 0x51uLL);
  v19 = *((_QWORD *)this + 4);
  v20 = v15 + 1;
  if ( !v19 )
    v19 = *((_QWORD *)this + 5);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(v19 + 784) + 32LL), UserRequest, 0, 0, 0LL);
  v21 = v16;
  v22 = v20;
  v41 = v20;
  v42 = v18;
  if ( v16 >= v18 )
  {
LABEL_26:
    v31 = *((_QWORD *)this + 4);
    if ( !v31 )
      v31 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v31 + 784) + 32LL), 0);
    return 1LL;
  }
  v23 = 9 * v16;
  v24 = v12;
  v25 = (char *)this + 9 * v16 + 50;
  v26 = 8 * (v12 + v23) + 120;
  v27 = v18;
  while ( 1 )
  {
    v28 = v24;
    if ( v24 < v22 )
      break;
LABEL_25:
    ++v21;
    v26 += 72LL;
    v25 += 9;
    if ( v21 >= v27 )
      goto LABEL_26;
  }
  v29 = v26;
  while ( 1 )
  {
    v30 = *((_QWORD *)this + 4);
    if ( !v30 )
      v30 = *((_QWORD *)this + 5);
    if ( (unsigned int)EngAcquireSemaphoreSharedNoWait(*(_QWORD *)(v29 + v30)) != 1 )
      break;
    v22 = v41;
    v29 += 8LL;
    v25[v28++] = 1;
    if ( v28 >= v41 )
    {
      v27 = v42;
      goto LABEL_25;
    }
  }
  v33 = 760LL;
  v34 = (char *)this + 211;
  do
  {
    v35 = 9LL;
    do
    {
      if ( *v34 == 1 )
      {
        v36 = *((_QWORD *)this + 4);
        if ( !v36 )
          v36 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v33 + v36));
        *v34 = 0;
      }
      v33 -= 8LL;
      --v34;
      --v35;
    }
    while ( v35 );
  }
  while ( v33 >= 184 );
  memset_0((char *)this + 131, 0, 0x51uLL);
  _InterlockedOr(v38, 0);
  MULTIPANSURFLOCK::vUnLockShadowR(this);
  v37 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v37 )
    v37 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLockWait(v37);
  memset_0((char *)this + 50, 0, 0x51uLL);
  result = 0LL;
  *((_BYTE *)this + 48) = 0;
  return result;
}
