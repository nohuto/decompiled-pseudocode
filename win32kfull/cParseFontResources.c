__int64 __fastcall cParseFontResources(__int64 a1, _QWORD *a2, _QWORD *a3, PVOID *a4)
{
  _QWORD *v5; // r14
  _QWORD *v6; // r12
  __int64 v8; // r13
  __int64 v9; // rcx
  int v11; // edi
  _QWORD *v12; // rax
  unsigned __int16 *v13; // r12
  signed int i; // r14d
  void *Resource; // rax
  _QWORD *v16; // rdx
  unsigned int v17[4]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v19; // [rsp+58h] [rbp-60h]
  unsigned __int16 *v20; // [rsp+60h] [rbp-58h]
  __int64 v21; // [rsp+68h] [rbp-50h]
  _QWORD *v22; // [rsp+70h] [rbp-48h]

  v5 = a3;
  v6 = a2;
  v18 = 0LL;
  *a2 = 0LL;
  *a3 = 0LL;
  v8 = a1 + 16;
  v21 = a1 + 16;
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)v9 == 23117 && *(_DWORD *)(v9 + 60) > *(_DWORD *)(a1 + 24) )
    return 0LL;
  if ( (int)LdrResFindResourceDirectory(v9 | 1, 8LL, 0LL, &v18, 0LL, 0LL, 0) < 0 )
    return 0LL;
  v11 = *(unsigned __int16 *)(v18 + 14);
  if ( !*(_WORD *)(v18 + 14) )
    return 0LL;
  if ( a4 )
  {
    v12 = EngAllocMem(1u, 8 * v11, 0x64666D42u);
    v19 = v12;
    *a4 = v12;
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v18 + 16);
      for ( i = 0; ; ++i )
      {
        v20 = v13;
        v17[1] = i;
        if ( i >= v11 )
          break;
        v17[0] = 0;
        Resource = pvFindResource(
                     (void *)(*(_QWORD *)v8 + 1LL),
                     (void *)(*(_QWORD *)v8 + *(unsigned int *)(a1 + 24)),
                     *v13,
                     8,
                     v17);
        v16 = v19;
        *v19 = Resource;
        v19 = v16 + 1;
        v22 = v16 + 1;
        if ( !Resource )
        {
          v11 = 0;
          v17[2] = 0;
          break;
        }
        v13 += 4;
      }
      v5 = a3;
      v6 = a2;
      goto LABEL_14;
    }
    return 0LL;
  }
LABEL_14:
  if ( v11 <= 0 )
  {
    if ( a4 )
    {
      EngFreeMem(*a4);
      *a4 = 0LL;
    }
  }
  else
  {
    *v6 = *(_QWORD *)v8;
    *v5 = *(unsigned int *)(a1 + 24);
  }
  return (unsigned int)v11;
}
