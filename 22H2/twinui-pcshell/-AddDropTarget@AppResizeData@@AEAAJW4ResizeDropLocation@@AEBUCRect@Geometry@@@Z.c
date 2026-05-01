/*
 * XREFs of ?AddDropTarget@AppResizeData@@AEAAJW4ResizeDropLocation@@AEBUCRect@Geometry@@@Z @ 0x180489DC8
 * Callers:
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x180489FE8 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@UResizeDropTarget@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UResizeDropTarget@@@@V?$CSimpleArrayStandardCompareHelper@UResizeDropTarget@@@@V?$CSimpleArrayStandardMergeHelper@UResizeDropTarget@@@@@@QEAAJ_K0@Z @ 0x18048A84C (-_EnsureCapacity@-$CTSimpleArray@UResizeDropTarget@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UResizeDropT.c)
 */

__int64 __fastcall AppResizeData::AddDropTarget(_QWORD *a1, int a2, _OWORD *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  _BYTE v8[20]; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a1 + 7;
  *(_DWORD *)v8 = a2;
  v4 = a1[8];
  v5 = 0;
  *(_OWORD *)&v8[4] = *a3;
  if ( v4 == a1[10]
    && (v5 = CTSimpleArray<ResizeDropTarget,4294967294,CTPolicyCoTaskMem<ResizeDropTarget>,CSimpleArrayStandardCompareHelper<ResizeDropTarget>,CSimpleArrayStandardMergeHelper<ResizeDropTarget>>::_EnsureCapacity(
               a1 + 7,
               v4 + 1),
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
      (const char *)(unsigned int)v5);
  }
  else
  {
    ++v3[1];
    v6 = *v3 + 4 * (5LL * v3[1] - 5);
    if ( v6 )
    {
      *(_OWORD *)v6 = *(_OWORD *)v8;
      *(_DWORD *)(v6 + 16) = *(_DWORD *)&v8[16];
    }
  }
  return (unsigned int)v5;
}
