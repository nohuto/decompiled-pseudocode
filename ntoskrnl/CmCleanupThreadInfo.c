__int64 __fastcall CmCleanupThreadInfo(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *(_QWORD *)&KeGetCurrentThread()[1].ResourceIndex = *a1;
  return result;
}
