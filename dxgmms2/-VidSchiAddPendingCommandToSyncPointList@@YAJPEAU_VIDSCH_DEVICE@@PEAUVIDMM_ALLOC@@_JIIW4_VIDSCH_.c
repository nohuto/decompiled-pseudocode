// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v7; // r12
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 Pool2; // rax
  unsigned __int64 v12; // rdx
  _QWORD *v13; // r8
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  _QWORD *v17; // rdi
  _QWORD *v18; // rcx
  unsigned int i; // r9d
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r11
  _QWORD *v22; // r15
  _QWORD *v23; // rax
  __int64 v24; // r11
  _QWORD *v25; // r9
  unsigned __int64 v26; // rbx
  __int64 v27; // rcx
  unsigned __int64 v28; // rbx
  __int64 v29; // rdi
  PVOID v30; // r10
  __int64 v31; // rax
  __int64 v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // r8
  void *v38; // rcx
  _QWORD *v39; // [rsp+40h] [rbp-A8h]
  _BYTE *v40; // [rsp+48h] [rbp-A0h]
  _BYTE v41[16]; // [rsp+50h] [rbp-98h] BYREF
  int v42; // [rsp+60h] [rbp-88h]
  _QWORD *j; // [rsp+68h] [rbp-80h]
  _QWORD *v44; // [rsp+70h] [rbp-78h]
  PVOID P; // [rsp+78h] [rbp-70h]
  _BYTE v46[16]; // [rsp+80h] [rbp-68h] BYREF
  int v47; // [rsp+90h] [rbp-58h]

  v7 = a4;
  v39 = a2;
  v44 = a1;
  if ( !a4 && !a5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 3328LL, a1, a3, a6);
    __debugbreak();
  }
  v9 = a1 + 201;
  v10 = (_QWORD *)a1[202];
  if ( v10 == a1 + 201 || v10[2] != a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 168LL, 1717659990LL);
    v10 = (_QWORD *)Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225495LL;
    }
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 64) = 0;
    *(_QWORD *)(Pool2 + 72) = 0LL;
    *(_DWORD *)(Pool2 + 128) = 0;
    *(_QWORD *)(Pool2 + 16) = a3;
    v14 = (_QWORD *)(Pool2 + 136);
    v14[1] = v14;
    *v14 = v14;
    v10[20] = v10 + 19;
    v10[19] = v10 + 19;
    v15 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v15 != v9 )
      __fastfail(3u);
    *v10 = v9;
    v10[1] = v15;
    *v15 = v10;
    v9[1] = v10;
    if ( (unsigned int)v7 <= 2 )
    {
      v10[3] = v10 + 4;
      if ( (_DWORD)v7 )
        memset(v10 + 4, 0, 16 * v7);
    }
    else
    {
      v12 = 0xFFFFFFFFFFFFFFFFuLL % v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x10 )
      {
        v16 = 0LL;
        goto LABEL_16;
      }
      v10[3] = ExAllocatePool2(64LL, 16 * v7, 895576406LL);
    }
    v16 = (_QWORD *)v10[3];
    *((_DWORD *)v10 + 16) = v7;
LABEL_16:
    if ( a5 <= 2 )
    {
      v10[9] = v10 + 10;
      if ( a5 )
        memset(v10 + 10, 0, 24LL * a5);
    }
    else
    {
      v12 = 0xFFFFFFFFFFFFFFFFuLL % a5;
      if ( 0xFFFFFFFFFFFFFFFFuLL / a5 < 0x18 )
      {
        v17 = 0LL;
        goto LABEL_23;
      }
      v10[9] = ExAllocatePool2(64LL, 24LL * a5, 895576406LL);
    }
    v17 = (_QWORD *)v10[9];
    *((_DWORD *)v10 + 32) = a5;
LABEL_23:
    if ( v16 )
    {
      if ( v17 )
      {
        v18 = (_QWORD *)a1[9];
        for ( i = 0; v18 != a1 + 9; v18 = (_QWORD *)*v18 )
        {
          v13 = v18 - 3;
          v20 = v18[19];
          v21 = v18[17];
          if ( v20 > v21 )
          {
            if ( i > (int)v7 - 1 )
            {
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 281LL, 3328LL, v20, v21, i);
              __debugbreak();
LABEL_45:
              g_DxgMmsBugcheckExportIndex = 1;
              WdLogSingleEntry5(0LL, 281LL, 3328LL, 0LL, 0LL, (unsigned int)v24);
              __debugbreak();
LABEL_46:
              v40 = (_BYTE *)ExAllocatePool2(64LL, 8 * v7, 1717659990LL);
LABEL_49:
              LODWORD(v13) = v7;
              v42 = v7;
              v29 = (__int64)v40;
              v28 = v7;
              if ( (unsigned int)v7 <= 2 )
              {
                P = v46;
                if ( (_DWORD)v7 )
                  memset(v46, 0, 8 * v7);
              }
              else
              {
                v12 = 0xFFFFFFFFFFFFFFFFuLL % v7;
                if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
                {
                  v30 = 0LL;
                  goto LABEL_56;
                }
                P = (PVOID)ExAllocatePool2(64LL, 8 * v7, 1717659990LL);
              }
              v30 = P;
              v47 = v7;
              goto LABEL_56;
            }
            v12 = 2LL * i++;
            v16[v12 + 1] = v20;
            v16[v12] = v13;
          }
        }
        v22 = (_QWORD *)a1[11];
        v23 = a1 + 11;
        v24 = 0LL;
        for ( j = a1 + 11; v22 != v23; v22 = (_QWORD *)*v22 )
        {
          v25 = (_QWORD *)v22[4];
          if ( v25 != v22 + 4 )
          {
            do
            {
              v13 = v25 - 1;
              if ( *((_DWORD *)v25 + 35) )
              {
                v26 = v13[9];
                if ( v26 > v13[8] || v13[12] > v13[11] )
                {
                  if ( (unsigned int)v24 > a5 - 1 )
                    goto LABEL_45;
                  v27 = 3 * v24;
                  v17[v27 + 1] = v26;
                  v17[v27 + 2] = v13[12];
                  v17[3 * v24] = v13;
                  v24 = (unsigned int)(v24 + 1);
                }
              }
              v25 = (_QWORD *)*v25;
            }
            while ( v25 != v22 + 4 );
            v23 = j;
          }
        }
        if ( bTracingEnabled )
        {
          v40 = 0LL;
          v42 = 0;
          P = 0LL;
          v47 = 0;
          if ( (unsigned int)v7 <= 2 )
          {
            v40 = v41;
            if ( (_DWORD)v7 )
              memset(v41, 0, 8 * v7);
            goto LABEL_49;
          }
          v12 = 0xFFFFFFFFFFFFFFFFuLL % v7;
          v28 = v7;
          if ( 0xFFFFFFFFFFFFFFFFuLL / v7 >= 8 )
            goto LABEL_46;
          v29 = 0LL;
          v30 = 0LL;
LABEL_56:
          if ( v29 && v30 )
          {
            if ( (_DWORD)v7 )
            {
              v12 = (unsigned __int64)v30;
              do
              {
                v13 = *(_QWORD **)(*v16 + 56LL);
                if ( !v13 || (*(_DWORD *)(*v16 + 112LL) & 0x40) != 0 )
                  v13 = (_QWORD *)*v16;
                *(_QWORD *)(v29 - (_QWORD)v30 + v12) = v13;
                v31 = v16[1];
                v16 += 2;
                *(_QWORD *)v12 = v31;
                v12 += 8LL;
                --v28;
              }
              while ( v28 );
            }
            v32 = v44[1];
            if ( !v32 )
              LODWORD(v32) = (_DWORD)v44;
            if ( (byte_1C00769C1 & 1) != 0 )
              McTemplateK0pxqPR2XR2_EtwWriteTransfer(v10[2], v12, (_DWORD)v13, v32, v10[2], v7, v29, (__int64)v30);
          }
          if ( P != v46 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v47 = 0;
          if ( v40 != v41 )
          {
            if ( v40 )
              ExFreePoolWithTag(v40, 0);
          }
        }
        a2 = v39;
        goto LABEL_75;
      }
      v38 = v16;
    }
    else
    {
      if ( !v17 )
      {
LABEL_87:
        _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v10, v12);
        WdLogSingleEntry0(3LL);
        return 3221225495LL;
      }
      v38 = v17;
    }
    ExFreePoolWithTag(v38, 0);
    goto LABEL_87;
  }
LABEL_75:
  if ( !a6 )
  {
    v33 = a2 + 25;
    v34 = (_QWORD *)v10[18];
    if ( (_QWORD *)*v34 == v10 + 17 )
    {
      *v33 = v10 + 17;
      v33[1] = v34;
      *v34 = v33;
      v10[18] = v33;
      return 0LL;
    }
LABEL_80:
    __fastfail(3u);
  }
  if ( a6 == 3 )
  {
    v36 = a2 + 27;
    v37 = (_QWORD *)v10[20];
    if ( (_QWORD *)*v37 != v10 + 19 )
      goto LABEL_80;
    *v36 = v10 + 19;
    a2[28] = v37;
    *v37 = v36;
    v10[20] = v36;
  }
  return 0LL;
}
