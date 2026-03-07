__int64 __fastcall CComposition::ForEachCursorVisual(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx

  v2 = *(_QWORD *)(a2 + 56);
  v3 = a2;
  if ( v2 )
  {
    LOBYTE(a2) = v2 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, a2);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  return 0LL;
}
