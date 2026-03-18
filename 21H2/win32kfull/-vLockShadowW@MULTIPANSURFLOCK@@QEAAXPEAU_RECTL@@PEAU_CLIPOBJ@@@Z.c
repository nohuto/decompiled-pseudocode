/*
 * XREFs of ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0294B64
 * Callers:
 *     ??0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z @ 0x1C0292214 (--0MULTIPANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@1PEAU_RECTL@@2PEAHPEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C002F5C4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0294164 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

void __fastcall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  LONG left; // eax
  LONG v6; // eax
  LONG right; // ecx
  LONG v8; // eax
  LONG bottom; // ecx
  LONG v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  int v22; // r14d
  __int64 v23; // rsi
  int v24; // eax
  int v25; // ebx
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  char *v30; // rsi
  __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rcx
  char *v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rsi
  _BYTE *v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rcx
  struct _PANDEV *v44; // rcx
  __int64 v45; // rcx
  char *v46; // [rsp+30h] [rbp-20h] BYREF
  int v47; // [rsp+38h] [rbp-18h]
  int v48; // [rsp+3Ch] [rbp-14h]
  __int128 v49; // [rsp+40h] [rbp-10h] BYREF
  __int64 v50; // [rsp+90h] [rbp+40h]
  __int64 v51; // [rsp+A0h] [rbp+50h]
  __int64 v52; // [rsp+A8h] [rbp+58h]

  v49 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v49) = left;
    v6 = a2->top;
    if ( top > v6 )
      v6 = top;
    right = a3->rclBounds.right;
    DWORD1(v49) = v6;
    v8 = a2->right;
    if ( right < v8 )
      v8 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v49) = v8;
    v10 = a2->bottom;
    if ( bottom < v10 )
      v10 = bottom;
    HIDWORD(v49) = v10;
  }
  else
  {
    v49 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v49);
  v11 = *((_QWORD *)this + 4);
  v12 = v11;
  if ( !v11 )
    v12 = *((_QWORD *)this + 5);
  v13 = *(_DWORD *)(*(_QWORD *)(v12 + 64) + 36LL);
  v14 = *((_QWORD *)this + 4);
  if ( !v11 )
    v14 = *((_QWORD *)this + 5);
  v15 = *(_QWORD *)(v14 + 64);
  v48 = v13;
  v46 = 0LL;
  v47 = *(_DWORD *)(v15 + 32);
  ERECTL::operator*=((int *)&v49, (int *)&v46);
  if ( !ERECTL::bEmpty((ERECTL *)&v49) )
  {
    v16 = v11;
    if ( !v11 )
      v16 = *((_QWORD *)this + 5);
    v17 = (unsigned int)v49 / *(_DWORD *)(v16 + 768);
    v18 = v11;
    v19 = v17;
    if ( !v11 )
      v18 = *((_QWORD *)this + 5);
    v20 = DWORD2(v49) / *(_DWORD *)(v18 + 768);
    v21 = v11;
    v22 = v20;
    if ( !v11 )
      v21 = *((_QWORD *)this + 5);
    v23 = DWORD1(v49) / *(_DWORD *)(v21 + 772);
    if ( !v11 )
      v11 = *((_QWORD *)this + 5);
    v24 = HIDWORD(v49) / *(_DWORD *)(v11 + 772);
    *((_BYTE *)this + 49) = 1;
    v25 = v24;
    memset((char *)this + 131, 0, 0x51uLL);
    v26 = v19;
    v27 = v25 + 1;
    v28 = v23;
    v51 = v27;
    v50 = v22 + 1;
    v29 = 9 * v23;
    v52 = v23;
    v30 = (char *)this + 9 * v23 + 131;
    v46 = v30;
    v31 = 8 * (v19 + v29) + 120;
    *(_QWORD *)&v49 = v31;
LABEL_27:
    v32 = *((_QWORD *)this + 4);
    if ( !v32 )
      v32 = *((_QWORD *)this + 5);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v32 + 784) + 32LL), UserRequest, 0, 0, 0LL);
    v33 = v50;
    v34 = v28;
    v35 = v51;
    v36 = v30;
    while ( v34 < v35 )
    {
      v37 = v26;
      if ( v26 < v33 )
      {
        v38 = v31;
        while ( 1 )
        {
          v39 = *((_QWORD *)this + 4);
          if ( !v39 )
            v39 = *((_QWORD *)this + 5);
          if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v38 + v39)) )
            break;
          v36[v37] = 1;
          v38 += 8LL;
          v33 = v50;
          if ( ++v37 >= v50 )
          {
            v35 = v51;
            goto LABEL_38;
          }
        }
        v40 = 760LL;
        v41 = (char *)this + 211;
        do
        {
          v42 = 9LL;
          do
          {
            if ( *v41 == 1 )
            {
              v43 = *((_QWORD *)this + 4);
              if ( !v43 )
                v43 = *((_QWORD *)this + 5);
              EngReleaseSemaphore(*(HSEMAPHORE *)(v40 + v43));
              *v41 = 0;
            }
            v40 -= 8LL;
            --v41;
            --v42;
          }
          while ( v42 );
        }
        while ( v40 >= 184 );
        v44 = (struct _PANDEV *)*((_QWORD *)this + 4);
        if ( !v44 )
          v44 = (struct _PANDEV *)*((_QWORD *)this + 5);
        ShadowUnLockWait(v44);
        memset((char *)this + 131, 0, 0x51uLL);
        v28 = v52;
        v30 = v46;
        v31 = v49;
        goto LABEL_27;
      }
LABEL_38:
      ++v34;
      v31 += 72LL;
      v36 += 9;
    }
    v45 = *((_QWORD *)this + 4);
    if ( !v45 )
      v45 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v45 + 784) + 32LL), 0);
  }
}
