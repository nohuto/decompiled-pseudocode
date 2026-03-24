/*
 * XREFs of ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C0082CC0
 * Callers:
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C0082C70 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C0082ED0 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0083160 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C0083504 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C0140E30 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C01413E0 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 */

struct _PATHRECORD *__fastcall EPATHOBJ::pprFlattenRec(EPATHOBJ *this, struct _PATHRECORD *a2)
{
  struct _PATHRECORD *v4; // rdi
  unsigned int *v5; // r15
  struct _PATHRECORD **v6; // rax
  struct _POINTFIX *v7; // r14
  char *v8; // rsi
  __int64 v9; // rdx
  struct _POINTFIX v10; // rax
  const __int64 *v11; // r12
  __int64 v12; // rax
  struct _POINTFIX *v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  struct _PATHRECORD *v16; // r8
  __int64 v17; // rax
  __int64 v19; // rax
  struct _PATHRECORD *v20; // rcx
  __int64 i; // rdx
  struct _POINTFIX v22; // rax
  unsigned int v23; // [rsp+20h] [rbp-E0h] BYREF
  struct _PATHRECORD *v24; // [rsp+28h] [rbp-D8h] BYREF
  struct _PATHRECORD *v25; // [rsp+30h] [rbp-D0h]
  _BYTE v26[168]; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v28[4]; // [rsp+F0h] [rbp-10h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  v23 = 0;
  if ( (unsigned int)EPATHOBJ::newpathrec(this, &v24, &v23, 0x7FFFFFFFu) != 1 )
    return 0LL;
  v4 = v24;
  *((_QWORD *)v24 + 1) = *((_QWORD *)a2 + 1);
  v5 = (unsigned int *)((char *)v4 + 20);
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 4) = *((_DWORD *)a2 + 4) & 0xFFFFFFEF;
  v6 = (struct _PATHRECORD **)*((_QWORD *)v4 + 1);
  if ( v6 )
    *v6 = v4;
  else
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v4;
  v7 = (struct _POINTFIX *)((char *)a2 + 24);
  if ( (*((_DWORD *)a2 + 4) & 1) != 0 )
  {
    v8 = (char *)a2 + 56;
    *((_QWORD *)v4 + (*v5)++ + 3) = *((_QWORD *)a2 + 3);
  }
  else
  {
    v8 = (char *)a2 + 24;
    v9 = 1LL;
    v28[0] = *(struct _POINTFIX *)(*((_QWORD *)a2 + 1)
                                 + 8LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 20LL) - 1)
                                 + 24);
    do
    {
      if ( v8 >= (char *)a2 + 8 * *((unsigned int *)a2 + 5) + 24 )
      {
        a2 = *(struct _PATHRECORD **)a2;
        v8 = (char *)a2 + 24;
      }
      v10 = *(struct _POINTFIX *)v8;
      v8 += 8;
      v28[v9++] = v10;
    }
    while ( v9 < 4 );
LABEL_9:
    v7 = v28;
  }
LABEL_10:
  --*((_DWORD *)this + 1);
  v11 = gpeqErrorLow;
  if ( BEZIER32::bInit((BEZIER32 *)v26, v7, 0LL) )
  {
    v27 = 1;
  }
  else
  {
    v27 = 0;
    BEZIER64::vInit((BEZIER64 *)v26, v7, 0LL, v11);
  }
  while ( *v5 < v23 )
  {
LABEL_13:
    ++*((_DWORD *)this + 1);
    v12 = *v5;
    *v5 = v12 + 1;
    v13 = (struct _POINTFIX *)((char *)v4 + 8 * v12 + 24);
    if ( v27 )
      v14 = BEZIER32::bNext((BEZIER32 *)v26, v13);
    else
      v14 = BEZIER64::bNext((BEZIER64 *)v26, v13);
    if ( !v14 )
    {
      v15 = ((__int64)a2 + 8LL * *((unsigned int *)a2 + 5) + 24 - (__int64)v8) >> 3;
      if ( !(_DWORD)v15 )
      {
        v16 = v4;
        goto LABEL_18;
      }
      v7 = (struct _POINTFIX *)(v8 - 8);
      if ( (unsigned int)v15 >= 3 )
      {
        v8 += 24;
        goto LABEL_10;
      }
      v8 -= 8;
      for ( i = 0LL; i < 4; ++i )
      {
        if ( v8 >= (char *)a2 + 8 * *((unsigned int *)a2 + 5) + 24 )
        {
          a2 = *(struct _PATHRECORD **)a2;
          v8 = (char *)a2 + 24;
        }
        v22 = *(struct _POINTFIX *)v8;
        v8 += 8;
        v28[i] = v22;
      }
      goto LABEL_9;
    }
  }
  *((_DWORD *)v4 + 4) &= 0xFFFFFFF5;
  v19 = *v5;
  v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = (char *)v4 + 8 * v19 + 24;
  if ( (unsigned int)EPATHOBJ::newpathrec(this, &v24, &v23, 0x7FFFFFFFu) == 1 )
  {
    v20 = v24;
    *((_QWORD *)v24 + 1) = v4;
    v5 = (unsigned int *)((char *)v20 + 20);
    *(_QWORD *)v4 = v20;
    v4 = v20;
    *((_DWORD *)v20 + 5) = 0;
    *((_DWORD *)v20 + 4) = *((_DWORD *)a2 + 4) & 0xFFFFFFEA;
    goto LABEL_13;
  }
  v16 = v25;
LABEL_18:
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = (char *)v4 + 8 * *((unsigned int *)v4 + 5) + 24;
  v17 = *(_QWORD *)a2;
  *(_QWORD *)v4 = *(_QWORD *)a2;
  if ( v17 )
    *(_QWORD *)(v17 + 8) = v4;
  else
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v4;
  return v16;
}
