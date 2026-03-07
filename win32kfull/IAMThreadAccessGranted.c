bool __fastcall IAMThreadAccessGranted(const struct tagTHREADINFO *a1)
{
  __int64 v1; // rcx
  struct tagIAM_THREAD *IAMThread; // r8
  bool result; // al

  IAMThread = FindIAMThread(a1);
  result = 0;
  if ( IAMThread )
    return *((_QWORD *)IAMThread + 3) == *(_QWORD *)(v1 + 456);
  return result;
}
