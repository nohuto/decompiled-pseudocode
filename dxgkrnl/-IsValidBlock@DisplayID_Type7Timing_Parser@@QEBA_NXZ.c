bool __fastcall DisplayID_Type7Timing_Parser::IsValidBlock(DisplayID_Type7Timing_Parser *this)
{
  return **(_BYTE **)this == 34
      && *((_BYTE *)this + 8) <= 0x14u
      && *(unsigned __int8 *)(*(_QWORD *)this + 2LL) == 20 * (*(unsigned __int8 *)(*(_QWORD *)this + 2LL) / 0x14uLL);
}
