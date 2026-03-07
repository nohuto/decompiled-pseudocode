void __fastcall vSrcTranCopyS8D32Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // rdi
  const unsigned __int8 *v14; // r15
  unsigned int *v15; // r14
  unsigned int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // esi
  char v20; // di
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rcx
  const unsigned __int8 *v24; // rdi
  unsigned int *v25; // rbx
  unsigned int *v26; // rsi
  __int64 v27; // rax
  unsigned int v28; // r14d
  __int64 v29; // r15
  __int64 v30; // r9
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // edx
  unsigned int v34; // r8d
  int v35; // ecx
  unsigned int v36; // edx
  __int64 v37; // [rsp+30h] [rbp-98h]
  int v38; // [rsp+50h] [rbp-78h] BYREF
  int v39; // [rsp+54h] [rbp-74h]
  int v40; // [rsp+58h] [rbp-70h]
  int v41; // [rsp+5Ch] [rbp-6Ch]
  unsigned int v42; // [rsp+60h] [rbp-68h]
  int v43; // [rsp+64h] [rbp-64h]
  int v44; // [rsp+68h] [rbp-60h]
  int v45; // [rsp+6Ch] [rbp-5Ch]
  int v46; // [rsp+70h] [rbp-58h]
  int v47; // [rsp+74h] [rbp-54h]
  int v48; // [rsp+78h] [rbp-50h]
  int v49; // [rsp+7Ch] [rbp-4Ch]
  __int64 v50; // [rsp+80h] [rbp-48h]
  __int64 v51; // [rsp+88h] [rbp-40h]
  const unsigned __int8 *v52; // [rsp+D0h] [rbp+8h]
  unsigned int *v54; // [rsp+E8h] [rbp+20h]
  unsigned int v55; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  memset_0(&v38, 0, 0x40uLL);
  v55 = a6 - a5;
  v14 = &a1[v12];
  v52 = v14;
  v15 = (unsigned int *)&a4[4 * a5];
  v54 = v15;
  v16 = *v15;
  v18 = *(_QWORD *)(SGDGetSessionState(v17) + 32);
  v37 = v18;
  if ( *(_QWORD *)a11 == *(_QWORD *)(v18 + 464) && v16 == *(_DWORD *)(v18 + 476) )
  {
    v19 = a9;
    if ( a9 == *(_DWORD *)(v18 + 472) && *(_DWORD *)(v18 + 8584) == *(_DWORD *)(v18 + 484) )
    {
      v20 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v19 = a9;
  }
  v20 = 0;
LABEL_6:
  vGetBlendInfo(4u, a11, v19, (struct BLENDINFO *)&v38);
  if ( !v20 )
    vClearTypeLookupTableLoop(4LL, a11, (struct BLENDINFO *)&v38, v19, v16);
  v21 = v37;
  v22 = v51;
  v23 = a8;
  while ( (_DWORD)v23 )
  {
    v24 = v14;
    v25 = v15;
    v26 = &v15[v55];
    while ( v25 < v26 )
    {
      v27 = *v24;
      if ( (_BYTE)v27 )
      {
        if ( (_BYTE)v27 == 114 )
        {
          *v25 = a9;
        }
        else
        {
          v28 = *v25;
          v29 = 4 * v27;
          if ( *v25 == v16 )
          {
            *v25 = *(_DWORD *)(v29 + v21);
          }
          else
          {
            v30 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v23) + 32) + 8592LL);
            v31 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v28 & v44) << v38) >> v39) + v50);
            v32 = v44 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v31
                                                                          + ((dword_1C0319240[*(unsigned __int8 *)(v30 + v29)]
                                                                            * (v47 - v31)
                                                                            + 0x80000) >> 20))
                                                           + v22) << v39) >> v38);
            v33 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v28 & v45) << v40) >> v41) + v50);
            v22 = v51;
            v34 = v45 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v33
                                                                          + ((dword_1C0319240[*(unsigned __int8 *)(v30 + v29 + 1)]
                                                                            * (v48 - v33)
                                                                            + 0x80000) >> 20))
                                                           + v51) << v41) >> v40) | v32;
            v35 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((v28 & v46) << v42) >> v43) + v50);
            v36 = *(unsigned __int8 *)((unsigned int)(v35
                                                    + ((dword_1C0319240[*(unsigned __int8 *)(v30 + v29 + 2)]
                                                      * (v49 - v35)
                                                      + 0x80000) >> 20))
                                     + v51) << v43;
            v23 = v42;
            *v25 = v46 & (v36 >> v42) | v34;
            v21 = v37;
          }
        }
      }
      ++v25;
      ++v24;
    }
    v23 = --a8;
    v14 = &v52[a3];
    v52 = v14;
    v15 = (unsigned int *)((char *)v54 + a7);
    v54 = v15;
  }
}
