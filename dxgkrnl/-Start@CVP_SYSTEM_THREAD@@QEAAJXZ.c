NTSTATUS __fastcall CVP_SYSTEM_THREAD::Start(void **this)
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  result = PsCreateSystemThread(this + 1, 0, &ObjectAttributes, 0LL, 0LL, CVP_SYSTEM_THREAD::ThreadRoutine, this);
  *((_DWORD *)this + 4) = result;
  if ( result < 0 )
    this[1] = 0LL;
  return result;
}
