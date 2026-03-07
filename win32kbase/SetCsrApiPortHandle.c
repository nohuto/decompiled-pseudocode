__int64 __fastcall SetCsrApiPortHandle(void *a1)
{
  NTSTATUS v1; // ebx
  PVOID v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = -1073741823;
  if ( CsrApiPort
    || (v3 = 0LL, v1 = ObReferenceObjectByHandle(a1, 0, LpcPortObjectType, 1, &v3, 0LL), CsrApiPort = v3, v1 < 0) )
  {
    CsrApiPort = 0LL;
  }
  KeSetEvent(gpevtQueueReadyForCallout, 1, 0);
  return (unsigned int)v1;
}
