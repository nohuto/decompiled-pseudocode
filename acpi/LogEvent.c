PVOID __fastcall LogEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // rdx
  PVOID result; // rax

  if ( (gDebugger & 0x8000) != 0 )
  {
    if ( qword_1C006F910 )
    {
      v9 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C006F908 + 1, 1u) % (unsigned int)qword_1C006F908);
      *((_QWORD *)qword_1C006F910 + v9 + 1) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)qword_1C006F910 + 2 * v9) = a1;
      *((_QWORD *)qword_1C006F910 + v9 + 2) = a2;
      *((_QWORD *)qword_1C006F910 + v9 + 3) = a3;
      *((_QWORD *)qword_1C006F910 + v9 + 4) = a4;
      *((_QWORD *)qword_1C006F910 + v9 + 5) = a5;
      *((_QWORD *)qword_1C006F910 + v9 + 6) = a6;
      *((_QWORD *)qword_1C006F910 + v9 + 7) = a7;
      result = qword_1C006F910;
      *((_QWORD *)qword_1C006F910 + v9 + 8) = a8;
    }
  }
  return result;
}
