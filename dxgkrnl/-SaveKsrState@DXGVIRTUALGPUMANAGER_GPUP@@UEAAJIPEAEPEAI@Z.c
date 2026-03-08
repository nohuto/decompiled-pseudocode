/*
 * XREFs of ?SaveKsrState@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJIPEAEPEAI@Z @ 0x1C036D030
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::SaveKsrState(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  int v8; // ebx
  int v9; // ebp
  unsigned int v10; // r10d
  unsigned int v11; // edx
  unsigned int i; // ecx
  __int64 v13; // r9
  unsigned int v14; // r8d
  unsigned __int64 v15; // rdx
  unsigned int v16; // edi
  unsigned __int8 *v17; // rdx
  unsigned int j; // r8d
  __int64 v19; // r9
  unsigned __int8 *v20; // r10
  unsigned int v21; // ebp
  __int64 v22; // rcx
  __int64 v23; // rcx
  _BYTE v25[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v26; // [rsp+58h] [rbp-40h]
  int v27; // [rsp+60h] [rbp-38h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v26);
  v8 = 0;
  v27 = 2;
  *a4 = 0;
  v9 = *((_DWORD *)this + 4);
  if ( !v9 )
    goto LABEL_21;
  v10 = *((_DWORD *)this + 3);
  v11 = 4;
  for ( i = 0; i < v10; ++i )
  {
    v13 = *((_QWORD *)this[3] + i);
    if ( v13 )
    {
      v14 = v11 + 16;
      if ( v11 + 16 < v11 )
      {
        WdLogSingleEntry1(2LL, -1073741675LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to calculate KSR TotalSize: 0x%I64x",
          -1073741675LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v8 = -1073741675;
        goto LABEL_21;
      }
      v15 = 24LL * *(unsigned int *)(v13 + 168);
      if ( v15 > 0xFFFFFFFF || (v11 = v14 + v15, v11 < v14) )
      {
        v16 = -1073741675;
        WdLogSingleEntry1(2LL, -1073741675LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to calculate KSR TotalSize: 0x%I64x",
          -1073741675LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_22;
      }
    }
  }
  if ( !a3 )
  {
LABEL_20:
    *a4 = v11;
LABEL_21:
    v16 = v8;
    goto LABEL_22;
  }
  if ( v11 <= a2 )
  {
    *(_DWORD *)a3 = v9;
    v17 = a3 + 4;
    for ( j = 0; j < *((_DWORD *)this + 3); ++j )
    {
      v19 = *((_QWORD *)this[3] + j);
      if ( v19 )
      {
        v20 = v17;
        *(_DWORD *)v17 = *(_DWORD *)(v19 + 24);
        v21 = 0;
        *((_DWORD *)v17 + 2) = *(_DWORD *)(v19 + 168);
        v17 += 16;
        if ( *(_DWORD *)(v19 + 168) )
        {
          do
          {
            v22 = v21++;
            v23 = *(_QWORD *)(v19 + 184) + 32 * v22;
            *((_QWORD *)v17 + 1) = *(_QWORD *)(v23 + 8);
            *(_DWORD *)v17 = *(_DWORD *)(v23 + 28);
            *((_DWORD *)v17 + 1) = *(_DWORD *)(v23 + 24);
            *((_QWORD *)v17 + 2) = *(_QWORD *)(v23 + 16);
            v17 += 24;
          }
          while ( v21 < *(_DWORD *)(v19 + 168) );
        }
        *((_DWORD *)v20 + 3) = (_DWORD)v17 - (_DWORD)v20;
      }
    }
    v11 = (_DWORD)v17 - (_DWORD)a3;
    goto LABEL_20;
  }
  v16 = -1073741789;
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return v16;
}
