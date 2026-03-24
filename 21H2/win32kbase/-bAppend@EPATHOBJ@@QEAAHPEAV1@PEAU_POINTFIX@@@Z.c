/*
 * XREFs of ?bAppend@EPATHOBJ@@QEAAHPEAV1@PEAU_POINTFIX@@@Z @ 0x1C013CF30
 * Callers:
 *     <none>
 * Callees:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0080694 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C0085B30 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 */

__int64 __fastcall EPATHOBJ::bAppend(EPATHOBJ *this, struct EPATHOBJ *a2, struct _POINTFIX *a3)
{
  __int64 v3; // rax
  __int64 *i; // rdi
  int v8; // ecx
  int v9; // r14d
  unsigned int v10; // edx
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-10h] BYREF
  int v13; // [rsp+24h] [rbp-Ch]
  __int64 *v14; // [rsp+28h] [rbp-8h]
  struct _POINTL v15; // [rsp+68h] [rbp+38h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v13 = 0;
  v15 = 0LL;
  for ( i = *(__int64 **)(v3 + 32); ; i = (__int64 *)*i )
  {
    if ( !i )
    {
      v10 = *(_DWORD *)this & 0xFFFFFFFD;
      *(_DWORD *)this = v10;
      if ( (*(_DWORD *)a2 & 1) != 0 )
        *(_DWORD *)this = v10 | 1;
      result = 1LL;
      *((_DWORD *)this + 1) += *((_DWORD *)a2 + 1);
      return result;
    }
    v8 = *((_DWORD *)i + 4);
    v9 = *((_DWORD *)i + 5);
    v13 = v9;
    v12 = v8 & 0x10;
    v14 = i + 3;
    if ( (v8 & 1) != 0 )
    {
      v15.x = a3->x + *((_DWORD *)i + 6);
      v15.y = a3->y + *((_DWORD *)i + 7);
      EPATHOBJ::bMoveTo(this, 0LL, &v15);
      v13 = --v9;
      v14 = i + 4;
    }
    if ( v9 )
      break;
LABEL_7:
    if ( (i[2] & 8) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) |= 8u;
      *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) |= 1u;
    }
  }
  while ( (unsigned int)EPATHOBJ::createrec(this, 0LL, (struct _PATHDATAL *)&v12, a3) )
  {
    if ( !v13 )
      goto LABEL_7;
  }
  return 0LL;
}
