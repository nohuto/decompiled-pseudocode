void __fastcall DripsBlockerTrackingHelper::NotifyProcessFreeze(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        char a4)
{
  unsigned int v7; // ebp
  DripsBlockerTrackingHelper *i; // rdi
  __int64 v9; // rsi
  SIZE_T v10; // rax
  int v11; // eax
  int v12; // eax
  SIZE_T Length; // [rsp+30h] [rbp-68h] BYREF
  _OWORD Source2[2]; // [rsp+38h] [rbp-60h] BYREF
  char v15; // [rsp+58h] [rbp-40h]

  if ( *((_BYTE *)this + 302080) )
  {
    Length = 0LL;
    v15 = 0;
    memset(Source2, 0, sizeof(Source2));
    DripsBlockerTrackingHelper::PrepareDripsBlockerProcessName(this, 0LL, a3, (char *)Source2, 0x21u, &Length);
    if ( Length )
    {
      v7 = 0;
      for ( i = this; ; i = (DripsBlockerTrackingHelper *)((char *)i + 4720) )
      {
        if ( *((_BYTE *)i + 104) )
        {
          if ( *(_QWORD *)i == a2 )
          {
            v9 = 4720LL * v7;
            v10 = RtlCompareMemory((char *)this + v9 + 8, Source2, Length);
            if ( v10 == Length )
              break;
          }
        }
        if ( ++v7 >= 0x40 )
          return;
      }
      v11 = *(_DWORD *)((char *)this + v9 + 108);
      if ( a4 )
      {
        if ( v11 <= 0 )
          return;
        v12 = v11 - 1;
      }
      else
      {
        v12 = v11 + 1;
      }
      *(_DWORD *)((char *)this + v9 + 108) = v12;
    }
  }
}
