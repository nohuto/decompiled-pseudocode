__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r12
  unsigned __int16 v8; // r15
  __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // r13d
  unsigned int v14; // eax
  unsigned int v15; // edx
  char v16; // cl
  __int64 v17; // rdx
  unsigned int v18; // r8d

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = *(unsigned __int16 *)(v4 + 4244);
  v6 = 0;
  v7 = 0LL;
  if ( (_WORD)v5 )
  {
    v8 = *(_WORD *)(a1 + 334);
    v9 = 136 * v5 + *(_QWORD *)(a1 + 872) - 136LL;
  }
  else
  {
    v8 = *(_WORD *)(a1 + 332);
    v9 = a1 + 344;
  }
  if ( g_HeteroSystem && (*(_BYTE *)(a1 + 4336) & 0x10) == 0 )
    v7 = v9;
  result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a2 + 3) != 5 )
    return NVMeRequestComplete(a1, a2, 0LL);
  if ( !*(_WORD *)(v9 + 40) )
    goto LABEL_36;
  v12 = *(unsigned __int16 *)(a1 + 336);
  if ( v12 > 1 )
  {
    *(_BYTE *)(v4 + 4253) |= 0x10u;
    v13 = v12;
    do
    {
      v14 = *(unsigned __int16 *)(a1 + 336);
      LOWORD(v15) = *(_WORD *)(v9 + 40) + 1;
      if ( (unsigned __int16)v15 > (unsigned __int16)v14 )
        v15 = (unsigned __int16)v15 % v14;
      *(_WORD *)(v4 + 4244) = v15;
      v9 = 136LL * (unsigned __int16)v15 + *(_QWORD *)(a1 + 872) - 136LL;
      result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
      v16 = result;
      if ( (_BYTE)result )
        break;
      if ( *(_BYTE *)(a2 + 3) != 5 )
        break;
      ++v6;
    }
    while ( v6 < v13 );
    if ( !g_HeteroSystem || (result = *(unsigned int *)(a1 + 4336), (result & 0x10) != 0) )
    {
      if ( v16 )
        return result;
    }
    else if ( v16 )
    {
      if ( v6 < v13 )
      {
        v17 = *(_QWORD *)(a1 + 880);
        v18 = *(_DWORD *)(392LL * *(unsigned __int16 *)(v7 + 50) + v17 - 148) & 0xF;
        result = *(_DWORD *)(392LL * *(unsigned __int16 *)(v9 + 50) + v17 - 148) & 0xF;
        if ( (_DWORD)result == v18 )
        {
          ++*(_DWORD *)(a1 + 4392);
        }
        else if ( (unsigned int)result >= v18 )
        {
          ++*(_DWORD *)(a1 + 4400);
        }
        else
        {
          ++*(_DWORD *)(a1 + 4396);
        }
      }
      return result;
    }
    return NVMeRequestComplete(a1, a2, 0LL);
  }
  if ( *(_WORD *)(v9 + 40) )
    return NVMeRequestComplete(a1, a2, 0LL);
LABEL_36:
  while ( 1 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, v11);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 928));
    result = ProcessCommandInSpecificQueue(a1, a2, v9, v8);
    if ( (_BYTE)result )
      break;
    if ( ++v6 >= 4 )
      return NVMeRequestComplete(a1, a2, 0LL);
  }
  return result;
}
