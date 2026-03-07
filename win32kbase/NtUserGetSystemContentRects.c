__int64 __fastcall NtUserGetSystemContentRects(unsigned int *a1, volatile void *a2)
{
  unsigned int *v3; // rdi
  int v4; // ebx
  int v5; // ecx
  unsigned int Count; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int *v10; // rax
  __int64 CurrentProcessWow64Process; // rax
  bool ContentRects; // r14
  unsigned int v13; // eax
  unsigned int v15[20]; // [rsp+40h] [rbp-B8h] BYREF
  struct tagRECT Src[4]; // [rsp+90h] [rbp-68h] BYREF

  v3 = a1;
  v4 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      memset(Src, 0, sizeof(Src));
      v15[0] = 0;
      v10 = v3;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v10 = (unsigned int *)MmUserProbeAddress;
      v15[0] = *v10;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v7, v8, v9);
      ProbeForWrite(a2, 16LL * v15[0], CurrentProcessWow64Process != 0 ? 1 : 4);
      ContentRects = CContentRects::GetContentRects(v15[0], Src, v15);
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      v13 = v15[0];
      *v3 = v15[0];
      if ( !ContentRects )
      {
        v5 = 122;
        goto LABEL_3;
      }
      memmove((void *)a2, Src, 16LL * v13);
    }
    else
    {
      Count = CContentRects::GetCount();
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      *v3 = Count;
    }
    return 1;
  }
  v5 = 87;
LABEL_3:
  UserSetLastError(v5);
  return v4;
}
