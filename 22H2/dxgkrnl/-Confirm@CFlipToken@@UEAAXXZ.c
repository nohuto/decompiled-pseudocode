/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C00180F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C001E200 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r15
  unsigned int v5; // r13d
  BOOL v6; // ebp
  bool v7; // zf
  __int64 v8; // r12
  int v9; // ebx
  void (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, _DWORD); // rdi
  unsigned int v11; // eax
  __int64 v12; // rax

  v2 = *((_QWORD *)this + 4);
  v4 = *((_QWORD *)this + 5);
  v5 = *((_DWORD *)this + 26);
  v6 = *((_BYTE *)this + 559) == 0;
  v7 = DXGGLOBAL::m_pGlobal == 0LL;
  *((_DWORD *)this + 6) = 4;
  v8 = *(_QWORD *)(v2 + 24);
  if ( v7 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v12 + 24) = 2238LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v9 = *((unsigned __int8 *)this + 556);
  v10 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, _DWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38048) + 120LL);
  v11 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v10(v2, v5, v11, *((_QWORD *)this + 12), 4, v9, v6, v8, v4, 0);
  if ( *((_BYTE *)this + 557) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 71),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147),
      *((_QWORD *)this + 72));
    *((_BYTE *)this + 557) = 0;
  }
}
