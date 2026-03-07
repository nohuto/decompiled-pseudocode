bool __fastcall ExCheckValidIRTimerId(unsigned __int16 a1, unsigned __int16 a2)
{
  return a1 < 0x11u && a2 < LOBYTE(qword_140005ED0[3 * a1]);
}
