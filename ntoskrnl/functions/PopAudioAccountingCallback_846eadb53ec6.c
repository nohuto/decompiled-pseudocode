__int64 __fastcall PopAudioAccountingCallback(char a1)
{
  __int64 result; // rax

  result = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    qword_140CF78D8 = MEMORY[0xFFFFF78000000008];
  }
  else
  {
    if ( qword_140CF7888 )
    {
      if ( qword_140CF7888 <= (unsigned __int64)qword_140CF78D8 )
        result = MEMORY[0xFFFFF78000000008] - qword_140CF78D8;
      else
        result = MEMORY[0xFFFFF78000000008] - qword_140CF7888;
      qword_140CF78E0 += result;
    }
    qword_140CF78D8 = 0LL;
  }
  return result;
}
