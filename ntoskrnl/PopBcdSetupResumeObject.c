__int64 __fastcall PopBcdSetupResumeObject(__int64 a1)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // rax
  void *v4; // rdi
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r8
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v2 = PoHiberFileRoot.Length + 22;
  DestinationString = 0LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v2, 1684226640LL);
  v4 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = 2;
    memmove(Pool2 + 5, PoHiberFileRoot.Buffer, PoHiberFileRoot.Length);
    v6 = BcdSetElementDataWithFlags(a1, 553648129LL, v5, v4, v2);
    if ( v6 >= 0 )
    {
      v6 = BcdSetElementDataWithFlags(a1, 553648166LL, v7, v4, v2);
      if ( v6 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
        v6 = BcdSetElementDataWithFlags(
               a1,
               570425346LL,
               v8,
               DestinationString.Buffer,
               (unsigned int)DestinationString.Length + 2);
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
