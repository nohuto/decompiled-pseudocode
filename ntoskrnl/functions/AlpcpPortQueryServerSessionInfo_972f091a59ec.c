__int64 __fastcall AlpcpPortQueryServerSessionInfo(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rax
  _QWORD *v8; // rsi
  signed __int64 *v9; // rdi
  _DWORD *v10; // rbx
  int v11; // edi
  int SessionId; // esi
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v7 = AlpcpReferenceConnectedPort(a1);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 3221225485LL;
  v9 = (signed __int64 *)(v7 + 352);
  ExAcquirePushLockSharedEx(v7 + 352, 0LL);
  v10 = 0LL;
  if ( (v8[3] & 1) == 0 )
    v10 = (_DWORD *)v8[3];
  if ( v10 )
    ObfReferenceObjectWithTag(v10, 0x63706C41u);
  if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v9);
  KeAbPostRelease((ULONG_PTR)v9);
  ObfDereferenceObject(v8);
  if ( !v10 )
    return 3221225485LL;
  v11 = v10[272];
  SessionId = MmGetSessionIdEx((__int64)v10);
  ObfDereferenceObjectWithTag(v10, 0x63706C41u);
  result = a3 < 8 ? 0xC0000004 : 0;
  if ( a3 >= 8 )
  {
    *a2 = SessionId;
    a2[1] = v11;
  }
  if ( a4 )
    *a4 = 8;
  return result;
}
