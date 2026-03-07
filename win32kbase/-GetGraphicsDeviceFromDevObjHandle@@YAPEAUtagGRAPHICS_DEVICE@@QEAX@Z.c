struct tagGRAPHICS_DEVICE *__fastcall GetGraphicsDeviceFromDevObjHandle(void *const a1)
{
  struct tagGRAPHICS_DEVICE *result; // rax

  for ( result = *(struct tagGRAPHICS_DEVICE **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 1264LL);
        result && *((void *const *)result + 17) != a1;
        result = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)result + 16) )
  {
    ;
  }
  return result;
}
