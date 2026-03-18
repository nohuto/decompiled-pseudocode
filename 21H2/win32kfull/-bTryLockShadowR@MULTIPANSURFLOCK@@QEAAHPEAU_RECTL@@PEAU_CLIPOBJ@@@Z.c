/*
 * XREFs of ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C029432C
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0292214 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0294164 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C02951D4 (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall MULTIPANSURFLOCK::bTryLockShadowR(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  signed int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r14d
  __int64 v17; // r12
  int v18; // eax
  int v19; // r15d
  __int64 v20; // rcx
  int v21; // r14d
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  char *v26; // r12
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // r14
  _BYTE *v35; // rsi
  __int64 v36; // r15
  __int64 v37; // rcx
  struct _PANDEV *v38; // rcx
  signed __int32 v39[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v40; // [rsp+30h] [rbp-20h] BYREF
  __int64 v41; // [rsp+40h] [rbp-10h] BYREF
  int v42; // [rsp+48h] [rbp-8h]
  int v43; // [rsp+4Ch] [rbp-4h]
  __int64 v44; // [rsp+90h] [rbp+40h]
  __int64 v45; // [rsp+A0h] [rbp+50h]
  __int64 v46; // [rsp+A8h] [rbp+58h]

  v40 = (__int128)*a2;
  ERECTL::vOrder((ERECTL *)&v40);
  v4 = *((_QWORD *)this + 4);
  v5 = 0;
  v6 = v4;
  if ( !v4 )
    v6 = *((_QWORD *)this + 5);
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 64) + 36LL);
  v8 = *((_QWORD *)this + 4);
  if ( !v4 )
    v8 = *((_QWORD *)this + 5);
  v9 = *(_QWORD *)(v8 + 64);
  v43 = v7;
  v41 = 0LL;
  v42 = *(_DWORD *)(v9 + 32);
  ERECTL::operator*=((int *)&v40, (int *)&v41);
  if ( ERECTL::bEmpty((ERECTL *)&v40) )
    return 1;
  v10 = v4;
  if ( !v4 )
    v10 = *((_QWORD *)this + 5);
  v11 = (unsigned int)v40 / *(_DWORD *)(v10 + 768);
  v12 = v4;
  v13 = v11;
  if ( !v4 )
    v12 = *((_QWORD *)this + 5);
  v14 = DWORD2(v40) / *(_DWORD *)(v12 + 768);
  v15 = v4;
  v16 = v14;
  if ( !v4 )
    v15 = *((_QWORD *)this + 5);
  v17 = DWORD1(v40) / *(_DWORD *)(v15 + 772);
  if ( !v4 )
    v4 = *((_QWORD *)this + 5);
  v18 = HIDWORD(v40) / *(_DWORD *)(v4 + 772);
  *((_BYTE *)this + 48) = 1;
  v19 = v18 + 1;
  memset((char *)this + 50, 0, 0x51uLL);
  v20 = *((_QWORD *)this + 4);
  v21 = v16 + 1;
  if ( !v20 )
    v20 = *((_QWORD *)this + 5);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(v20 + 784) + 32LL), UserRequest, 0, 0, 0LL);
  v22 = v17;
  v23 = v21;
  v44 = v21;
  v45 = v19;
  if ( v17 >= v19 )
  {
LABEL_26:
    v32 = *((_QWORD *)this + 4);
    if ( !v32 )
      v32 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v32 + 784) + 32LL), 0);
    return 1;
  }
  v24 = 9 * v17;
  v25 = v13;
  v46 = v13;
  v26 = (char *)this + 9 * v17 + 50;
  v27 = 8 * (v13 + v24) + 120;
  v28 = v19;
  while ( 1 )
  {
    v29 = v25;
    if ( v25 < v23 )
      break;
LABEL_25:
    ++v22;
    v27 += 72LL;
    v26 += 9;
    if ( v22 >= v28 )
      goto LABEL_26;
  }
  v30 = v27;
  while ( 1 )
  {
    v31 = *((_QWORD *)this + 4);
    if ( !v31 )
      v31 = *((_QWORD *)this + 5);
    if ( (unsigned int)EngAcquireSemaphoreSharedNoWait(*(_QWORD *)(v30 + v31)) != 1 )
      break;
    v23 = v44;
    v30 += 8LL;
    v26[v29++] = 1;
    if ( v29 >= v44 )
    {
      v25 = v46;
      v28 = v45;
      goto LABEL_25;
    }
  }
  v34 = 760LL;
  v35 = (char *)this + 211;
  do
  {
    v36 = 9LL;
    do
    {
      if ( *v35 == 1 )
      {
        v37 = *((_QWORD *)this + 4);
        if ( !v37 )
          v37 = *((_QWORD *)this + 5);
        EngReleaseSemaphore(*(HSEMAPHORE *)(v34 + v37));
        *v35 = 0;
      }
      v34 -= 8LL;
      --v35;
      --v36;
    }
    while ( v36 );
  }
  while ( v34 >= 184 );
  memset((char *)this + 131, 0, 0x51uLL);
  _InterlockedOr(v39, 0);
  MULTIPANSURFLOCK::vUnLockShadowR(this);
  v38 = (struct _PANDEV *)*((_QWORD *)this + 4);
  if ( !v38 )
    v38 = (struct _PANDEV *)*((_QWORD *)this + 5);
  ShadowUnLockWait(v38);
  memset((char *)this + 50, 0, 0x51uLL);
  *((_BYTE *)this + 48) = 0;
  return v5;
}
