/*
 * XREFs of ?DeferPointerCursorOperation@@YAXPEBUtagPOINTER_INFO@@AEBUtagPOINTERCURSORDATA@@@Z @ 0x1C0142F44
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01AE304 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E6A40 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall DeferPointerCursorOperation(const struct tagPOINTER_INFO *a1, const struct tagPOINTERCURSORDATA *a2)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  signed __int64 v9; // r8
  _DWORD v10[28]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v11[7]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v12[128]; // [rsp+100h] [rbp+0h] BYREF

  v4 = ValidateHwnd(*((_QWORD *)a1 + 3));
  if ( v4 )
  {
    v5 = INPUTDEST_FROM_PWND(v10, v4);
    v11[0] = *v5;
    v11[1] = v5[1];
    v11[2] = v5[2];
    v11[3] = v5[3];
    v11[4] = v5[4];
    v11[5] = v5[5];
    v11[6] = v5[6];
    CInputDest::CInputDest((CInputDest *)v12, (const struct tagINPUTDEST *)v11);
    UpdateGlobalCursorOwner(v12, (char *)a1 + 32);
    CInputDest::~CInputDest((CInputDest *)v12);
  }
  v6 = 0LL;
  while ( 1 )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)&(&Feedback::gppcdFree)[v6], 0LL);
    if ( v7 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 3 )
      return;
  }
  v8 = *((_DWORD *)a2 + 2);
  *(_QWORD *)v7 = *(_QWORD *)a2;
  *(_DWORD *)(v7 + 8) = v8;
  v9 = _InterlockedExchange64((volatile __int64 *)&Feedback::gppcdLatest, v7);
  if ( v9 )
    _InterlockedCompareExchange64(
      (volatile signed __int64 *)&(&Feedback::gppcdFree)[(v9 - (__int64)&Feedback::gpcd) / 0xCuLL],
      v9,
      0LL);
  KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
}
