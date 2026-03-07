__int64 __fastcall MiPrefetchNormally(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v9; // r11

  if ( a1[2160] < a2 + 159 )
    return 0LL;
  v4 = a1[2227];
  v5 = 0;
  v6 = a1[2197];
  v7 = v6 > v4 ? 0LL : v4 - v6;
  if ( v7 < a2 + 4223 )
    return 0LL;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, a3);
  LOBYTE(v5) = AvailablePagesBelowPriority >= v9;
  return v5;
}
