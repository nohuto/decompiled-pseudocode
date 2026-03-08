/*
 * XREFs of MxGetNextPage @ 0x140B383A4
 * Callers:
 *     MxMapVa @ 0x140B3819C (MxMapVa.c)
 * Callees:
 *     MxBootDescriptorDepleted @ 0x140B386BC (MxBootDescriptorDepleted.c)
 *     MxSwitchDescriptors @ 0x140B964BC (MxSwitchDescriptors.c)
 */

__int64 __fastcall MxGetNextPage(unsigned int a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // r9
  __int64 v8; // r8
  __int64 v10; // r8
  unsigned int i; // r10d
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rcx

  v3 = -1LL;
  v5 = 5LL * a1;
  v6 = &MxBootFreeDescriptor[v5];
  if ( v6[1] )
  {
    if ( a2 )
    {
      if ( v6[3] == -1 )
        return -1LL;
      goto LABEL_4;
    }
    if ( v6[2] != -1 )
    {
LABEL_4:
      v7 = &MxBootFreeDescriptor[v5];
      goto LABEL_5;
    }
  }
  v7 = (__int64 *)MxSwitchDescriptors(a1);
  if ( !v7 )
  {
    for ( i = 0; i < 2; ++i )
    {
      v12 = 0;
      v13 = a1;
      while ( 1 )
      {
        v6 = &MxBootFreeDescriptor[5 * v13];
        if ( v6 && v6[1] )
        {
          if ( a2 )
          {
            if ( v6[3] != -1 )
              goto LABEL_7;
          }
          else if ( v6[2] != -1 )
          {
            goto LABEL_13;
          }
        }
        v14 = v13 + 1;
        if ( ++v12 >= (unsigned int)(unsigned __int16)KeNumberNodes )
          break;
        v13 = 0;
        if ( v14 != (unsigned __int16)KeNumberNodes )
          v13 = v14;
      }
    }
  }
LABEL_5:
  if ( v7 )
  {
    if ( !a2 )
    {
LABEL_13:
      v10 = v6[2];
      if ( v10 != (v10 & 0xFFFFFFFFFFFFFE00uLL) && v10 != *v6 )
      {
        v6[2] = v10 - 1;
LABEL_16:
        MxBootDescriptorDepleted(v6);
        return v8;
      }
      v15 = v6[3];
      v16 = *v6;
      if ( v15 == -1 )
      {
        if ( v10 != v16 && v16 != (v16 & 0xFFFFFFFFFFFFFE00uLL) )
          v3 = v16 | 0x1FF;
        v6[2] = v3;
        goto LABEL_16;
      }
      v6[2] = v15 + 511;
      if ( (unsigned __int64)(v15 - v16) >= 0x200 )
      {
        v6[3] = v15 - 512;
        goto LABEL_16;
      }
LABEL_18:
      v6[3] = -1LL;
      goto LABEL_16;
    }
LABEL_7:
    v8 = v6[3];
    if ( v8 != -1 )
    {
      if ( (unsigned __int64)(v8 - *v6) >= 0x200 )
      {
        v6[3] = v8 - 512;
        return v8;
      }
      goto LABEL_18;
    }
  }
  else
  {
    byte_140C67BC2 = 16;
  }
  return -1LL;
}
