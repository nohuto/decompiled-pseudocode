__int64 __fastcall KiAdjustRescheduleContextEntryForThreadRemoval(__int64 *a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( a3 && (a1[4] & 0x20) == 0 )
    *((_BYTE *)a1 + 34) |= 1u;
  *((_BYTE *)a1 + 34) ^= (*((_BYTE *)a1 + 34) ^ (2 * a4)) & 2;
  a1[2] = *(_QWORD *)(v4 + 24);
  *((_BYTE *)a1 + 32) = a1[4] & 0xC0 | 5;
  result = *(_QWORD *)(v4 + 24);
  *((_BYTE *)a1 + 33) &= ~1u;
  a1[3] = result;
  return result;
}
