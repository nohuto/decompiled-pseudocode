/*
 * XREFs of ProcessorpRangeConflictCallback @ 0x1C009BD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcessorpRangeConflictCallback(_DWORD *Context, struct _RTL_RANGE *Range)
{
  _DWORD *UserData; // r8
  unsigned int v3; // eax
  unsigned int v4; // r8d

  UserData = Range->UserData;
  if ( UserData )
  {
    if ( (Range->Flags & 1) != 0 )
    {
      if ( *((_BYTE *)Context + 14) )
      {
        if ( *(PVOID *)Context != Range->Owner )
        {
          v3 = Context[2];
          v4 = UserData[4];
          if ( v3 == v4 || v3 >= 0xFFF00000 && v4 >= 0xFFF00000 )
          {
            if ( (Context[3] & 1) == 0 )
              return Range->Attributes & 1;
            if ( (Range->Attributes & 2) != 0 )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
