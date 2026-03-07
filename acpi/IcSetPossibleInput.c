__int64 __fastcall IcSetPossibleInput(unsigned int a1, __int64 a2, char a3, char a4)
{
  __int64 i; // r10
  unsigned int v6; // eax
  unsigned int v8; // ecx
  char v9; // al
  int v10; // edx
  __int64 v11; // rcx

  for ( i = IcListHead; ; i = *(_QWORD *)i )
  {
    if ( &IcListHead == (__int64 *)i )
      return 3221226021LL;
    if ( *(int *)(i + 28) >= 0 )
    {
      v6 = *(_DWORD *)(i + 16);
      if ( a1 >= v6 && a1 <= *(_DWORD *)(i + 20) )
        break;
    }
  }
  v8 = a1 - v6;
  v9 = a3 & 0xA;
  if ( (a3 & 0xA) == 0xA )
  {
    v10 = 3;
  }
  else if ( v9 == 8 )
  {
    v10 = 4;
  }
  else
  {
    v10 = 2;
    if ( v9 != 2 )
      v10 = v9 == 0;
  }
  v11 = 200LL * v8;
  *(_DWORD *)(v11 + i + 148) = v10;
  *(_DWORD *)(v11 + i + 152) = (a3 & 1) == 0;
  if ( !a4 || *(_DWORD *)(v11 + i + 36) != *(_DWORD *)(v11 + i + 44) )
    a4 = 0;
  *(_BYTE *)(v11 + i + 225) = a4;
  *(_DWORD *)(v11 + i + 140) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(v11 + i + 160) = *(_OWORD *)a2;
  return IrqArbGetDeviceIrql((_DWORD *)(i + 136 + v11), (_BYTE *)(v11 + i + 144));
}
