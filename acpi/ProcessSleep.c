__int64 __fastcall ProcessSleep(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rcx

  v5 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v5 + 8);
  HeapFree(v5);
  return a3;
}
