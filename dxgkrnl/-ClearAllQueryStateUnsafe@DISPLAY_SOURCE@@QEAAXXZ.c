void __fastcall DISPLAY_SOURCE::ClearAllQueryStateUnsafe(DISPLAY_SOURCE *this)
{
  unsigned int i; // edx
  __int64 v2; // rax

  for ( i = 0; i < *((_DWORD *)this + 941); *((_BYTE *)this + v2 + 2904) = 0 )
    v2 = i++;
  *((_DWORD *)this + 941) = 0;
  *((_BYTE *)this + 3720) = 0;
}
