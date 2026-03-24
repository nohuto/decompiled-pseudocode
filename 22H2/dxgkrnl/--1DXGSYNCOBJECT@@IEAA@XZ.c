/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1C0124A94
 * Callers:
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C012489C (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this, __int64 a2)
{
  bool v2; // di
  void *v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)this + 48) - 5) <= 1 )
  {
    if ( (*((_BYTE *)this + 196) & 1) == 0 )
      v2 = *((_BYTE *)this + 280) != 0;
    Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
    LOBYTE(v6) = v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(*((_QWORD *)Global + 28) + 8LL) + 928LL))(
      (char *)this + 120,
      v6);
  }
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( *((_DWORD *)this + 18) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v7 + 24) = 1601LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_DWORD *)this + 6) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v8 + 24) = 1602LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_QWORD *)this + 6) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v9 + 24) = 641LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((_DWORD *)this + 14) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4, a2);
    *(_QWORD *)(v10 + 24) = 642LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *((_QWORD *)this + 2) = 0LL;
}
