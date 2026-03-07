unsigned __int64 __fastcall CDebugFrameCounter::CurrentTime(CDebugFrameCounter *this)
{
  unsigned __int64 result; // rax
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v3; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 8) )
  {
    v2 = g_qpcFrequency;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 579) + 56LL))(*((_QWORD *)this + 579));
    return 10000000 * (v3 / v2.QuadPart) + 10000000 * (v3 % v2.QuadPart) / v2.QuadPart;
  }
  return result;
}
