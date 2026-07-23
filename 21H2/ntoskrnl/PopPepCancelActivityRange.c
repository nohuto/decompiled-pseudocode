/*
 * XREFs of PopPepCancelActivityRange @ 0x140382978
 * Callers:
 *     PopPepCancelActivities @ 0x1402837B4 (PopPepCancelActivities.c)
 *     PopPepUpdateConstraints @ 0x1403A06BC (PopPepUpdateConstraints.c)
 * Callees:
 *     <none>
 */

void __fastcall PopPepCancelActivityRange(__int64 a1, int a2, int a3, int a4, volatile signed __int32 *a5)
{
  int **v5; // r11
  _DWORD *v6; // rdx
  __int64 v7; // r8
  int *v8; // rax
  int v9; // r9d

  if ( a3 <= a4 )
  {
    v5 = (int **)(a1 + 8LL * a3);
    v6 = (_DWORD *)&qword_140004FD8[17 * a2] + a3;
    v7 = (unsigned int)(a4 - a3 + 1);
    do
    {
      if ( *v6 )
      {
        v8 = *v5;
        v9 = **v5;
        if ( (*v6 & v9) != 0 )
        {
          if ( (v9 & 2) != 0 )
          {
            _InterlockedDecrement(a5);
            v8 = *v5;
          }
          *v8 &= 0xFFFFFFFC;
        }
      }
      ++v6;
      ++v5;
      --v7;
    }
    while ( v7 );
  }
}
