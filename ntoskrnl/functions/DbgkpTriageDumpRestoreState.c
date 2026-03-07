__int64 __fastcall DbgkpTriageDumpRestoreState(_DWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)a1;
  a1[6] = a1[3];
  *(_DWORD *)(v1 + 8312) = a1[4];
  result = (unsigned int)a1[5];
  *(_DWORD *)(*(_QWORD *)a1 + 8316LL) = result;
  return result;
}
