__int64 __fastcall KiCompleteRescheduleContextEntry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  int v6; // edx
  _WORD *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // edx

  result = *(unsigned __int8 *)(a1 + 35);
  v4 = *(_QWORD *)a1;
  if ( (result & 0x10) != 0 )
  {
    result = *(unsigned __int8 *)(a2 + 12761);
    if ( !(_BYTE)result )
    {
LABEL_3:
      *(_BYTE *)(a2 + 12761) = 1;
      result = *(unsigned int *)(v4 + 36);
      *(_DWORD *)(a2 + 12764) = result;
      goto LABEL_4;
    }
    if ( (_BYTE)result == 1 )
    {
      v6 = *(_DWORD *)(a2 + 12764);
      if ( v6 == *(_DWORD *)(v4 + 36) )
        goto LABEL_4;
      v7 = (_WORD *)(a2 + 12768);
      *(_BYTE *)(a2 + 12761) = 2;
      result = KeAddProcessorAffinityEx((unsigned __int16 *)(a2 + 12768), v6);
    }
    else
    {
      v7 = (_WORD *)(a2 + 12768);
    }
    v8 = *(unsigned __int8 *)(v4 + 208);
    v9 = *(_QWORD *)(v4 + 200);
    if ( *v7 > (unsigned __int16)v8 )
      goto LABEL_13;
    if ( v7[1] > (unsigned __int16)v8 )
      goto LABEL_26;
  }
  else if ( (result & 8) != 0 && *(_BYTE *)(v4 + 7) )
  {
    result = *(unsigned __int8 *)(a2 + 12761);
    if ( !(_BYTE)result )
      goto LABEL_3;
    if ( (_BYTE)result == 1 )
    {
      v10 = *(_DWORD *)(a2 + 12764);
      if ( v10 == *(_DWORD *)(v4 + 36) )
        goto LABEL_4;
      v7 = (_WORD *)(a2 + 12768);
      *(_BYTE *)(a2 + 12761) = 2;
      result = KeAddProcessorAffinityEx((unsigned __int16 *)(a2 + 12768), v10);
    }
    else
    {
      v7 = (_WORD *)(a2 + 12768);
    }
    v8 = *(unsigned __int8 *)(v4 + 208);
    v9 = *(_QWORD *)(v4 + 200);
    if ( *v7 > (unsigned __int16)v8 )
    {
LABEL_13:
      *(_QWORD *)&v7[4 * v8 + 4] |= v9;
      goto LABEL_4;
    }
    if ( v7[1] > (unsigned __int16)v8 )
    {
LABEL_26:
      result = (unsigned int)(v8 + 1);
      *v7 = v8 + 1;
      goto LABEL_13;
    }
  }
LABEL_4:
  if ( (*(_BYTE *)(a1 + 35) & 4) != 0 )
    result = KiHvEnlightenedGuestPriorityKick(a2, v4, *(char *)(a1 + 36));
  if ( (*(_BYTE *)(a1 + 35) & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    _InterlockedDecrement16((volatile signed __int16 *)(result + 868));
  }
  return result;
}
