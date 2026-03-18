/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C01AC240
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall EditionIsUsermodeRIMAccessAllowed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  char v14; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14, a2, a3, a4);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6);
  v10 = IsProcessDwm(CurrentProcess);
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v10;
}
