void __fastcall CParallelModeGroup::SyncLockTargets(CParallelModeGroup *this, char a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  _BYTE v8[80]; // [rsp+20h] [rbp-68h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 2);
  v4 = (__int64 *)*((_QWORD *)this + 3);
  while ( v2 != v4 )
  {
    v5 = *v2;
    v6 = *v2 + *(int *)(*(_QWORD *)(*v2 + 8) + 12LL) + 8LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 48LL))(v6, v8);
    LOBYTE(v7) = a2;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, v7, 1LL);
    ++v2;
  }
}
