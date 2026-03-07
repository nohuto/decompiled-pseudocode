__int64 __fastcall SdbFindFirstTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int16 v4; // r14
  unsigned int v5; // ebp
  unsigned int i; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx

  v3 = 0;
  v4 = a3;
  v5 = a2;
  for ( i = SdbGetFirstChild(a1, a2, a3); ; i = SdbGetNextChild(a1, v5, v9) )
  {
    v9 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i, v8) == v4 )
      return v9;
  }
  return v3;
}
