__int64 __fastcall WPUpdateCheckPointSettings(struct tagWND *a1, char a2)
{
  __int64 result; // rax
  int *v4; // rcx
  int v5; // eax

  result = UpdateCheckpoint(a1);
  if ( result )
  {
    v4 = (int *)(result + 48);
    if ( (a2 & 1) != 0 )
      *v4 |= 1u;
    v5 = *v4;
    if ( (a2 & 2) != 0 )
      result = v5 | 2u;
    else
      result = v5 & 0xFFFFFFFD;
    *v4 = result;
  }
  return result;
}
