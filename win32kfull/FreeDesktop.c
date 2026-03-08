/*
 * XREFs of FreeDesktop @ 0x1C00F2180
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003C250 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C003CD80 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C007F160 (_SetMagnificationInputTransform.c)
 *     CleanupIAMAccess @ 0x1C0092F00 (CleanupIAMAccess.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct _KPROCESS *v6; // rax
  struct _KPROCESS *v7; // rdi
  void *v8; // rdi
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+40h] [rbp-18h]
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  if ( *(_QWORD *)(v1 + 216) )
  {
    v12 = 0LL;
    v14 = 0LL;
    v13 = 0LL;
    v15 = 3;
    SetMagnificationInputTransform((__int128 *)&v12, v3, v4, v5);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1);
  *(_DWORD *)(v1 + 48) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v6 = (struct _KPROCESS *)ReferenceDwmProcess();
  v7 = v6;
  if ( v6 )
  {
    FreeView(v6, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v7);
  }
  v8 = *(void **)(v1 + 128);
  if ( v8 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 128));
    v2 = MmUnmapViewInSessionSpace(v8);
    ObfDereferenceObject(*(PVOID *)(v1 + 120));
  }
  v9 = *(void **)(v1 + 8);
  if ( v9 )
    Win32FreePool(v9);
  UnlockObjectAssignment(v1 + 40);
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v10);
  return v2;
}
