__int64 __fastcall KiReadGuestSchedulerAssistPriority(__int64 a1, _QWORD *a2)
{
  unsigned int *v3; // r8
  __int64 result; // rax
  unsigned int v6; // r10d
  char v7; // dl
  char v8; // al
  unsigned int v9; // edi
  int v10; // ecx
  __int64 v11; // [rsp+10h] [rbp+8h]

  v11 = 0LL;
  v3 = *(unsigned int **)(a1 + 968);
  if ( v3 )
  {
    v6 = *v3;
    v7 = 0;
    v8 = 1;
    if ( (*v3 & 0x20000) != 0 )
      v8 = 3;
    v9 = *v3 >> 8;
    BYTE1(v11) = v8;
    BYTE2(v11) = BYTE1(*v3);
    if ( v3[7] )
    {
      v7 = 1;
      LOBYTE(v11) = 1;
    }
    if ( v3[8] )
    {
      v7 |= 2u;
      LOBYTE(v11) = v7;
    }
    HIDWORD(v11) = v3[5];
    if ( (v6 & 0x80000) != 0 )
    {
      v7 |= 4u;
      LOBYTE(v11) = v7;
    }
    if ( *((_QWORD *)v3 + 5) != *((_QWORD *)v3 + 6) )
    {
      v7 |= 8u;
      LOBYTE(v11) = v7;
    }
    if ( (v6 & 0x200000) != 0 )
    {
      v7 |= 0x10u;
      LOBYTE(v11) = v7;
    }
    v10 = (char)v9;
    result = (unsigned int)*(char *)(a1 + 563);
    if ( (unsigned int)((char)v9 - 1) > 0x1E )
      v10 = 1;
    if ( v10 >= (int)result )
      result = (unsigned int)v10;
    if ( (int)result > KiVpThreadSystemWorkPriority )
      result = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( (*v3 & 0x20000) != 0 )
    {
      result = 7LL;
    }
    else if ( (v7 || v3[5]) && (int)result < KiVpThreadSystemWorkPriority )
    {
      result = (unsigned int)KiVpThreadSystemWorkPriority;
    }
  }
  else
  {
    result = (unsigned int)*(char *)(a1 + 195);
  }
  if ( a2 )
    *a2 = v11;
  return result;
}
