/*
 * XREFs of FreeDesktop @ 0x1C012BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C004C868 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004EFF4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     CleanupIAMAccess @ 0x1C00D75A0 (CleanupIAMAccess.c)
 *     _SetMagnificationInputTransform @ 0x1C00EB340 (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct _KPROCESS *v5; // rax
  struct _KPROCESS *v6; // rdi
  void *v7; // rdi
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  __int128 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+38h] [rbp-20h]
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  if ( *(_QWORD *)(v1 + 216) )
  {
    v11 = 0LL;
    v13 = 0LL;
    v12 = 0LL;
    v14 = 3;
    SetMagnificationInputTransform((__int128 *)&v11, v3, v4);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1);
  *(_DWORD *)(v1 + 48) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v5 = (struct _KPROCESS *)ReferenceDwmProcess();
  v6 = v5;
  if ( v5 )
  {
    FreeView(v5, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v6);
  }
  v7 = *(void **)(v1 + 128);
  if ( v7 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 128));
    v2 = MmUnmapViewInSessionSpace(v7);
    ObfDereferenceObject(*(PVOID *)(v1 + 120));
  }
  v8 = *(void **)(v1 + 8);
  if ( v8 )
    Win32FreePool(v8);
  UnlockObjectAssignment(v1 + 40);
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v9);
  return v2;
}
