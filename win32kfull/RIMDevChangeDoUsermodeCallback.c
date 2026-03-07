_UNKNOWN **__fastcall RIMDevChangeDoUsermodeCallback(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int16 v8; // dx
  __int16 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v2 + 408);
  if ( *(_BYTE *)(v2 + 120) != 3 )
  {
    result = (_UNKNOWN **)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( result )
    {
      result = (_UNKNOWN **)gptiCurrent;
      if ( gptiCurrent )
      {
        result = (_UNKNOWN **)PsGetCurrentProcess(v6, v5, v7);
        if ( *(_UNKNOWN ***)(v4 + 32) == result )
        {
          if ( *(_QWORD *)(v4 + 832) )
          {
            *(_BYTE *)(v4 + 82) = 1;
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1076) & 2) != 0 )
              RIMUnlockExclusive(v4 + 760);
            RIMUnlockExclusive(v4 + 104);
            RawInputManagerDeviceObjectReference(v2);
            v8 = 0;
            v9 = 0;
            *(_QWORD *)(gptiCurrent + 1392LL) = v2;
            if ( *(_BYTE *)(v2 + 120) == 2 )
            {
              v10 = *(_QWORD *)(v2 + 528);
              if ( v10 )
              {
                v8 = *(_WORD *)(v10 + 40);
                v9 = *(_WORD *)(v10 + 42);
              }
            }
            v11 = *(_QWORD *)(v2 + 88);
            if ( (*(_DWORD *)(v2 + 256) & 0x2000) != 0 )
            {
              if ( *(_DWORD *)a1 == 1 )
              {
                *(_DWORD *)a1 = 2;
              }
              else if ( *(_DWORD *)a1 == 4 )
              {
                *(_DWORD *)a1 = 3;
              }
              v12 = *(_DWORD *)(v2 + 256);
              if ( (v12 & 0x80000) != 0 || (v12 & 0x100000) != 0 )
                v11 = *(_QWORD *)(v2 + 416);
            }
            xxxClientRimDevCallback(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 4),
              *(_DWORD *)(a1 + 8),
              *(_QWORD *)(v4 + 72),
              v11,
              v8,
              v9,
              *(_QWORD *)(v4 + 400),
              *(_QWORD *)(v4 + 832));
            *(_QWORD *)(gptiCurrent + 1392LL) = 0LL;
            RIMLockExclusive(v4 + 104);
            if ( *(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) || (*(_DWORD *)(v4 + 1076) & 2) != 0 )
              RIMLockExclusive(v4 + 760);
            *(_BYTE *)(v4 + 82) = 0;
            RIMSignalAllDispositionWaiters(v4);
            if ( (*(_DWORD *)(v2 + 272) & 0x80u) != 0 || (*(_DWORD *)(v2 + 256) & 0x2000) != 0 )
            {
              if ( *(_DWORD *)a1 == 2 )
                *(_DWORD *)(v2 + 256) |= 0x1000000u;
              if ( *(_DWORD *)a1 == 3 )
                *(_DWORD *)(v2 + 256) |= 0x2000000u;
            }
            return (_UNKNOWN **)RawInputManagerDeviceObjectDereference(v2);
          }
        }
      }
    }
  }
  return result;
}
