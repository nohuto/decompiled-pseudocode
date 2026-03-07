void __fastcall EWNDOBJ::vDelete(EWNDOBJ *this)
{
  REGION *v2; // rcx

  if ( (*((_DWORD *)this + 46) & 0x10000000) != 0 )
    GreDeleteSemaphore(*((_QWORD *)this + 25));
  v2 = (REGION *)*((_QWORD *)this + 24);
  if ( v2 )
    REGION::vDeleteREGION(v2);
  RGNOBJ::vDeleteRGNOBJ((EWNDOBJ *)((char *)this + 56));
}
