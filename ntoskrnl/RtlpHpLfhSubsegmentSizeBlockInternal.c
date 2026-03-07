__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(__int64 a1, __int64 a2, int a3, int *a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // r8
  unsigned int v6; // ecx
  __int16 v7; // ax
  int v8; // ecx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = (unsigned __int16)qword_140C6AF48 ^ (unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v5 = (unsigned __int16)qword_140C6AF48 ^ (unsigned __int64)(unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
    v6 = *(unsigned __int16 *)(v5 + a2 - 2);
    v7 = *(_WORD *)(v5 + a2 - 2);
    if ( (v6 & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v7 = *(_WORD *)(v5 + a2 - 2);
    }
    v8 = (v6 >> 14) & 1;
    if ( v7 >= 0 )
      v4 -= v7 & 0x3FFF;
    else
      --v4;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
    *a4 = v8;
  return v4;
}
