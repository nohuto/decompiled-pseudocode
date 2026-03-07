_BOOL8 __fastcall RIMDeadzone::_IsAngleWithinRange(unsigned int a1, unsigned int a2, __int64 a3)
{
  return (a2 + a1 + 360 * (1 - a1 / 0x168 - a2 / 0x168) - (unsigned int)a3 % 0x168) % 0x168 < (HIDWORD(a3)
                                                                                             + 360
                                                                                             * (1 - HIDWORD(a3) / 0x168)
                                                                                             - (unsigned int)a3 % 0x168)
                                                                                            % 0x168;
}
