__int64 __fastcall Halp8254TimerArm(__int64 a1, int a2, __int16 a3)
{
  if ( a2 != 2 )
    return 3221225659LL;
  __outbyte(0x43u, 0x34u);
  __outbyte(0x40u, a3);
  __outbyte(0x40u, HIBYTE(a3));
  return 0LL;
}
