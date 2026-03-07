__int64 __fastcall ExpCloseWorkerFactory(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
    return ExpShutdownWorkerFactory(a2);
  return result;
}
