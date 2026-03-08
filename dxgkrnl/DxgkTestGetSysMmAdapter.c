/*
 * XREFs of DxgkTestGetSysMmAdapter @ 0x1C0358C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

struct DXGPROCESS *__fastcall DxgkTestGetSysMmAdapter(__int64 a1)
{
  unsigned int v1; // ebp
  struct DXGPROCESS *result; // rax
  __int64 v3; // rbx
  struct DXGPROCESS *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // ecx
  _BYTE v14[32]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  result = DXGPROCESS::GetCurrent(a1);
  v3 = 0LL;
  v4 = result;
  if ( !result )
    return result;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v14, result);
  v5 = (v1 >> 6) & 0xFFFFFF;
  if ( (*((_DWORD *)v4 + 106) & 0x100) != 0 )
  {
    v6 = *((_QWORD *)v4 + 76);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v6 + 248));
    if ( (unsigned int)v5 < *(_DWORD *)(v6 + 296) )
    {
      v7 = *(_QWORD *)(v6 + 280);
      v8 = 2 * v5;
      if ( ((v1 >> 25) & 0x60) == (*(_BYTE *)(v7 + 8 * v8 + 8) & 0x60) && (*(_DWORD *)(v7 + 8 * v8 + 8) & 0x2000) == 0 )
      {
        v9 = *(_DWORD *)(v7 + 8 * v8 + 8) & 0x1F;
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            v10 = *(_QWORD *)(v7 + 8 * v8);
            goto LABEL_10;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v10 = 0LL;
LABEL_10:
    _InterlockedDecrement((volatile signed __int32 *)(v6 + 264));
    ExReleasePushLockSharedEx(v6 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  if ( (unsigned int)v5 < *((_DWORD *)v4 + 74) )
  {
    v11 = *((_QWORD *)v4 + 35);
    v12 = 2 * v5;
    if ( ((v1 >> 25) & 0x60) == (*(_BYTE *)(v11 + 8 * v12 + 8) & 0x60) && (*(_DWORD *)(v11 + 8 * v12 + 8) & 0x2000) == 0 )
    {
      v13 = *(_DWORD *)(v11 + 8 * v12 + 8) & 0x1F;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          v10 = *(_QWORD *)(v11 + 8 * v12);
          goto LABEL_19;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v10 = 0LL;
LABEL_19:
  if ( v10 )
    v3 = *(_QWORD *)(v10 + 224);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return (struct DXGPROCESS *)v3;
}
