/*
 * XREFs of FreeDesktop @ 0x1C011D500
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C007A09C (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C0098370 (_SetMagnificationInputTransform.c)
 *     CleanupIAMAccess @ 0x1C00F1920 (CleanupIAMAccess.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdx
  struct _KPROCESS *v4; // rax
  struct _KPROCESS *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  if ( *(_QWORD *)(v1 + 216) )
  {
    v10 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v13 = 3;
    SetMagnificationInputTransform((__int128 *)&v10, v3);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1);
  *(_DWORD *)(v1 + 48) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v4 = (struct _KPROCESS *)ReferenceDwmProcess();
  v5 = v4;
  if ( v4 )
  {
    FreeView(v4, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v5);
  }
  v6 = *(void **)(v1 + 128);
  if ( v6 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 128));
    v2 = MmUnmapViewInSessionSpace(v6);
    ObfDereferenceObject(*(PVOID *)(v1 + 120));
  }
  v7 = *(_QWORD *)(v1 + 8);
  if ( v7 )
    Win32FreePool(v7);
  UnlockObjectAssignment(v1 + 40);
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v8);
  return v2;
}
