char __fastcall VidSchHasReadyPackets(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *i; // rcx
  _QWORD *k; // rdx
  _QWORD *j; // rdx
  __int64 v7; // r9
  __int64 *m; // r8
  __int64 v9; // r11
  _QWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v11; // [rsp+40h] [rbp-18h]

  v11 = 0;
  v10[0] = a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v10);
  if ( (unsigned __int8)RtlAreBitsClearEx(a1 + 440, 0LL, *(unsigned int *)(a1 + 84)) )
  {
    v2 = (_QWORD **)(a1 + 296);
    for ( i = *v2; i != v2; i = (_QWORD *)*i )
    {
      for ( j = (_QWORD *)*(i - 4); j != i - 4; j = (_QWORD *)*j )
      {
        v7 = j[80];
        if ( (_QWORD *)v7 != j + 80 && (*(_DWORD *)(v7 + 16) != 4 || (*(_DWORD *)(v7 + 240) & 1) != 0) )
          goto LABEL_14;
      }
      for ( k = (_QWORD *)*(i - 2); k != i - 2; k = (_QWORD *)*k )
      {
        for ( m = (__int64 *)k[4]; m != k + 4; m = (__int64 *)*m )
        {
          if ( *((_DWORD *)m + 36) )
            goto LABEL_14;
          v9 = m[19];
          if ( (__int64 *)v9 != m + 19 && (*(_DWORD *)(v9 + 16) != 4 || (*(_DWORD *)(v9 + 240) & 1) != 0) )
            goto LABEL_14;
        }
      }
    }
    AcquireSpinLock::Release((AcquireSpinLock *)v10);
    return 0;
  }
  else
  {
LABEL_14:
    AcquireSpinLock::Release((AcquireSpinLock *)v10);
    return 1;
  }
}
