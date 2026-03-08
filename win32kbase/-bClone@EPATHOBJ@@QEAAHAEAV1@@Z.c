/*
 * XREFs of ?bClone@EPATHOBJ@@QEAAHAEAV1@@Z @ 0x1C0180D50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z @ 0x1C018A940 (-newpathrec@EPATHOBJ@@IEAAHPEAPEAU_PATHRECORD@@PEAKK@Z.c)
 */

__int64 __fastcall EPATHOBJ::bClone(EPATHOBJ *this, struct EPATHOBJ *a2)
{
  _QWORD *v3; // r15
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *i; // rdi
  char *v7; // r12
  unsigned int v8; // esi
  int v9; // ebp
  struct _PATHRECORD *v10; // rbx
  unsigned int v11; // r8d
  __int64 v12; // rcx
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  struct _PATHRECORD *v15; // [rsp+58h] [rbp+10h] BYREF

  *(_DWORD *)this = *(_DWORD *)a2;
  v3 = 0LL;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = 0LL;
  v4 = *((_QWORD *)a2 + 1);
  v5 = *((_QWORD *)this + 1);
  v15 = 0LL;
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(v4 + 48);
  *(_QWORD *)(*((_QWORD *)this + 1) + 64LL) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 64LL);
  *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 80LL);
  for ( i = *(__int64 **)(*((_QWORD *)a2 + 1) + 32LL); ; i = (__int64 *)*i )
  {
    if ( !i )
      return 1LL;
    v14 = 0;
    v7 = (char *)(i + 3);
    v8 = *((_DWORD *)i + 5);
    v9 = *((_DWORD *)i + 4);
    if ( v8 )
      break;
LABEL_16:
    ;
  }
  while ( (unsigned int)EPATHOBJ::newpathrec(this, &v15, &v14, v8) )
  {
    v10 = v15;
    v11 = v14;
    *((_DWORD *)v15 + 4) = v9;
    *((_QWORD *)v10 + 1) = v3;
    *(_QWORD *)v10 = 0LL;
    if ( v8 > v11 )
    {
      if ( (v9 & 0x10) != 0 )
      {
        if ( (v9 & 1) != 0 )
          v11 = 3 * ((v11 - 1) / 3) + 1;
        else
          v11 = 3 * (v11 / 3);
        v14 = v11;
      }
      *((_DWORD *)v10 + 5) = v11;
      *((_DWORD *)v10 + 4) &= 0xFFFFFFF5;
      v9 &= 0xFFFFFFFA;
    }
    else
    {
      *((_DWORD *)v10 + 5) = v8;
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = v10;
    if ( v3 )
      *v3 = v10;
    else
      *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v10;
    memmove((char *)v10 + 24, v7, 8LL * *((unsigned int *)v10 + 5));
    v12 = *((unsigned int *)v10 + 5);
    v3 = v10;
    v7 += 8 * v12;
    v8 -= v12;
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = (char *)v10 + 8 * v12 + 24;
    if ( !v8 )
      goto LABEL_16;
  }
  return 0LL;
}
