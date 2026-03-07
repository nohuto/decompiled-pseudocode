__int64 __fastcall EtwpInitializeRegEntry(ULONG_PTR a1, int a2, int a3, __int64 a4, __int64 a5, __int16 a6, __int64 a7)
{
  _KPROCESS *Process; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax

  EtwpReferenceGuidEntry(a1);
  if ( a3 == 2 )
    _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 8u);
  *(_QWORD *)(a7 + 88) = a4;
  if ( a2 )
  {
    _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 2u);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    *(_WORD *)(a7 + 96) = a6;
    *(_QWORD *)(a7 + 80) = Process;
    *(_QWORD *)(a7 + 88) = a4;
  }
  else
  {
    _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 1u);
    if ( a4 )
    {
      *(_QWORD *)(a7 + 80) = a5;
      if ( MmIsSessionAddress(a4) )
      {
        *(_WORD *)(a7 + 98) |= 0x10u;
        *(_DWORD *)(a7 + 56) = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      }
    }
  }
  v12 = (_QWORD *)(a1 + 56);
  *(_QWORD *)(a7 + 32) = a1;
  v13 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v13 + 8) != a1 + 56 )
    __fastfail(3u);
  *(_QWORD *)(a7 + 8) = v12;
  *(_QWORD *)a7 = v13;
  *(_QWORD *)(v13 + 8) = a7;
  *v12 = a7;
  *(_QWORD *)(a7 + 24) = a7 + 16;
  *(_QWORD *)(a7 + 16) = a7 + 16;
  result = 128LL;
  _InterlockedOr16((volatile signed __int16 *)(a7 + 98), 0x80u);
  return result;
}
