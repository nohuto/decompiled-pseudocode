__int64 __fastcall NtDCompositionSuspendAnimations(unsigned int a1, int a2)
{
  int v3; // ebx
  struct DirectComposition::CApplicationChannel *v4; // rcx
  struct DirectComposition::CApplicationChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (a2 != 0) != ((*((_BYTE *)v6 + 241) & 8) != 0) )
      *((_BYTE *)v6 + 241) = *((_BYTE *)v6 + 241) & 0xF7 | (8 * (a2 != 0)) | 4;
    v3 = 0;
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
  }
  return (unsigned int)v3;
}
