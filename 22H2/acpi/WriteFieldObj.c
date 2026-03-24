/*
 * XREFs of WriteFieldObj @ 0x1C0024580
 * Callers:
 *     <none>
 * Callees:
 *     ReadSystemMem @ 0x1C0024B7C (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C0024C10 (PushAccFieldObj.c)
 *     AccessFieldData @ 0x1C0031E7C (AccessFieldData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int v6; // edx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r10
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  size_t v14; // rdi
  __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 SystemMem; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v27; // eax
  _QWORD *v28; // rsi
  _QWORD *v29; // rbx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *i; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // r9
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // r9
  _QWORD *v38; // rbx
  __int64 v39; // rdx
  _QWORD *v40; // rax
  int v42; // eax
  int v43; // eax
  __int64 v44; // rax
  void *v45; // rcx
  __int64 v46; // r10
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  int (__fastcall *v50)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v51; // rcx
  _QWORD *v52; // rax
  int v53; // [rsp+70h] [rbp+18h] BYREF
  __int64 v54; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( a3 )
  {
    v7 = 3;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    v7 = v6 & 0xF;
    if ( (v6 & 0xF) == 0 )
    {
      v8 = *(_DWORD *)(a2 + 80);
      v9 = a2 + 96;
      v10 = *(_DWORD *)(a2 + 60);
      while ( v8 < v10 )
      {
        *(_DWORD *)(a2 + 16) = v6 + 1;
        v11 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v11 + 2) == 5 )
        {
          v12 = **(_QWORD **)(v11 + 32);
          if ( *(_WORD *)(v12 + 66) == 132 )
            return (unsigned int)PushAccFieldObj(
                                   a1,
                                   WriteFieldObj,
                                   **(_QWORD **)(v12 + 96) + 64LL,
                                   *(_QWORD *)(**(_QWORD **)(v12 + 96) + 96LL) + 8LL,
                                   v9,
                                   4);
        }
LABEL_7:
        ++*(_DWORD *)(a2 + 16);
        v13 = *(_QWORD *)(a2 + 40);
        if ( v13 >= *(_QWORD *)(a2 + 48) )
        {
          SystemMem = 0LL;
        }
        else
        {
          v14 = *(unsigned int *)(a2 + 56);
          v15 = *(_QWORD *)(a2 + 64);
          v53 = 0;
          v54 = 0LL;
          if ( (unsigned int)v14 > 8 )
          {
            SystemMem = -1LL;
          }
          else
          {
            if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
              && (v50 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable
                                                                                                 + 144)) != 0LL
              && v50(0LL, v13, &v54, (unsigned int)v14, &v53) >= 0 )
            {
              v17 = v54;
            }
            else
            {
              if ( v14 == 1 )
                v16 = 0LL;
              else
                v16 = v13 % v14;
              if ( v16 )
              {
                memmove(&v54, (const void *)v13, v14);
                v17 = v54;
              }
              else
              {
                switch ( (_DWORD)v14 )
                {
                  case 1:
                    v17 = *(unsigned __int8 *)v13;
                    break;
                  case 4:
                    v17 = *(unsigned int *)v13;
                    break;
                  case 2:
                    v17 = *(unsigned __int16 *)v13;
                    break;
                  case 8:
                    v17 = *(_QWORD *)v13;
                    break;
                  default:
                    v17 = -1LL;
                    break;
                }
              }
            }
            SystemMem = v15 & v17;
          }
        }
        if ( *(_DWORD *)(a2 + 80) )
        {
          v19 = SystemMem >> *(_DWORD *)(a2 + 72);
          *(_QWORD *)(a2 + 88) = v19;
          v44 = *(unsigned int *)(a2 + 56);
          *(_QWORD *)(a2 + 40) += v44;
          v45 = *(void **)(a2 + 40);
          if ( (unsigned __int64)v45 >= *(_QWORD *)(a2 + 48) )
          {
            SystemMem = 0LL;
          }
          else
          {
            SystemMem = ReadSystemMem(v45, (unsigned int)v44);
            v19 = *(_QWORD *)(a2 + 88);
          }
        }
        else
        {
          v19 = 0LL;
        }
        v20 = v19 | *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
        v21 = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(a2 + 88) = v20;
        v3 = AccessFieldData(a1, v21, (int)a2 + 96, (int)a2 + 88, 0);
        if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
          return v3;
LABEL_20:
        v22 = *(_DWORD *)(a2 + 56);
        v9 = a2 + 96;
        *(_DWORD *)(a2 + 96) += v22;
        v23 = *(_DWORD *)(a2 + 100);
        v24 = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 100) = 0;
        v25 = v23 - 8 * v22;
        v26 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v25;
        v10 = *(_DWORD *)(a2 + 60);
        v8 = v26 + 1;
        *(_DWORD *)(a2 + 80) = v8;
        if ( v8 >= v10 )
        {
          v27 = v24 + 1;
          goto LABEL_22;
        }
        v6 = v24 - 2;
        *(_DWORD *)(a2 + 16) = v6;
      }
      v27 = v6 + 3;
LABEL_22:
      *(_DWORD *)(a2 + 16) = v27;
LABEL_23:
      v28 = *(_QWORD **)(a1 + 416);
      v29 = v28 - 2;
      *(_QWORD *)(a1 + 416) = v28[1];
      *((_DWORD *)v28 - 4) = 0;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
      v30 = *(v28 - 1);
      v31 = *(_QWORD **)(v30 + 40);
      for ( i = (_QWORD *)(v30 + 40); v31 != i; v31 = (_QWORD *)*v31 )
      {
        if ( v28 < v31 )
          break;
      }
      v33 = (_QWORD *)v31[1];
      if ( (_QWORD *)*v33 == v31 )
      {
        v28[1] = v33;
        *v28 = v31;
        *v33 = v28;
        v31[1] = v28;
        v34 = (_QWORD *)*v28;
        v35 = *v28 - 16LL;
        if ( (_QWORD *)*v28 != i )
        {
          v46 = *((unsigned int *)v29 + 1);
          if ( (_QWORD *)v35 == (_QWORD *)((char *)v29 + v46) )
          {
            *((_DWORD *)v29 + 1) = v46 + *(_DWORD *)(v35 + 4);
            v47 = *v34;
            if ( *(_QWORD **)(*v34 + 8LL) != v34 )
              goto LABEL_71;
            v48 = (_QWORD *)v34[1];
            if ( (_QWORD *)*v48 != v34 )
              goto LABEL_71;
            *v48 = v47;
            *(_QWORD *)(v47 + 8) = v48;
          }
        }
        v36 = (_QWORD *)v29[3];
        v37 = v36 - 2;
        if ( v36 != i )
        {
          v49 = *((unsigned int *)v37 + 1);
          if ( v29 == (_QWORD *)((char *)v37 + v49) )
          {
            *((_DWORD *)v37 + 1) = *((_DWORD *)v29 + 1) + v49;
            v51 = *v28;
            if ( *(_QWORD **)(*v28 + 8LL) != v28 )
              goto LABEL_71;
            v52 = (_QWORD *)v28[1];
            if ( (_QWORD *)*v52 != v28 )
              goto LABEL_71;
            *v52 = v51;
            v29 = v37;
            *(_QWORD *)(v51 + 8) = v52;
          }
        }
        if ( *(_QWORD *)(v30 + 32) > (unsigned __int64)v29 + *((unsigned int *)v29 + 1) )
        {
LABEL_31:
          KeReleaseSpinLock(&gmutHeap, NewIrql);
          return v3;
        }
        *(_QWORD *)(v30 + 32) = v29;
        v38 = v29 + 2;
        v39 = *v38;
        if ( *(_QWORD **)(*v38 + 8LL) == v38 )
        {
          v40 = (_QWORD *)v38[1];
          if ( (_QWORD *)*v40 == v38 )
          {
            *v40 = v39;
            *(_QWORD *)(v39 + 8) = v40;
            goto LABEL_31;
          }
        }
      }
LABEL_71:
      __fastfail(3u);
    }
  }
  v42 = v7 - 1;
  if ( !v42 )
    goto LABEL_7;
  v43 = v42 - 1;
  if ( !v43 )
    goto LABEL_20;
  if ( v43 == 1 )
    goto LABEL_23;
  return v3;
}
