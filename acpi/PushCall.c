__int64 __fastcall PushCall(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // eax
  void *v11; // rax
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v6 = PushFrame(a1, 1280065859, 400, (unsigned int)ParseCall, (__int64)&v13);
  if ( !v6 )
  {
    v7 = v13;
    if ( a2 )
    {
      v8 = *(_QWORD *)(a2 + 96);
      *(_QWORD *)(v13 + 48) = a2;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
        v7 = v13;
      }
      if ( (*(_BYTE *)(v8 + 193) & 8) != 0 )
        *(_DWORD *)(v7 + 16) |= 0x10000u;
      if ( *(_WORD *)(a2 + 66) == 8 && _bittest16((const signed __int16 *)(a2 + 64), 9u) )
        *(_DWORD *)(v7 + 16) |= 0x80000u;
      v9 = (*(_BYTE *)(v8 + 193) & 7) == 0;
      v10 = *(_BYTE *)(v8 + 193) & 7;
      *(_DWORD *)(v7 + 60) = v10;
      if ( !v9 )
      {
        v11 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1413563464, 40 * v10);
        *(_QWORD *)(v7 + 64) = v11;
        if ( v11 )
        {
          memset(v11, 0, 40LL * *(unsigned int *)(v7 + 60));
        }
        else
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(152, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 96) = v13;
      *(_DWORD *)(v7 + 16) = 5;
    }
    *(_QWORD *)(v7 + 392) = a3;
  }
  return v6;
}
