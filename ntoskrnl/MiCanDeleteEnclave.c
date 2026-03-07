__int64 __fastcall MiCanDeleteEnclave(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v4; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  int v9; // ebx

  if ( (*(_DWORD *)(a1 + 64) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = *(void **)(a1 + 72);
  PsReferenceVsmEnclave(v4);
  v6 = a1 + 80;
  if ( v5 )
  {
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6
      || (*v5 = v7, v5[1] = v6, *(_QWORD *)(v7 + 8) = v5, *(_QWORD *)v6 = v5, v5[1] != v6)
      || (v8 = *(_QWORD **)(a1 + 88), *v8 != v6) )
    {
      __fastfail(3u);
    }
    *v8 = v5;
    v5[1] = v8;
    *(_QWORD *)(a1 + 88) = a1 + 80;
    *(_QWORD *)v6 = v6;
  }
  else
  {
    MiFreeEnclaveModules(v6);
  }
  if ( (unsigned __int8)PsIsVsmEnclaveTerminated(v4) )
  {
    MiUnlockVad((__int64)CurrentThread, a1);
    v9 = PsRundownVsmEnclave(v4);
    MiLockVad((__int64)CurrentThread, a1);
    if ( v9 >= 0 && (*(_BYTE *)(a1 + 48) & 4) != 0 )
      v9 = -1073741800;
  }
  else
  {
    v9 = -1073740527;
  }
  PsDereferenceVsmEnclave(v4);
  return (unsigned int)v9;
}
