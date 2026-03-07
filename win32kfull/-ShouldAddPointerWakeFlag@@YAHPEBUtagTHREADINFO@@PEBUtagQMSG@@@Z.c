__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  if ( a2 && (unsigned int)IsGenuineMouseInput((char *)a2 + 120) )
    return IsMiPActive((__int64)a1, (__int64)a2);
  else
    return 0LL;
}
