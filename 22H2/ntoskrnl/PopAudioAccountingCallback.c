/*
 * XREFs of PopAudioAccountingCallback @ 0x140856398
 * Callers:
 *     PopWnfAudioCallback @ 0x1408562B0 (PopWnfAudioCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140CF7D18 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140CF7CC8 )
    {
      if ( qword_140CF7CC8 <= (unsigned __int64)qword_140CF7D18 )
        result = MEMORY[0xFFFFF78000000008] - qword_140CF7D18;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140CF7CC8;
      qword_140CF7D20 += result;
    }
    qword_140CF7D18 = 0LL;
  }
  return result;
}
