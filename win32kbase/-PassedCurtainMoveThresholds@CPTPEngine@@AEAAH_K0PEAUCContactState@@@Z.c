_BOOL8 __fastcall CPTPEngine::PassedCurtainMoveThresholds(
        CPTPEngine *this,
        __int64 a2,
        __int64 a3,
        struct CContactState *a4)
{
  return a3 - a2 <= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 83) / 0x3E8
      && (int)((HIDWORD(*((_QWORD *)this + 461)) - HIDWORD(*((_QWORD *)a4 + 1)))
             * (HIDWORD(*((_QWORD *)this + 461)) - HIDWORD(*((_QWORD *)a4 + 1)))
             + (*((_QWORD *)this + 461) - *((_QWORD *)a4 + 1)) * (*((_QWORD *)this + 461) - *((_QWORD *)a4 + 1))) > (unsigned __int64)*((unsigned int *)this + 84);
}
