/*
 * XREFs of ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0080800
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00808F0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C008092C (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall ForegroundBoost::UpdateProcessPriorityForSpinning(ForegroundBoost *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // r9
  int v4; // ecx
  __int64 v5; // r8
  int v6; // edx
  __int64 i; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v8, (struct _EX_PUSH_LOCK *)&unk_1C02970E0);
  v3 = *((_QWORD *)this + 53);
  if ( _bittest((const signed __int32 *)this + 122, 0xAu) )
  {
    v4 = *(_DWORD *)(v3 + 12);
    if ( (v4 & 0x800) == 0 )
    {
      *(_DWORD *)(v3 + 12) = v4 | 0x800;
      if ( (*(_DWORD *)(*((_QWORD *)this + 53) + 820LL) & 0x60000) == 0x20000 )
      {
        v5 = 2LL;
LABEL_5:
        anonymous_namespace_::SetForegroundPriorityProcess(v3, this, v5);
      }
    }
  }
  else
  {
    v6 = *(_DWORD *)(v3 + 12);
    if ( (v6 & 0x800) != 0 )
    {
      for ( i = *(_QWORD *)(v3 + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( _bittest((const signed __int32 *)(i + 488), 0xAu) )
          goto LABEL_6;
      }
      *(_DWORD *)(v3 + 12) = v6 & 0xFFFFF7FF;
      if ( (*(_DWORD *)(*((_QWORD *)this + 53) + 820LL) & 0x60000) == 0x40000 )
      {
        v5 = 1LL;
        goto LABEL_5;
      }
    }
  }
LABEL_6:
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
}
