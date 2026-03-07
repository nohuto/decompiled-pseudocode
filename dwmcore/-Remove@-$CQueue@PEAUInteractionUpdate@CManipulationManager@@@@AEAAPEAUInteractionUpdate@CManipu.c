__int64 __fastcall CQueue<CManipulationManager::InteractionUpdate *>::Remove(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  __int64 v7; // rax

  v5 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v6 = *(_QWORD **)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(v7 + 8) = a1;
  if ( v6 != (_QWORD *)a1 )
  {
    v5 = v6[2];
    operator delete(v6, 0x18uLL);
    --*(_DWORD *)(a1 + 16);
  }
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 16);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return v5;
}
