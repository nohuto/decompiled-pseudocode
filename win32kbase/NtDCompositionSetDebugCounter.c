__int64 __fastcall NtDCompositionSetDebugCounter(unsigned int a1, int a2)
{
  int v3; // ebx
  struct DirectComposition::CApplicationChannel *v4; // r8
  int v5; // ecx
  int v6; // ecx
  struct DirectComposition::CApplicationChannel *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v8);
  if ( v3 >= 0 )
  {
    v4 = v8;
    v5 = *((_DWORD *)v8 + 646);
    if ( a2 )
    {
      if ( v5 )
      {
        if ( v5 == 3 )
          *((_DWORD *)v8 + 646) = 2;
      }
      else
      {
        *((_DWORD *)v8 + 646) = 1;
      }
    }
    else
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
          *((_DWORD *)v8 + 646) = 3;
      }
      else
      {
        *((_DWORD *)v8 + 646) = 0;
      }
    }
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
