void *__fastcall operator new(int a1, struct DXGK_LOG *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // r10
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // r9d
  int v12; // esi
  unsigned int v13; // ebp
  int v14; // eax
  _DWORD *v15; // rdi
  void *result; // rax
  struct DXGK_LOG_ENTRY *LogEntry; // rax

  v4 = a3;
  v6 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    return 0LL;
  v7 = *((_QWORD *)a2 + 3);
  if ( !_bittest64(&v7, v4) )
    return 0LL;
  v8 = a1 + 24;
  v9 = *((_DWORD *)a2 + 2);
  v10 = a4 + v8;
  if ( v10 > v9 )
  {
    LogEntry = DXGK_LOG::AllocateLogEntry(a2, v4, 0x18u);
    *((_DWORD *)LogEntry + 4) |= 0x40u;
    return 0LL;
  }
  v11 = v9 - 1;
  v12 = *((_DWORD *)a2 + 3);
  v13 = v12 + v10;
  if ( v10 + ((v9 - 1) & v12) > v9 )
  {
    v12 = v13 & ~v11;
    v13 = v12 + v10;
  }
  v14 = *((_DWORD *)a2 + 4);
  v15 = (_DWORD *)(v6 + (v12 & v11));
  v15[4] = v4 & 0x3F;
  v15[2] = v14;
  v15[3] = v10;
  KeQuerySystemTimePrecise(v15);
  result = v15 + 6;
  *((_DWORD *)a2 + 4) = v12;
  *((_DWORD *)a2 + 3) = v13;
  return result;
}
