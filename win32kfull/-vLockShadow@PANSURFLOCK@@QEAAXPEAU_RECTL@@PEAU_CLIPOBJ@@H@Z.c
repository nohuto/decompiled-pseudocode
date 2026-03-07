void __fastcall PANSURFLOCK::vLockShadow(PANSURFLOCK *this, struct _RECTL *a2, struct _CLIPOBJ *a3, int a4)
{
  LONG top; // ecx
  LONG left; // eax
  LONG v7; // eax
  LONG right; // ecx
  LONG v9; // eax
  LONG bottom; // ecx
  LONG v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  __int64 v17; // rdi
  __int64 v18; // rsi
  char *v19; // r15
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  HSEMAPHORE v26; // rcx
  int v27; // eax
  __int64 v28; // rsi
  _BYTE *v29; // rdi
  __int64 v30; // r14
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int64 v32; // [rsp+38h] [rbp-28h]
  char *v33; // [rsp+40h] [rbp-20h] BYREF
  int v34; // [rsp+48h] [rbp-18h]
  int v35; // [rsp+4Ch] [rbp-14h]
  __int128 v36; // [rsp+50h] [rbp-10h] BYREF
  __int64 v37; // [rsp+A0h] [rbp+40h]
  __int64 v38; // [rsp+B0h] [rbp+50h]

  v36 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v36) = left;
    v7 = a2->top;
    if ( top > v7 )
      v7 = top;
    right = a3->rclBounds.right;
    DWORD1(v36) = v7;
    v9 = a2->right;
    if ( right < v9 )
      v9 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v36) = v9;
    v11 = a2->bottom;
    if ( bottom < v11 )
      v11 = bottom;
    HIDWORD(v36) = v11;
  }
  else
  {
    v36 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v36);
  v12 = *((_QWORD *)this + 2);
  v33 = 0LL;
  v13 = *(_QWORD *)(v12 + 64);
  v34 = *(_DWORD *)(v13 + 32);
  v35 = *(_DWORD *)(v13 + 36);
  ERECTL::operator*=((int *)&v36, (int *)&v33);
  memset_0((char *)this + 24, 0, 0x51uLL);
  if ( !ERECTL::bEmpty((ERECTL *)&v36) )
  {
    v14 = *((_QWORD *)this + 2);
    v15 = *(_DWORD *)(v14 + 768);
    v16 = *(_DWORD *)(v14 + 772);
    v17 = (int)((unsigned int)v36 / v15);
    v31 = v17;
    v18 = (int)(DWORD1(v36) / v16);
    v32 = v18;
    v38 = (int)(HIDWORD(v36) / v16 + 1);
    v37 = (int)(DWORD2(v36) / v15 + 1);
    v19 = (char *)this + 9 * v18 + 24;
    v33 = v19;
    v20 = 8 * (v17 + 9 * v18) + 120;
    *(_QWORD *)&v36 = v20;
LABEL_15:
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), UserRequest, 0, 0, 0LL);
    v21 = v37;
    v22 = v18;
    v23 = v38;
    while ( v22 < v23 )
    {
      v24 = v17;
      if ( v17 < v21 )
      {
        v25 = v20;
        while ( 1 )
        {
          v26 = *(HSEMAPHORE *)(v25 + *((_QWORD *)this + 2));
          v27 = a4 ? EngAcquireSemaphoreSharedNoWait(v26) : EngAcquireSemaphoreNoWait(v26);
          if ( v27 != 1 )
            break;
          v19[v24] = 1;
          v25 += 8LL;
          v21 = v37;
          if ( ++v24 >= v37 )
          {
            v17 = v31;
            v23 = v38;
            goto LABEL_25;
          }
        }
        v28 = 760LL;
        v29 = (char *)this + 104;
        do
        {
          v30 = 9LL;
          do
          {
            if ( *v29 == 1 )
            {
              EngReleaseSemaphore(*(HSEMAPHORE *)(v28 + *((_QWORD *)this + 2)));
              *v29 = 0;
            }
            v28 -= 8LL;
            --v29;
            --v30;
          }
          while ( v30 );
        }
        while ( v28 >= 184 );
        ShadowUnLockWait(*((struct _PANDEV **)this + 2));
        memset_0((char *)this + 24, 0, 0x51uLL);
        v17 = v31;
        v18 = v32;
        v19 = v33;
        v20 = v36;
        goto LABEL_15;
      }
LABEL_25:
      ++v22;
      v20 += 72LL;
      v19 += 9;
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), 0);
  }
}
