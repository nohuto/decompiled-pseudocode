// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_LINEAR_POOL::DefragmentRange(VIDMM_LINEAR_POOL *this, struct VIDMM_DEFRAGMENT_ARGS *a2)
{
  unsigned __int64 *v3; // r13
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  int v6; // r12d
  _QWORD *v7; // r8
  __int64 v8; // rbx
  _QWORD *v9; // r14
  __int64 *v10; // rsi
  _QWORD *v11; // r15
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  char v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 *v25; // rcx
  int v26; // eax
  unsigned __int64 v27; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+98h] [rbp+10h]
  char v30; // [rsp+98h] [rbp+10h]
  unsigned __int64 v31; // [rsp+A0h] [rbp+18h]
  char *v32; // [rsp+A8h] [rbp+20h]

  v3 = (unsigned __int64 *)this;
  v4 = *(_QWORD *)a2;
  v31 = v4;
  v5 = *((_QWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 4);
  v27 = v5;
  if ( v4 == v5 )
  {
    v8 = v29;
  }
  else
  {
    v7 = (_QWORD *)((char *)this + 72);
    v8 = v4;
    v32 = (char *)this + 72;
    if ( v6 )
    {
      v8 = *((_QWORD *)a2 + 1);
      v9 = (_QWORD *)*((_QWORD *)this + 10);
    }
    else
    {
      v9 = (_QWORD *)*v7;
    }
    if ( v9 != v7 )
    {
      while ( 1 )
      {
        v10 = v9 - 5;
        v11 = v9;
        if ( v6 )
          v9 = (_QWORD *)v9[1];
        else
          v9 = (_QWORD *)*v9;
        v12 = *v10 + v10[1];
        if ( v12 > v4 )
        {
          if ( *v10 < v5 )
          {
            v14 = *v10 + v10[1];
            if ( v6 )
              v14 = *v10;
            *((_QWORD *)a2 + 10) = v14;
            if ( *((_BYTE *)v10 + 56) == 2 )
            {
              if ( v12 == v5 )
              {
                v8 = v5;
                if ( *v10 == v4 )
                  goto LABEL_70;
              }
              v21 = *v11;
              if ( *(_QWORD **)(*v11 + 8LL) != v11 )
                goto LABEL_68;
              v22 = (_QWORD *)v11[1];
              if ( (_QWORD *)*v22 != v11
                || (*v22 = v21,
                    *(_QWORD *)(v21 + 8) = v22,
                    v23 = v10 + 3,
                    *v11 = 0LL,
                    v10[6] = 0LL,
                    v24 = v10[3],
                    *(__int64 **)(v24 + 8) != v10 + 3)
                || (v25 = (__int64 *)v10[4], (_QWORD *)*v25 != v23) )
              {
LABEL_68:
                __fastfail(3u);
              }
              *v25 = v24;
              *(_QWORD *)(v24 + 8) = v25;
              *v23 = 0LL;
              v10[4] = 0LL;
              VIDMM_LINEAR_POOL::FreeBlock((VIDMM_LINEAR_POOL *)v3, (struct _VIDMM_POOL_BLOCK *)v10);
              v7 = v3 + 9;
              goto LABEL_65;
            }
            if ( *((_BYTE *)v10 + 56) == 3 || *((_BYTE *)v10 + 56) == 4 )
            {
              if ( !(*((unsigned __int8 (__fastcall **)(__int64))a2 + 4))(v10[2]) )
              {
                v7 = v3 + 9;
LABEL_34:
                if ( v6 )
                  v8 = *v10;
                else
                  v8 = *v10 + v10[1];
                goto LABEL_65;
              }
            }
            else
            {
              if ( *((_BYTE *)v10 + 56) == 5 || (unsigned int)*((unsigned __int8 *)v10 + 56) - 6 < 2 )
                goto LABEL_34;
              if ( g_IsInternalRelease )
              {
                g_DxgMmsBugcheckExportIndex = 1;
                WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
              }
            }
            v15 = v10[2];
            v16 = 0;
            v30 = 0;
            if ( !(*((unsigned __int8 (__fastcall **)(__int64))a2 + 5))(v15) )
              goto LABEL_41;
            if ( v6 )
            {
              if ( v8 - v10[1] >= v12 )
                goto LABEL_41;
              if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
              {
                v8 = v12;
                goto LABEL_41;
              }
            }
            else
            {
              if ( v8 + v10[1] <= (unsigned __int64)*v10 )
              {
LABEL_41:
                v17 = (*((__int64 (__fastcall **)(__int64))a2 + 7))(v10[2]);
                v18 = v17 - 1LL;
                if ( v17 )
                {
                  v19 = ~v18;
                  if ( v6 )
                    v8 = v10[1] + (v19 & (v8 - v10[1]));
                  else
                    v8 = v19 & (v18 + v8);
                }
                if ( (*((_DWORD *)a2 + 16) & 1) != 0
                  && (*((unsigned __int8 (__fastcall **)(__int64, __int64))a2 + 6))(v15, v18)
                  && (v8 != *v10 || (*((_DWORD *)a2 + 16) & 2) != 0) )
                {
                  *((_QWORD *)a2 + 11) = v15;
                  v3 = (unsigned __int64 *)this;
                  *((_QWORD *)a2 + 12) = *v10;
                  *((_BYTE *)a2 + 112) = v16;
                  *((_QWORD *)a2 + 13) = v8;
                  goto LABEL_70;
                }
                v20 = *v10;
                if ( v6 )
                {
                  v8 -= v10[1];
                  if ( v20 != v8 )
                  {
                    *v10 = v8;
                    v20 = v8;
                    v30 = 1;
                  }
                }
                else
                {
                  if ( v20 != v8 )
                  {
                    *v10 = v8;
                    v20 = v8;
                    v30 = 1;
                  }
                  v8 += v10[1];
                }
                if ( v30 )
                  (*((void (__fastcall **)(__int64, __int64))a2 + 3))(v10[2], v20);
                v3 = (unsigned __int64 *)this;
                v7 = v32;
                goto LABEL_65;
              }
              if ( (*((_DWORD *)a2 + 16) & 1) == 0 )
              {
                v8 = *v10;
                goto LABEL_41;
              }
            }
            v16 = 1;
            goto LABEL_41;
          }
          if ( !v6 )
          {
LABEL_11:
            if ( v9 != v7 )
              goto LABEL_13;
            break;
          }
        }
        else if ( v6 )
        {
          goto LABEL_11;
        }
LABEL_65:
        if ( v9 == v7 )
          break;
        v4 = v31;
        v5 = v27;
      }
    }
    *((_QWORD *)a2 + 10) = v3[1];
LABEL_13:
    v13 = *((_QWORD *)a2 + 1);
    if ( *((_QWORD *)a2 + 10) > v13 )
      *((_QWORD *)a2 + 10) = v13;
  }
LABEL_70:
  v26 = *((_DWORD *)a2 + 16);
  *((_QWORD *)a2 + 9) = v8;
  if ( (v26 & 4) != 0 )
    VIDMM_LINEAR_POOL::PatchGapsWithFreeBlocks((VIDMM_LINEAR_POOL *)v3, v31, v3[1]);
}
