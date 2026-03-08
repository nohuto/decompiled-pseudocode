/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C00B00E0
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00AFB74 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C00B032C (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        VIDMM_LINEAR_POOL *a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  _QWORD *v11; // r12
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rsi
  _QWORD *v14; // r14
  unsigned __int64 v15; // rdi
  __int64 v16; // r13
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r15
  _QWORD *v19; // r12
  _QWORD *v20; // rbx
  unsigned __int64 *v21; // rsi
  _QWORD *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  bool v31; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-1Ch]
  unsigned __int64 v33; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-8h]
  VIDMM_LINEAR_POOL *v36; // [rsp+B0h] [rbp+40h]
  char v37; // [rsp+C8h] [rbp+58h]

  v37 = a4;
  v36 = a1;
  v11 = (_QWORD *)((char *)a1 + 40);
  v12 = (_QWORD *)*((_QWORD *)a1 + 5);
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( v12 != (_QWORD *)((char *)a1 + 40) )
  {
    v13 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v35 = v13;
    v32 = (a3 + 4095) & 0xFFFFF000;
    if ( a4 )
      goto LABEL_6;
    v12 = (_QWORD *)*((_QWORD *)a1 + 6);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v12 == v11 )
          return 3223191808LL;
LABEL_6:
        v14 = v12 - 3;
        v15 = *(v12 - 3);
        v16 = (__int64)(v12 - 3);
        v17 = v15 + *(v12 - 2);
        v33 = v15;
        v34 = v17;
        if ( !a7 )
          break;
        if ( g_IsInternalReleaseOrDbg )
        {
          v25 = WdLogNewEntry5_WdTrace(a1);
          a4 = v37;
          a1 = v36;
          *(_QWORD *)(v25 + 24) = v14;
        }
        if ( a4 )
        {
          v12 = (_QWORD *)*v12;
          while ( v12 != v11 )
          {
            v23 = v12 - 3;
            if ( *(v12 - 3) != v17 )
              break;
            if ( a7 == 2 || *((_BYTE *)v23 + 56) == 2 || (*((unsigned int (__fastcall **)(_QWORD))a1 + 4))(v23[2]) )
            {
              v17 += v23[1];
              v16 = (__int64)(v12 - 3);
              v34 = v17;
            }
            v12 = (_QWORD *)*v12;
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v23;
            a1 = v36;
          }
        }
        else
        {
          v12 = (_QWORD *)v12[1];
          if ( v12 != v11 )
          {
            do
            {
              v26 = v12 - 3;
              if ( *(v12 - 2) + *(v12 - 3) != v15 )
                break;
              if ( a7 == 2 || *((_BYTE *)v26 + 56) == 2 || (*((unsigned int (__fastcall **)(_QWORD))a1 + 4))(v26[2]) )
              {
                v15 -= v26[1];
                v16 = (__int64)(v12 - 3);
              }
              v12 = (_QWORD *)v12[1];
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v26;
              a1 = v36;
            }
            while ( v12 != v11 );
            v33 = v15;
          }
          v24 = (__int64)v14;
          v14 = (_QWORD *)v16;
          v16 = v24;
        }
        v13 = v35;
LABEL_12:
        if ( g_IsInternalReleaseOrDbg )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
          v27[3] = v17 - v15;
          v27[4] = v14;
          v27[5] = v16;
          v28 = WdLogNewEntry5_WdTrace(v17 - v15);
          *(_QWORD *)(v28 + 24) = v15;
          *(_QWORD *)(v28 + 32) = v17;
        }
        if ( v17 - v15 >= v13 )
        {
          if ( g_IsInternalReleaseOrDbg )
            WdLogNewEntry5_WdTrace(a1);
          v31 = 0;
          VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(a1, &v31, &v33, &v34, v13, v32, v37, a5, a6);
          if ( v31 )
            goto LABEL_4;
          v15 = v33;
          v17 = v34;
        }
        if ( v17 - v15 >= v13 )
        {
          v18 = v15 + v13;
          if ( g_IsInternalReleaseOrDbg )
          {
            v29 = WdLogNewEntry5_WdTrace(a1);
            *(_QWORD *)(v29 + 24) = v15;
            *(_QWORD *)(v29 + 32) = v18;
          }
          v19 = *(_QWORD **)(v16 + 24);
          v20 = v14 + 3;
          while ( v20 != v19 )
          {
            v21 = v20 - 3;
            v20 = (_QWORD *)*v20;
            a1 = (VIDMM_LINEAR_POOL *)(*v21 + v21[1]);
            if ( (unsigned __int64)a1 <= v15 )
            {
              v14 = v20 - 3;
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v21;
            }
            else if ( *v21 >= v18 )
            {
              v16 = v21[4] - 24;
              if ( !g_IsInternalReleaseOrDbg )
                goto LABEL_29;
              *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v21;
              break;
            }
          }
          if ( g_IsInternalReleaseOrDbg )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
            v30[3] = v14;
            v30[4] = v16;
            v30[5] = v15;
            v30[6] = v18;
          }
LABEL_29:
          *a8 = v14;
          *a9 = v16;
          *a10 = v15;
          *a11 = v18;
          return 0LL;
        }
LABEL_4:
        a4 = v37;
        a1 = v36;
      }
      if ( a4 )
        v12 = (_QWORD *)*v12;
      else
        v12 = (_QWORD *)v12[1];
      if ( *((_BYTE *)v14 + 56) == 2 )
      {
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v14;
        goto LABEL_12;
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = v14;
        goto LABEL_4;
      }
    }
  }
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(a1);
  return 3223191808LL;
}
