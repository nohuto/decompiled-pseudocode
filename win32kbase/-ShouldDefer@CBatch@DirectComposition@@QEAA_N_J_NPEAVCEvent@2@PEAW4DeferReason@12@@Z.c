/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C024BE60
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C00991C0 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C0249998 (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ @ 0x1C024BF7C (-ShouldDeferUntilEventsSignaled@CBatch@DirectComposition@@AEAA_NXZ.c)
 */

bool __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        __int64 a2,
        char a3,
        struct DirectComposition::CEvent *a4,
        enum DirectComposition::CBatch::DeferReason *a5)
{
  int v8; // ebx
  struct _KEVENT *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // cl
  bool result; // al

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v8 = 1;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 242LL) )
  {
    v8 = 2;
LABEL_5:
    if ( !a4 )
      goto LABEL_24;
    v9 = (struct _KEVENT *)*((_QWORD *)a4 + 1);
LABEL_23:
    KeSetEvent(v9, 1, 0);
    goto LABEL_24;
  }
  v10 = *((_QWORD *)this + 8);
  if ( v10 && a2 && v10 - a2 > 0 )
  {
    v8 = 3;
    goto LABEL_5;
  }
  if ( *((_QWORD *)this + 5) && *((int *)this + 12) > 0 )
  {
    v8 = 4;
    goto LABEL_24;
  }
  if ( DirectComposition::CBatch::ShouldDeferUntilEventsSignaled(this) )
  {
    v8 = 5;
    if ( !a4 )
      goto LABEL_24;
    goto LABEL_22;
  }
  v11 = *((_QWORD *)this + 12);
  if ( !v11 )
    return 0;
  v12 = *(_BYTE *)(v11 + 33);
  if ( v12 )
  {
    if ( *(int *)(v11 + 36) <= 0 )
      return 0;
  }
  v8 = 6;
  if ( a4 && !v12 )
  {
LABEL_22:
    v9 = (struct _KEVENT *)*((_QWORD *)a4 + 1);
    goto LABEL_23;
  }
LABEL_24:
  if ( a3 )
    *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) = 1;
  result = 1;
  *(_DWORD *)a5 = v8;
  return result;
}
