struct CManipulation *__fastcall InteractionSourceManager::TryGetActiveManipulation(InteractionSourceManager *this)
{
  struct CManipulation *result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 14) )
    return *(struct CManipulation **)(*(_QWORD *)(*((_QWORD *)this + 11)
                                                + 8 * ((*((_QWORD *)this + 12) - 1LL) & (*((_QWORD *)this + 13) >> 1)))
                                    + 8 * (*((_QWORD *)this + 13) & 1LL));
  return result;
}
