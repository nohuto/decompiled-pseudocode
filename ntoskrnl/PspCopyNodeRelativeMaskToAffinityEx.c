__int64 __fastcall PspCopyNodeRelativeMaskToAffinityEx(unsigned __int16 a1, __int64 a2, unsigned __int16 *a3)
{
  size_t v6; // r8
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+3Ah] [rbp-C6h]
  __int16 v12; // [rsp+3Eh] [rbp-C2h]
  _QWORD v13[34]; // [rsp+40h] [rbp-C0h] BYREF

  v11 = 0;
  v12 = 0;
  memset(&v13[1], 0, 0x100uLL);
  v6 = 8LL * *a3;
  v8 = 0;
  memset(a3 + 4, 0, v6);
  LODWORD(v13[0]) = 2097153;
  *a3 = 1;
  memset((char *)v13 + 4, 0, 0x104uLL);
  KeQueryNodeActiveAffinityEx(a1, (unsigned __int16 *)v13, 0LL);
  result = KeIsEmptyAffinityEx(v13);
  if ( !(_DWORD)result )
  {
    v9[1] = (unsigned __int16 *)v13[1];
    v9[0] = (unsigned __int16 *)v13;
    v10 = 0;
    while ( 1 )
    {
      result = KeEnumerateNextProcessor(&v8, v9);
      if ( (_DWORD)result )
        break;
      if ( ((*(char *)(((unsigned __int64)*(unsigned int *)(KiProcessorBlock[v8] + 34860) >> 3) + *(_QWORD *)(a2 + 8)) >> (*(_DWORD *)(KiProcessorBlock[v8] + 34860) & 7)) & 1) != 0 )
        KeAddProcessorAffinityEx(a3, v8);
    }
  }
  return result;
}
