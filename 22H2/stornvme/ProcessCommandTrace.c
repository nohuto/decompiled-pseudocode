/*
 * XREFs of ProcessCommandTrace @ 0x1C0003D70
 * Callers:
 *     ProcessCommandInSpecificQueue @ 0x1C0003830 (ProcessCommandInSpecificQueue.c)
 *     ProcessMultipleCommandsInSpecificQueue @ 0x1C001C584 (ProcessMultipleCommandsInSpecificQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessCommandTrace(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // eax
  unsigned int v6; // r8d
  __int64 *v7; // rdx
  __int64 v8; // r14
  __int64 result; // rax

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v3 = *(_QWORD *)(a2 + 104);
  else
    v3 = *(_QWORD *)(a2 + 56);
  if ( (v3 & 0xFFF) != 0 )
    v3 = v3 - (v3 & 0xFFF) + 4096;
  v4 = *(_QWORD *)(v3 + 4096);
  if ( HIDWORD(v4) == -1 || (v5 = *(_DWORD *)(a1 + 208), v6 = 0, !v5) )
  {
LABEL_14:
    v8 = 0LL;
  }
  else
  {
    v7 = (__int64 *)(a1 + 1736);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        if ( *(_DWORD *)(v8 + 16) == HIDWORD(*(_QWORD *)(v3 + 4096)) )
          break;
      }
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_14;
    }
  }
  StorPortExtendedFunction(87LL, a1, v8, 0LL);
  if ( (*(_BYTE *)(v3 + 4253) & 1) == 0 || (unsigned __int8)v4 == 2 || (unsigned __int8)v4 == 10 )
    return StorPortExtendedFunction(87LL, a1, v8, 0LL);
  switch ( (char)v4 )
  {
    case 6:
      result = StorPortExtendedFunction(85LL, a1, v8, 0LL);
      break;
    case 16:
    case 17:
    case -127:
    case -126:
      result = StorPortExtendedFunction(86LL, a1, v8, 0LL);
      break;
    default:
      return StorPortExtendedFunction(87LL, a1, v8, 0LL);
  }
  return result;
}
