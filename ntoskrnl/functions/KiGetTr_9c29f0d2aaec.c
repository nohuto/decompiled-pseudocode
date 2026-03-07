__int16 KiGetTr()
{
  __int16 result; // ax

  __asm { str     ax }
  return result;
}
