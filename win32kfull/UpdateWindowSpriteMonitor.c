__int64 __fastcall UpdateWindowSpriteMonitor(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE v7[80]; // [rsp+20h] [rbp-58h] BYREF

  if ( a2 )
  {
    v2 = a1[5];
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset_0(v7, 0, 0x48uLL);
      InitializeMonitorInfo(v7, *(unsigned int *)(v2 + 288), a2, a1);
      return GreDwmNotifySpriteMonitorChange(v5, *a1, 0LL, v7);
    }
  }
  return result;
}
