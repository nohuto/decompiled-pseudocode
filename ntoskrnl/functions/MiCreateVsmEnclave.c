__int64 __fastcall MiCreateVsmEnclave(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 ProcessPartition; // rax
  int v7; // r8d
  _BYTE *v8; // r9
  __int64 v9; // r10
  struct _MDL *v10; // r11
  __int64 v11; // rdx
  unsigned __int8 v12; // si
  BOOL v13; // ebx
  __int64 v14; // r8
  __int64 result; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  if ( (unsigned __int16 *)ProcessPartition == MiSystemPartition )
    v11 = 0LL;
  else
    v11 = *(_QWORD *)(ProcessPartition + 200);
  v12 = v7 == 17;
  v13 = 0;
  if ( a5 >= 4 )
    v13 = (*v8 & 1) != 0;
  v14 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  result = PsCreateVsmEnclave(
             v9,
             v11,
             v14,
             (((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF)
           - v14
           + 1,
             v12,
             v10,
             a5,
             (_QWORD *)(a2 + 72));
  if ( (int)result >= 0 )
  {
    if ( v13 )
      *(_DWORD *)(a2 + 64) |= 4u;
    return 0LL;
  }
  return result;
}
