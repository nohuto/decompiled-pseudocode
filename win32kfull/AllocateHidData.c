__int64 __fastcall AllocateHidData(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a5 )
    v8 = *(_QWORD *)(a5 + 16);
  else
    v8 = PtiKbdFromQ(gpqForeground);
  if ( (int)a3 + 56 < (unsigned int)a3 )
    return 0LL;
  v9 = a3 + 24;
  if ( (int)a3 + 24 < (unsigned int)a3 )
    return 0LL;
  LOBYTE(a3) = 18;
  v10 = HMAllocObject(v8, 0LL, a3);
  v11 = v10;
  if ( v10 )
  {
    v13[1] = a5;
    *(_QWORD *)(v10 + 24) = 0LL;
    v13[0] = v10 + 24;
    HMAssignmentLock(v13, 1LL);
    *(_DWORD *)(v11 + 36) = v9;
    *(_DWORD *)(v11 + 32) = a2;
    *(_QWORD *)(v11 + 40) = a1;
    *(_QWORD *)(v11 + 48) = a4;
  }
  return v11;
}
