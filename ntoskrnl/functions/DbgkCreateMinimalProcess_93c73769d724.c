void *__fastcall DbgkCreateMinimalProcess(volatile signed __int32 *Object)
{
  void *result; // rax
  _OWORD v3[17]; // [rsp+20h] [rbp-128h] BYREF

  result = memset(v3, 0, sizeof(v3));
  _InterlockedOr(Object + 281, 0x400001u);
  if ( *((_QWORD *)Object + 175) )
  {
    *(_QWORD *)&v3[0] = 0x800600038LL;
    DWORD2(v3[2]) = 2;
    memset(&v3[3], 0, 48);
    return (void *)DbgkpSendApiMessage((PVOID)Object);
  }
  return result;
}
