__int64 __fastcall BuildNameList(__int64 a1, _DWORD *a2, size_t a3, _DWORD *a4)
{
  _DWORD *v5; // rdi
  _WORD *v6; // rbx
  __int64 v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // r12
  __int64 CurrentProcess; // rax
  bool v11; // zf
  PGENERIC_MAPPING v12; // rax
  unsigned int v13; // r13d
  __int64 NameInfo; // rax
  __int64 v15; // r15
  _WORD *v16; // rcx
  char v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+24h] [rbp-54h]
  PGENERIC_MAPPING v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v5 = a2;
  LOBYTE(a2) = 1;
  v18 = 1;
  v5[1] = 0;
  v6 = v5 + 2;
  v21 = (unsigned __int64)v5 + (unsigned int)a3 - 2;
  if ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 64;
    v19 = 64;
    v20 = DesktopMapping;
    v9 = 32LL;
    CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
    v11 = (unsigned int)IsProcessDwm(CurrentProcess) == 0;
    v12 = DesktopMapping;
    if ( v11 )
    {
      LOBYTE(a2) = 1;
    }
    else
    {
      LOBYTE(a2) = 0;
      v18 = 0;
    }
  }
  else
  {
    v7 = grpWinStaList;
    v8 = 256;
    v19 = 256;
    v12 = (PGENERIC_MAPPING)WinStaMapping;
    v20 = (PGENERIC_MAPPING)WinStaMapping;
    v9 = 8LL;
  }
  v13 = 0;
  *a4 = 0;
  while ( v7 )
  {
    LOBYTE(a3) = (_BYTE)a2;
    if ( (unsigned int)AccessCheckObject(v7, v8, a3, v12) )
    {
      NameInfo = ObQueryNameInfo(v7);
      v15 = NameInfo;
      if ( NameInfo )
      {
        if ( (unsigned __int64)v6 + *(unsigned __int16 *)(NameInfo + 8) + 2 >= v21 )
        {
          *a4 += (_DWORD)v6 - (_DWORD)v5;
          v6 = v5 + 2;
          v13 = -1073741789;
        }
        ++v5[1];
        a3 = *(unsigned __int16 *)(NameInfo + 8);
        if ( (unsigned __int64)v6 + a3 + 2 <= v21 )
        {
          memmove(v6, *(const void **)(NameInfo + 16), a3);
          v16 = (_WORD *)((char *)v6 + *(unsigned __int16 *)(v15 + 8));
          *v16 = 0;
          v6 = v16 + 1;
        }
        v8 = v19;
      }
      else
      {
        v8 = v19;
      }
    }
    v7 = *(_QWORD *)(v9 + v7);
    v12 = v20;
    LOBYTE(a2) = v18;
  }
  *v6 = 0;
  *v5 = (_DWORD)v6 + 2 - (_DWORD)v5;
  *a4 += (_DWORD)v6 + 2 - (_DWORD)v5;
  return v13;
}
