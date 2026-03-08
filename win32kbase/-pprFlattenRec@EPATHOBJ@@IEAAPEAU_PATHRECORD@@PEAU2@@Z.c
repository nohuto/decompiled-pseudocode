/*
 * XREFs of ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C018A9F0
 * Callers:
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C0189E50 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0189EA0 (-bInit@BEZIER32@@QEAAHPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C018A190 (-bNext@BEZIER32@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C018A3B0 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C018A940 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 *     ?vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z @ 0x1C018AD70 (-vInit@BEZIER64@@QEAAXPEAU_POINTFIX@@PEAU_RECTFX@@PEB_J@Z.c)
 */

struct _PATHRECORD *__fastcall EPATHOBJ::pprFlattenRec(EPATHOBJ *this, struct _PATHRECORD *a2)
{
  struct _PATHRECORD *v3; // r13
  struct _PATHRECORD *v6; // rbx
  struct _PATHRECORD **v7; // rax
  struct _POINTFIX *v8; // r14
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  const __int64 *v12; // r12
  __int64 v13; // rax
  struct _PATHRECORD *v14; // rcx
  __int64 v15; // rax
  struct _POINTFIX *v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 i; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // [rsp+20h] [rbp-E0h] BYREF
  struct _PATHRECORD *v23; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v24[168]; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+D8h] [rbp-28h]
  _QWORD v26[4]; // [rsp+E0h] [rbp-20h] BYREF

  v23 = 0LL;
  v22 = 0;
  v3 = 0LL;
  if ( (unsigned int)EPATHOBJ::newpathrec((__int64)this, &v23, &v22, 0x7FFFFFFFu) != 1 )
    return 0LL;
  v6 = v23;
  *((_QWORD *)v23 + 1) = *((_QWORD *)a2 + 1);
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 4) = *((_DWORD *)a2 + 4) & 0xFFFFFFEF;
  v7 = (struct _PATHRECORD **)*((_QWORD *)v6 + 1);
  if ( v7 )
    *v7 = v6;
  else
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v6;
  v8 = (struct _POINTFIX *)((char *)a2 + 24);
  if ( (*((_DWORD *)a2 + 4) & 1) != 0 )
  {
    v9 = (char *)a2 + 56;
    *((struct _POINTFIX *)v6 + (unsigned int)(*((_DWORD *)v6 + 5))++ + 3) = *v8;
    goto LABEL_13;
  }
  v9 = (char *)a2 + 24;
  v10 = 1LL;
  v26[0] = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL * (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 20LL) - 1) + 24);
  do
  {
    if ( v9 >= (char *)a2 + 8 * *((unsigned int *)a2 + 5) + 24 )
    {
      a2 = *(struct _PATHRECORD **)a2;
      v9 = (char *)a2 + 24;
    }
    v11 = *(_QWORD *)v9;
    v9 += 8;
    v26[v10++] = v11;
  }
  while ( v10 < 4 );
LABEL_30:
  v8 = (struct _POINTFIX *)v26;
  while ( 1 )
  {
LABEL_13:
    --*((_DWORD *)this + 1);
    v12 = gpeqErrorLow;
    if ( (unsigned int)BEZIER32::bInit((BEZIER32 *)v24, v8, 0LL) )
    {
      v25 = 1;
    }
    else
    {
      v25 = 0;
      BEZIER64::vInit((BEZIER64 *)v24, v8, 0LL, v12);
    }
    do
    {
      if ( *((_DWORD *)v6 + 5) >= v22 )
      {
        *((_DWORD *)v6 + 4) &= 0xFFFFFFF5;
        v13 = *((unsigned int *)v6 + 5);
        v23 = 0LL;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = (char *)v6 + 8 * v13 + 24;
        if ( (unsigned int)EPATHOBJ::newpathrec((__int64)this, &v23, &v22, 0x7FFFFFFFu) != 1 )
          goto LABEL_32;
        v14 = v23;
        *((_QWORD *)v23 + 1) = v6;
        *(_QWORD *)v6 = v14;
        v6 = v14;
        *((_DWORD *)v14 + 5) = 0;
        *((_DWORD *)v14 + 4) = *((_DWORD *)a2 + 4) & 0xFFFFFFEA;
      }
      ++*((_DWORD *)this + 1);
      v15 = *((unsigned int *)v6 + 5);
      *((_DWORD *)v6 + 5) = v15 + 1;
      v16 = (struct _POINTFIX *)((char *)v6 + 8 * v15 + 24);
      if ( v25 )
        v17 = BEZIER32::bNext((BEZIER32 *)v24, v16);
      else
        v17 = BEZIER64::bNext((BEZIER64 *)v24, v16);
    }
    while ( v17 );
    v18 = ((__int64)a2 + 8LL * *((unsigned int *)a2 + 5) + 24 - (__int64)v9) >> 3;
    if ( !(_DWORD)v18 )
      break;
    v8 = (struct _POINTFIX *)(v9 - 8);
    if ( (unsigned int)v18 < 3 )
    {
      v9 -= 8;
      for ( i = 0LL; i < 4; ++i )
      {
        if ( v9 >= (char *)a2 + 8 * *((unsigned int *)a2 + 5) + 24 )
        {
          a2 = *(struct _PATHRECORD **)a2;
          v9 = (char *)a2 + 24;
        }
        v20 = *(_QWORD *)v9;
        v9 += 8;
        v26[i] = v20;
      }
      goto LABEL_30;
    }
    v9 += 24;
  }
  v3 = v6;
LABEL_32:
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = (char *)v6 + 8 * *((unsigned int *)v6 + 5) + 24;
  v21 = *(_QWORD *)a2;
  *(_QWORD *)v6 = *(_QWORD *)a2;
  if ( v21 )
    *(_QWORD *)(v21 + 8) = v6;
  else
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v6;
  return v3;
}
