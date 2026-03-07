void __fastcall MULTIPANSURFLOCK::vLockShadowW(MULTIPANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3)
{
  LONG top; // ecx
  LONG left; // r8d
  LONG v7; // eax
  LONG v8; // eax
  LONG right; // ecx
  LONG v10; // eax
  LONG bottom; // ecx
  LONG v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r14d
  __int64 v25; // rsi
  int v26; // eax
  int v27; // ebx
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  char *v32; // rsi
  __int64 v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rcx
  char *v38; // r15
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rsi
  _BYTE *v43; // rbx
  __int64 v44; // r14
  __int64 v45; // rcx
  struct _PANDEV *v46; // rcx
  __int64 v47; // rcx
  char *v48; // [rsp+30h] [rbp-20h] BYREF
  int v49; // [rsp+38h] [rbp-18h]
  int v50; // [rsp+3Ch] [rbp-14h]
  __int128 v51; // [rsp+40h] [rbp-10h] BYREF
  __int64 v52; // [rsp+90h] [rbp+40h]
  __int64 v53; // [rsp+A0h] [rbp+50h]
  __int64 v54; // [rsp+A8h] [rbp+58h]

  v51 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a3->rclBounds.left;
    v7 = a2->left;
    if ( left > a2->left )
      v7 = left;
    LODWORD(v51) = v7;
    v8 = a2->top;
    if ( top > v8 )
      v8 = top;
    right = a3->rclBounds.right;
    DWORD1(v51) = v8;
    v10 = a2->right;
    if ( right < v10 )
      v10 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v51) = v10;
    v12 = a2->bottom;
    if ( bottom < v12 )
      v12 = bottom;
    HIDWORD(v51) = v12;
  }
  else
  {
    v51 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v51);
  v13 = *((_QWORD *)this + 4);
  v14 = v13;
  if ( !v13 )
    v14 = *((_QWORD *)this + 5);
  v15 = *(_DWORD *)(*(_QWORD *)(v14 + 64) + 36LL);
  v16 = *((_QWORD *)this + 4);
  if ( !v13 )
    v16 = *((_QWORD *)this + 5);
  v17 = *(_QWORD *)(v16 + 64);
  v50 = v15;
  v48 = 0LL;
  v49 = *(_DWORD *)(v17 + 32);
  ERECTL::operator*=((int *)&v51, (int *)&v48);
  if ( !ERECTL::bEmpty((ERECTL *)&v51) )
  {
    v18 = v13;
    if ( !v13 )
      v18 = *((_QWORD *)this + 5);
    v19 = (unsigned int)v51 / *(_DWORD *)(v18 + 768);
    v20 = v13;
    v21 = v19;
    if ( !v13 )
      v20 = *((_QWORD *)this + 5);
    v22 = DWORD2(v51) / *(_DWORD *)(v20 + 768);
    v23 = v13;
    v24 = v22;
    if ( !v13 )
      v23 = *((_QWORD *)this + 5);
    v25 = DWORD1(v51) / *(_DWORD *)(v23 + 772);
    if ( !v13 )
      v13 = *((_QWORD *)this + 5);
    v26 = HIDWORD(v51) / *(_DWORD *)(v13 + 772);
    *((_BYTE *)this + 49) = 1;
    v27 = v26;
    memset_0((char *)this + 131, 0, 0x51uLL);
    v28 = v21;
    v29 = v27 + 1;
    v30 = v25;
    v53 = v29;
    v52 = v24 + 1;
    v31 = 9 * v25;
    v54 = v25;
    v32 = (char *)this + 9 * v25 + 131;
    v48 = v32;
    v33 = 8 * (v21 + v31) + 120;
    *(_QWORD *)&v51 = v33;
LABEL_27:
    v34 = *((_QWORD *)this + 4);
    if ( !v34 )
      v34 = *((_QWORD *)this + 5);
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(v34 + 784) + 32LL), UserRequest, 0, 0, 0LL);
    v35 = v52;
    v36 = v30;
    v37 = v53;
    v38 = v32;
    while ( v36 < v37 )
    {
      v39 = v28;
      if ( v28 < v35 )
      {
        v40 = v33;
        while ( 1 )
        {
          v41 = *((_QWORD *)this + 4);
          if ( !v41 )
            v41 = *((_QWORD *)this + 5);
          if ( !EngAcquireSemaphoreNoWait(*(HSEMAPHORE *)(v40 + v41)) )
            break;
          v38[v39] = 1;
          v40 += 8LL;
          v35 = v52;
          if ( ++v39 >= v52 )
          {
            v37 = v53;
            goto LABEL_38;
          }
        }
        v42 = 760LL;
        v43 = (char *)this + 211;
        do
        {
          v44 = 9LL;
          do
          {
            if ( *v43 == 1 )
            {
              v45 = *((_QWORD *)this + 4);
              if ( !v45 )
                v45 = *((_QWORD *)this + 5);
              EngReleaseSemaphore(*(HSEMAPHORE *)(v42 + v45));
              *v43 = 0;
            }
            v42 -= 8LL;
            --v43;
            --v44;
          }
          while ( v44 );
        }
        while ( v42 >= 184 );
        v46 = (struct _PANDEV *)*((_QWORD *)this + 4);
        if ( !v46 )
          v46 = (struct _PANDEV *)*((_QWORD *)this + 5);
        ShadowUnLockWait(v46);
        memset_0((char *)this + 131, 0, 0x51uLL);
        v30 = v54;
        v32 = v48;
        v33 = v51;
        goto LABEL_27;
      }
LABEL_38:
      ++v36;
      v33 += 72LL;
      v38 += 9;
    }
    v47 = *((_QWORD *)this + 4);
    if ( !v47 )
      v47 = *((_QWORD *)this + 5);
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(v47 + 784) + 32LL), 0);
  }
}
