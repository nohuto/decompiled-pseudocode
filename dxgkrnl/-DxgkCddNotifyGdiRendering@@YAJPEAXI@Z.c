/*
 * XREFs of ?DxgkCddNotifyGdiRendering@@YAJPEAXI@Z @ 0x1C02D9B30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DxgkCddNotifyGdiRendering(struct DXGPROCESS *a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  int v6; // edx
  struct _EX_RUNDOWN_REF *v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  ULONG_PTR Count; // rcx
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v13; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v12, a1);
  v4 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( v4 >= *((_DWORD *)a1 + 74) )
    goto LABEL_7;
  v5 = *((_QWORD *)a1 + 35);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (*(_BYTE *)(v5 + 16LL * v4 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v5 + 16LL * v4 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v6 = *(_DWORD *)(v5 + 16LL * v4 + 8) & 0x1F;
  if ( !v6 )
    goto LABEL_7;
  if ( v6 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v7 = 0LL;
    goto LABEL_8;
  }
  v7 = *(struct _EX_RUNDOWN_REF **)(v5 + 16LL * v4);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v13, v7);
  if ( v13 )
  {
    Count = v13[6].Count;
    if ( Count )
      *(_DWORD *)(Count + 4) &= ~0x400u;
    v9 = 0;
  }
  else
  {
    v8 = v2;
    v9 = -1073741811;
    WdLogSingleEntry2(3LL, v8, -1073741811LL);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v13);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
  return v9;
}
