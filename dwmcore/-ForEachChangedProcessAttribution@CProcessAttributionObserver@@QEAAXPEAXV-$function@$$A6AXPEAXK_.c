__int64 __fastcall CProcessAttributionObserver::ForEachChangedProcessAttribution(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v11[56]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+58h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a3 + 56);
  v12 = 0LL;
  if ( v5 )
    v12 = (**v5)(v5, v11);
  result = CProcessAttributionManager::EnumerateChangedProcessAttributions(v3, a1, a2, v11);
  v10 = *(_QWORD *)(a3 + 56);
  if ( v10 )
  {
    LOBYTE(v9) = v10 != a3;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v9);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return result;
}
