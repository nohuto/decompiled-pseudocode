void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx
  __int64 Memory; // rax
  void *v5; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_140C0E3B0 & 0xC00) != 0xC00 )
      {
        v2 = qword_140C0E3F8;
        if ( qword_140C0E3F8 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0E3F8, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140C0E400;
        if ( qword_140C0E400 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0E400, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else if ( (dword_140C0E3B0 & 0xC00) != 0xC00 && (dword_140C0E3B0 & 0x100000) == 0 )
  {
    if ( qword_140C0E400 )
    {
      Memory = BgpFwAllocateMemory((unsigned int)Size);
      v5 = (void *)Memory;
      if ( Memory )
      {
        BgpFwReleaseLock();
        memmove(v5, qword_140C0E400, (unsigned int)Size);
        BgpFwAcquireLock();
        if ( qword_140C0E3F8 )
          BgpFwFreeMemory((__int64)v5);
        else
          _InterlockedExchange64((volatile __int64 *)&qword_140C0E3F8, (__int64)v5);
      }
    }
  }
}
