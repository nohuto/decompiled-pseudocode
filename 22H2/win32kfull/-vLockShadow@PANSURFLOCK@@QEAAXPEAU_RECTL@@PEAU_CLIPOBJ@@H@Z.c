/*
 * XREFs of ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C029687C
 * Callers:
 *     ??0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z @ 0x1C02943CC (--0PANSURFLOCK@@QEAA@PEAU_PANDEV@@PEAPEAU_SURFOBJ@@PEAU_RECTL@@PEAHPEAU_CLIPOBJ@@@Z.c)
 *     ?PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0295AF0 (-PanSynchronize@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00B121C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B12D0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00B7698 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     ?ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z @ 0x1C0296104 (-ShadowUnLockWait@@YAXPEAU_PANDEV@@@Z.c)
 */

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
  __int64 v17; // rsi
  __int64 v18; // rdi
  char *v19; // r15
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 i; // r14
  __int64 v23; // rdi
  __int64 v24; // rsi
  HSEMAPHORE v25; // rcx
  int v26; // eax
  __int64 j; // rdi
  __int64 v28; // rsi
  char *v29; // r14
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int64 v31; // [rsp+38h] [rbp-28h]
  char *v32; // [rsp+40h] [rbp-20h] BYREF
  int v33; // [rsp+48h] [rbp-18h]
  int v34; // [rsp+4Ch] [rbp-14h]
  __int128 v35; // [rsp+50h] [rbp-10h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+40h]
  __int64 v37; // [rsp+B0h] [rbp+50h]

  v35 = 0LL;
  if ( a3 && a3->iDComplexity )
  {
    top = a3->rclBounds.top;
    left = a2->left;
    if ( a3->rclBounds.left > a2->left )
      left = a3->rclBounds.left;
    LODWORD(v35) = left;
    v7 = a2->top;
    if ( top > v7 )
      v7 = top;
    right = a3->rclBounds.right;
    DWORD1(v35) = v7;
    v9 = a2->right;
    if ( right < v9 )
      v9 = right;
    bottom = a3->rclBounds.bottom;
    DWORD2(v35) = v9;
    v11 = a2->bottom;
    if ( bottom < v11 )
      v11 = bottom;
    HIDWORD(v35) = v11;
  }
  else
  {
    v35 = (__int128)*a2;
  }
  ERECTL::vOrder((ERECTL *)&v35);
  v12 = *((_QWORD *)this + 2);
  v32 = 0LL;
  v13 = *(_QWORD *)(v12 + 64);
  v33 = *(_DWORD *)(v13 + 32);
  v34 = *(_DWORD *)(v13 + 36);
  ERECTL::operator*=((int *)&v35, (int *)&v32);
  memset((char *)this + 24, 0, 0x51uLL);
  if ( !ERECTL::bEmpty((ERECTL *)&v35) )
  {
    v14 = *((_QWORD *)this + 2);
    v15 = *(_DWORD *)(v14 + 768);
    v16 = *(_DWORD *)(v14 + 772);
    v17 = (int)((unsigned int)v35 / v15);
    v30 = v17;
    v18 = (int)(DWORD1(v35) / v16);
    v31 = v18;
    v37 = (int)(HIDWORD(v35) / v16 + 1);
    v36 = (int)(DWORD2(v35) / v15 + 1);
    v19 = (char *)this + 9 * v18 + 24;
    v32 = v19;
    v20 = 8 * (v17 + 9 * v18) + 120;
    *(_QWORD *)&v35 = v20;
LABEL_15:
    KeWaitForSingleObject((PVOID)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), UserRequest, 0, 0, 0LL);
    v21 = v37;
    for ( i = v18; i < v21; ++i )
    {
      v23 = v17;
      if ( v17 < v36 )
      {
        v24 = v20;
        while ( 1 )
        {
          v25 = *(HSEMAPHORE *)(v24 + *((_QWORD *)this + 2));
          v26 = a4 ? EngAcquireSemaphoreSharedNoWait(v25) : EngAcquireSemaphoreNoWait(v25);
          if ( v26 != 1 )
            break;
          v19[v23] = 1;
          v24 += 8LL;
          if ( ++v23 >= v36 )
          {
            v17 = v30;
            v21 = v37;
            goto LABEL_25;
          }
        }
        for ( j = 87LL; j >= 15; j -= 9LL )
        {
          v28 = 8LL;
          v29 = (char *)this + j;
          do
          {
            if ( v29[v28 + 9] == 1 )
            {
              EngReleaseSemaphore(*(HSEMAPHORE *)(*((_QWORD *)this + 2) + 8 * (j + v28)));
              v29[v28 + 9] = 0;
            }
            --v28;
          }
          while ( v28 >= 0 );
        }
        ShadowUnLockWait(*((struct _PANDEV **)this + 2));
        memset((char *)this + 24, 0, 0x51uLL);
        v17 = v30;
        v18 = v31;
        v19 = v32;
        v20 = v35;
        goto LABEL_15;
      }
LABEL_25:
      v20 += 72LL;
      v19 += 9;
    }
    KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(*((_QWORD *)this + 2) + 784LL) + 32LL), 0);
  }
}
