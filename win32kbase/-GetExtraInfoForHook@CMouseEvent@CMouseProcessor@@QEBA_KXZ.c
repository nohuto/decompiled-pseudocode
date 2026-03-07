__int64 __fastcall CMouseProcessor::CMouseEvent::GetExtraInfoForHook(CMouseProcessor::CMouseEvent *this)
{
  unsigned int *v1; // rdx

  v1 = (unsigned int *)*((_QWORD *)this + 1);
  if ( (v1[28] & 0x20) == 0 || ((v1[26] - 4) & 0xFFFFFFFB) != 0 )
    return v1[10];
  else
    return (unsigned __int8)v1[10] | 0xFF515700LL;
}
