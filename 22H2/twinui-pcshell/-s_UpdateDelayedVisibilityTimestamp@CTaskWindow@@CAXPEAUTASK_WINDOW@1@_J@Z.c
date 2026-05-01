/*
 * XREFs of ?s_UpdateDelayedVisibilityTimestamp@CTaskWindow@@CAXPEAUTASK_WINDOW@1@_J@Z @ 0x1801F65DC
 * Callers:
 *     ?SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z @ 0x1801F5F60 (-SendVisibilityChanged@CTaskWindow@@UEAAX_J@Z.c)
 *     ?s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z @ 0x1801F64A0 (-s_SetWindowCloak@CTaskWindow@@CAJPEBUWINDOW_ACTION_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTaskWindow::s_UpdateDelayedVisibilityTimestamp(struct CTaskWindow::TASK_WINDOW *a1, char a2)
{
  if ( (a2 & 2) != 0 )
    QueryUnbiasedInterruptTime((PULONGLONG)a1 + 9);
  else
    *((_QWORD *)a1 + 9) = 0LL;
  *((_BYTE *)a1 + 80) = a2 & 1;
}
