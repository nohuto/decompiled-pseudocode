/*
 * XREFs of PopPepCancelActivities @ 0x140356CB8
 * Callers:
 *     PopPepTriggerActivity @ 0x140356BCC (PopPepTriggerActivity.c)
 * Callees:
 *     PopPepCancelActivityRange @ 0x1403999AC (PopPepCancelActivityRange.c)
 *     Feature_Servicing_PofxPepReadyActivityCount__private_IsEnabled @ 0x140419CD4 (Feature_Servicing_PofxPepReadyActivityCount__private_IsEnabled.c)
 */

__int64 __fastcall PopPepCancelActivities(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // ecx
  __int64 v10; // [rsp+20h] [rbp-18h]

  result = (unsigned int)dword_140002ED4[34 * a3];
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v7 = a1 + 120;
      PopPepCancelActivityRange(a1 + 72, a3, 0, 0, a1 + 120);
      v10 = v7;
LABEL_4:
      v8 = 4;
      v9 = a1 + 72;
      return PopPepCancelActivityRange(v9, a3, v8, 5, v10);
    }
    if ( (_DWORD)result != 2 )
      return result;
    if ( !(unsigned int)Feature_Servicing_PofxPepReadyActivityCount__private_IsEnabled() )
    {
      v8 = 0;
      v10 = a2 + 104;
      v9 = a2 + 56;
      return PopPepCancelActivityRange(v9, a3, v8, 5, v10);
    }
    if ( *(_BYTE *)(a1 + 125) )
      PopPepCancelActivityRange(a1 + 72, a3, 0, 0, a1 + 120);
    result = PopPepCancelActivityRange((int)a2 + 56, a3, 1, 3, a2 + 104);
    if ( *(_BYTE *)(a1 + 125) )
    {
      v10 = a1 + 120;
      goto LABEL_4;
    }
  }
  return result;
}
