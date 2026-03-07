void __fastcall CitpContextInitialize(struct _CIT_IMPACT_CONTEXT *a1)
{
  unsigned __int64 v2; // r10
  char v3; // al
  int v4; // r10d
  int v5; // edx
  int v6; // r10d

  memset(a1, 0, 0x138uLL);
  *((_QWORD *)a1 + 2) = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = (char *)a1 + 8;
  *((_QWORD *)a1 + 4) = (char *)a1 + 24;
  *((_QWORD *)a1 + 3) = (char *)a1 + 24;
  *((_QWORD *)a1 + 6) = (char *)a1 + 40;
  *((_QWORD *)a1 + 5) = (char *)a1 + 40;
  *((_QWORD *)a1 + 9) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 34) = (char *)a1 + 264;
  *((_QWORD *)a1 + 33) = (char *)a1 + 264;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = *((_BYTE *)a1 + 112) & 0xF9 | 2;
  *((_DWORD *)a1 + 52) = v2;
  *((_DWORD *)a1 + 53) = v2;
  *((_DWORD *)a1 + 50) = 1;
  *((_BYTE *)a1 + 112) = v3;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 220), 1);
  *((_DWORD *)a1 + 58) = v4;
  *((_DWORD *)a1 + 59) = v4;
  CIT_USER_ACTIVITY_STAT::SetActive((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 244), v5);
  *((_DWORD *)a1 + 34) = v6;
  *((_DWORD *)a1 + 72) = v6;
  *((_QWORD *)a1 + 35) = MEMORY[0xFFFFF78000000014];
}
