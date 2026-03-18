/*
 * XREFs of ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800E28C4
 * Callers:
 *     ?SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z @ 0x180012BE4 (-SuspendAnimations@CExpressionManager@@QEAAXI_N0@Z.c)
 *     ?FlushChannels@CComposition@@QEAAXXZ @ 0x18004D2E8 (-FlushChannels@CComposition@@QEAAXXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x1800514E4 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800AA314 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801B3CEC (--1CComposition@@MEAA@XZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x1801B509C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x180216E80 (-FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x180223488 (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180027730 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x18011B998 (memcpy_0.c)
 */

void __fastcall DynArrayImpl<1>::ShrinkToSize(__int64 a1, unsigned int a2)
{
  void *v3; // rcx
  unsigned __int64 v4; // r8
  int v5; // eax
  LPVOID v6; // rax

  v3 = *(void **)(a1 + 8);
  if ( *(void **)a1 != v3 )
  {
    v4 = a2 * (unsigned __int64)*(unsigned int *)(a1 + 24);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( *(_DWORD *)(a1 + 24) <= *(_DWORD *)(a1 + 16) )
      {
        memcpy_0(v3, *(const void **)a1, (unsigned int)v4);
        operator delete(*(void **)a1);
        *(_QWORD *)a1 = *(_QWORD *)(a1 + 8);
        v5 = *(_DWORD *)(a1 + 16);
LABEL_6:
        *(_DWORD *)(a1 + 20) = v5;
        return;
      }
      v6 = DefaultHeap::Realloc(*(void **)a1, (unsigned int)v4);
      if ( v6 )
      {
        *(_QWORD *)a1 = v6;
        v5 = *(_DWORD *)(a1 + 24);
        goto LABEL_6;
      }
    }
  }
}
