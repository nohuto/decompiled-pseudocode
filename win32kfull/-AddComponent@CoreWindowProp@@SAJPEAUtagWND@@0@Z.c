__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v12) )
  {
    v5 = v12;
    if ( *(_DWORD *)(v12 + 24) )
    {
      if ( !CoreWindowProp::FindComponent(a1, a2, 0LL) )
      {
        v6 = (_QWORD *)Win32AllocPoolZInit(16LL, 1920430933LL);
        if ( !v6 )
          return (unsigned int)-1073741801;
        *v6 = *(_QWORD *)(v5 + 40);
        v6[1] = a2;
        *(_QWORD *)(v5 + 40) = v6;
        ++*(_DWORD *)(v5 + 48);
      }
      if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
        v11[2] = 0LL;
        v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v11;
        v11[1] = a2;
        HMLockObject(a2);
        xxxSetWindowBand((__int64)a2, 0LL, *(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL), 7);
        ThreadUnlock1(v8, v7, v9);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v12);
      }
      return v3;
    }
  }
  UserSetLastError(5);
  return 3221225506LL;
}
