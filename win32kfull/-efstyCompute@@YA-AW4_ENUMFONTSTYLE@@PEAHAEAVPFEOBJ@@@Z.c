__int64 __fastcall efstyCompute(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = PFEOBJ::efstyCompute(a2, a2, a1, a2);
  if ( *(_DWORD *)(v3 + 4LL * (int)result) )
    return (unsigned int)(_wcsicmp(
                            (const wchar_t *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL)
                                            + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL) + 8LL)),
                            (const wchar_t *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL)
                                            + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL) + 16LL))) != 0)
         + 4;
  *(_DWORD *)(v3 + 4LL * (int)result) = 1;
  return result;
}
