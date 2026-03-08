/*
 * XREFs of MiInitializeSystemChannelOrdering @ 0x140B96904
 * Callers:
 *     MiInitializeChannelOrdering @ 0x140838724 (MiInitializeChannelOrdering.c)
 * Callees:
 *     MiPageToChannel @ 0x140370C10 (MiPageToChannel.c)
 */

unsigned __int64 __fastcall MiInitializeSystemChannelOrdering(__int64 a1, unsigned int a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdi
  char *i; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  unsigned int v8; // edx
  _BYTE *v9; // r9
  unsigned int v10; // edx
  _BYTE *v11; // r9
  _BYTE *v12; // r10
  unsigned int j; // edx

  result = (unsigned __int64)MxBootFreeDescriptor;
  v4 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  if ( MxBootFreeDescriptor[5 * a2 + 1] )
  {
    result = (unsigned int)MiPageToChannel(MxBootFreeDescriptor[5 * a2]);
    *(_BYTE *)((unsigned int)result + v4 + 23041) = 2;
  }
  for ( i = (char *)qword_140C65750; *(_QWORD *)i != -1LL; i += 16 )
  {
    result = *((unsigned __int16 *)i + 5);
    if ( (_DWORD)result == a2 )
    {
      result = *((unsigned __int16 *)i + 6);
      if ( i[14] )
      {
        if ( *(_BYTE *)(result + v4 + 23041) != 2 )
          *(_BYTE *)(result + v4 + 23041) = 1;
      }
      else
      {
        *(_BYTE *)(result + v4 + 23041) = 2;
      }
    }
  }
  v6 = MmNumberOfChannels;
  v7 = 0LL;
  v8 = 0;
  if ( MmNumberOfChannels )
  {
    v9 = (_BYTE *)(v4 + 23041);
    do
    {
      if ( *v9 == 2 )
      {
        *(_BYTE *)(v7 + v4 + 23033) = v8;
        *(_BYTE *)(v7 + v4 + 23037) = v8;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v8;
      ++v9;
    }
    while ( v8 < v6 );
  }
  v10 = 0;
  v11 = (_BYTE *)(v4 + 23041);
  if ( v6 )
  {
    v12 = (_BYTE *)(v4 + 23041);
    do
    {
      if ( *v12 == 1 )
      {
        *(_BYTE *)(v7 + v4 + 23033) = v10;
        *(_BYTE *)(v7 + v4 + 23037) = v10;
        v7 = (unsigned int)(v7 + 1);
      }
      ++v10;
      ++v12;
    }
    while ( v10 < v6 );
  }
  for ( j = 0; j < v6; ++v11 )
  {
    if ( !*v11 )
    {
      *(_BYTE *)(v7 + v4 + 23033) = j;
      *(_BYTE *)(v7 + v4 + 23037) = j;
      v7 = (unsigned int)(v7 + 1);
    }
    ++j;
  }
  return result;
}
